// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1004fcb0 size=0xab
#include "ScopeTrace.h"
#include "CSimplePhysicsProp.h"
#include "CCollisionProperty.h"
#include "CUnknown101466e0.h"

void CSimplePhysicsProp::vfunc103()
{
	sub_10011793();
	vfunc93(7, 0);
	{
		const char *name = *(const char **)((char *)this + 0x26c);
		ScopeTrace trace("CBaseEntity::SetSolid", name ? name : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(6);
	}
	*(int *)((char *)this + 0x1fc) = 1;
	((CUnknown101466e0 *)((char *)this + 0x1b0))->sub_101466e0(1);
	sub_100b3900(2);
}
// END FUNCTION

// FUNCTION: 0x1004fe80 size=0x1e
#include "CSimplePhysicsProp.h"

void sub_100aa7b0(void *p);

// TARGET: CSimplePhysicsProp::vfunc5
CSimplePhysicsProp *CSimplePhysicsProp::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
