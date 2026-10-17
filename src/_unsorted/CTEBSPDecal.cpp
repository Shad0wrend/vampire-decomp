// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005ee90 size=0x1e
#include "CTEBSPDecal.h"

// TARGET: CTEBSPDecal::vfunc2
CTEBSPDecal *CTEBSPDecal::vfunc2(unsigned int flags)
{
	sub_100035df();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
