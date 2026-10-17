// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1006a440 size=0x1e
#include "CTETracer.h"

// TARGET: CTETracer::vfunc2
CTETracer *CTETracer::vfunc2(unsigned int flags)
{
	sub_1000f236();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
