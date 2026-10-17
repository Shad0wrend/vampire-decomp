// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10065000 size=0x1e
#include "CTEImpact.h"

// TARGET: CTEImpact::vfunc2
CTEImpact *CTEImpact::vfunc2(unsigned int flags)
{
	sub_1000c1a8();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
