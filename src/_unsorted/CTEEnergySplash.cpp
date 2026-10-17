// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10061290 size=0x1e
#include "CTEEnergySplash.h"

// TARGET: CTEEnergySplash::vfunc2
CTEEnergySplash *CTEEnergySplash::vfunc2(unsigned int flags)
{
	sub_10001c7b();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
