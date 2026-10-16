#!/usr/bin/env python3
"""Small read-only helpers for static work on x64 PE samples (nothing is executed).

    python3 -I tools/pe_static.py xref  <pe> <needle|0xVA> [...]   code refs (RIP-relative lea/mov) to a string or VA
    python3 -I tools/pe_static.py dis   <pe> <startVA> <stopVA> [regex]
                                                         objdump range, RIP targets previewed, ASCII immediates decoded
    python3 -I tools/pe_static.py carve <pe> <outdir> [hint]  find embedded PEs (MZ..PE\\0\\0), size them from their
                                                         section table, write <outdir>/stageN_<sha16>.bin mode 0400

xref looks back up to 64 bytes so references to the start of a packed string blob are found.
"""
import hashlib
import os
import re
import struct
import subprocess
import sys


def sections(d, peoff=0):
    pe = peoff + struct.unpack_from('<I', d, peoff + 0x3c)[0]
    if d[pe:pe + 4] != b'PE\0\0':
        return None, []
    nsec = struct.unpack_from('<H', d, pe + 6)[0]
    opt = struct.unpack_from('<H', d, pe + 20)[0]
    magic = struct.unpack_from('<H', d, pe + 24)[0]
    base = struct.unpack_from('<Q' if magic == 0x20b else '<I', d, pe + 24 + (24 if magic == 0x20b else 28))[0]
    out, o = [], pe + 24 + opt
    for _ in range(nsec):
        name = d[o:o + 8].rstrip(b'\0').decode('latin1')
        vsz, va, rsz, raw = struct.unpack_from('<IIII', d, o + 8)
        out.append((name, base + va, vsz, raw, rsz))
        o += 40
    return base, out


def off2va(secs, off):
    for _, va, _, raw, rsz in secs:
        if raw <= off < raw + rsz:
            return va + off - raw
    return None


def va2off(secs, va):
    for _, sva, vsz, raw, rsz in secs:
        if sva <= va < sva + max(vsz, rsz):
            return raw + va - sva
    return None


def preview(d, secs, va, n=48):
    o = va2off(secs, va)
    if o is None:
        return None
    return ''.join(chr(c) if 32 <= c < 127 else '.' for c in d[o:o + n])


def build_index(d, secs):
    idx = {}
    for name, va, vsz, raw, rsz in secs:
        if name != '.text':
            continue
        t = d[raw:raw + rsz]
        for i in range(len(t) - 7):
            if t[i] in (0x48, 0x4c) and t[i + 1] in (0x8d, 0x8b) and (t[i + 2] & 0xc7) == 0x05:
                tgt = va + i + 7 + struct.unpack_from('<i', t, i + 3)[0]
                idx.setdefault(tgt, []).append(va + i)
    return idx


def cmd_xref(path, needles):
    d = open(path, 'rb').read()
    _, secs = sections(d)
    idx = build_index(d, secs)
    for n in needles:
        if n.startswith('0x'):
            vas = [int(n, 16)]
        else:
            vas, p = [], d.find(n.encode())
            while p != -1:
                vas.append(off2va(secs, p))
                p = d.find(n.encode(), p + 1)
        for va in vas:
            if va is None:
                continue
            hits = [(s, va - t) for t in range(va - 64, va + 1) for s in idx.get(t, [])]
            print(f'{n!r} @ {va:#x}: ' + (', '.join(f'{s:#x}(+{o})' for s, o in hits) or 'no direct ref'))


def cmd_dis(path, a, b, pat=None):
    d = open(path, 'rb').read()
    _, secs = sections(d)
    out = subprocess.run(['objdump', '-d', '-M', 'intel', '--no-show-raw-insn', '-w',
                          f'--start-address={a}', f'--stop-address={b}', path],
                         capture_output=True, text=True).stdout
    rx = re.compile(pat) if pat else None
    for line in out.splitlines():
        if not re.match(r'\s+[0-9a-f]+:', line):
            continue
        m = re.search(r'# (?:0x)?([0-9a-f]{9,})', line)
        if m:
            p = preview(d, secs, int(m.group(1), 16))
            if p:
                line += f'   "{p}"'
        else:
            m2 = re.search(r',0x([0-9a-f]{4,16})$', line)
            if m2:
                bs = int(m2.group(1), 16).to_bytes((len(m2.group(1)) + 1) // 2, 'big')[::-1]
                if len(bs) >= 2 and all(32 <= c < 127 for c in bs):
                    line += f'   imm="{bs.decode()}"'
        if rx is None or rx.search(line):
            print(line[:220])


def pe_file_size(d, off):
    _, secs = sections(d, off)
    if not secs:
        return None
    end = max(raw + rsz for _, _, _, raw, rsz in secs)
    pe = off + struct.unpack_from('<I', d, off + 0x3c)[0]
    opt = struct.unpack_from('<H', d, pe + 20)[0]
    # include an Authenticode blob if the security directory points past the sections
    magic = struct.unpack_from('<H', d, pe + 24)[0]
    dd = pe + 24 + (112 if magic == 0x20b else 96)
    sec_off, sec_sz = struct.unpack_from('<II', d, dd + 8 * 4)
    if sec_off and sec_sz:
        end = max(end, sec_off + sec_sz)
    return end


def cmd_carve(path, outdir, hint=None):
    d = open(path, 'rb').read()
    _, secs = sections(d)
    start = d.find(hint.encode()) if hint else 1
    for m in re.finditer(rb'MZ', d[max(start, 1):]):
        off = max(start, 1) + m.start()
        if off + 0x40 > len(d):
            break
        lfanew = struct.unpack_from('<I', d, off + 0x3c)[0]
        if lfanew > 0x1000 or d[off + lfanew:off + lfanew + 4] != b'PE\0\0':
            continue
        size = pe_file_size(d, off)
        if not size or off + size > len(d):
            print(f'MZ at file {off:#x} (VA {off2va(secs, off):#x}): truncated or bad section table')
            continue
        blob = d[off:off + size]
        h = hashlib.sha256(blob).hexdigest()
        print(f'embedded PE at file {off:#x} (VA {off2va(secs, off):#x}) size {size} sha256 {h}')
        out = os.path.join(outdir, f'stage3_{h[:16]}.bin')
        if not os.path.exists(out):
            with open(out, 'wb') as f:
                f.write(blob)
            os.chmod(out, 0o400)
        print(f'  -> {out}')
        if hint:
            break


if __name__ == '__main__':
    c, args = sys.argv[1], sys.argv[2:]
    {'xref': lambda: cmd_xref(args[0], args[1:]),
     'dis': lambda: cmd_dis(*args),
     'carve': lambda: cmd_carve(*args)}[c]()
