#!/usr/bin/env python3
"""Static AES-256-GCM decryption of the PDFWKRNL.sys driver embedded in the BridgeAgent loader
(acb4fdd8eab403dd...). Nothing is executed.

    python3 -I tools/bridgeagent_driver.py <loader sample.bin> <output dir>

Ciphertext: 16 (pointer, length) chunks listed at VA 0x14002d5f0. Key at 0x14002d70c, tag at
0x14002d6f0, nonce from the immediates in FUN_1400029e3, empty AAD. The tag is verified; the
output is written as stage2_<sha16>.bin with mode 0400.
"""
import hashlib
import os
import struct
import sys

from cryptography.hazmat.primitives.ciphers.aead import AESGCM

RDATA_VA, RDATA_RAW = 0x140017000, 0x15C00
TABLE_VA, KEY_VA, TAG_VA = 0x14002D5F0, 0x14002D70C, 0x14002D6F0
# J0 = nonce || 00000001, written as dword, dword, qword immediates
NONCE = struct.pack("<IIQ", 0x067DDEB4, 0x24E8FE52, 0x0100000042E38CF5)[:12]


def main():
    if len(sys.argv) != 3:
        sys.exit(__doc__)
    b = open(sys.argv[1], "rb").read()
    off = lambda va: va - RDATA_VA + RDATA_RAW
    chunks = [struct.unpack_from("<QQ", b, off(TABLE_VA) + 16 * i) for i in range(16)]
    ct = b"".join(b[off(p):off(p) + n] for p, n in chunks)
    key = b[off(KEY_VA):off(KEY_VA) + 32]
    tag = b[off(TAG_VA):off(TAG_VA) + 16]
    pt = AESGCM(key).decrypt(NONCE, ct + tag, None)  # raises InvalidTag on a wrong sample
    sha = hashlib.sha256(pt).hexdigest()
    out = os.path.join(sys.argv[2], f"stage2_{sha[:16]}.bin")
    if not os.path.exists(out):
        with open(out, "wb") as f:
            f.write(pt)
        os.chmod(out, 0o400)
    print(f"{out}\t{len(pt)} bytes\tsha256 {sha}\tmd5 {hashlib.md5(pt).hexdigest()}")


if __name__ == "__main__":
    main()
