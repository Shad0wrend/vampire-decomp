// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005d940 size=0x1e
#include "CTEBloodSprite.h"

// TARGET: CTEBloodSprite::vfunc2
CTEBloodSprite *CTEBloodSprite::vfunc2(unsigned int flags)
{
	sub_1000d4b8();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
