// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10119ff0 size=0x20
#include "IServerGameDLL.h"

extern char g_1046257c;
void sub_10430964(void *p);

// TARGET: IServerGameDLL::vfunc0
void *IServerGameDLL::vfunc0(unsigned char bFree)
{
	*(void **)this = &g_1046257c;
	if (bFree & 1)
		sub_10430964(this);
	return this;
}
// END FUNCTION
