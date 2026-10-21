// CSoundScheme: declared by pcdecomp transplant for 0x1022a1d0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CAI_BaseNPC;

struct CSoundSchemeList	// one of the scheme's sound lists (+0x460, +0x4f0, +0x4a8, +0x538); only the two dwords at +0x40 / +0x44 are used so far
{
	char m_pad0000[0x40];
	int m_n40;
	int m_n44;
};

class CSoundScheme : public CBaseEntity
{
public:
	CSoundScheme *vfunc5(unsigned int flags);
	void sub_1000bccb();
	void sub_1000cb8a();
	void sub_1022a200();	// destructor body (stub 0x1000bccb): resets the vtable, purges the vectors at +0x580 and +0x594
	CSoundScheme *sub_1022a0f0();	// as in CKeepUpright (transplant)
	void sub_1022b590(float flDelay);	// when not started yet (byte at +0x455): hands the NPC found by sub_101cda50 this scheme, registers the sounds with the global at 0x10750d78 (lists at +0x460, +0x4f0, +0x4a8, +0x538), sets the think function and the start flag and schedules the next think 0.1 s ahead; the delay is at least 0.5
	void sub_10229270(float flDelay, CSoundSchemeList *pA, CSoundSchemeList *pB, CSoundSchemeList *pC, CSoundSchemeList *pD);	// drops the stale entity handles of the vector at +0x19c (count at +0x1a8) and runs sub_1022b660 on the live ones, then registers the four lists (pA at +0x14, pD at +0xc4, pC at +0x6c, pB at +0x11c) through sub_10229430 (stub 0x10006663)
	void sub_10229430(CSoundSchemeList *pList, int a, int b, float flDelay, void *pDest);	// stub 0x10006663
};
