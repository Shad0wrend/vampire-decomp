// CNPC_VSheriffMan: sheriff man NPC (derived from CNPC_VVampireBoss at +0x0). Only the functions that decompiled code needs are declared.
#pragma once
#include "Vector.h"

struct datamap_t;

class CEntityVSlots;

class CNPC_VSheriffMan
{
public:
	char pad0[0x1b2c];
	int m_n1b2c;	// +0x1b2c: set to 0x21 by the schedule selection
	const char *m_pszSourceFile;	// +0x1b30: source file / line stamp of the last schedule change
	int m_nSourceLine;	// +0x1b34
	int m_nIdealState;	// +0x1b38
	char pad1b3c[0x5cc0 - 0x1b3c];
	int m_n5cc0;	// +0x5cc0: the task state (5 = busy)
	char pad5cc4[0x5d9c - 0x5cc4];
	float m_flAttackStartTime;	// +0x5d9c
	char pad5da0[0x5ddc - 0x5da0];
	CEntityVSlots *m_pTarget;	// +0x5ddc: the entity the teleport bats are placed around
	char pad5de0[0x6078 - 0x5de0];
	char m_b6078;	// +0x6078: the ranged-position flag (CAI_BaseNPCTroika::m_b6078)
	char pad6079[0x626c - 0x6079];
	float m_fl626c;	// +0x626c
	char pad6270[0x6274 - 0x6270];
	float m_fl6274;	// +0x6274: the melee retry timer (-1.0f when unset)
	char pad6278[0x628c - 0x6278];
	unsigned int m_hHeightTarget;	// +0x628c: entity handle the height categorisation looks at
	char pad6290[0x64b8 - 0x6290];
	float m_flJumpGravity;	// +0x64b8
	char pad64bc[0x6680 - 0x64bc];
	const char *m_pszMonsterModelName;	// +0x6680
	char pad6684[0x6694 - 0x6684];
	const char *m_pszNpcName;	// +0x6694
	char pad6698[0x66d0 - 0x6698];
	EHANDLE m_hTeleportBats;	// +0x66d0: entity handle of the teleport bats
	int m_nSpawnOrigin[3];	// +0x66d4: the origin at NPCInit (three float bits)
	int m_nSpawnTime;	// +0x66e0: gpGlobals->curtime bits at NPCInit
	char m_b66e4;	// +0x66e4
	char m_b66e5;	// +0x66e5
	char m_bAttacking;	// +0x66e6
	char m_bTransformed;	// +0x66e7: set once the transform has been started
	float m_flFloorHeightA;	// +0x66e8: cached floor height of the first reference entity
	float m_flFloorHeightB;	// +0x66ec: cached floor height of the second reference entity
	float m_flTeleportSpeed;	// +0x66f0: the teleport speed set by SetTeleportVel (distance / 1.5)

