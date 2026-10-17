// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100639f0 size=0x1e
#include "CTEGlowSprite.h"

// TARGET: CTEGlowSprite::vfunc2
CTEGlowSprite *CTEGlowSprite::vfunc2(unsigned int flags)
{
	sub_10004fb1();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
