// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1014ef80 size=0x1e
#include "CPhysicsAnimlink.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysicsAnimlink::vfunc5
CPhysicsAnimlink *CPhysicsAnimlink::vfunc5(unsigned int flags)
{
	sub_1000144c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
