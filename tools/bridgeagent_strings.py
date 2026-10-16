#!/usr/bin/env python3
"""Static decoder for BridgeAgent loader strings (sample acb4fdd8eab403dd...).

    python3 -I tools/bridgeagent_strings.py <sample.bin> [stub_decomp.c]

The stub decrypts each string with FUN_1400056d3, FUN_14000ae64 or FUN_140009ca4 (same
cipher; the last two cache the key schedule at 0x1400346a0 and 0x1400345a0): AES-256-CTR, key 32 bytes at
VA 0x140017388, initial counter 16 bytes at VA 0x1400173a8, counter reset for
every string (so every string uses the keystream from offset 0). With the Ghidra export, exact
(address, length) pairs are taken from the decoder's call sites ("exact").
Strings without a constant length at a call site fall back to a printable-run
heuristic ("heur"), which can over-read a few bytes into the next ciphertext.
Read-only: prints to stdout.
"""
import re
import sys

from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes

RDATA_VA, RDATA_RAW = 0x140017000, 0x15C00
KEY_VA, CTR_VA = 0x140017388, 0x1400173A8
# Encrypted string ranges in .rdata, from the decoder's call sites.
RANGES = [(0x140017238, 0x1400172B0), (0x1400172C0, 0x1400172F7),
          (0x1400194C0, 0x140019B58), (0x14002D9B8, 0x14002DA47),
          (0x14002DC42, 0x14002DD79)]
DECODERS = r"FUN_1400(?:056d3|0ae64|09ca4)"


def main():
    if len(sys.argv) not in (2, 3):
        sys.exit(__doc__)
    b = open(sys.argv[1], "rb").read()
    off = lambda va: va - RDATA_VA + RDATA_RAW
    key, ctr = b[off(KEY_VA):off(KEY_VA) + 32], b[off(CTR_VA):off(CTR_VA) + 16]
    ks = Cipher(algorithms.AES(key), modes.CTR(ctr)).encryptor().update(bytes(4096))

    def run(va):
        out = bytearray()
        for i in range(len(ks)):
            c = b[off(va) + i] ^ ks[i]
            if not (32 <= c < 127 or c in (9, 10, 13)):
                break
            out.append(c)
        return bytes(out)

    exact, starts = {}, set()
    # (pointer, length) table of target driver names used by FUN_140007b3d
    for i in range(20):
        ptr = int.from_bytes(b[off(0x140019770) + 16 * i:off(0x140019770) + 16 * i + 8], "little")
        exact[ptr] = int.from_bytes(b[off(0x140019778) + 16 * i:off(0x140019778) + 16 * i + 8], "little")
    if len(sys.argv) == 3:
        src = open(sys.argv[2]).read()
        # every address passed to a decoder starts a string, even without a known length
        for m in re.finditer(DECODERS + r"\(([^;]*)", src):
            starts.update(int(a, 16) for a in re.findall(r"0x1400[0-9a-f]{5}", m.group(1)))
        # length as a literal argument
        for m in re.finditer(DECODERS + r"\([^;]*?(0x1400[0-9a-f]+),(0x[0-9a-f]+|\d+)\)", src):
            exact[int(m.group(1), 16)] = int(m.group(2), 0)
        # length loaded into a stack slot a few lines before the call (push imm / pop r8)
        for m in re.finditer(r"= (0x[0-9a-f]+|\d+);\n(?:[^\n]*\n){0,2}?[^\n]*" + DECODERS
                             + r"\([^;]*?(0x1400[0-9a-f]+),uVar\d+\)", src):
            if int(m.group(1), 0) < 0x1000:  # skip address constants
                exact.setdefault(int(m.group(2), 16), int(m.group(1), 0))
    for start, end in RANGES:
        va = start
        while va < end:
            if va in exact:
                n = exact[va]
                s = bytes(x ^ y for x, y in zip(b[off(va):off(va) + n], ks))
                print(f"{va:#x}\t{n}\texact\t{s.decode('ascii', 'replace')}")
                va += n
                continue
            s = run(va)
            nxt = min((a for a in starts | set(exact) if a > va), default=None)
            if nxt is not None and va + len(s) > nxt:
                s = s[:nxt - va]
            # short runs are almost always chance hits in ciphertext
            if len(s) >= 6 or (va in starts and len(s) >= 2):
                print(f"{va:#x}\t{len(s)}\theur\t{s.decode('ascii', 'replace')}")
                va += len(s)
            else:
                va += 1


if __name__ == "__main__":
    main()
