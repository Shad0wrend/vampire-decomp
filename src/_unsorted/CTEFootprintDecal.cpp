// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10062e90 size=0x1e
#include "CTEFootprintDecal.h"

// TARGET: CTEFootprintDecal::vfunc2
CTEFootprintDecal *CTEFootprintDecal::vfunc2(unsigned int flags)
{
	sub_100059d4();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
