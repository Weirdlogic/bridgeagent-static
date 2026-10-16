# BridgeAgent: backdoor payload triage (staonchik.exe, 2026-10-16)

Static analysis only. Nothing was executed and no network indicator was contacted. Sample from MalwareBazaar, quarantined in samples/<sha256>/.

| Field | Value |
|---|---|
| SHA-256 | c4545d48db19349484d97681beaa8832f25663250db0e5ff16ef36e9e8ea8766 |
| SHA-1 / MD5 | 4583d76c84332d13ceada6f14d3c3b382312e30b / e3b578aa02e2fc3fb557e83f4186395e |
| Size | 7,530,496 bytes, PE32+ GUI, x64, no overlay (file ends at the end of .reloc) |
| MalwareBazaar | first seen 2026-10-07 16:08:53, file name staonchik.exe, tags backdoor, bridgeagent, rust; "dropped by" acb4fdd8eab403dd309015ff8d73334ce7fb1656a627ae837804e59a1b20005a (the loader) |
| imphash | 2797ccba8cc94a31426670b81b0c4915 |
| TimeDateStamp | 2026-10-06 14:22:25 UTC |
| Embedded build | `bridge-agent-v5.1.4-chromium-unified+c456d75d7e819abdf3e1a00d484354fa33465475bf95a66e8da8961a88007197` (0x1405948c6), build time `2026-10-06T11:21:13.6484576Z` (0x14059afc8) |
| PDB | `IT_solutions.pdb`, RSDS GUID b3ba06fa-2b2a-4740-9313-89939dc3f5b2, age 1 |

