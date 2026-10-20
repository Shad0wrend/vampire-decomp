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
};
