// CNPC_VManBat: man-bat NPC (base chain not modelled). Only what decompiled code needs.
#pragma once

struct datamap_t;

#include "Vector.h"

class CBaseEntity;
class CBaseAnimating;

class CNPC_VManBat
{
public:
	char m_pad0000[0xfec];
	int m_nState;	// 0xfec: the activity the bat is in
	char m_pad0ff0[0x1568 - 0xff0];
	int m_n1568;	// 0x1568: set to 0x14 by the constructor (0x10389cc0), as is m_n156c
	int m_n156c;	// 0x156c
	char m_pad1570[0x628c - 0x1570];
	unsigned int m_h628c;	// entity handle of the bat's target
	char m_pad6290[0x6668 - 0x6290];
	void *m_pSecure6668;	// 0x6668: vptr of an embedded MvsnSec::CSecureTypeBase<CPfnTraits0,int,...> (vftable 0x104bc684, slot 0 = 0x10390060); the constructor stores it, then the scrambled value (+0x6670) and the two bytes +0x666c / +0x666d come from sub_103908c0 and a stack temp
	char m_bSecure666c;	// 0x666c
	char m_bSecure666d;	// 0x666d
	char m_pad666e[2];
	unsigned int m_n6670;	// 0x6670: the scrambled value of that member
	int m_n6674;
	float m_f6678;	// 0x6678
	float m_f667c;	// 0x667c
	EHANDLE m_h6680;	// 0x6680: entity handle (the bat's carried character, released by sub_1038f020)
	float m_f6684;
	char m_pad6688[0x668c - 0x6688];
	unsigned int m_h668c;	// entity handle of the ragdoll the bat holds (released by sub_1038f660)
	unsigned int m_h6690;	// entity handle released by sub_1038f660
	char m_b6694;	// handed to the ragdoll when it is let go
	char m_pad6695[3];
	int m_n6698;
	EHANDLE m_h669c;	// 0x669c: entity handle removed by sub_1038f020
	EHANDLE m_h66a0;	// 0x66a0: entity handle removed by sub_1038f020
	unsigned int m_h66a4;	// entity handle released by vfunc144
	EHANDLE m_h66a8;	// 0x66a8: entity handle removed by sub_1038f020
	char m_pad66ac[0x66b0 - 0x66ac];
	char m_b66b0;	// set once the minions have been told about the target
	char m_pad66b1[7];
	char m_b66b8;
	void vfunc420();	// slot 420 (plain member): stamps +0x6678 / +0x667c with curtime + 2.3 / 0.1, clears the bytes +0x66b0 / +0x66b8, CAI_BaseNPC::vfunc420, then sets the global 0x109340d8 to 0x14
	void sub_1029a0b0();	// CAI_BaseNPC::vfunc420 (stub 0x1000c531), called directly

