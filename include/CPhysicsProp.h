// CPhysicsProp: physics-simulated prop entity (derived from CBaseEntity at +0x0 through further bases that are not modelled).
// Only the members that decompiled code needs are declared.
#pragma once

#include "CBaseEntity.h"

class CPhysicsProp : public CBaseEntity
{
public:
	virtual bool vfunc32(int a);	// slot 32 override
	void vfunc226(int a);	// slot 226 override: base implementation, then sets the byte at +0x1b1
};
