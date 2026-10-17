// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10069470 size=0x1e
#include "CTETParticle.h"

// TARGET: CTETParticle::vfunc2
CTETParticle *CTETParticle::vfunc2(unsigned int flags)
{
	sub_1001267a();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
