// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002cb10 size=0x1e
#include "CPhysBallSocket.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysBallSocket::vfunc5
CPhysConstraint *CPhysBallSocket::vfunc5(unsigned int flags)
{
	sub_100121ac();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
