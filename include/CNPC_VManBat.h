// CNPC_VManBat: man-bat NPC (base chain not modelled). Only what decompiled code needs.
#pragma once

class CBaseEntity;

class CNPC_VManBat
{
public:
	char m_pad0000[0x628c];
	unsigned int m_h628c;	// entity handle of the bat's target
	char m_pad6290[0x6670 - 0x6290];
	unsigned int m_n6670;
	int m_n6674;
	char m_pad6678[0x6684 - 0x6678];
	float m_f6684;
	char m_pad6688[0x668c - 0x6688];
	unsigned int m_h668c;	// entity handle of the ragdoll the bat holds (released by sub_1038f660)
	unsigned int m_h6690;	// entity handle released by sub_1038f660
	char m_b6694;	// handed to the ragdoll when it is let go
	char m_pad6695[0x66a4 - 0x6695];
	unsigned int m_h66a4;	// entity handle released by vfunc144
	char m_pad66a8[0x66b0 - 0x66a8];
	char m_b66b0;	// set once the minions have been told about the target

	bool sub_1038f290();
	CNPC_VManBat *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100123af();	// as in CPhysForce (transplant)
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	bool vfunc566(CBaseEntity *pEnt);	// "does pEnt (a point entity with type 20000 at +0x5dc) carry the name this bat looks for": builds the name from the state at +0x6670 / +0x6674 ("ManBat Landpoint", "ManBat Divepoint %d" ...) and compares it with the entity name, supporting a trailing '*'
	int vfunc438();	// slot 438 "CNPC_VManBat::SelectSchedule": 0x158 (and +0x6674 = 1) unless sub_1027d990() is 2; 0x159 (and +0x6674 = 1) when the checksum of the scrambled value at +0x6670 does not match; then 0x15f / 0x15d / a random schedule 0x15c, 0x15d, 0x161, 0x163 or 0x159
	int sub_1027d990();	// CUnknown1027d990::sub_1027d990 (stub 0x100023a1): the NPC's current state
	char sub_10269d30(int condition);	// "HasConditionAndNotIgnored" (stub 0x1001482b)
	void vfunc104();	// "Precache": the Human precache, the man-bat models / sounds / emitters (tables of names at 0x10640ce0, 0x10640d10, 0x10640d1c, 0x10640d28), the sheriff teleport emitter and the claw weapon
	void sub_100013f7();	// CNPC_VHuman::vfunc104 (jump stub), called directly
	void sub_1038c170(int nMode);	// switches between the grounded (1: flag 0x400 set, state 2) and the flying (other: flag cleared, state 0) setup, then slot 93(4, 0)
	void sub_1038fc80();	// tells every living \"ManBat_Minion\" NPC without a target about the bat's target (once; sets the flag at +0x66b0)
	void sub_1038fd40();	// the reverse of sub_1038fc80: while the flag at +0x66b0 is set, every living \"ManBat_Minion\" NPC with a target count is released (sub_1026d0c0), told about the bat's target (relationship 1 / 10) and scheduled (sub_102ae840 with 2 when slot 167 of the bat answers, else 1); then clears the flag
	void vfunc144(int arg);	// slot 144: sub_1038f020(1), sub_1038c170(2), sub_1038f660, sub_1038fd40, releases the entity behind the handle at +0x66a4, then CNPC_VVampire::vfunc144
	void sub_1038f020(int a);	// stub 0x10015591, called by vfunc144 first
	void sub_1038f660();	// stub 0x10005ca9: while carried (flag 5 of +0x14b8), lets the ragdoll of the handle at +0x668c go (with the byte at +0x6694), removes the entity of the handle at +0x6690 and clears the carry flag (sub_1038f600(0))
	void sub_103c4f40(int arg);	// CNPC_VVampire::vfunc144 (stub 0x1000b8a2), called directly
	void sub_1038f600(char bOn);	// sets / clears bit 5 of the flags at +0x14b8
};
