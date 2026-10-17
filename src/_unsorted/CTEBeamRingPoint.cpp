// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005cc00 size=0x1e
#include "CTEBeamRingPoint.h"

// TARGET: CTEBeamRingPoint::vfunc2
CTEBeamRingPoint *CTEBeamRingPoint::vfunc2(unsigned int flags)
{
	sub_10008404();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
