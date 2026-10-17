// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10067c80 size=0x1e
#include "CTESprite.h"

// TARGET: CTESprite::vfunc2
CTESprite *CTESprite::vfunc2(unsigned int flags)
{
	sub_10013ee4();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
