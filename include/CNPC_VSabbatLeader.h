// CNPC_VSabbatLeader: Sabbat leader NPC. Only the members that decompiled code needs are declared.
#pragma once

class CEntityVSlots;

struct CNPC_VSabbatLeaderHint
{
	char pad0[0x5d8];
	CNPC_VSabbatLeaderHint *m_pNext;	// +0x5d8: next hint of the global hint list
	int m_hintType;	// +0x5dc
};

class CNPC_VSabbatLeader
{
public:
	char pad0[0xe80];
	int m_nPresence0;	// +0xe80: cleared by UpdatePresenceEffect
	int m_nPresence1;	// +0xe84
	int m_nPresence2;	// +0xe88
	char pad0e8c[0xfec - 0xe8c];
	int m_nState;	// +0xfec
	char padff0[0x10e4 - 0xff0];
	const char *m_pszName10e4;	// +0x10e4: the model-related name, null when its string is empty
	char pad10e8[0x1b2c - 0x10e8];
	int m_n1b2c;	// +0x1b2c
	const char *m_pszFile1b30;	// +0x1b30: source file stamp
	int m_nLine1b34;	// +0x1b34: source line stamp
	int m_n1b38;	// +0x1b38: set to 0x1f by SelectIdealState
	char pad1b3c[0x5cc0 - 0x1b3c];
	int m_nState5cc0;	// +0x5cc0
	int m_nState5cc4;	// +0x5cc4
	char pad5cc8[0x628c - 0x5cc8];
	unsigned int m_hPlayer;	// +0x628c: entity handle of the tracked player
	char pad6290[0x66b8 - 0x6290];
	char m_b66b8;	// +0x66b8
	char pad66b9[0x66c0 - 0x66b9];
	int m_nFailureType;
	int m_n66c4;	// +0x66c4: last health seen by UpdateBloodSplash
	float m_f66c8;	// +0x66c8: time of last splash
	int m_nPlayerHealth;	// +0x66cc: the player's stat 0xf, recorded by RecordPlayerHealth
	char pad66d0[0x66d5 - 0x66d0];
	char m_b66d5;	// +0x66d5

