// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005ac60 size=0x1e
#include "CTEBeamEntPoint.h"

// TARGET: CTEBeamEntPoint::vfunc2
CTEBeamEntPoint *CTEBeamEntPoint::vfunc2(unsigned int flags)
{
	sub_1000d8d7();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
