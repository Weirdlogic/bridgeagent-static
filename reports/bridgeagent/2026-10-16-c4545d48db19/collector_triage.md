# BridgeAgent kit: companion collector triage (collector.pdb, 2026-10-16)

Static analysis only. Nothing was executed and no network indicator was contacted. All files are in samples/d2b5f4ff9ccf98b4ebff54c8bf85e242bcf2b6387c10c451fe8c21d73c5d24fc/ (mode 0400).

| File | SHA-256 | Size | Notes |
|---|---|---|---|
| sample.bin | d2b5f4ff9ccf98b4ebff54c8bf85e242bcf2b6387c10c451fe8c21d73c5d24fc | 10,739,222 | `staonchik.bin` as served by the loader URL on 2026-10-16 (fetched by the user through a proxy); 0xd1d2 container |
| stage2_4d1b19e3df6c2872.bin | 4d1b19e3df6c28728ef181c01aea11d5d2777a95a66c84771860daac9c51856b | 3,208,704 | collector, leading part of the container. Rust x64 GUI, PDB `collector.pdb`, TimeDateStamp 2026-10-06 14:22:44 UTC |
| stage2_c4545d48db193494.bin | c4545d48db19349484d97681beaa8832f25663250db0e5ff16ef36e9e8ea8766 | 7,530,496 | the Bridge Agent (see triage.md), container name `bridge.exe` |
| stage3_95b6cbcfa3d138ba.bin | 95b6cbcfa3d138ba741f735e46ffcefe670bed5e3bb8d0a3f66842271a1caf0e | 1,423,360 | `rxinjhelper.exe`, embedded in the collector at VA 0x14010a5c2. C/C++ x64 console, TimeDateStamp 2026-09-03 18:56:59 UTC |
| stage3_7e7df0e30b6aba86.bin | 7e7df0e30b6aba8637fb58db0a2e7a876890b872f0d0b313424d46c9299580e8 | 16,896 | `lss.exe`, embedded in the collector at VA 0x1402660a0. x64 console, no import table, TimeDateStamp 2026-06-06 00:16:28 UTC |

Tools: tools/bridgeagent_container.py (splits the container), tools/pe_static.py (xref, dis, carve). Evidence: evidence/collector_strings.txt (`strings -t x`, file offsets), evidence/collector_disasm.txt. VAs below are in the collector unless stated.

## Summary

The container that the loader downloads carries two programs. The Bridge Agent gives the operator long-term access; this collector is a one-shot stealer that runs 35 collectors in parallel, zips the results and uploads them to the same server as the agent, 93.152.213[.]149, over HTTPS to `/api/forensics`. It uploads twice, a partial ZIP after 90 seconds and a complete ZIP after 5 minutes, so data still reaches the operator if the process is killed early. It carries two helper programs: a build of the public ChromElevator tool to defeat Chrome's App-Bound Encryption, and a small import-less LSASS dumper. The collector was built from the same toolchain and build account as the agent, 19 seconds after it.

## Server and exfiltration (observed)

- Server `93.152.213[.]149` (defanged here) is a plaintext string at VA 0x14026aaba (file offset 0x2694ba), next to `/api/forensics` and `https://`. The URL is built and logged as `[HTTP:...] Server URL: ` at 0x140014daf..0x140014e41 (evidence/collector_disasm.txt). This is the agent's default C2.
- Upload: `[HTTP:...] Preparing forensics transmission (... bytes)`, `Streaming ... bytes to server...`, retry with backoff (`Transmission attempt`, `Still retrying... (attempt #`). Headers `X-Device-ID`, `X-Signature`, `X-Country`, `X-Public-IP`. Metadata fields `message_id`, `type` (= `forensics.zip`), `device_id`, `sequence`, `sent_at`, `country`, `public_ip`, `size_bytes`, `zip_file`.
- Signing: the string `GET /api/agent/connect nonce` with a `msg_` prefix and a random key seed (`Failed to generate random key seed`, 0x140014f06) sit in the same routine (0x1400151ba).
- Country lookup: `hxxp://ip-api[.]com/json/?fields=countryCode`, fallback `XX`. A geo-blocking switch is read from the environment: `[GEO] Geo-blocking disabled (GEO_BLOCKING_ENABLED=false) skipping check`.
- The local IP is taken from the environment variable `BRIDGE_LOCAL_IP` (lookup at 0x140019d33..0x140019d4b), default `0.0.0.0` (0x140019d7c); `ipconfig /all` output is also parsed for `IPv4 Address`.
- Timing: `DUAL TRANSMISSION STRATEGY`, `T=90s: FAST ZIP (whatever is ready)`, `T=300s: COMPLETE ZIP (all data)`; a fingerprint file `octo-fingerprint.json`; client name `rxclient`; work in a temporary folder that is removed at the end (`[MAIN] cleaning up temporary directory`), followed by a `10-minute data sync period`.
- JSON summary keys `timestamp`, `hostname`, `country`, `ip`.

