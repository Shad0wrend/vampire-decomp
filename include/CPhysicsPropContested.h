// CPhysicsPropContested: physics prop that can be contested (derived from CPhysicsProp at +0x0).
// Only the members that decompiled code needs are declared. The modelled part of CBaseEntity ends at +0x3e0.
#pragma once

#include "CPhysicsProp.h"

class CPhysicsPropContested : public CPhysicsProp
{
public:
	virtual bool vfunc32(int a);	// slot 32 override: the base implementation unless the byte at +0x7ac is clear (then true)
	void vfunc41(CBaseEntity *pOther);	// slot 41 (declared as a plain member: the base slot has no argument here): the base implementation while the byte at +0x7ac is set; else, for a character whose stat list 0 value 1 is below the dword at +0x78c, the character's player object (+0xa8) is told (slot 306) and the player view message 0x2f is sent, otherwise the base worker sub_10192b50 runs
	void sub_10191810(CBaseEntity *pOther);	// CPhysicsProp::vfunc41 (stub 0x10015cb7), called directly
	void sub_10192b50(CBaseEntity *pOther);	// stub 0x1000b7bc, called directly

	char m_pad03e0[0x78c - 0x3e0];
	int m_n78c;
	char m_pad0790[0x7ac - 0x790];
	char m_b7ac;
};
