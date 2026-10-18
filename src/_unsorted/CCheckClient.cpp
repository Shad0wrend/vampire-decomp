// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101d17d0 size=0x1e
#include "CCheckClient.h"

// TARGET: CCheckClient::vfunc8
CCheckClient *CCheckClient::vfunc8(unsigned int flags)
{
	sub_1000cfbd();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
