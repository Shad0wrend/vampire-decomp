// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100fd920 size=0x1e
#include "CEnvPlayerSurfaceTrigger.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvPlayerSurfaceTrigger::vfunc5
CEnvPlayerSurfaceTrigger *CEnvPlayerSurfaceTrigger::vfunc5(unsigned int flags)
{
	sub_100108ed();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
