// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1011bd30 size=0x20
#include "IServerGameEnts.h"

extern char g_10462780;
void sub_10430964(void *p);

// TARGET: IServerGameEnts::vfunc0
void *IServerGameEnts::vfunc0(unsigned char bFree)
{
	*(void **)this = &g_10462780;
	if (bFree & 1)
		sub_10430964(this);
	return this;
}
// END FUNCTION
