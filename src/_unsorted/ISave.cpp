// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1011b2d0 size=0x20
#include "ISave.h"

extern char g_104625f4;
void sub_10430964(void *p);

// TARGET: ISave::vfunc39
void *ISave::vfunc39(unsigned char bFree)
{
	*(void **)this = &g_104625f4;
	if (bFree & 1)
		sub_10430964(this);
	return this;
}
// END FUNCTION
