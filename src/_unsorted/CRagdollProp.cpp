// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101552d0 size=0x1e
#include "CRagdollProp.h"

void sub_100aa7b0(void *p);

// TARGET: CRagdollProp::vfunc5
CRagdollProp *CRagdollProp::vfunc5(unsigned int flags)
{
	sub_10014317();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
