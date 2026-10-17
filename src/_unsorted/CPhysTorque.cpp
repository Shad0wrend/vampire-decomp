// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10029b80 size=0x1e
#include "CPhysTorque.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysTorque::vfunc5
CPhysTorque *CPhysTorque::vfunc5(unsigned int flags)
{
	sub_10014470();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