	bool sub_1038f290();
	bool sub_1038f2c0(const char *pszModel, int nBone, int nArg, const char *pszName);	// creates a prop_physics with the model, bites it into the bat's foot (sub_1038f430) and keeps its handle at +0x668c
	CNPC_VManBat *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100123af();	// as in CPhysForce (transplant)
	int vfunc390(void *info);	// slot 390: 1 while the bat's field at +0x210 is below 25 and the attacker of info (its +0x2c object) has no value at +0xa8; else CNPC_VHuman::sub_10001b45(info)
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	bool vfunc566(CBaseEntity *pEnt);	// "does pEnt (a point entity with type 20000 at +0x5dc) carry the name this bat looks for": builds the name from the state at +0x6670 / +0x6674 ("ManBat Landpoint", "ManBat Divepoint %d" ...) and compares it with the entity name, supporting a trailing '*'
	char vfunc525(int a);	// slot 525: in state 2 hands a to sub_1038b1a0 and answers true; else whether the checksum of the scrambled value at +0x6670 matches 0xfa0b0699
	void sub_1038b1a0(int a);	// stub 0x100049cb
	int vfunc438();	// slot 438 "CNPC_VManBat::SelectSchedule": 0x158 (and +0x6674 = 1) unless sub_1027d990() is 2; 0x159 (and +0x6674 = 1) when the checksum of the scrambled value at +0x6670 does not match; then 0x15f / 0x15d / a random schedule 0x15c, 0x15d, 0x161, 0x163 or 0x159
	int sub_1027d990();	// CUnknown1027d990::sub_1027d990 (stub 0x100023a1): the NPC's current state
	char sub_10269d30(int condition);	// "HasConditionAndNotIgnored" (stub 0x1001482b)
	void vfunc102(CBaseEntity *pEnt, int a2, int a3, int a4, int a5);	// slot 102 (0x1038fb20, ret 0x14, ecx unused): esi = pEnt->slot 2() (collideable-like), group = esi->slot 14(); CTraceFilterManBatNoIBeamEntity filter(pEnt, group); r = esi->slot 9(0, a4, &filter, a5) (the callee pops nothing: cdecl-style slot); then the trace interface g_1070b254 slot 5 (esi, pEnt, a2, r); a3 unused
	void vfunc103();	// slot 103: the game's CNPC_VVampire::vfunc103 (stub 0x10014876) followed by the activity change and the 0x10013cf5 call (sub_10332aa0)
	void vfunc104();	// "Precache": the Human precache, the man-bat models / sounds / emitters (tables of names at 0x10640ce0, 0x10640d10, 0x10640d1c, 0x10640d28), the sheriff teleport emitter and the claw weapon
	void sub_100013f7();	// CNPC_VHuman::vfunc104 (jump stub), called directly
	void sub_1038c170(int nMode);	// switches between the grounded (1: flag 0x400 set, state 2) and the flying (other: flag cleared, state 0) setup, then slot 93(4, 0)
	void sub_1038fe30();	// when the byte at +0x66b8 is clear and the entity of the handle at +0x66ac is closer than 400 units (squared distance below 160000.0), plays one of the man-bat sounds (table 0x10640d28, picked by the sound system's slot 2) to a reliable PAS attenuation filter on channel 4 and sets the byte
	void sub_1038fc80();	// tells every living "ManBat_Minion" NPC without a target about the bat's target (once; sets the flag at +0x66b0)
	void vfunc432(int a);	// slot 432: releases the carried character, then the human vfunc432
	void sub_10385a10(int a);	// CNPC_VHuman::vfunc432 (stub 0x1000698d), called directly
	void sub_1038fd40();	// the reverse of sub_1038fc80: while the flag at +0x66b0 is set, every living "ManBat_Minion" NPC with a target count is released (sub_1026d0c0), told about the bat's target (relationship 1 / 10) and scheduled (sub_102ae840 with 2 when slot 167 of the bat answers, else 1); then clears the flag
	void vfunc144(int arg);	// slot 144: sub_1038f020(1), sub_1038c170(2), sub_1038f660, sub_1038fd40, releases the entity behind the handle at +0x66a4, then CNPC_VVampire::vfunc144
	void sub_1038f020(char bForce);	// stub 0x10015591, called by vfunc144 first: lets go of the carried character and removes the three attached entities (unless the delay at +0x6684 has not run out and bForce is clear)
	void sub_1038f790();	// "release the held ragdoll" worker (called by vfunc444): removes the entity of the handle +0x6690 (sub_101cd970) and sets it to -1; with live entities behind +0x628c (target) and +0x668c (ragdoll): arc record = three zero dwords, vector = target slot 217 origin + 48.0f in z; sub_102c4cc0(&zero, ragdoll->vfunc217(&vec)); then dynamic_cast<CRagdollPropSpecial *>(ragdoll): slot 266 (+0x428) with (&zero, &zeroVec) and sub_101578d0(m_b6694), else the physics object at +0x36c slot 39 (+0x9c) with (&zero, &zeroVec); finally sub_102c4380(ragdoll entity), sub_102c43b0(2.0f), +0x668c = -1, sub_1038f600(0). Handles +0x628c/+0x668c/+0x6690 are plain unsigned int here (EHANDLE is rejected: sub_1038f660 assigns -1 as a number): use EHandle_Get(m_h668c).
	void sub_102c4cc0(const Vector *pArc, const Vector *pArg2, const Vector *pArg3);	// CAI_BaseNPCTroika arc helper (stub 0x10009a57, ret 12), called with ecx = the bat
	void sub_102c4380(CBaseEntity *pEnt);	// stub 0x10008a94, ret 4
	void sub_102c43b0(float flArg);	// stub 0x10013110, ret 4
	void sub_101578d0(char bArg);	// stub 0x10009a4d, ret 4, called with ecx = the ragdoll (CRagdollPropSpecial)
	void sub_1038f660();	// stub 0x10005ca9: while carried (flag 5 of +0x14b8), lets the ragdoll of the handle at +0x668c go (with the byte at +0x6694), removes the entity of the handle at +0x6690 and clears the carry flag (sub_1038f600(0))
	void sub_103c4f40(int arg);	// CNPC_VVampire::vfunc144 (stub 0x1000b8a2), called directly
	bool sub_1038f430(CBaseAnimating *pProp, int nArg);	// attaches the thrown prop to the bat: creates a "phys_animlink" between the bat's "Bip01 R Foot" bone and the prop's physics object (slot 265), keeps its handle at +0x6690, sets the carry flag and the prop's byte flag
	void sub_1038f600(char bOn);	// sets / clears bit 5 of the flags at +0x14b8
	void sub_1038e720(Vector vecDir);	// picks the reaction to a hit from the direction: a downward-pointing hit (z of 30 or more) and a hit from the side other than the front arc (30..330 degrees from the facing) run sub_1038e640 / sub_1038e6a0 / sub_1038e6e0 / sub_1038e670 (none in the states 0x28, 0x30, 0xb0, 0x4b, 0x1171)
	void vfunc259(int *pEvent);	// slot 259: handles the animation events 1 / 2 / 3 (man-bat screech / sound tables at 0x10640d10, 0x10642b2c, 0x10640d1c), else CNPC_VHuman::vfunc259
	void sub_100076bc(int *pEvent);	// CNPC_VHuman::vfunc259 (stub 0x100076bc), called directly
	void sub_1038fa90(struct inputdata_t *pInput);	// input handler: stores the input's integer (0 unless its type is 4) at +0x6698, sub_1038c170(1) and starts schedule 0x160
	void sub_102ae750(int schedule, int a);	// stub 0x1000198d
	void sub_1038e640();	// stub 0x10012e4f
	void sub_1038e6a0();	// stub 0x1000c25c
	void sub_1038e6e0();	// stub 0x10011db0
	void sub_1038e670();	// stub 0x100036e8
	void sub_1038c250(CBaseEntity *pTarget);	// "launch at the target": with a target, sub_1038c170(1), the angles (slot 221) with the pitch cleared set back (slot 64), then the direction to the target (slot 220 of both) normalised and scaled by 200.0f becomes the velocity (CBaseEntity::sub_100b2770)
	void sub_10332aa0(int a, int b, int c);	// stub 0x10013cf5, called by vfunc103 with (1, 1, 10)
public:
	datamap_t * vfunc82();
	int vfunc138();
	int vfunc337();
	int vfunc451();
	bool vfunc452();
	int vfunc464();
	int vfunc580();
};
