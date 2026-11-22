// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101ab0e0 size=0x52
#include "CCineNPC.h"

void sub_100aa7b0(void *);

struct Helper
{
	void *sub_101ab0e0(unsigned int flags);
};

// TARGET: Helper::sub_101ab0e0
void *Helper::sub_101ab0e0(unsigned int flags)
{
	CCineNPCSlot *p = (CCineNPCSlot *)((char *)this + 0x608c);
	int n = 8;
	do {
		--p;
		p->sub_10015708();
	} while (--n);
	((CCineNPCSlot *)((char *)this + 0x5fb4))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x5f9c))->sub_10015708();
	((CCineNPC *)this)->sub_1000c9cd();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
