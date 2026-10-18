// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102d9ae0 size=0x1e
#include "CAI_InterestingPlace.h"

void sub_100aa7b0(void *p);

// TARGET: CAI_InterestingPlace::vfunc5
CAI_InterestingPlace *CAI_InterestingPlace::vfunc5(unsigned int flags)
{
	sub_1000a25e();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
