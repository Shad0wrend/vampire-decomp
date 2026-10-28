// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e1ea0 size=0x86
#include "CFlameCluster.h"
#include "utlvector.h"

void sub_100aa7b0(void *pEntity);

CFlameCluster *CFlameCluster::vfunc5(unsigned int flags)
{
	((CUtlVector<int> *)((char *)this + 0x450))->~CUtlVector<int>();
	sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103e1f60 size=0x13
#include "CFlameCluster.h"
void __fastcall sub_1000350d(CFlameCluster *self);

// TARGET: CFlameCluster::vfunc103
void CFlameCluster::vfunc103()
{
	sub_1000350d(this);
	vfunc104();
}
// END FUNCTION
