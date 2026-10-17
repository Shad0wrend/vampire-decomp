// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10061fb0 size=0x1e
#include "CTEFizz.h"

// TARGET: CTEFizz::vfunc2
CTEFizz *CTEFizz::vfunc2(unsigned int flags)
{
	sub_100142b8();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
