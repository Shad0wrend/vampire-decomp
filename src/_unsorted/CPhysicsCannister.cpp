// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10150670 size=0x1e
#include "CPhysicsCannister.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysicsCannister::vfunc5
CPhysicsCannister *CPhysicsCannister::vfunc5(unsigned int flags)
{
	sub_10001ebf();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
