// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10140750 size=0xe
bool CBaseMoveBehavior::vfunc153()
{
	return m_unk4b4 != 0;
}
// END FUNCTION

// FUNCTION: 0x10140f30 size=0x1e
#include "CBaseMoveBehavior.h"

void sub_100aa7b0(void *p);

// TARGET: CBaseMoveBehavior::vfunc5
CBaseMoveBehavior *CBaseMoveBehavior::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
