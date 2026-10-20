// CEnvShooter: declared by pcdecomp transplant for 0x100f5ad0 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

#include "Vector.h"

class CBaseEntity;

class CEnvShooter
{
public:
	CEnvShooter *vfunc5(unsigned int flags);
	void sub_1000cb8a();

	// Slot 242, declared as a plain member.
	CBaseEntity *vfunc242(Vector origin, Vector angles);	// "CEnvShooter::CreateEnvGib"-like: creates a prop_physics at origin / angles with the model of slot 9, the skin-like value at +0x478 copied to +0x670, spawns it, sets bits 5 and 7 of +0x19c and applies a random 0.95..1.05 times the float at +0x468; returns it
};
