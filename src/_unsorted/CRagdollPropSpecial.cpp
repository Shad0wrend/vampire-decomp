// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10158120 size=0x1e
#include "CRagdollPropSpecial.h"

void sub_100aa7b0(void *p);

// TARGET: CRagdollPropSpecial::vfunc5
CBaseEntity *CRagdollPropSpecial::vfunc5(unsigned int flags)
{
	sub_10014317();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
