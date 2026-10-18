// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1040a750 size=0x1e
#include "CItemGBrotherhoodFlyer.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGBrotherhoodFlyer::vfunc5
CItemGBrotherhoodFlyer *CItemGBrotherhoodFlyer::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
