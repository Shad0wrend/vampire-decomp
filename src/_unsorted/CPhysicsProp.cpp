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

// FUNCTION: 0x101912f0 size=0x36
#include "CPhysicsProp.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1008b3c0();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CPhysicsProp *CPhysicsProp::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x748))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x730))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
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
