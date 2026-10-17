// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10062540 size=0x1e
#include "CTEFogRipple.h"

// TARGET: CTEFogRipple::vfunc2
CTEFogRipple *CTEFogRipple::vfunc2(unsigned int flags)
{
	sub_1000a08d();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
