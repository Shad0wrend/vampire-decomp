// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10366290 size=0x24
void sub_10119750(const char *pszFormat, double value);
void __fastcall sub_10006e0b(void *pSelf);

// TARGET: sub_10366290
void __fastcall sub_10366290(void *pSelf)
{
    sub_10119750("Dist to player: %.3f", *(float *)((char *)pSelf + 0x6264));
    sub_10006e0b(pSelf);
}
// END FUNCTION

// FUNCTION: 0x10390fd0 size=0x1
// TARGET: sub_10390fd0
void sub_10390fd0()
{
}
// END FUNCTION

// FUNCTION: 0x10390ff0 size=0x1
// TARGET: sub_10390ff0
void sub_10390ff0()
{
}
// END FUNCTION

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
