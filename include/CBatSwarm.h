// CBatSwarm: swarm of bats (CBaseAnimating -> CBaseToggle -> CBaseEntity). Only what decompiled code needs.
#pragma once

#include "CBaseAnimating.h"
#include "Vector.h"

class CBatSwarm : public CBaseAnimating
{
public:
	char m_pad03e0[0x350];
	unsigned int m_mask730;
	unsigned int m_mask734;
	float m_flSpeed738;
	char m_bSlow73c;
	char m_pad073d[0x740 - 0x73d];
	int m_nLimit740;
	char m_pad0744[0x8d8 - 0x744];
	Vector m_vecPos[32];	// 0x8d8
	float m_vecBatVelocity[32];	// 0x0a58
	char m_pad0ad8[0xbd8 - 0xad8];
	bool m_bBatHittingPlayer[32];	// 0x0bd8
	int m_nBat[32];	// 0xbf8

	// Slot 141, called directly so far; declared as a plain member.
	void vfunc141(int *pRef, int unused, void *pInfo);

	bool sub_100ba0c0(void *pEntity);	// slot 68: true when the entity is set and its field at +0xa8 is non-null
	CBatSwarm *vfunc5(unsigned int flags);	// as in CSimplePhysicsProp (transplant)
	void sub_10004c3c();	// as in CSimplePhysicsProp (transplant)
	bool vfunc69(void *pEntity);	// as in CBatSwarm (transplant)
	void vfunc104();	// as in CCameraAnimated (transplant)
	CBatSwarm *sub_100b8730();	// as in CKeepUpright (transplant)
	void vfunc101(Vector *pMins, Vector *pMaxs);	// slot 101: bounds of the active bats
	bool sub_100b99d0();	// true when no active bat is below the limit at +0x740
	void sub_100b8b50();	// per-think movement: steps the active bats (mask at +0x734) in up to 10 sub-steps of the time since the last think (+0x178) with sub_100b8d50
	void vfunc265(int iBat);	// slot 265: clears the bat from both active masks (+0x730 / +0x734) and spawns an "Impact_Flesh_Emitter" at its position
	void vfunc266(int a);	// slot 266: the entity of player index 1 gets slot 320(0, 0x76) when there is one
	void sub_100b8d50(int iBat, float flStep);	// moves one bat (stub 0x10007405), called directly
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc81();
    virtual int vfunc80();
};
