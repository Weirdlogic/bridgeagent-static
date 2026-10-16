/*
  BridgeAgent loader / EDR killer (Loader.exe, MalwareBazaar 2026-10-07).
  Report: reports/bridgeagent/2026-10-16-acb4fdd8eab4/report.md
  The loader carries an AES-256-GCM encrypted copy of AMD PDFWKRNL.sys and uses its
  IOCTLs 0x80002014 (kernel write) and 0x80002028 (kernel read) to remove EDR callbacks.
  Byte patterns are taken from static analysis; VAs are given per string.
*/

import "pe"

rule BridgeAgent_Loader_Key_Material
{
    meta:
        description = "BridgeAgent loader: AES-256-CTR string key and counter, AES-256-GCM key and tag of the embedded PDFWKRNL.sys"
        author = "Weirdlogic research"
        date = "2026-10-16"
        reference_sha256 = "acb4fdd8eab403dd309015ff8d73334ce7fb1656a627ae837804e59a1b20005a"
        family = "BridgeAgent"
        confidence = "high on the known build; keys are likely to change per build"
    strings:
        $str_key = { F7 48 0A 90 39 24 B9 5A 29 94 16 E4 11 40 C1 19 EA 99 85 54 0B 89 CA 29 50 2E B9 E8 E2 D6 1B 4B }  // 0x140017388
        $str_ctr = { 70 BD BF 00 8A FB E2 AE A6 4C 4F B1 D2 11 66 E5 }                                              // 0x1400173a8
        $gcm_key = { 5E 5F F6 83 F7 3E C8 22 54 F5 C5 EF 62 82 75 EA 75 AA 8F BF AD B1 B6 7F CF 9C 38 A6 F5 CB C9 70 }  // 0x14002d70c
        $gcm_tag = { 92 5E F4 42 85 4D C9 BD 47 62 9A 31 6C 2F 73 AF }                                              // 0x14002d6f0
    condition:
        uint16(0) == 0x5A4D and 2 of them
}

rule BridgeAgent_Loader_Code
{
    meta:
        description = "BridgeAgent loader code: PdFwKrnl read/write wrappers (0x30-byte buffer, IOCTL 0x80002014 / 0x80002028 through a resolved DeviceIoControl), GCM nonce immediates, 0xd1d2 container trailer check"
        author = "Weirdlogic research"
        date = "2026-10-16"
        reference_sha256 = "acb4fdd8eab403dd309015ff8d73334ce7fb1656a627ae837804e59a1b20005a"
        family = "BridgeAgent"
        confidence = "medium-high: code shape, should survive key changes but not a recompile with different options"
    strings:
        // push 0x30; pop r9; mov edx, IOCTL; mov r8, reg; call [rip+x]   (0x140007d54, 0x140007e38)
        $ioctl_write = { 6A 30 41 59 BA 14 20 00 80 49 89 ?? FF 15 }
        $ioctl_read  = { 6A 30 41 59 BA 28 20 00 80 49 89 ?? FF 15 }
        // GCM J0 nonce words written as immediates in FUN_1400029e3
        $nonce1 = { B4 DE 7D 06 }
        $nonce2 = { 52 FE E8 24 }
        $nonce3 = { F5 8C E3 42 00 00 00 01 }
    condition:
        uint16(0) == 0x5A4D and $ioctl_write and $ioctl_read and 2 of ($nonce*)
}

rule Hunt_PdFwKrnl_IOCTL_Client_x64
{
    meta:
        description = "Hunting: x64 user-mode PE that sends both AMD PdFwKrnl arbitrary memmove IOCTLs (0x80002014 write, 0x80002028 read) with a 0x30-byte buffer. Covers BYOVD EDR killers abusing PDFWKRNL.sys (CVE-2023-20598)."
        author = "Weirdlogic research"
        date = "2026-10-16"
        reference_sha256 = "acb4fdd8eab403dd309015ff8d73334ce7fb1656a627ae837804e59a1b20005a"
        confidence = "medium: hunting rule; AMD's own update utility, if it uses these IOCTLs, would match"
    strings:
        $w = { BA 14 20 00 80 }   // mov edx, 0x80002014
        $r = { BA 28 20 00 80 }   // mov edx, 0x80002028
        $len = { 6A 30 41 59 }    // push 0x30; pop r9 (hex on purpose: it is code)
        $dev_a = "PdFwKrnl" ascii nocase
        $dev_w = "PdFwKrnl" wide nocase
    condition:
        uint16(0) == 0x5A4D and pe.machine == pe.MACHINE_AMD64
        and pe.subsystem != pe.SUBSYSTEM_NATIVE
        and $w and $r and ($len or any of ($dev_*))
}
