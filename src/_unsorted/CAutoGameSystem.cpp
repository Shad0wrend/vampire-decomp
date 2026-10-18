// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1042c290 size=0x1e
#include "CDirtySpatialPartitionEntityList.h"

// TARGET: CAutoGameSystem::vfunc8
CAutoGameSystem *CAutoGameSystem::vfunc8(unsigned int flags)
{
	sub_1000cfbd();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
