// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002b0d0 size=0x1e
#include "CPhysConstraint.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysConstraint::vfunc5
CPhysConstraint *CPhysConstraint::vfunc5(unsigned int flags)
{
	sub_100121ac();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1002b1b0 size=0x13
#include "CPhysConstraint.h"
void __fastcall sub_10012c06(CPhysConstraint *self);

// TARGET: CPhysConstraint::vfunc103
void CPhysConstraint::vfunc103()
{
	sub_10012c06(this);
	vfunc104();
}
// END FUNCTION
