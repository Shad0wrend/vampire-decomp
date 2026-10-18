// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1040a060 size=0x1e
#include "COccultPassiveDurations.h"

void sub_100aa7b0(void *p);

// TARGET: COccultPassiveDurations::vfunc5
COccultPassiveDurations *COccultPassiveDurations::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
