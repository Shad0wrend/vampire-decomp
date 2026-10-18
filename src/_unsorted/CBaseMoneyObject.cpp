// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f57b0 size=0x1e
#include "CBaseMoneyObject.h"

void sub_100aa7b0(void *p);

// TARGET: CBaseMoneyObject::vfunc5
CBaseMoneyObject *CBaseMoneyObject::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103f5860 size=0xb
#include "CBaseMoneyObject.h"

void CBaseMoneyObject::vfunc305()
{
	m_unk1ec = 0;
}
// END FUNCTION
