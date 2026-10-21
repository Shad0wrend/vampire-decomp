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
	char m_pad0738[0x1a0];
	Vector m_vecPos[32];	// 0x8d8

	// Slot 141, called directly so far; declared as a plain member.
	void vfunc141(int *pRef, int unused, void *pInfo);

	bool sub_100ba0c0(void *pEntity);	// slot 68: true when the entity is set and its field at +0xa8 is non-null
	CBatSwarm *vfunc5(unsigned int flags);	// as in CSimplePhysicsProp (transplant)
	void sub_10004c3c();	// as in CSimplePhysicsProp (transplant)
	bool vfunc69(void *pEntity);	// as in CBatSwarm (transplant)
	void vfunc104();	// as in CCameraAnimated (transplant)
	CBatSwarm *sub_100b8730();	// as in CKeepUpright (transplant)
	void vfunc101(Vector *pMins, Vector *pMaxs);	// slot 101: bounds of the active bats
};
