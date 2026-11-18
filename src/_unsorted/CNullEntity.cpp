// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c08e0 size=0x8
#include "CNullEntity.h"
void sub_101cd940(CNullEntity *p);
// TARGET: CNullEntity::vfunc103
void CNullEntity::vfunc103() { sub_101cd940(this); }
// END FUNCTION

// FUNCTION: 0x101c2030 size=0x1e
#include "CNullEntity.h"

void sub_100aa7b0(void *p);

// TARGET: CNullEntity::vfunc5
CBaseEntity *CNullEntity::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
