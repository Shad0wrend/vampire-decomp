// CNPC_VManBat: man-bat NPC (base chain not modelled). Only what decompiled code needs.
#pragma once

class CBaseEntity;

class CNPC_VManBat
{
public:
	char m_pad0000[0x6670];
	unsigned int m_n6670;
	int m_n6674;
	char m_pad6678[0x6684 - 0x6678];
	float m_f6684;

	bool sub_1038f290();
	CNPC_VManBat *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100123af();	// as in CPhysForce (transplant)
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	bool vfunc566(CBaseEntity *pEnt);	// "does pEnt (a point entity with type 20000 at +0x5dc) carry the name this bat looks for": builds the name from the state at +0x6670 / +0x6674 (\"ManBat Landpoint\", \"ManBat Divepoint %d\" ...) and compares it with the entity name, supporting a trailing '*'
	int vfunc438();	// slot 438 "CNPC_VManBat::SelectSchedule": 0x158 (and +0x6674 = 1) unless sub_1027d990() is 2; 0x159 (and +0x6674 = 1) when the checksum of the scrambled value at +0x6670 does not match; then 0x15f / 0x15d / a random schedule 0x15c, 0x15d, 0x161, 0x163 or 0x159
	int sub_1027d990();	// CUnknown1027d990::sub_1027d990 (stub 0x100023a1): the NPC's current state
	char sub_10269d30(int condition);	// "HasConditionAndNotIgnored" (stub 0x1001482b)
	void vfunc104();	// "Precache": the Human precache, the man-bat models / sounds / emitters (tables of names at 0x10640ce0, 0x10640d10, 0x10640d1c, 0x10640d28), the sheriff teleport emitter and the claw weapon
	void sub_100013f7();	// CNPC_VHuman::vfunc104 (jump stub), called directly
};
