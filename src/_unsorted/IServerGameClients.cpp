// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1011bf50 size=0x20
#include "IServerGameClients.h"

extern char g_104627e0;
void sub_10430964(void *p);

// TARGET: IServerGameClients::vfunc0
void *IServerGameClients::vfunc0(unsigned char bFree)
{
	*(void **)this = &g_104627e0;
	if (bFree & 1)
		sub_10430964(this);
	return this;
}
// END FUNCTION
