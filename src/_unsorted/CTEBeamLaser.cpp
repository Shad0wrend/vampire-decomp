// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005b980 size=0x1e
#include "CTEBeamLaser.h"

// TARGET: CTEBeamLaser::vfunc2
CTEBeamLaser *CTEBeamLaser::vfunc2(unsigned int flags)
{
	sub_100051c8();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
