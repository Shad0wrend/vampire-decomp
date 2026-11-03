// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100b7970 size=0x20
#include "CBaseNetworkable.h"

extern char g_10451544[];

void *IServerNetworkable::vfunc14(char flags)
{
	*(void **)this = g_10451544;
	if (flags & 1)
		::operator delete(this);
	return this;
}
// END FUNCTION
