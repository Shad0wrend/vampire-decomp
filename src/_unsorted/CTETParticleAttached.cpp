// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10069a50 size=0x1e
#include "CTETParticleAttached.h"

// TARGET: CTETParticleAttached::vfunc2
CTETParticleAttached *CTETParticleAttached::vfunc2(unsigned int flags)
{
	sub_100021e9();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
