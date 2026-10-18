// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10190560 size=0x57
void sub_100aa7b0(void *);
CDynamicProp *CDynamicProp::vfunc5(unsigned int flags)
{
	m_slotE.sub_10015708();
	m_slotD.sub_10015708();
	m_slotC.sub_10015708();
	m_slotB.sub_10015708();
	m_slotA.sub_10015708();
	sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