	int sub_10005e20(int a);
	int vfunc440(int a);
	void vfunc448(int arg);
	void sub_100054bb(int arg);
	void vfunc619(int arg);
	void sub_1000c27a(int arg);
	void vfunc103();	// "CNPC_VSheriffMan::Spawn": scope trace around sub_10012855(0x201000) and the base spawn
	void vfunc104();	// "CNPC_VSheriffMan::Precache": scope trace, the base precache, then the sheriff models / emitters / sword weapon
	void sub_100013f7();	// CNPC_VHuman::vfunc104 (Precache), called directly
	int vfunc390(const void *pInfo);	// slot 390 "CNPC_VSheriffMan::OnTakeDamage_Alive": scope trace (no entity name), copies the damage info (0x4c bytes); when the damage (the VDmg record's GetDmg, else the float at +0x30) plus stat 0xf reaches stat 0x11 of the default stat list the take-damage mode is cleared, the global 0x10924a6c is touched, condition 0x79 is set and the byte +0x66e5 raised; then (also while the byte +0x66e4 is set) the copy's damage and its VDmg record's fields +4 / +0xc are zeroed; ends with CNPC_VHuman::vfunc390 on the copy
	int sub_10385a50(const void *pInfo);	// CNPC_VHuman::vfunc390 (stub 0x10001b45), called directly
	void sub_10269a20(int condition);	// CAI_BaseNPC member (stub 0x100041b0): sets the condition
	void vfunc431();	// "CNPC_VSheriffMan::NPCThink": scope trace around the base think, then schedules the next think
	void sub_100052d6();	// CNPC_VVampireBoss::vfunc431, called directly
	void vfunc433();	// slot 433 override (GatherConditions): scope trace around CAI_BaseNPCTroika::vfunc433
	void sub_102b27f0();	// CAI_BaseNPCTroika::vfunc433 (stub 0x10013f2f), called directly
	int vfunc461();	// "CNPC_VSheriffMan::SelectIdealSchedule": scope trace, sets the ideal state to 0x21, then the base implementation
	int sub_10011225();	// CNPC_VHuman::vfunc461, called directly
	void sub_10012855(int flags);	// sets the solid flags, called with 0x201000
	void sub_10014876();	// CNPC_VVampire::vfunc103, called directly
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	int vfunc604(int arg);	// slot 604 "CNPC_VSheriffMan::SelectScheduleMeleeCombat" (0x103af960, ret 4): melee schedule pick; stamps m_pszSourceFile / m_nSourceLine
	int vfunc605(int arg);	// slot 605 "CNPC_VSheriffMan::SelectScheduleRangedCombat" (0x103afdb0, ret 4): ranged schedule pick; ignores arg, stamps m_pszSourceFile / m_nSourceLine
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
	void sub_103b1790(float flHeight, int *pOut);	// "CNPC_VSheriffMan::CategorizeHeight": scope trace (no entity name), *pOut = 1 when flHeight is at least as close to the second cached floor height (+0x66ec) as to the first (+0x66e8), else 0 (stub 0x1000b929)
	void vfunc432(int arg);	// "CNPC_VSheriffMan::RunAI": scope trace (no entity name), starts the transform unless it was already started, then the base implementation
	void sub_103b1510();	// "CNPC_VSheriffMan::CacheFloorHeights": scope trace (no entity name), caches the floor heights of the two reference entities (the third dword of their slot 217 vectors) at +0x66e8 / +0x66ec and sets the cached byte at +0x66e7 (stub 0x10012431)
	void sub_10385a10(int arg);	// CNPC_VHuman::vfunc432 (RunAI), called directly through the stub at 0x1000698d
	CEntityVSlots *sub_103b0930();	// the first reference entity (stub 0x1000c257)
	CEntityVSlots *sub_103b0ab0(char bUseSelf);	// "CNPC_VSheriffMan::SelectLedgeNode": the nearest hint of type 0x4653 to the origin of this entity (bUseSelf) or of the entity behind the handle at +0x628c; null without that entity (stub 0x10006e74)
	void vfunc420();	// "CNPC_VSheriffMan::NPCInit": scope trace (no entity name), resets the teleport bats handle and the flag bytes, remembers the origin and the time, runs the base init, sets the monster model and npc names and the jump gravity
	void sub_10013e85();	// CNPC_VVampireBoss::vfunc420, called directly
	void sub_10014c22();	// stub for 0x103c6a00, called directly after the model names are stored
	CNPC_VSheriffMan *sub_103ae3e0();	// the constructor (the CNPC_VVampire and CNPC_VVampireBoss constructors inlined): vtables 0x104a7b94 / 0x104a7b68 for the boss part, then 0x104c619c / 0x104c616c, +0x1568 = 0x15
	int vfunc438();	// "CNPC_VSheriffMan::SelectSchedule": scope trace, stamps 0x21 at +0x1b2c; while attacking: the height categories (sub_103b1680) pick 0x158 (task state 5), the convar test 0x15a, 0x15c / 0x15d by the two categories, 0x15a once sub_103c6a20 is not below 0.05 or sub_103c67f0(3.0f) holds; otherwise (and for everything else) CNPC_VHuman::vfunc438
	int sub_10384ee0();	// CNPC_VHuman::vfunc438 (stub 0x10015ad2), called directly
	void sub_103b10f0();	// stub 0x1000165e: run instead of the schedule pick while the byte at +0x66e5 is set
	float sub_103c6a20();	// stub 0x100010d2
	char sub_103c67f0(float flValue);	// stub 0x1000fe11
	bool sub_103b0c70(const Vector *pPos, float flMinDist);	// "CNPC_VSheriffMan::PositionClearForTeleport": scope trace (no entity name); false when the position is closer than flMinDist to this entity's origin, closer than 100.0f to the spawn origin (+0x66d4) or, with a live entity behind the handle at +0x628c, closer than flMinDist to that entity's origin; else true
	void sub_103b1860();	// "CNPC_VSheriffMan::SetTeleportVel": scope trace (no entity name); with a target at +0x5ddc: the velocity towards it (target origin - own origin, normalised) scaled by distance / 1.5 is set as the absolute velocity (sub_100b2770) and the scale is kept at +0x66f0
public:
	datamap_t * vfunc82();
	int vfunc451();
	bool vfunc452();
	bool vfunc566(int);
	int vfunc580();
	void vfunc127(int a);	// slot 127 override ("Restore"-like, plain member like the other slots of this class): the CNPC_VVampireBoss base, then the manbat model / npc names, the jump gravity 2.0f and the global 0x109340d8 = 0x15
	float m_fTeleportStartTime;	// 0x66f4
	char m_pad66f8[0x66fc - 0x66f8];
};
