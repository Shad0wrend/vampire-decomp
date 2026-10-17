// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10064080 size=0x1e
#include "CTEGunshotDecal.h"

// TARGET: CTEGunshotDecal::vfunc2
CTEGunshotDecal *CTEGunshotDecal::vfunc2(unsigned int flags)
{
	sub_1001520d();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