Evidence files (evidence/): `key_disasm.txt` (annotated objdump excerpts D1 to D13, cited below as [Dn]), `config_extract.txt` (output of tools/bridgeagent_backdoor_config.py), `strings_app.txt` (the agent's own strings), `crates.txt`, `imports.txt`, `yara_validation.txt`, `collector_strings.txt`, `collector_disasm.txt`. Addresses are VAs in this sample.

Method note: Ghidra 12.1.4 headless analysis of this 5.5 MB Rust binary did not finish within the memory available on the analysis host and was stopped. Code was read with objdump plus a RIP-relative cross-reference index (lea/mov to .rdata) and an immediate-to-ASCII annotator. Every address below was checked in that disassembly.

## Summary

staonchik.exe is a full remote-access agent written in Rust that calls itself "Bridge Agent". It installs itself per user under `%LOCALAPPDATA%\Programs\Bridge\`, persists through an HKCU Run value, enrolls with its server over HTTPS, then holds a WebSocket session on port 443 for jobs, remote sessions and a separate JPEG screen stream. Its distinctive feature is a hidden desktop it calls "Backstage": it closes the victim's browser on the real desktop, then reopens the victim's actual Chrome, Edge, Brave, Opera, Yandex or Firefox profile on the hidden desktop where the operator drives it with injected input. That gives the operator the victim's logged-in web sessions without copying cookies off the machine. The same mechanism opens Telegram, Signal, Discord, Slack, Outlook and nine wallet applications. It also runs "forensics" collectors that report clipboard text, text typed into focused controls, process starts, foreground windows, USB devices and logon/lock events. The default server is 93.152.213[.]149, the only value in the binary that is hidden (built from immediates). It is a different host from the loader's download server.

The code is written and logged like a commercial RMM product (enrollment, job queue in SQLite, managed apps, CA pinning with signed recovery, redaction of passwords in captured text). The PDB name `IT_solutions` fits that cover.

## Build and toolchain (observed)

- Rust, rustc commit 8bab26f4f68e0e26f0bb7960be334d5b520ea452 (from `/rustc/<hash>/library` panic paths). Built by a Windows account named `Admin` (189 strings with `C:\Users\Admin\.cargo\registry\src\index.crates.io-1949cf8c6b5b557f\`). First-party code is a single `src\main.rs`.
- 38 crates with versions in evidence/crates.txt. Those that define the behaviour: tokio 1.53.1, tokio-tungstenite 0.28.0 / tungstenite 0.28.0 (WebSocket), reqwest 0.12.28 + hyper 1.11.0 + hyper-tls 0.6.0 / tokio-native-tls 0.3.1 / schannel 0.1.29 (HTTPS through Windows SChannel), ring 0.17.14 (Ed25519), rusqlite 0.37.0 (agent database, Firefox profile store), jpeg-encoder 0.6.1 (screen frames), serde_json 1.0.151, base64 0.22.1, chrono 0.4.45.
- Imports (evidence/imports.txt) match the feature set: CreateDesktopW, SetThreadDesktop, OpenInputDesktop, SendInput, PrintWindow, StretchBlt, clipboard APIs including AddClipboardFormatListener, CryptProtectData/CryptUnprotectData, Restart Manager (RmStartSession, RmRegisterResources, RmGetList), CM_Register_Notification, WTSRegisterSessionNotification, WTSSendMessageW, NotifyIpInterfaceChange, RegisterSuspendResumeNotification, WinVerifyTrust, CertAddCertificateContextToStore.

## Configuration and C2

Observed
- All state lives in a SQLite database `agent.db` with a `configuration(key,value)` table (`CREATE TABLE IF NOT EXISTS configuration...`, strings_app.txt). Values are read with `SELECT value FROM configuration WHERE key=?` through `0x1401e5650` [D3].
- `server_ip` is read from that table at startup (0x1402b4236). When it is missing, `0x1401f3ad0` builds the default and stores it with the `INSERT ... ON CONFLICT` helper `0x1401e5960`, then logs `configuration.default_server.applied` (0x1402b43a4) [D1, D2]. The default is built on the heap from two overlapping 8-byte immediates, `movabs rcx,"93.152.2"` and `movabs rcx,".213.149"` at offset 6, length 0xe: **93.152.213[.]149**. This is the only hidden value found; tools/bridgeagent_backdoor_config.py recovers it.
- Enrollment reads `server_ip` again (0x1400d6531) and logs `enrollment.server=` [D4]. The enrollment token is read from the same table (key `enrollment_token`, length 0x10, 0x1400d8cfd) [D5]. No default token was found in the binary.
- URLs are `https://` + server + path and `wss://` + server + path, with no port in the format strings (0x14010fef6, 0x140110035 [D8]). The log line `connection.media_supervisor.begin lane=remote_frames transport=wss_443` gives the port.
- Endpoints: `/api/agent/enroll`, `/api/agent/sync` (`?wait_seconds=` long poll, the HTTPS fallback), `/api/agent/connect` (main WebSocket), `/api/agent/media` (screen frames), `/api/agent/transfers/<id>` (resumable upload/download with `Upload-Offset`, `Range`, `/complete`, `/applied`), `/api/agent/ca-recovery`.
- Request authentication: headers `X-Device-ID`, `X-Timestamp`, `X-Nonce`, `X-Signature`; the server answers with `X-Bridge-Server-Time` and `X-Bridge-Auth-Error`. Log string `connection.supervisor.begin auth=ed25519_timestamp_nonce liveness=bidirectional reconnect=full_jitter`. The device key is Ed25519 generated with ring (`ring-ed25519-pkcs8-v2`), protected with DPAPI (`identity.private_key.unprotected`, `DPAPI private-key round trip mismatch`, CryptProtectData import).
- TLS: a private CA is pinned. It is stored as `root-ca.crt` in the data folder and loaded for both reqwest and the WebSocket connector (`tls.websocket.private_ca.loaded sha256=`). After a certificate failure the agent fetches a signed CA document from `/api/agent/ca-recovery`, checks key id `bridge-ca-recovery-2026-08`, nonce, server, issue and expiry times and CA hash, then replaces the file (`atomically replacing Bridge Agent CA`).
- Enrollment request fields (serde struct, 0x14000c344..): `enrollment_token`, `installation_id`, `name`, `owner`, `country`, `os`, `agent_version`, `public_key`, `capabilities`. Capability names include `virtual_desktop_coordinates`, `scoped_clipboard`, `resumable_transfer`, `liveness_challenge`, `forensics_sources`, `machine_msi_install`, `script_execution`, `managed_apps`.
- Reliability features: messages queue in `pending_outbox` until acknowledged, jobs persist in `received_jobs`/`completed_jobs`, reconnect is accelerated on network change (NotifyIpInterfaceChange) and on resume from sleep, and the server can challenge liveness.
- No custom User-Agent string exists in the binary.

Inferred
- The default port is 443 for both HTTPS and WSS.
- Because the server and token come from agent.db first, an operator can re-point an installed agent without a new build. A fresh install with no database enrolls against the built-in default.
- reqwest and tungstenite add no User-Agent by default, so HTTP requests probably carry none.

Unknown
- How the enrollment token reaches agent.db on a fresh install (no command-line option or file for it was found), and whether enrollment works without one.
- The public key that verifies CA recovery documents was not located.

## Command set (observed)

Jobs (delivered by `job.assign` over the WebSocket or in `/api/agent/sync` responses) are matched in the dispatcher at 0x1400ef74b..0x1400effc7 [D6]. Unknown names end in `unsupported job type` (0x1400effc7).

| Job type | Evidence | Meaning (from nearby strings) |
|---|---|---|
| file.list, file.stat, file.drives, file.mkdir, file.rename, file.move, file.copy, file.delete, file.hash | immediates 0x1400ef769..0x1400efd2e; the second-stage names `drives`, `rename`, `delete`, `mkdir`, `list`, `stat` at 0x1401f3b77.. | file manager; `SHA-256 is only available for files`, `refusing to copy a reparse point` |
| file.download, file.upload.commit | 0x1400ef82c; 16-byte constant 0x14058bee0 compared at 0x1400ef885 | transfers through `/api/agent/transfers/` with SHA-256 and size checks |
| command.execute | 0x1400eff28 | `interpreter`, `command`, `working_directory`, `timeout_seconds`; cmd.exe `/D /S /C` or powershell.exe `-NoLogo -NoProfile -NonInteractive -Command` (0x1400eb574..0x1400ecfe7) |
| script.execute | 0x1400efde2 | script types `script-powershell` (0x14058bf00), `script-cmd`, `script-bat` (0x1400ebde9, 0x1400ebe0a); `-File` |
| software.install, software.deploy, install.msi | 0x14058bf20 at 0x1400efcee, 0x1400eff04, 0x1400ef949 | download, verify SHA-256, unpack with `tar.exe -xf -C`, start; `msiexec`, `machine-wide MSI installation requires elevation` |
| managed.apply, managed.stop, managed.repair, managed.remove | 0x1400ef850, 0x1400efc3e, 0x1400efe06 | supervised "managed apps" kept running by the agent (table `managed_apps`, restart counts, Job Objects) |
| inventory.collect | 0x14058bf30 at 0x1400eff6d | `agent.inventory` (OS, compliance, installed software) |
| agent.restart | 0x1400ef808 | `lifecycle.restart.authorized` |

Server-to-agent WebSocket messages (dispatcher 0x140128f56..0x1401299e7, `protocol.unhandled type=` at 0x140129a2c [D7]): `server.welcome`, `job.assign`, `message.acknowledged`, `result.acknowledged`, `server.liveness.challenge`, `server.liveness.control_probe`, `server.forensics.config`, `remote.open`, `remote.attach`, `remote.detach`, `remote.command`, `remote.close`. Agent messages include `agent.hello`, `agent.status`, `agent.liveness.ack`, `agent.inventory`, `agent.managed_status`, `job.progress`, `job.completed`, `forensics.events`, `clipboard.ack`, `app.consent.result`, `session.error`.

Remote sessions (`remote.open`): kinds `shell` and screen; screen modes `standard`, `backstage`, `private-window` (`unsupported remote session kind`, `unsupported screen mode`). The shell is a ConPTY (`CreatePseudoConsole`) running `cmd.exe /D` or `powershell.exe -NoLogo`, placed in a Job Object. Screen frames are JPEG (`encoding remote JPEG frame`) sent on `/api/agent/media`; input arrives as keyboard and mouse events replayed with SendInput and window messages, with per-session sequence numbers and a watchdog that releases stuck keys.

## Backstage hidden desktop and browser takeover

Observed
- A private desktop `BridgeBackstage-<id>` is created with CreateDesktopW (`creating private Backstage desktop`, `binding Backstage worker to private desktop`). Applications are launched onto it with `CREATE_UNICODE_ENVIRONMENT|CREATE_SUSPENDED` and assigned to a Job Object before resume (`backstage.browser.chromium_process_created`).
- Browsers: Chrome (stable, beta, dev, SxS), Edge (stable, beta, dev, SxS), Brave (stable, beta, nightly), Opera, Yandex, Firefox. For Chromium browsers it passes `--user-data-dir=` and `--profile-directory=` with the victim's real profile, plus `--no-default-browser-check --disable-background-mode --disable-gpu-compositing --disable-direct-composition`. The log line `mode=unified same_user=true create_process=createprocessw explicit_real_user_data_dir=true real_executable=true auth_manipulation=false` states the design.
- To open a profile that is in use, it first asks for the browser to be closed, then closes windows on the user's desktop gracefully, then force-closes the verified process tree, and as a last step ("nuclear") kills the browser with taskkill, first by verified PID tree (`taskkill.exe` `/PID` `/T` `/F`, `mode=verified_pid_tree`) and then by image name within the user's session (`mode=session_image`, filter fragments `/IM`, `SESSION eq `). The exact argument order was not traced. It uses Restart Manager and the profile lock files (`lockfile`, `parent.lock`, `.parentlock`) to confirm the profile is free. Text shown to the operator: `Nuclear close can terminate every instance of this browser in the endpoint user's Windows session.`
- Firefox: reads `profiles.ini` and the newer `Profile Groups` SQLite store (`SELECT path, name FROM Profiles ORDER BY id`) and checks `cookies.sqlite`, `places.sqlite`, `logins.json`, `key4.db`, `sessionstore.jsonlz4` for existence and size. Chromium: reads `Local State` (`/profile/last_used`, `/profile/info_cache`), `Preferences`, `Secure Preferences`, `Cookies`, `Cookies-wal`, `Cookies-shm` and logs a fingerprint with `values_logged=false`. Profile pictures (`Google Profile Picture.png`, `Avatar.png`) are read and turned into `data:image/png;base64,` URIs; inferred to be shown in the operator's profile picker.
- Browser policies `StartupBoostEnabled`, `BackgroundModeEnabled`, `ApplicationBoundEncryptionEnabled` and `UserDataDir` under `Software\Policies\Microsoft\Edge`, `Software\Policies\Google\Chrome` and `Software\Policies\BraveSoftware` are read and logged, with `<unset>` when absent (0x1402911ea..0x1402913fd [D13]). No write path to these keys was found; the binary has no registry write imports and uses reg.exe only for the Run value and an Office path query.
- Application catalogue on the hidden desktop: explorer, notepad, Telegram, Outlook (classic, from `HKLM\Software\Microsoft\Office\ClickToRun\Configuration` `InstallationPath`), Slack, Discord, Signal, and the wallets Exodus, Ledger Live, Trezor Suite, Electrum, Sparrow, Atomic Wallet, Guarda, Monero GUI, Bitcoin Core (paths and names in strings_app.txt). Store apps (new Outlook, WhatsApp, Teams) are found with `Get-AppxPackage` but `Windows package activation cannot be bound to the private desktop`.
- A consent prompt can be shown to the logged-on user with WTSSendMessageW: title `Bridge access request`, text about an authorized Bridge administrator asking for one-time access in a private Backstage workspace (0x140591740, refs 0x1401b48ea, 0x1401b5c46). Server messages `app.consent.request` / `browser.profiles.consent.request`, result `app.consent.result` with `approved`, `denied`, `expired`.
- Clipboard copy and paste between the operator and the hidden desktop (`backstage.clipboard.copy`, `backstage.clipboard.paste`, 1 MiB limit).

Inferred
- This is hidden-VNC style session hijacking. The operator works inside the victim's own browser profile, cookies and wallet apps on the victim's machine, so no cookie decryption or file theft is needed and app-bound encryption is irrelevant. The browser closures are the most visible side effect for the user.
- The consent prompt is social engineering that presents the access as a sanctioned IT action. It is used when the operator wants an app that cannot run on the hidden desktop.

## Forensics collectors (surveillance)

Observed
- Workers `forensics_worker` with sources `clipboard`, `text`, `processes`, `user_activity`, `devices` (strings_app.txt), configured by the server (`server.forensics.config`, keys `/forensics/capture_text`, `/forensics/redact_sensitive`; `protect_credentials=true` is fixed in the log lines).
- Clipboard: clipboard format listener with a sequence-number watchdog fallback; captures Unicode text, logs `[non-text clipboard content]` otherwise.
- Text: UI Automation on the focused control (`uia_text_pattern`, `uia_legacy_value`, `forensics.text.focus_failed`), reporting `application`, `window_title`, `control_name`, `text_value`, `redaction_kind`. Redaction keywords include password, passcode, pin code, cvv, card verification, OTP, 2FA/MFA/authenticator/recovery/backup code, api key/token, access/auth token, client secret, secret key, private key, and PEM private-key headers; replaced by markers such as `[credential redacted]`, `[card security code redacted]`, `[protected field changed]`.
- Processes: snapshot baseline then started/stopped events with parent PID. Activity: foreground window polling. Devices: USB device interface arrival and removal through CM_Register_Notification (`USB device ... VID ... PID`). Sessions: logon, logoff, lock, unlock, console and RDP connect/disconnect, remote-control changes through WTSRegisterSessionNotification.
- Events are batched as `forensics.events`.

Inferred
- With text capture on, this is a keylogger at the field level. Redaction is applied to fields that look like credentials, so plain text such as chat, mail and search input is still sent. The redaction rules can be switched by the server (`redact_sensitive`), while `protect_credentials` cannot.

## Discovery and inventory (observed)

`agent.inventory` and `inventory.collect` report OS (`Windows`), agent version `5.1.4`, compliance, and installed software found through `\Software\Microsoft\Windows\CurrentVersion\App Paths\`, ProgramFiles and ProgramFiles(x86), the Office ClickToRun query and `Get-AppxPackage`. Path templates such as `${local_app_data}`, `${user_name}`, `${machine_name}`, `${client_name}`, `${session_name}` expand from the environment (USERNAME, COMPUTERNAME, CLIENTNAME, SESSIONNAME, USERDOMAIN). Executable trust is checked with WinVerifyTrust and version info (`publisher_validation`). Running processes are listed with tasklist.exe (fragments `/FI`, `IMAGENAME eq `, `/FO`, `CSV`, `/NH`).

## Install, persistence and host artefacts (observed)

- Data root: `%LOCALAPPDATA%\Bridge\` with subfolders `packages`, `cache`, `apps`, `logs` (0x1401bc343, 0x1401bc3dc [D9]); log file `logs\bridge-agent.log`; also `agent.db` (+ `-wal`, `-shm`), `root-ca.crt`, `.heartbeat.json`, `runtime.lifecycle.json`, a `bridge-state` folder.
- Canonical binary: `%LOCALAPPDATA%\Programs\Bridge\BridgeAgent.exe` (0x14022879c..0x1402288f5 [D10]). The agent copies itself there through a staged `new.exe` (`install.copy.begin source=`, `install.staged`, `activating canonical Bridge Agent`). An older running copy is stopped with `taskkill /IM BridgeAgent.exe` first (`install.old_canonical_stop`).
- Persistence: `reg.exe ADD HKCU\Software\Microsoft\Windows\CurrentVersion\Run /v BridgeAgent /t REG_SZ /d "\"<canonical path>\" --supervisor" /f` (0x140247192..0x140247374 [D11]), logged as `startup.hkcu_run.ensure`.
- Legacy clean-up in the same routine: deletes `Dropbox.exe` and `Bridge Agent.cmd` from `%APPDATA%\Microsoft\Windows\Start Menu\Programs\Startup\` (0x140247579..0x140247b4e), and migrates `C:\ProgramData\BridgeAgent\agent.db` into the new data root once (`legacy-migration-v1.complete` marker, 0x1401bcd38).
- Process model: `BridgeAgent.exe --supervisor` starts the runtime with `--supervisor-pid <pid>`; a restarted supervisor takes over a live runtime with `--adopt-runtime` (0x1401bd8d2..0x1401bd9ad [D12]). Each watches the other's heartbeat file and restarts it. Single instance per role through the mutex prefix `Local\BridgeAgent-` (0x14022e0f5), error text `another Bridge Agent ... is already running`.
- No scheduled task, service, WMI or COM persistence strings were found.

Inferred
- Earlier versions persisted from the Startup folder as `Bridge Agent.cmd` and as `Dropbox.exe`, a name chosen to blend in, and kept state in C:\ProgramData. Finding those files on a host points to an older infection.

## Anti-analysis (observed)

None found. Strings, endpoints and log messages are plaintext; the default server is the only obfuscated value. No VM, sandbox or debugger checks in the strings (IsDebuggerPresent is imported by the Rust standard library and was not traced to agent code). MalwareBazaar YARA hits such as `ClearWater_Ransomware`, `golang_bin_JCorn_CSC846` and `telebot_framework` match generic content in this large binary and do not describe it. Panics write `!!! BRIDGE AGENT PANIC !!!` and the runtime restarts itself.

## Relation to the loader

Observed
- The agent contains no `0xd1d2` constant and no `C:\Users\Public` string, and none of the loader's file names (search over the full disassembly and strings). It needs no elevation; persistence is per user (HKCU).
- MalwareBazaar records the file as staonchik.exe dropped by acb4fdd8... . The loader's default URL ends in `/wilow/staonchik.bin`.

Observed on the download (2026-10-16)
- The user fetched `staonchik.bin` from the loader's URL through a proxy on 2026-10-16 and quarantined it as samples/d2b5f4ff9ccf98b4ebff54c8bf85e242bcf2b6387c10c451fe8c21d73c5d24fc/ (10,739,222 bytes; also on MalwareBazaar, first seen 2026-10-09, tag enthec). It ends in the loader's container trailer: magic 0x0000d1d2, a u16 of 3 before it (not read by the loader), payload size 7,530,496, name length 10, name `bridge.exe`. Split with tools/bridgeagent_container.py.
- The payload is byte-identical to this sample (sha256 c4545d48..., saved as stage2_c4545d48db193494.bin), so this agent is delivered by the loader's container path and lands as `bridge.exe`, not as staonchik.exe.
- The 3,208,704 leading bytes are a second Rust PE (sha256 4d1b19e3df6c28728ef181c01aea11d5d2777a95a66c84771860daac9c51856b, stage2_4d1b19e3df6c2872.bin, PDB `collector.pdb`, TimeDateStamp 2026-10-06 14:22:44 UTC, 19 seconds after the agent, same rustc commit and `C:\Users\Admin` build path). The loader writes these leading bytes too (FUN_140006af4 in the loader). Its strings describe a one-shot stealer: 35 parallel collectors with tags `[BROWSERS]`, `[CHROMIUM]`, `[FIREFOX]`, `[YANDEX]`, `[WALLETS]`, `[SEEDS]`, `[TELEGRAM]`, `[MESSENGERS]`, `[EMAIL]`, `[STEAM]`, `[VAULT]`, `[WIFI]`, `[VPN]`, `[RDP]`, `[SSH]`, `[GIT]`, `[CLOUD]`, `[ONEDRIVE]`, `[LSASS] dump`, `[LATERAL]`, `[PRIVILEGES]`, `[REMOTE_ACCESS]` and others, an `[INJECTOR]` that extracts an embedded `rxinjhelper.exe`, an environment value `BRIDGE_LOCAL_IP`, and the endpoints `/api/forensics` and `/api/agent/connect`. It was triaged from strings only; see Open items.

Inferred
- The loader's container format is handled entirely by the loader; the agent never sees the trailer.
- The pair is one kit: the collector does a fast bulk theft at install time while the agent keeps long-term hands-on access. The shared `/api/agent/connect` path suggests they report to the same server; the collector's server address was not extracted.
- The MalwareBazaar name staonchik.exe for c4545d48 was given by the submitter or sandbox; on a victim the file is `bridge.exe` before the agent copies itself to its canonical path.
- The copy that the loader runs from `C:\Users\Public\` is temporary: on first run the agent copies itself to `%LOCALAPPDATA%\Programs\Bridge\BridgeAgent.exe` and persists that path.
- Payload hosting (107.175.82[.]242:9000) and C2 (93.152.213[.]149:443) are separate hosts.
- The loader blinds Defender and EDR drivers before this agent arrives, which helps an unprotected, plainly named agent survive.

## capa 9.4.0

Not available. The first run finished but its output was lost when the analysis host restarted. A second run on its own was stopped after 45 minutes at 5.1 GB of memory with less than 0.5 GB left on the 7 GB host, to avoid another crash. capa needs a larger machine for this 7.5 MB Rust binary. The behaviour in this report rests on the disassembly and strings cited above, so no finding depends on capa.

## FLOSS 3.1.1

Not run on this sample. Emulating 5.5 MB of Rust code exceeds the memory of the analysis host, and the string inventory is already complete in plaintext; the one stack-built string (the default server) was decoded by hand and by tools/bridgeagent_backdoor_config.py.

## IOCs

| Type | Value | Note |
|---|---|---|
| SHA-256 | c4545d48db19349484d97681beaa8832f25663250db0e5ff16ef36e9e8ea8766 | staonchik.exe, also the installed BridgeAgent.exe (self copy) |
| SHA-256 | d2b5f4ff9ccf98b4ebff54c8bf85e242bcf2b6387c10c451fe8c21d73c5d24fc | staonchik.bin container served by the loader URL (agent + collector, 0xd1d2 trailer) |
| SHA-256 | 4d1b19e3df6c28728ef181c01aea11d5d2777a95a66c84771860daac9c51856b | companion collector (collector.pdb), leading part of the container |
| SHA-256 | 95b6cbcfa3d138ba741f735e46ffcefe670bed5e3bb8d0a3f66842271a1caf0e | rxinjhelper.exe (ChromElevator build) embedded in the collector |
| SHA-256 | 7e7df0e30b6aba8637fb58db0a2e7a876890b872f0d0b313424d46c9299580e8 | lss.exe (LSASS dumper) embedded in the collector |
| URL | hxxps://93.152.213[.]149/api/forensics | collector ZIP upload |
| File name | bridge.exe | name in the container trailer for the agent |
| SHA-1 | 4583d76c84332d13ceada6f14d3c3b382312e30b | |
| MD5 | e3b578aa02e2fc3fb557e83f4186395e | |
| imphash | 2797ccba8cc94a31426670b81b0c4915 | |
| IP:port | 93.152.213[.]149:443 | default C2 (HTTPS + WSS), not contacted |
| URL paths | hxxps://93.152.213[.]149/api/agent/enroll, /api/agent/sync, /api/agent/transfers/, /api/agent/ca-recovery; wss[:]//93.152.213[.]149/api/agent/connect, /api/agent/media | |
| HTTP headers | X-Device-ID, X-Timestamp, X-Nonce, X-Signature; responses X-Bridge-Server-Time, X-Bridge-Auth-Error | |
| Related (loader) | hxxp://107.175.82[.]242:9000/wilow/staonchik.bin | from the loader report, not contacted |
| File | %LOCALAPPDATA%\Programs\Bridge\BridgeAgent.exe | canonical copy |
| File | %LOCALAPPDATA%\Bridge\agent.db, root-ca.crt, logs\bridge-agent.log, .heartbeat.json, runtime.lifecycle.json | state |
| File (legacy) | C:\ProgramData\BridgeAgent\agent.db; Startup\Dropbox.exe; Startup\Bridge Agent.cmd | older versions |
| Registry | HKCU\Software\Microsoft\Windows\CurrentVersion\Run, value BridgeAgent = "<path>\BridgeAgent.exe" --supervisor | |
| Mutex | Local\BridgeAgent-<role> | prefix observed |
| Desktop | BridgeBackstage-<id> | hidden desktop |
| Command line | BridgeAgent.exe --supervisor / --supervisor-pid <pid> / --adopt-runtime | |
| Strings | `bridge-agent-v5.1.4-chromium-unified`, `!!! BRIDGE AGENT PANIC !!!`, `bridge-ca-recovery-2026-08`, `IT_solutions.pdb` | |

## Detections

- detections/yara/bridgeagent_backdoor.yar: `BridgeAgent_Backdoor_Strings`, `BridgeAgent_Backdoor_Code` (job-type immediates), `BridgeAgent_Backdoor_DefaultC2_93_152_213_149`. Each matches the sample (1/1); 0 matches across samples/ (242 files, loader included), ~/.local/opt (38,437 files), /usr/lib/python3* (7,145 files) and /usr/bin (1,282 files). Details in evidence/yara_validation.txt.
- detections/kql/bridgeagent_backdoor.kql: Run value via reg.exe, canonical path and switches, state files, C2 IP, browser and shell children of BridgeAgent.exe.
- detections/elastic/bridgeagent_backdoor.eql: Run-key reg.exe, supervisor/runtime process, browser/shell children, install-then-443 sequence.
- detections/elastic/bridgeagent_backdoor.esql: hash, C2, paths, registry and switches, grouped per host and user.

All queries are from static analysis and have not been tested on telemetry.

## Summary for the combined report

The BridgeAgent loader's payload, staonchik.exe, is a Rust remote-access agent ("Bridge Agent" 5.1.4, built 2026-10-06). It installs to `%LOCALAPPDATA%\Programs\Bridge\BridgeAgent.exe`, persists through the HKCU Run value `BridgeAgent`, and talks to 93.152.213[.]149 over HTTPS and WebSocket on 443 with Ed25519-signed requests and a pinned private CA. It accepts 22 job types: files, transfers, cmd/PowerShell, software and MSI deployment, managed apps, inventory and restart. It also offers a ConPTY shell and a JPEG screen stream. Its main feature is a hidden "Backstage" desktop where it reopens the victim's real browser profiles and messenger and wallet apps for the operator to use, closing the visible browser first. Collectors report clipboard text, typed field text with credential redaction, processes, windows, USB devices and session events. It does not parse the loader's 0xd1d2 container and has no `C:\Users\Public` logic; it moves itself out of the loader's drop folder on first run. A longer paste-ready version is in the session notes handed to the parent session.

## Open items

- The companion collector is triaged in collector_triage.md (same C2, `/api/forensics` ZIP upload at 90 s and 5 min, 35 collectors, ChromElevator build rxinjhelper.exe, import-less LSASS dumper lss.exe). Its own open items are listed there.

- Source of `enrollment_token` and of a non-default `server_ip` on a fresh install.
- The verification key for CA recovery documents.
- Full JSON schema of jobs and remote-session messages (field names are in strings_app.txt; shapes were not traced).
- Whether any operator-side job exports browser data. Nothing in the binary reads cookie or login values; it only checks those files exist.
