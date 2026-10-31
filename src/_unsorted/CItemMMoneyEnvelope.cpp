// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f5f10 size=0x3
#include "CItemMMoneyEnvelope.h"
int CItemMMoneyEnvelope::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10409b80 size=0x1e
#include "CItemMMoneyEnvelope.h"

void sub_100aa7b0(void *p);

// TARGET: CItemMMoneyEnvelope::vfunc5
CItemMMoneyEnvelope *CItemMMoneyEnvelope::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
