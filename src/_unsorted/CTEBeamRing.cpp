// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005c630 size=0x1e
#include "CTEBeamRing.h"

// TARGET: CTEBeamRing::vfunc2
CTEBeamRing *CTEBeamRing::vfunc2(unsigned int flags)
{
	sub_10002667();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
