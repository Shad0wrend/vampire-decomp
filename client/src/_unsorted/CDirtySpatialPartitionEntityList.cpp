// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10042c30 size=0x68
#include "CDirtySpatialPartitionEntityList.h"
#include "utlvector.h"

void __cdecl sub_101d1296(void *p);

CAutoGameSystem *CDirtySpatialPartitionEntityList::vfunc8(unsigned int flags)
{
	((CUtlVector<int> *)((char *)this + 0xc))->~CUtlVector<int>();
	sub_100f3f80();
	if (flags & 1)
		sub_101d1296(this);
	return this;
}
// END FUNCTION
