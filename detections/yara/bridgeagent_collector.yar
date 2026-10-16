/*
  BridgeAgent kit, companion collector and its two embedded helpers.
  The container that the BridgeAgent loader downloads (d2b5f4ff..., 0xd1d2 trailer) starts
  with this collector and carries the Bridge Agent after it.

  - collector (collector.pdb): Rust x64 one-shot stealer, 35 parallel collectors, ZIP upload
    to https://<server>/api/forensics at T=90s and T=300s.
  - rxinjhelper.exe: a build of the public ChromElevator tool (Chrome App-Bound Encryption
    key, cookie and password theft through hollowing of the browser with direct syscalls).
  - lss.exe: import-less LSASS minidump writer, resolves 14 ntdll functions by hash.

  Report:  reports/bridgeagent/2026-10-16-c4545d48db19/collector_triage.md
           reports/bridgeagent/2026-10-16-acb4fdd8eab4/report.md
  Static analysis only. Offsets are file offsets in the reference file named in each rule,
  VAs where stated.

  Expected matches on the reference set: the collector rules also match the container
  d2b5f4ff... because it begins with the collector. The helper rules are written for the
  standalone helper files (as written to disk by the collector) and require their own import
  table shape, so the copies embedded inside the collector are left to the collector rule.
*/

import "pe"

rule BridgeAgent_Collector_Strings
{
    meta:
        description = "BridgeAgent collector: plaintext logging, upload and helper strings of the Rust stealer that ships in the BridgeAgent container"
        author = "Weirdlogic research"
        date = "2026-10-16"
        reference_sha256 = "4d1b19e3df6c28728ef181c01aea11d5d2777a95a66c84771860daac9c51856b"
        container_sha256 = "d2b5f4ff9ccf98b4ebff54c8bf85e242bcf2b6387c10c451fe8c21d73c5d24fc"
        family = "BridgeAgent"
        confidence = "high: strings come from the collector's own src\\main.rs log lines, not from its crates"
    strings:
        $pdb     = "collector.pdb" ascii                                   // 0x2f93a0
        $inj1    = "[INJECTOR] extracted helper.exe" ascii                 // 0x2647c2
        $inj2    = "[INJECTOR] copied browser data to output" ascii        // 0x264872
        $helper  = "rxinjhelper.exe" ascii                                 // 0x108fb3
        $lsass1  = "[LSASS] running lss.exe" ascii                         // 0x268cac
        $lsass2  = "mimikatz-credentials" ascii                            // 0x268cdc
        $lsass3  = "[LSASS] dump missing (need admin?)" ascii              // 0x268d07
        $par     = "waiting for all 35 collectors to complete" ascii       // 0x2693eb
        $dual    = "DUAL TRANSMISSION STRATEGY" ascii                      // 0x269948, 0x269bcb
        $fast    = "[DEBUG:FAST] [T=" ascii                                // 0x108814
        $prep    = "] Preparing forensics transmission (" ascii            // 0x269489
        $api     = "/api/forensics" ascii                                  // 0x2694d8
        $fp      = "octo-fingerprint.json" ascii                           // 0x269ada
        $geo     = "GEO_BLOCKING_ENABLED" ascii                            // 0x269686
        $lip     = "BRIDGE_LOCAL_IP" ascii                                 // 0x108fa4
        $meta    = "forensics.zipdevice_idsequencesent_at" ascii           // 0x269553
        $hdr     = "X-Device-IDX-SignatureX-CountryX-Public-IP" ascii      // 0x2695c5
    condition:
        uint16(0) == 0x5A4D and pe.machine == pe.MACHINE_AMD64
        and 6 of them
}

rule BridgeAgent_Collector_Server_93_152_213_149
{
    meta:
        description = "BridgeAgent collector: hard-coded upload server next to the /api/forensics path and the ip-api.com country lookup"
        author = "Weirdlogic research"
        date = "2026-10-16"
        reference_sha256 = "4d1b19e3df6c28728ef181c01aea11d5d2777a95a66c84771860daac9c51856b"
        family = "BridgeAgent"
        confidence = "high for this build; the server is a plain string and changes with a rebuild"
    strings:
        $srv  = "93.152.213.149" ascii                                     // 0x2694ba (VA 0x14026aaba)
        $api  = "/api/forensics" ascii                                     // 0x2694d8
        $geo  = "ip-api.com/json/?fields=countryCode" ascii                // 0x268de0
        $conn = "/api/agent/connect" ascii                                 // 0x269521
    condition:
        uint16(0) == 0x5A4D and pe.machine == pe.MACHINE_AMD64
        and $srv and $api and ($geo or $conn)
}

