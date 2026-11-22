// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101ab060 size=0x52
#include "CCineAI.h"

void sub_100aa7b0(void *);

// TARGET: CCineAI::vfunc5
CCineAI *CCineAI::vfunc5(unsigned int flags)
{
	CCineNPCSlot *p = m_slots + 8;
	int n = 8;
	do {
		--p;
		p->sub_10015708();
	} while (--n);
	m_slotB.sub_10015708();
	m_slotA.sub_10015708();
	sub_1000c9cd();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
