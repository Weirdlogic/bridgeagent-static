#!/usr/bin/env python3
"""Static config extractor for the BridgeAgent backdoor (Rust, sample c4545d48db19...).

    python3 -I tools/bridgeagent_backdoor_config.py <sample.bin>

The agent keeps almost everything in plaintext. The one value that never appears as a
string is the default server: when the `configuration` table of agent.db has no
`server_ip`, the function at 0x1401f3ad0 (reference sample) builds it on the heap from two
overlapping 8-byte immediates:

    movabs rcx, ".213.149" ; mov [rax+6], rcx
    movabs rcx, "93.152.2" ; mov [rax],   rcx      ; length 0xe

This script finds that pattern (any register, any overlap offset), plus the build string,
the job types compared as immediates in the job dispatcher, and the WebSocket message
types. Read-only: parses the file, prints to stdout, never executes anything.
"""
import re
import struct
import sys


def pe_sections(d):
    pe = struct.unpack_from('<I', d, 0x3c)[0]
    nsec = struct.unpack_from('<H', d, pe + 6)[0]
    opt = struct.unpack_from('<H', d, pe + 20)[0]
    base = struct.unpack_from('<Q', d, pe + 24 + 24)[0]
    out, o = [], pe + 24 + opt
    for i in range(nsec):
        name = d[o:o + 8].rstrip(b'\0').decode()
        vsz, va, rsz, raw = struct.unpack_from('<IIII', d, o + 8)
        out.append((name, base + va, vsz, raw, rsz))
        o += 40
    return base, out


def off2va(secs, off):
    for name, va, vsz, raw, rsz in secs:
        if raw <= off < raw + rsz:
            return va + off - raw
    return None


def default_server(d, secs):
    # movabs r64, imm64 ; mov [rax+N], r64 ; movabs r64, imm64 ; mov [rax], r64 ; mov qword [rsi], len
    pat = re.compile(rb'[\x48\x49][\xb8-\xbf](.{8})[\x48\x4c]\x89[\x40-\x7f](.)'
                     rb'[\x48\x49][\xb8-\xbf](.{8})[\x48\x4c]\x89[\x00-\x3f]'
                     rb'(?:\x48\xc7[\x00-\x07](.)\x00\x00\x00)?', re.S)
    hits = []
    for m in pat.finditer(d):
        hi, n, lo, ln = m.group(1), m.group(2)[0], m.group(3), m.group(4)
        if n > 8:
            continue
        buf = bytearray(n + 8)
        buf[0:8] = lo
        buf[n:n + 8] = hi
        s = bytes(buf)
        if ln is not None and ln[0] != len(s):
            continue
        # IPv4, or a host name with at least two dots (dotted job names have one)
        if re.fullmatch(rb'\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}|[a-z0-9-]+(\.[a-z0-9-]+){2,}', s):
            hits.append((off2va(secs, m.start()), s.decode()))
    return hits


JOB_PREFIXES = [b'file.', b'agent.', b'managed.', b'install.', b'script.', b'software', b'command.']


def imm_strings(d, secs, start_va=None):
    """8-byte movabs immediates that look like dotted job names."""
    out = []
    for m in re.finditer(rb'[\x48\x49][\xb8-\xbf]([a-z.]{8})', d):
        s = m.group(1)
        if any(s.startswith(p) for p in JOB_PREFIXES):
            out.append((off2va(secs, m.start()), s.decode()))
    return out


def defang_ip(s):
    head, tail = s.rsplit('.', 1)
    return f'{head}[.]{tail}'


def main():
    d = open(sys.argv[1], 'rb').read()
    base, secs = pe_sections(d)

    print('== build')
    for pat in (rb'bridge-agent-v[0-9][0-9A-Za-z.+-]{4,120}', rb'[0-9a-f]{64}20\d\d-\d\d-\d\dT[0-9:.]+Z',
                rb'[A-Za-z0-9_]+\.pdb'):
        for m in re.finditer(pat, d):
            print(f'  {off2va(secs, m.start()):#x}  {m.group().decode()}')

    print('== default server (written to configuration.server_ip when missing)')
    for va, s in default_server(d, secs):
        print(f'  {va:#x}  {defang_ip(s) if s[0].isdigit() else s}')

    print('== endpoints (plaintext, joined to https:// or wss:// + server_ip)')
    # strings are packed without separators: "/api/agent/sync" is followed by the JSON key "messages"
    for m in sorted(set(re.findall(rb'/api/agent/[a-z-]+', d))):
        print('  ', re.sub(r'(?<=/sync)messages$', '', m.decode()))

    print('== job-type immediates (job dispatcher)')
    for va, s in imm_strings(d, secs):
        print(f'  {va:#x}  {s}')

    print('== persistence / host artefacts (plaintext)')
    for s in (b'HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Run', b'Local\\BridgeAgent-',
              b'C:\\ProgramData\\BridgeAgent', b'BridgeAgent.exe', b'Bridge Agent.cmd', b'Dropbox.exe',
              b'BridgeBackstage-', b'bridge-agent.log', b'agent.db', b'root-ca.crt', b'.heartbeat.json',
              b'runtime.lifecycle.json', b'--supervisor-pid', b'--adopt-runtime', b'" --supervisor'):
        p = d.find(s)
        print(f'  {off2va(secs, p):#x}  {s.decode()}' if p >= 0 else f'  (absent) {s.decode()}')


if __name__ == '__main__':
    main()
