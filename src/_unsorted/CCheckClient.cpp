// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101d1760 size=0x1f
#include "CCheckClient.h"
void CCheckClient::vfunc2()
{
    *(int *)((char *)this + 0x2008) = -1;
    *(int *)((char *)this + 0x200c) = 1;
    *(int *)((char *)this + 0x2010) = -1082130432;
}
// END FUNCTION

// FUNCTION: 0x101d17d0 size=0x1e
#include "CCheckClient.h"

// TARGET: CCheckClient::vfunc8
CAutoGameSystem *CCheckClient::vfunc8(unsigned int flags)
{
	sub_1000cfbd();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