	void sub_103a7760(int arg);
	void sub_1000b8a2(int arg);
	int sub_103aa480(int arg);
	int sub_10001b45(int arg);
	void sub_103a9d00();	// FlipFailureType
	int sub_103a7390(int schedule);	// "TranslateSchedule" (slot 440 override): schedules 0xe5/0xe6 map to 0x15f, else the CNPC_VHuman version
	char sub_103a9340(CNPC_VSabbatLeaderHint *pHint);	// "FValidateHintType": hint type in [0x3e80, 0x3e85]
	void vfunc619(int arg);	// slot 619, not modelled as virtual yet
	void sub_1000c27a(int arg);
	int sub_103a6ef0();	// "Classify" (slot 138): scope trace only, returns 0x10
	void vfunc259(void *pEvent);	// "HandleAnimEvent" (slot 259 override): scope trace, events 0x802/0x803 go to slot 620, the rest to CNPC_VHuman::vfunc259
	void sub_100076bc(void *pEvent);	// CNPC_VHuman::vfunc259, called directly
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	void sub_103ab4a0(void *pVictim);	// "OnVictimHitByMe" (slot 24 override): scope trace, when the entity of the handle at +0x628c is pVictim decrements the counter at +0x66e0 (clamped at 0)
	int vfunc366(int a, int b, int c);	// "HandleInteraction" (slot 366 override): scope trace, then returns CNPC_VHuman::vfunc366(a, b, c)
	int sub_10001b27(int a, int b, int c);	// CNPC_VHuman::vfunc366, called directly
	char vfunc590();	// "OkToInterrupt" (slot 590 override): scope trace, true while the state at +0xfec is 0x1141, else the Troika base
	char sub_1000ac22();	// CAI_BaseNPCTroika::vfunc590, called directly
	void vfunc313();	// "CNPC_VSabbatLeader::UpdatePresenceEffect": scope trace, a call on the global object 0x10739a4c with this, then clears +0xe80 / +0xe88 / +0xe84
	int sub_103aa510();	// slot 437 "CNPC_VSabbatLeader::PreSelectSchedule": scope trace, sets +0x1b2c = 0x1f, drops state 2 at +0x5cc0 to 1 (and +0x5cc4 = 1) when slot 167 reports none, then returns CAI_BaseNPCTroika::vfunc437()
	int sub_102ae920();	// CAI_BaseNPCTroika::vfunc437 (stub 0x1000df2b), called directly
	void sub_103aa960();	// "UpdateBloodSplash": scope trace, spawns splash emitters when health changed
	void sub_1000136b(const char *pName, int arg);	// spawns a particle emitter by name
	void sub_103aaa80();	// "CNPC_VSabbatLeader::RecordPlayerHealth": scope trace, with the player entity (handle at +0x628c) live stores stat 0xf of its first non-pending stat list (default list when none) at +0x66cc
	bool sub_103a9e70();	// "CNPC_VSabbatLeader::PlayerInNoJumpZone": scope trace, true when for a no-jump hint (type 0x3e84, global list at 0x10925450 via +0x5d8) both the player's and this NPC's origin are within 100.0f (sub_103c6570)
	float sub_103c6570(CNPC_VSabbatLeaderHint *pHint, const float *pOrigin);	// distance-like measure between a hint and a position (stub 0x100119d2), returned in ST0
	int vfunc461();	// "SelectIdealState" (slot 461 override): scope trace, +0x1b38 = 0x1f, keeps / sets the state at +0x5cc4: 2 while the byte at +0x66b8 is set and (state 2 with the player entity live) or slot 167 reports a squad (the player entity then gets sub_10279a50), else 1; returns it
	bool sub_103aabc0();	// "CNPC_VSabbatLeader::PlayerDamaged...": scope trace, true when the player entity (handle at +0x628c) is live and its stat 0xf (first non-pending list) is at least a constant above the value recorded at +0x66cc
	void vfunc432(int arg);	// slot 432 override (the RunAI-like tick): scope trace, CNPC_VHuman::vfunc432(arg), then UpdateBloodSplash
	void sub_1000698d(int arg);	// CNPC_VHuman::vfunc432, called directly
	void vfunc420();	// "CNPC_VSabbatLeader::NPCInit" (slot 420 override): scope trace, CNPC_VVampireBoss::vfunc420, resets the boss state (+0x66b8..+0x66e5), the Andrei model and class name, the two powerup emitters, RecordPlayerHealth
	void sub_10013e85();	// CNPC_VVampireBoss::vfunc420 (stub 0x10013e85), called directly
	void sub_10010fd7(int index, const char *pszEmitterName);	// CNPC_VVampireBoss::sub_103c6df0 (stub 0x10010fd7): sets the body emitter name of an index
	void vfunc103();	// "CNPC_VSabbatLeader::Spawn" (slot 103 override): scope trace, solid flags 0x209000, the name "VampireSabbatLeader" at +0x10e4, then CNPC_VVampire::vfunc103
	void sub_10012855(int flags);	// sets the solid flags, called with 0x209000
	void sub_10014876();	// CNPC_VVampire::vfunc103 (stub 0x10014876), called directly
	void sub_103aa3b0(int unused);	// "CNPC_VSabbatLeader::StartTransformation": scope trace, sets the byte at +0x66b8, sub_10332aa0(1, 1, 10), stamps the source file / line at +0x1b30 / +0x1b34 and runs sub_102ae750(0x163, 0); takes one unused stack argument
	void sub_10332aa0(int classId, int disposition, int priority);	// "CBaseCombatCharacter::AddClassRelationship" (stub 0x10013cf5), called directly
	void sub_102ae750(int schedule, int a);	// CAI_BaseNPCTroika member (stub 0x1000198d), called directly
	void sub_103ab110(const char *pszEmitter, CEntityVSlots *pAt);	// "CNPC_VSabbatLeader::SpawnBloodPoolEmitter": scope trace, the origin of this with the z of pAt's origin (or the floor found by sub_101d08e0 within 1024 units when pAt is null), an emitter of that name there; its entity gets slot 241 (the entity is not checked for null)
	bool sub_103a9d90();	// "CNPC_VSabbatLeader::CheckForJump": scope trace (no entity name), true when sub_103c67f0(constant) holds or sub_103c6a20() is not below a constant, else sub_103aabc0()
	bool sub_103c67f0(float flValue);	// stub 0x1000fe11, called by CheckForJump with a constant
	float sub_103c6a20();	// stub 0x100010d2, a measure returned in ST0
	void vfunc433();	// "CNPC_VSabbatLeader::GatherConditions" (slot 433 override): scope trace, CAI_BaseNPCTroika::vfunc433, on a jump (CheckForJump) the global object 0x10924a6c is asked (slot 1) and condition 0x79 is set; conditions 0xf, 0xc and 0xe are cleared
	void sub_102b27f0();	// CAI_BaseNPCTroika::vfunc433 (stub 0x10013f2f), called directly
	void sub_10269a20(int condition);	// "SetCondition" (stub 0x100041b0)
	void sub_10269b50(int condition);	// "ClearCondition" (stub 0x10015839)
};
