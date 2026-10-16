/*
  BridgeAgent backdoor (staonchik.exe, MalwareBazaar first seen 2026-10-07), the payload
  that the BridgeAgent / LunexLoader BYOVD loader downloads and runs.
  Rust x64 remote-access agent: enrollment over HTTPS, WebSocket C2 on 443, hidden
  "Backstage" desktop for hijacking the victim's real browser profiles, clipboard and
  UI text capture, ConPTY shell, file transfer, software deployment.
  Report: reports/bridgeagent/2026-10-16-c4545d48db19/triage.md
  Static analysis only; offsets are VAs in the reference sample.
*/

import "pe"

rule BridgeAgent_Backdoor_Strings
{
    meta:
        description = "BridgeAgent backdoor: plaintext protocol, logging and persistence strings of the Rust agent"
        author = "Weirdlogic research"
        date = "2026-10-16"
        reference_sha256 = "c4545d48db19349484d97681beaa8832f25663250db0e5ff16ef36e9e8ea8766"
        family = "BridgeAgent"
        confidence = "high: strings are specific to the agent's own source (src\\main.rs), not to its crates"
    strings:
        $panic   = "!!! BRIDGE AGENT PANIC !!!" ascii
        $build   = "bridge-agent-v" ascii
        $mutex   = "Local\\BridgeAgent-" ascii
        $hdr1    = "X-Bridge-Server-Time" ascii
        $hdr2    = "X-Bridge-Auth-Error" ascii
        $desk    = "BridgeBackstage-" ascii
        $carec   = "bridge-ca-recovery-" ascii
        $auth    = "auth=ed25519_timestamp_nonce" ascii
        $owned   = "Bridge Agent-owned Backstage" ascii
        $opera   = "BRIDGE_BACKSTAGE_OPERA" ascii
        $consent = "An authorized Bridge administrator" ascii
        $run     = "startup.hkcu_run.ensure" ascii
        $legacy  = "legacy-migration-v1.complete" ascii
        $api1    = "/api/agent/connect" ascii
        $api2    = "/api/agent/enroll" ascii
        $api3    = "/api/agent/media" ascii
        $api4    = "/api/agent/ca-recovery" ascii
        $pdb     = "IT_solutions.pdb" ascii
    condition:
        uint16(0) == 0x5A4D and pe.machine == pe.MACHINE_AMD64
        and (
            $panic or $mutex or $desk or $owned or $opera or $consent
            or 2 of ($hdr*, $carec, $auth, $run, $legacy, $build)
        )
        and 2 of ($api*, $pdb, $build)
}

rule BridgeAgent_Backdoor_Code
{
    meta:
        description = "BridgeAgent backdoor code: job-type dispatcher that compares job names as 8-byte immediates (0x1400ef769..0x1400eff35)"
        author = "Weirdlogic research"
        date = "2026-10-16"
        reference_sha256 = "c4545d48db19349484d97681beaa8832f25663250db0e5ff16ef36e9e8ea8766"
        family = "BridgeAgent"
        confidence = "medium-high: job immediates should survive string and C2 changes; register choice can change with a rebuild"
    strings:
        // movabs reg, "file.lis" / "file.sta" / "file.mov" / "file.cop" / "file.has" / "file.dow"
        $j_list  = { (48|49) B? 66 69 6C 65 2E 6C 69 73 }
        $j_stat  = { (48|49) B? 66 69 6C 65 2E 73 74 61 }
        $j_move  = { (48|49) B? 66 69 6C 65 2E 6D 6F 76 }
        $j_copy  = { (48|49) B? 66 69 6C 65 2E 63 6F 70 }
        $j_hash  = { (48|49) B? 66 69 6C 65 2E 68 61 73 }
        $j_down  = { (48|49) B? 66 69 6C 65 2E 64 6F 77 }
        // movabs reg, "agent.re" (agent.restart)
        $j_rst   = { (48|49) B? 61 67 65 6E 74 2E 72 65 }
        // movabs reg, "managed." (managed.apply / stop / repair / remove)
        $j_mgd   = { (48|49) B? 6D 61 6E 61 67 65 64 2E }
        // movabs reg, "command." (command.execute)
        $j_cmd   = { (48|49) B? 63 6F 6D 6D 61 6E 64 2E }
    condition:
        uint16(0) == 0x5A4D and pe.machine == pe.MACHINE_AMD64
        and 7 of ($j_*)
}

rule BridgeAgent_Backdoor_DefaultC2_93_152_213_149
{
    meta:
        description = "BridgeAgent backdoor build with the default server 93.152.213[.]149 built from immediates (0x1401f3ae9: '.213.149' at +6, '93.152.2' at +0)"
        author = "Weirdlogic research"
        date = "2026-10-16"
        reference_sha256 = "c4545d48db19349484d97681beaa8832f25663250db0e5ff16ef36e9e8ea8766"
        family = "BridgeAgent"
        confidence = "high for this C2; build-specific"
    strings:
        $hi = { (48|49) B? 2E 32 31 33 2E 31 34 39 }   // movabs reg, ".213.149"
        $lo = { (48|49) B? 39 33 2E 31 35 32 2E 32 }   // movabs reg, "93.152.2"
    condition:
        uint16(0) == 0x5A4D and $hi and $lo
}
