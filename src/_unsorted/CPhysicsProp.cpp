// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101912a0 size=0x18
#include "CPhysicsProp.h"

void CPhysicsProp::vfunc226(int a)
{
	CBaseEntity::vfunc226(a);
	*((char *)this + 0x1b1) = 1;
}
// END FUNCTION

// FUNCTION: 0x101917c0 size=0x1f
#include "CPhysicsProp.h"

CBaseEntity *sub_104115b0(int a, int b);

bool CPhysicsProp::vfunc32(int a)
{
	return this == sub_104115b0(a, 0);
}
// END FUNCTION
