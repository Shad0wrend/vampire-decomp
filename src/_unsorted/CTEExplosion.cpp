// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10061890 size=0x1e
#include "CTEExplosion.h"

// TARGET: CTEExplosion::vfunc2
CTEExplosion *CTEExplosion::vfunc2(unsigned int flags)
{
	sub_1000e90d();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
