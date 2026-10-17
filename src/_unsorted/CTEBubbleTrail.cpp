// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005fcf0 size=0x1e
#include "CTEBubbleTrail.h"

// TARGET: CTEBubbleTrail::vfunc2
CTEBubbleTrail *CTEBubbleTrail::vfunc2(unsigned int flags)
{
	sub_100157ee();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
