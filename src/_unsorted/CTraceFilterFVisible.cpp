// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101075e0 size=0x20
#include "vampire.h"
#include "CTraceFilterFVisible.h"
// TARGET: CTraceFilterFVisible::CTraceFilterFVisible
CTraceFilterFVisible::CTraceFilterFVisible(void *pPassEnt, int collisionGroup)
    : CTraceFilterSimple(pPassEnt, collisionGroup)
{
}
// END FUNCTION

// FUNCTION: 0x10107630 size=0x30
#include "CTraceFilterFVisible.h"
struct CEntView { bool sub_100a91f0(); };
bool CTraceFilterFVisible::vfunc0(void *pHandleEntity, int contentsMask)
{
	if (pHandleEntity && ((CEntView *)pHandleEntity)->sub_100a91f0())
		return false;
	return sub_101d31c0(pHandleEntity, contentsMask);
}
// END FUNCTION
