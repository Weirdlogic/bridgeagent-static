# bridgeagent-static

Static analysis of the BridgeAgent kit from MalwareBazaar: a loader that uses a
signed AMD driver to blind EDR products, and the two Rust programs it installs.
None of the samples was run.

| File | SHA-256 | Notes |
|---|---|---|
| Loader | `acb4fdd8eab403dd309015ff8d73334ce7fb1656a627ae837804e59a1b20005a` | `Loader.exe`, BYOVD EDR killer and downloader |
| Driver | `6e8b49cf70bf854e8c59c7d27cefa89406caf8978461190dabb86dafcd8554e1` | AMD PDFWKRNL.sys, legitimate and signed, embedded in the loader (CVE-2023-20598) |
| Container | `d2b5f4ff9ccf98b4ebff54c8bf85e242bcf2b6387c10c451fe8c21d73c5d24fc` | `staonchik.bin`, what the loader downloads |
| Agent | `c4545d48db19349484d97681beaa8832f25663250db0e5ff16ef36e9e8ea8766` | "Bridge Agent" 5.1.4, Rust remote-access tool |
| Collector | `4d1b19e3df6c28728ef181c01aea11d5d2777a95a66c84771860daac9c51856b` | Rust one-shot stealer shipped next to the agent |

Full technical report: [reports/bridgeagent/2026-10-16-acb4fdd8eab4/report.md](reports/bridgeagent/2026-10-16-acb4fdd8eab4/report.md)

## Results

- The loader carries the AMD driver as AES-256-GCM ciphertext, loads it as a
  kernel service, and uses two of its IOCTLs (0x80002014, 0x80002028) as
  arbitrary kernel write and read.
- With that it removes process, thread and image-load notify routines of 20
  security drivers, and empties the object-callback and registry-callback
  lists whenever one entry belongs to them. It strips protected-process status
  from Defender's MsMpEng.exe and gives it explorer.exe's token. Before that it
  adds Defender exclusions over WMI and tries a CMSTPLUA UAC bypass.
- Its kernel offsets come from the ntoskrnl PDB, fetched with `curl.exe`
  claiming to be the Microsoft symbol client. That request happens before the
  driver loads and is the best place to catch it.
- The download is a container with two programs. The Bridge Agent persists in
  HKCU Run, talks to `93.152.213[.]149:443` over HTTPS and WebSocket, and
  reopens the victim's real browser profiles, messengers and wallets on a
  hidden desktop for the operator. The collector runs 35 collectors (browsers
  through an embedded ChromElevator build, wallets, password managers, an LSASS
  dump) and uploads two ZIPs to the same server.

## Repository layout

| Path | Contents |
|---|---|
| `tools/bridgeagent_strings.py` | Decodes the loader's AES-256-CTR strings, with exact lengths from the Ghidra export |
| `tools/bridgeagent_driver.py` | Decrypts the embedded driver (AES-256-GCM, tag verified) |
| `tools/bridgeagent_container.py` | Splits the `0xd1d2` container into its two programs |
| `tools/bridgeagent_backdoor_config.py` | Recovers the agent's stack-built default server and endpoints |
| `tools/pe_static.py` | Cross references, disassembly and carving helpers used for the collector |
| `tools/ghidra_scripts/` | Headless Ghidra export script used for the loader decompile |
| `detections/` | YARA, KQL (Microsoft Defender XDR) and Elastic (EQL, ES\|QL) rules |
| `reports/bridgeagent/2026-10-16-acb4fdd8eab4/` | Combined report, loader notes and evidence |
| `reports/bridgeagent/2026-10-16-c4545d48db19/` | Agent and collector notes and evidence |

The YARA rules for the loader, the agent, the collector and the collector's two
helpers (rxinjhelper.exe and lss.exe) were validated: each matches its sample
and none matched about 47,000 benign files or the other lab samples. The KQL and
Elastic queries come from static analysis and have not been tested on telemetry.

## Reproduce the analysis

Samples are not included. Fetch them from MalwareBazaar with your own API key
(`tools/fetch-sample.py <sha256>`, key in `Abuse.ch/.env`), unzip with
`tools/unzip-sample.py`, then for example:

```bash
python3 -I tools/bridgeagent_driver.py samples/<loader sha256>/sample.bin samples/<loader sha256>/
```

Static analysis only. Do not run the samples outside an isolated lab. Every
network indicator in the prose is defanged; the detection files keep raw values
so the queries work.

## Prior work

Ontinue described the same loader family as LunexLoader, delivering the Lunex
stealer from the same download server ("Lunex unmasked: a new information
stealer deployed through BYOVD", 2026-09-24). The report credits what that
covered and what is new here, including the Bridge Agent and the collector.
