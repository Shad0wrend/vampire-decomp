// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005dfb0 size=0x1e
#include "CTEBloodStream.h"

// TARGET: CTEBloodStream::vfunc2
CTEBloodStream *CTEBloodStream::vfunc2(unsigned int flags)
{
	sub_100141d2();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
