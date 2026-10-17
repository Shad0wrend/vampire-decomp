// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10067050 size=0x1e
#include "CTESmoke.h"

// TARGET: CTESmoke::vfunc2
CTESmoke *CTESmoke::vfunc2(unsigned int flags)
{
	sub_10002fa4();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
