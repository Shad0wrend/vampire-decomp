// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10064a70 size=0x1e
#include "CTEExplosiveGunshotDecal.h"

// TARGET: CTEExplosiveGunshotDecal::vfunc2
CTEExplosiveGunshotDecal *CTEExplosiveGunshotDecal::vfunc2(unsigned int flags)
{
	sub_10010f0a();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10064ac0 size=0x1
#include "CTEExplosiveGunshotDecal.h"
void CTEExplosiveGunshotDecal::vfunc5()
{
}
// END FUNCTION
