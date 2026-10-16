#!/usr/bin/env python3
"""Split a BridgeAgent loader download container (static, read-only on the input).

    python3 -I tools/bridgeagent_container.py samples/<sha256>/sample.bin [--write]

Layout, as parsed by the loader (acb4fdd8..., FUN_1400029e3) and confirmed on the
d2b5f4ff... download (2026-10-16):

    [leading bytes][payload][name][u16 name_len][u32 payload_size][u16 ?][u32 0x0000d1d2]

The loader writes the payload under <name> and the leading bytes through FUN_140006af4.
The u16 before the magic is not read by the loader's container branch (value 3 in d2b5f4ff).
With --write, each part (payload and leading part) is saved next to the input as
stage2_<sha16 of that part>.bin, mode 0400. Nothing is executed.
"""
import hashlib
import os
import struct
import sys

MAGIC = 0xD1D2


def main():
    path = sys.argv[1]
    d = open(path, 'rb').read()
    if len(d) < 14 or struct.unpack_from('<I', d, len(d) - 4)[0] != MAGIC:
        sys.exit('no 0xd1d2 trailer')
    end = len(d)
    unk = struct.unpack_from('<H', d, end - 6)[0]
    size = struct.unpack_from('<I', d, end - 0xa)[0]
    nlen = struct.unpack_from('<H', d, end - 0xc)[0]
    name = d[end - 0xc - nlen:end - 0xc]
    pay = d[end - 0xc - nlen - size:end - 0xc - nlen]
    lead = d[:end - 0xc - nlen - size]
    print(f'container   {len(d)} bytes  sha256 {hashlib.sha256(d).hexdigest()}')
    print(f'trailer     name={name!r} name_len={nlen} payload_size={size} u16_before_magic={unk}')
    for label, part in (('payload', pay), ('leading', lead)):
        h = hashlib.sha256(part).hexdigest()
        print(f'{label:<11} {len(part)} bytes  sha256 {h}  starts {part[:2]!r}')
        if '--write' in sys.argv and part:
            out = os.path.join(os.path.dirname(path), f'stage2_{h[:16]}.bin')
            if not os.path.exists(out):
                with open(out, 'wb') as f:
                    f.write(part)
                os.chmod(out, 0o400)
            print(f'            -> {out}')


if __name__ == '__main__':
    main()
