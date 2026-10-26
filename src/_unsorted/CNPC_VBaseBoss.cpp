// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10391170 size=0x86
#include "CNPC_VBaseBoss.h"
#include "utlvector.h"

struct CNPC_VBaseBossRecord {
	int m_data[2];
};
void sub_100aa7b0(void *pEntity);

CNPC_VBaseBoss *CNPC_VBaseBoss::vfunc5(unsigned int flags)
{
	((CUtlVector<CNPC_VBaseBossRecord> *)((char *)this + 0x665c))->~CUtlVector<CNPC_VBaseBossRecord>();
	sub_1028d610();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
