// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005b3a0 size=0x1e
#include "CTEBeamEnts.h"

// TARGET: CTEBeamEnts::vfunc2
CTEBeamEnts *CTEBeamEnts::vfunc2(unsigned int flags)
{
	sub_1000dcfb();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