rule BridgeAgent_RxInjHelper_ChromElevator
{
    meta:
        description = "rxinjhelper.exe as dropped by the BridgeAgent collector: a ChromElevator build that hollows Chromium browsers with direct syscalls to steal App-Bound Encryption keys, cookies and passwords over a named pipe"
        author = "Weirdlogic research"
        date = "2026-10-16"
        reference_sha256 = "95b6cbcfa3d138ba741f735e46ffcefe670bed5e3bb8d0a3f66842271a1caf0e"
        family = "BridgeAgent / ChromElevator"
        confidence = "high for ChromElevator builds; the strings are upstream ChromElevator strings, so other builds of the public tool also match. Attribution to BridgeAgent needs the hash or the collector as parent"
    strings:
        $banner  = "Direct Syscall-Based Reflective Hollowing" ascii         // 0xdd49
        $usage   = "Usage: chromelevator.exe" wide                          // 0xdf76
        $sol     = "Solution: Use chromelevator_" ascii                     // 0xf28a
        $abe1    = "Copilot App-Bound Encryption Key" ascii                 // 0xf300
        $abe2    = "App-Bound Encryption Key" ascii                         // 0xf2e0
        $sig     = "__DLL_PIPE_COMPLETION_SIGNAL__" ascii                   // 0xf3f0
        $cook    = "COOKIES:" ascii                                         // 0xf448
        $log1    = "[+] Payload decrypted (" ascii                          // 0xf65a
        $log2    = "[+] Bootstrap entry point resolved (offset: 0x" ascii   // 0xf6b2
        $log3    = "Allocating memory in target process via syscall..." ascii // 0xf6e8
        $log4    = "[+] Memory protection set to PAGE_EXECUTE_READ" ascii   // 0xf7d2
        $log5    = "Creating remote thread via syscall..." ascii            // 0xf808
        $log6    = "[+] IPC pipe established: " ascii                       // 0xde52
        // pipe names made to look like Chromium's own, UTF-16 (0xf4b8..0xf568)
        $pipe1   = "chrome.sync.%u.%u.%04X" wide
        $pipe2   = "mojo.%u.%u.%04X.chrome" wide
        $pipe3   = "msedge.crashpad_%u_%04X" wide
    condition:
        uint16(0) == 0x5A4D and pe.machine == pe.MACHINE_AMD64
        and pe.number_of_imports <= 4 and pe.imports("KERNEL32.dll") > 0
        and ($banner or $usage or $sol)
        and $sig and 1 of ($abe*)
        and 4 of ($log*, $pipe*, $cook)
}

rule BridgeAgent_Lss_LsassDumper
{
    meta:
        description = "lss.exe as dropped by the BridgeAgent collector: import-less LSASS minidump writer that walks the PEB for ntdll and resolves its functions by an uppercase djb2 hash, then writes <dir>\\lss.dmp through \\??\\ NT paths"
        author = "Weirdlogic research"
        date = "2026-10-16"
        reference_sha256 = "7e7df0e30b6aba8637fb58db0a2e7a876890b872f0d0b313424d46c9299580e8"
        family = "BridgeAgent"
        confidence = "medium-high: hash constants survive string changes; instruction encodings can move with a rebuild, so the rule asks for most but not all of them"
    strings:
        // API hash table built at 0x140001bb1..0x140001cb5, hash = uppercase djb2 (seed 0x1505, x33)
        $h_alloc = { BA EC B8 83 F7 }               // NtAllocateVirtualMemory
        $h_free  = { C7 40 38 09 C6 02 28 }         // NtFreeVirtualMemory
        $h_rvm   = { BA 03 81 28 A3 }               // NtReadVirtualMemory
        $h_qvm   = { C7 40 68 5D E8 C0 10 }         // NtQueryVirtualMemory
        $h_open  = { 18 F7 82 4B }                  // NtOpenProcess
        $h_qsi   = { 28 39 C2 7B }                  // NtQuerySystemInformation
        $h_qip   = { BA C2 5D DC 8C }               // NtQueryInformationProcess
        $h_cf    = { BB 3F 16 66 }                  // NtCreateFile
        $h_wf    = { BA B2 1D D6 E0 }               // NtWriteFile
        $h_close = { 9D E6 D6 40 }                  // NtClose
        $h_opt   = { 99 CA 0D 35 }                  // NtOpenProcessToken
        $h_adj   = { 6D 73 BC 2D }                  // NtAdjustPrivilegesToken
        $h_ldr   = { BA 43 6A 45 9E }               // LdrLoadDll (0x140001dac)
        // table marker, checked when the table is found again in PEB->ProcessHeaps (0x140001d0c)
        $marker  = { 81 3? 17 17 17 17 }
        // module walk: cmp edx, hash("ntdll.dll") (0x140001d9c) and the djb2 seed
        $ntdll   = { 81 FA ED B0 DA 1E }
        $djb2    = { BA 05 15 00 00 }
        // dump path: mov dword [..], "\??\" / ".dmp" / "lss." (0x14000381b, 0x140003854, 0x140003860)
        $nt_pfx  = { C7 4? ?? 5C 3F 3F 5C }
        $dmp     = ".dmp" ascii
        $lss     = "lss." ascii
        $mdmp    = "MDMP" ascii                     // 0x3c10
    condition:
        uint16(0) == 0x5A4D and pe.machine == pe.MACHINE_AMD64
        and pe.number_of_imports == 0
        and filesize < 200KB
        and 9 of ($h_*)
        and $ntdll and $djb2
        and 2 of ($marker, $nt_pfx, $dmp, $lss, $mdmp)
}
