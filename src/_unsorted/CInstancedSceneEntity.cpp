// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10084f80 size=0x1e
#include "CInstancedSceneEntity.h"

void sub_100aa7b0(void *p);

// TARGET: CInstancedSceneEntity::vfunc5
CInstancedSceneEntity *CInstancedSceneEntity::vfunc5(unsigned int flags)
{
	sub_1000b1ef();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
