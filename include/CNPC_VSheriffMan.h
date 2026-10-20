// CNPC_VSheriffMan: sheriff man NPC (derived from CNPC_VVampireBoss at +0x0). Only the functions that decompiled code needs are declared.
#pragma once

class CEntityVSlots;

class CNPC_VSheriffMan
{
public:
	char pad0[0x1b30];
	const char *m_pszSourceFile;	// +0x1b30: source file / line stamp of the last schedule change
	int m_nSourceLine;	// +0x1b34
	int m_nIdealState;	// +0x1b38
	char pad1b3c[0x5d9c - 0x1b3c];
	float m_flAttackStartTime;	// +0x5d9c
	char pad5da0[0x5ddc - 0x5da0];
	CEntityVSlots *m_pTarget;	// +0x5ddc: the entity the teleport bats are placed around
	char pad5de0[0x628c - 0x5de0];
	unsigned int m_hHeightTarget;	// +0x628c: entity handle the height categorisation looks at
	char pad6290[0x66d0 - 0x6290];
	unsigned int m_hTeleportBats;	// +0x66d0: entity handle of the teleport bats
	char pad66d4[0x66e6 - 0x66d4];
	char m_bAttacking;	// +0x66e6

	int sub_10005e20(int a);
	int vfunc440(int a);
	void vfunc448(int arg);
	void sub_100054bb(int arg);
	void vfunc619(int arg);
	void sub_1000c27a(int arg);
	void vfunc103();	// "CNPC_VSheriffMan::Spawn": scope trace around sub_10012855(0x201000) and the base spawn
	void vfunc104();	// "CNPC_VSheriffMan::Precache": scope trace, the base precache, then the sheriff models / emitters / sword weapon
	void sub_100013f7();	// CNPC_VHuman::vfunc104 (Precache), called directly
	void vfunc431();	// "CNPC_VSheriffMan::NPCThink": scope trace around the base think, then schedules the next think
	void sub_100052d6();	// CNPC_VVampireBoss::vfunc431, called directly
	int vfunc461();	// "CNPC_VSheriffMan::SelectIdealSchedule": scope trace, sets the ideal state to 0x21, then the base implementation
	int sub_10011225();	// CNPC_VHuman::vfunc461, called directly
	void sub_10012855(int flags);	// sets the solid flags, called with 0x201000
	void sub_10014876();	// CNPC_VVampire::vfunc103, called directly
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VSheriffMan *vfunc5(unsigned int flags);	// as in CBaseCineCam (transplant)
	int vfunc337();	// as in CNPC_VSabbatLeader (transplant)
	void vfunc444(int *pTask);	// "CNPC_VSheriffMan::RunTask": scope trace, the base implementation for every task but 0x154
	void sub_103c5f40(int *pTask);	// CNPC_VVampireBoss::vfunc444 (RunTask), called directly through the stub at 0x10004edf
	void sub_103b15e0(int arg);	// "CNPC_VSheriffMan::StartTransform": scope trace, stamps the source file and line 0x4c7, then sub_102ae750(0x15b, 0)
	void sub_102ae750(int a, int b);	// schedule/task starter, called directly through the stub at 0x1000198d
	void sub_103b1470(int unused);	// "CNPC_VSheriffMan::StartAttacking": scope trace, sub_10013cf5(1, 1, 10), sets the attacking byte and stamps the current time
	void sub_10013cf5(int a, int b, int c);	// CBaseCombatCharacter member (the stub at 0x10013cf5 for 0x10332aa0), called directly
	void sub_103b0560();	// "CNPC_VSheriffMan::KillTeleportBats": scope trace (no entity name), removes the entity behind the handle at +0x66d0 (when it resolves), then clears the handle
	void sub_103b03b0();	// "CNPC_VSheriffMan::SpawnTeleportBats": scope trace (no entity name), finds or creates the "sheriff_teleport_bats" entity (handle at +0x66d0), places it at this entity's origin, spawns it and, with a target at +0x5ddc, hands it the target's origin plus two offset vectors
	void sub_103b1680(int *pA, int *pB);	// "CNPC_VSheriffMan::CategorizeHeight...": scope trace (no entity name), clears both outputs; when the entity behind the handle at +0x628c resolves, hands the third dword of slot 217 of it (with pA) and of this (with pB) to sub_103b1790
	void sub_103b1790(int height);	// height classification worker (stub 0x1000b929)
};
