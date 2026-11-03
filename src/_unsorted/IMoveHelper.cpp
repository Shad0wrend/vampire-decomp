// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1013ee10 size=0x20
#include "IMoveHelper.h"

extern char g_1046afbc[];

void *IMoveHelper::vfunc14(char flags)
{
	*(void **)this = g_1046afbc;
	if (flags & 1)
		::operator delete(this);
	return this;
}
// END FUNCTION
