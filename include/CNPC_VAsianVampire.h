// CNPC_VAsianVampire: Asian vampire NPC. Layout declared flat (vptr and base members are padding)
// until the bases are recovered. Only what decompiled code needs.
#pragma once

class CBaseEntity;

struct StoredHintPos_t
{
	float x, y, z;

	StoredHintPos_t &operator=(const StoredHintPos_t &v) { x = v.x; y = v.y; z = v.z; return *this; }
};

class CNPC_VAsianVampire
{
public:
	char pad0[0x17c];
	float m_flNextThink;	// +0x17c
	char pad180[0x1b38 - 0x180];
	int m_nIdealState;	// +0x1b38
	char pad1b3c[0x628c - 0x1b3c];
	unsigned int m_hJumpTarget;	// +0x628c, entity handle
	char pad6290[0x64b8 - 0x6290];
	float m_flRestoredTime;	// +0x64b8: reset to a constant by Restore
	char pad64bc[0x66b8 - 0x64bc];
	StoredHintPos_t m_storedHints[2];	// +0x66b8: ring of the last two hint origins
	int m_nNextStoredHint;	// +0x66d0
	char m_bTaskFailedJump;	// +0x66d4: set when a task fails with a code in 12..15
	char pad66d5[3];
	float m_flStationaryTime;	// +0x66d8

	bool sub_10362670();	// "CNPC_VAsianVampire::StationaryFor...": curtime - m_flStationaryTime >= constant
	void vfunc619(int arg);
	void sub_1000c27a(int arg);
	void vfunc103();	// "CNPC_VAsianVampire::Spawn": scope trace around the base spawn
	void vfunc431();	// "CNPC_VAsianVampire::NPCThink": scope trace around the base think, then schedules the next think
	int vfunc461();	// "CNPC_VAsianVampire::SelectIdealState": scope trace, sets the ideal state to 6, then the base implementation
	void sub_10361990(CBaseEntity *pHint);	// "CNPC_VAsianVampire::AddHintToStoredJumpPositions": scope trace, stores the hint's origin (slot 217) in the two-entry ring
	int sub_10362430();	// "CNPC_VAsianVampire::GetJumpSchedule": scope trace, 0x15b when the jump target (handle at +0x628c) resolves and lies more than a constant below this NPC (z of slot 217), else 0x15a
	void sub_10012855(int flags);	// sets the solid flags, called with 0x201000
	void sub_10014876();	// CNPC_VVampire::vfunc103, called directly
	void sub_100052d6();	// CNPC_VVampireBoss::vfunc431, called directly
	int sub_10011225();	// CNPC_VHuman::vfunc461, called directly
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	void sub_10384670();	// CNPC_VHuman::vfunc104 (Precache), called directly
	void sub_10360bc0();	// slot 104 "CNPC_VAsianVampire::Precache": scope trace around the base Precache and a precache of "item_w_avamp_blade"
	void vfunc127(void *pRestore);	// slot 127 "CNPC_VAsianVampire::Restore": scope trace, the base Restore, then m_flRestoredTime is reset to a constant
	void sub_1000b28f(void *pRestore);	// CNPC_VVampireBoss::vfunc127, called directly
	void vfunc448(int code);	// "CNPC_VAsianVampire::TaskFail": scope trace, remembers a failure code in 12..15, then the base implementation
	void sub_100054bb(int code);	// CAI_BaseNPCTroika::vfunc448, called directly
	int vfunc440(int schedule);	// slot 440 "CNPC_VAsianVampire::TranslateSchedule": scope trace, schedules 0xe5 / 0xe6 become GetJumpSchedule(), everything else goes to CNPC_VHuman::vfunc440
	int sub_10005e20(int schedule);	// CNPC_VHuman::vfunc440, called directly
	void vfunc420();	// slot 420 "CNPC_VAsianVampire::NPCInit": scope trace, the CNPC_VVampireBoss init, stores the current origin (slot 217) in both stored hint positions and in the stationary position (+0x66dc), clears the ring index (+0x66d0), +0x5ddc and the flag byte +0x66d4, stamps the tick at +0x66d8, sets the byte +0x66e8 and the float at +0x64b8
	void sub_10013e85();	// CNPC_VVampireBoss::vfunc420, called directly
};
