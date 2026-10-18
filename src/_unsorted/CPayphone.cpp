// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101ab1b0 size=0x1e
#include "CPayphone.h"

void sub_100aa7b0(void *p);

// TARGET: CPayphone::vfunc5
CPayphone *CPayphone::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
