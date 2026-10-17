// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10063060 size=0x1e
#include "CTEShatterSurface.h"

// TARGET: CTEShatterSurface::vfunc2
CTEShatterSurface *CTEShatterSurface::vfunc2(unsigned int flags)
{
	sub_100021d0();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
