// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10059e50 size=0x1e
#include "CTEMetalSparks.h"

// TARGET: CTEMetalSparks::vfunc2
CTEMetalSparks *CTEMetalSparks::vfunc2(unsigned int flags)
{
	sub_1000e340();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
