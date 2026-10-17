// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005f610 size=0x1e
#include "CTEBubbles.h"

// TARGET: CTEBubbles::vfunc2
CTEBubbles *CTEBubbles::vfunc2(unsigned int flags)
{
	sub_1000e2c8();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
