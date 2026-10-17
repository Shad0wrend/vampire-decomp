// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10069f40 size=0x1e
#include "CTETParticleHUD.h"

// TARGET: CTETParticleHUD::vfunc2
CTETParticleHUD *CTETParticleHUD::vfunc2(unsigned int flags)
{
	sub_10006a5a();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
