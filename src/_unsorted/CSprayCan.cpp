// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10184420 size=0x1e
#include "CSprayCan.h"

void sub_100aa7b0(void *p);

// TARGET: CSprayCan::vfunc5
CSprayCan *CSprayCan::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
