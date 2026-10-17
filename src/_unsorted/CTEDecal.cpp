// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100603c0 size=0x1e
#include "CTEDecal.h"

// TARGET: CTEDecal::vfunc2
CTEDecal *CTEDecal::vfunc2(unsigned int flags)
{
	sub_100038eb();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
