// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
