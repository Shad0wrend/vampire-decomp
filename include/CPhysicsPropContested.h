// CPhysicsPropContested: physics prop that can be contested (derived from CPhysicsProp at +0x0).
// Only the members that decompiled code needs are declared.
#pragma once

#include "CPhysicsProp.h"

class CPhysicsPropContested : public CPhysicsProp
{
public:
	virtual bool vfunc32(int a);	// slot 32 override: the base implementation unless the byte at +0x7ac is clear (then true)

	char m_pad0004[0x7a8];
	char m_b7ac;
};
