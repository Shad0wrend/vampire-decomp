// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10073bf0 size=0x1e
#include "CFlexAnimationTrack.h"

// TARGET: CFlexAnimationTrack::vfunc0
CFlexAnimationTrack *CFlexAnimationTrack::vfunc0(unsigned int flags)
{
	sub_1000fbaa();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
