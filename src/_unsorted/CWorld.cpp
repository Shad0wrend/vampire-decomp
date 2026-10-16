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
