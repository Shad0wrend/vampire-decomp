// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10407b80 size=0x86
#include "CItemGKeyring.h"
#include "utlvector.h"

void sub_100aa7b0(void *pEntity);

CItemGKeyring *CItemGKeyring::vfunc5(unsigned int flags)
{
	((CUtlVector<int> *)((char *)this + 0x914))->~CUtlVector<int>();
	((CBaseCombatWeapon *)this)->sub_10250c50();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
