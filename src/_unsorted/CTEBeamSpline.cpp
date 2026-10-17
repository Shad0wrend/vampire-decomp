// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005d270 size=0x1e
#include "CTEBeamSpline.h"

// TARGET: CTEBeamSpline::vfunc2
CTEBeamSpline *CTEBeamSpline::vfunc2(unsigned int flags)
{
	sub_10007f81();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
