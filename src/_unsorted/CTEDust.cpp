// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10114050 size=0x1e
#include "CTEDust.h"

// TARGET: CTEDust::vfunc2
CTEDust *CTEDust::vfunc2(unsigned int flags)
{
	sub_100058d5();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
