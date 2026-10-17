// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005a630 size=0x1e
#include "CTEArmorRicochet.h"

// TARGET: CTEArmorRicochet::vfunc2
CTEArmorRicochet *CTEArmorRicochet::vfunc2(unsigned int flags)
{
	sub_1000e340();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
