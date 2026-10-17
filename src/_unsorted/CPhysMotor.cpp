// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10028c00 size=0x1e
#include "CPhysMotor.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysMotor::vfunc5
CPhysMotor *CPhysMotor::vfunc5(unsigned int flags)
{
	sub_10013b33();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
