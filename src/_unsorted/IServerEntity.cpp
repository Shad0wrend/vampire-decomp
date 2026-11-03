// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1009dec0 size=0x20
#include "IServerEntity.h"

extern char g_10450a10[];

void *IServerEntity::vfunc5(char flags)
{
	*(void **)this = g_10450a10;
	if (flags & 1)
		::operator delete(this);
	return this;
}
// END FUNCTION
