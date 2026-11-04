// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1018a450 size=0xb
extern int g_1072a498;
void sub_1018a450(void)
{
	g_1072a498 = 0;
}
// END FUNCTION

// FUNCTION: 0x1018a4b0 size=0x1e
#include "CSkyList.h"

// TARGET: CSkyList::vfunc8
CAutoGameSystem *CSkyList::vfunc8(unsigned int flags)
{
	sub_1000cfbd();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
