// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10147fb0 size=0x2b
#include "CPathCornerCrash.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_1000cb8a();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CPathCornerCrash::vfunc5
CPathCornerCrash *CPathCornerCrash::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x454))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION
