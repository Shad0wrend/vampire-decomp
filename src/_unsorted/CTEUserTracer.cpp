// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1006aa60 size=0x1e
#include "CTEUserTracer.h"

// TARGET: CTEUserTracer::vfunc2
CTEUserTracer *CTEUserTracer::vfunc2(unsigned int flags)
{
	sub_1000b2b7();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
