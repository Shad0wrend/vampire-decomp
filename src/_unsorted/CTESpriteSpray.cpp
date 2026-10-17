// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10068490 size=0x1e
#include "CTESpriteSpray.h"

// TARGET: CTESpriteSpray::vfunc2
CTESpriteSpray *CTESpriteSpray::vfunc2(unsigned int flags)
{
	sub_1000bc7b();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
