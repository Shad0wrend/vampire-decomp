// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102f5060 size=0x1e
#include "CAI_NetworkManager.h"

void sub_100aa7b0(void *p);

// TARGET: CAI_NetworkManager::vfunc5
CAI_NetworkManager *CAI_NetworkManager::vfunc5(unsigned int flags)
{
	sub_100107a3();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
