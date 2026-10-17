// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10066360 size=0x1e
#include "CTEPlayerDecal.h"

// TARGET: CTEPlayerDecal::vfunc2
CTEPlayerDecal *CTEPlayerDecal::vfunc2(unsigned int flags)
{
	sub_1000a1dc();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
