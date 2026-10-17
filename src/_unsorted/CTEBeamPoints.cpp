// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005bf50 size=0x1e
#include "CTEBeamPoints.h"

// TARGET: CTEBeamPoints::vfunc2
CTEBeamPoints *CTEBeamPoints::vfunc2(unsigned int flags)
{
	sub_1000a9fc();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
