// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1023b620 size=0xd
void CWorld::vfunc130(int a)
{
	volatile int *p = &a;
	*p = *p;
	CBaseEntity::vfunc130(a);
}
// END FUNCTION

// FUNCTION: 0x1023ba00 size=0x1e
#include "CWorld.h"

void sub_100aa7b0(void *p);

// TARGET: CWorld::vfunc5
CWorld *CWorld::vfunc5(unsigned int flags)
{
	sub_1000fe98();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
