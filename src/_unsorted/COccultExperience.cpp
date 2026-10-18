// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10409fa0 size=0x1e
#include "COccultExperience.h"

void sub_100aa7b0(void *p);

// TARGET: COccultExperience::vfunc5
COccultExperience *COccultExperience::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
