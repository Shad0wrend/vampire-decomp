// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10050550 size=0x1e
#include "CPhysExplosion.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysExplosion::vfunc5
CPhysExplosion *CPhysExplosion::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
