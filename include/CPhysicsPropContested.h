// CPhysicsPropContested: physics prop that can be contested (derived from CPhysicsProp at +0x0).
// Only the members that decompiled code needs are declared. The modelled part of CBaseEntity ends at +0x3e0.
#pragma once

#include "CPhysicsProp.h"

class CPhysicsPropContested : public CPhysicsProp
{
public:
	virtual bool vfunc32(int a);	// slot 32 override: the base implementation unless the byte at +0x7ac is clear (then true)

	char m_pad03e0[0x7ac - 0x3e0];
	char m_b7ac;
};
