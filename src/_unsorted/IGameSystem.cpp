// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1042c2e0 size=0x1e
#include "IGameSystem.h"

// TARGET: IGameSystem::vfunc8
IGameSystem *IGameSystem::vfunc8(unsigned int flags)
{
	sub_1000cfbd();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