Inferred
- `X-Signature` over `GET /api/agent/connect` with a nonce means the collector authenticates to the same API as the agent. How it gets a device identity (its own key or the agent's) was not traced.
- `BRIDGE_LOCAL_IP` and `GEO_BLOCKING_ENABLED` are set by whatever launches the collector. The loader does not set them, so the defaults (0.0.0.0, geo-blocking off) probably apply when it runs from the loader.

Unknown
- Whether the ZIP is encrypted before upload. The ZIP library's AES support is compiled in, but only its error strings were seen.

## Collectors (observed, strings at file offsets 0x264853..0x2697f8)

35 collectors are spawned in parallel (`[PARALLEL] waiting for all 35 collectors to complete (max 5 minutes)`). Tags and the targets named next to them:

| Tag | Targets in strings |
|---|---|
| [BROWSERS], [CHROMIUM], [YANDEX], [FIREFOX] | Chrome, Edge, Brave, Opera Stable, Vivaldi, Yandex `User Data`; Firefox `Profiles`; `installed_browsers.txt`; App-Bound keys and cookies through rxinjhelper.exe (`[INJECTOR] copied browser data to output`) |
| [WALLETS] | browser `Local Extension Settings` (Chrome, Edge, Brave) |
| [SEEDS], [2FA], [SCREENSHOT] | `stub` in this build |
| [PASSWORD_MANAGERS] | LastPass, 1Password, Bitwarden, KeePass |
| [TELEGRAM], [MESSENGERS], [CHAT] | Telegram, Signal, Discord, Slack |
| [EMAIL] | Thunderbird |
| [VAULT] | Windows Vault |
| [LSASS] | runs `lss.exe`, expects `lss.dmp`, folder `mimikatz-credentials`; `[LSASS] dump missing (need admin?)` |
| [RDP] | `Default.rdp` in Documents |
| [SSH], [DEV], [GIT] | `%USERPROFILE%\.ssh`, `.netrc`, `.gitconfig` |
| [CLOUD], [SENSITIVE] | `.azure`, `.gcp`, `.aws`, `.config/gcloud` |
| [ONEDRIVE], [NOTES], [HIGHVALUE] | OneDrive Pictures, OneNote, Desktop, Downloads, `.env` |
| [VPN] | OpenVPN, WireGuard, NordVPN |
| [WIFI] | `netsh wlan show profiles` through PowerShell, `wifi_networks.txt` |
| [REMOTE_ACCESS] | TeamViewer, AnyDesk |
| [STEAM] | Steam |
| [PRIVILEGES], [PROCESSES], [SOFTWARE], [ENVIRONMENT] | `whoami /groups`, `tasklist`, uninstall keys via `Get-ItemProperty HKLM:\Software\Microsoft\Windows\CurrentVersion\Uninstall\*`, `system_env.txt` |
| [LATERAL] | name only; its sources were not identified |

## rxinjhelper.exe (observed)

- Extracted with `tools/pe_static.py carve` (file offset 0x108fc2 in the collector, 0x15b800 bytes, the same length the collector passes when writing it at 0x14000760c).
- The collector writes it out (`[INJECTOR] extracted helper.exe`), runs it with a 90-second timeout (`[INJECTOR] PID ... running (timeout 90s)`, `[INJECTOR] timeout after 90s -- killed`) and copies its output (`[INJECTOR] copied browser data to output`), 0x14000759d..0x140007a87.
- Strings of the helper: `Direct Syscall-Based Reflective Hollowing`, `Use chromelevator_`, `App-Bound Encryption Key`, `Copilot App-Bound Encryption Key`, `__DLL_PIPE_COMPLETION_SIGNAL__`, `CreateNamedPipeW`, `[+] Process created (PID: `, `[+] Memory protection set to PAGE_EXECUTE_READ`, `[+] Payload decrypted (`, `[+] Payload connected`, `COOKIES:`. Imports only VERSION.dll and KERNEL32.dll.

Inferred: a build of ChromElevator, the public Chrome App-Bound Encryption decryption tool. It starts the browser, hollows it with a decrypted payload DLL using direct syscalls, has that payload ask the browser's own elevation service for the app-bound key, and returns keys, cookies and passwords over a named pipe. The agent's own design (browser takeover on a hidden desktop) does not need this; the collector uses it to take cookies and passwords off the machine.

## lss.exe (observed)

Carved from VA 0x1402660a0 (16,896 bytes). No import table. Contains the minidump signature `MDMP`, an NT path prefix `\??\` and `lss.`. The collector names it `lss.exe` and expects `lss.dmp` (strings at file offset 0x268ca0).

Inferred: a small LSASS minidump writer that resolves its APIs or syscalls without imports and writes the dump in its own MDMP format. It needs administrator rights, which the loader's UAC bypass can provide.

## Detection notes

- Process: an unsigned child named `rxinjhelper.exe` or `lss.exe` started from a temporary folder by another unsigned process; a browser started and immediately hollowed by it; a handle to lsass.exe from `lss.exe`.
- Network: HTTPS POST to `/api/forensics` on 93.152.213[.]149, about 90 seconds and 5 minutes after start; a request to ip-api[.]com just before.
- File: `lss.dmp`, `wifi_networks.txt`, `installed_browsers.txt`, `installed_software.txt`, `privileges.txt`, `processes.txt`, `system_env.txt`, `octo-fingerprint.json` in a temporary folder, then a ZIP.
- Rules: detections/yara/bridgeagent_collector.yar, detections/kql/bridgeagent_collector.kql, detections/elastic/bridgeagent_collector.eql and .esql (validation in evidence/yara_validation_collector.txt).

## Open items

- How the loader starts the collector (the loader's FUN_140006af4 writes the leading bytes; the name and launch path for this part were not traced).
- The `[LATERAL]` collector's sources and whether the collector authenticates with its own key.
- Telemetry testing of the collector hunting queries.
