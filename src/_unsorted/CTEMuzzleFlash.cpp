// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10065e70 size=0x1e
#include "CTEMuzzleFlash.h"

// TARGET: CTEMuzzleFlash::vfunc2
CTEMuzzleFlash *CTEMuzzleFlash::vfunc2(unsigned int flags)
{
	sub_1000df12();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
