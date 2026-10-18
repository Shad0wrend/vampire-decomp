// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102d77d0 size=0x1e
#include "CAI_TestHull.h"

void sub_100aa7b0(void *p);

// TARGET: CAI_TestHull::vfunc5
CAI_TestHull *CAI_TestHull::vfunc5(unsigned int flags)
{
	sub_100033a0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
