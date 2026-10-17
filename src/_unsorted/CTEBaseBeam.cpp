// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005a780 size=0x1e
#include "CTEBaseBeam.h"

// TARGET: CTEBaseBeam::vfunc2
CTEBaseBeam *CTEBaseBeam::vfunc2(unsigned int flags)
{
	sub_1000d08f();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
