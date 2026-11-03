// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1011b560 size=0x20
#include "IRestore.h"

extern char g_104626bc;
void sub_10430964(void *p);

// TARGET: IRestore::vfunc34
void *IRestore::vfunc34(unsigned char bFree)
{
	*(void **)this = &g_104626bc;
	if (bFree & 1)
		sub_10430964(this);
	return this;
}
// END FUNCTION
