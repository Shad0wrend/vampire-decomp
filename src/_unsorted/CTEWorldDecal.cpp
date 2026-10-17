// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1006af80 size=0x1e
#include "CTEWorldDecal.h"

// TARGET: CTEWorldDecal::vfunc2
CTEWorldDecal *CTEWorldDecal::vfunc2(unsigned int flags)
{
	sub_1000e9df();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
