// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1020a470 size=0x86
#include "CDebugEntity.h"
#include "utlvector.h"

void sub_100aa7b0(void *pEntity);

CDebugEntity *CDebugEntity::vfunc5(unsigned int flags)
{
	((CUtlVector<int> *)((char *)this + 0x450))->~CUtlVector<int>();
	sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
