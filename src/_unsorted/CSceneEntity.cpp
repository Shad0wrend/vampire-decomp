// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100809c0 size=0x1e
#include "CSceneEntity.h"

void sub_100aa7b0(void *p);

// TARGET: CSceneEntity::vfunc5
CSceneEntity *CSceneEntity::vfunc5(unsigned int flags)
{
	sub_1000b1ef();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10080f60 size=0x8
// TARGET: CSceneEntity::vfunc103
void CSceneEntity::vfunc103()
{
	vfunc104();
}
// END FUNCTION
