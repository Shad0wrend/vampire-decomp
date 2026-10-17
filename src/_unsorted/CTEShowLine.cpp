// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10066ab0 size=0x1e
#include "CTEShowLine.h"

// TARGET: CTEShowLine::vfunc2
CTEShowLine *CTEShowLine::vfunc2(unsigned int flags)
{
	sub_1001527b();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
