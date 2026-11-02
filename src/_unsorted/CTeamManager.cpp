// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102307e0 size=0x28
#include "CTeamManager.h"

struct CGargoyleMemberUnit {
	void sub_10005263();
};

struct CGargoyleBaseUnit {
	void sub_1000cfbd();
};

void __cdecl sub_10430964(void *p);

// TARGET: CTeamManager::vfunc8
CTeamManager *CTeamManager::vfunc8(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x8))->sub_10005263();
	((CGargoyleBaseUnit *)this)->sub_1000cfbd();
	if (flags & 1)
		sub_10430964(this);
	return this;
}
// END FUNCTION
