// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1040f050 size=0x19
#include "CTraceFilterSimple.h"

// TARGET: CTraceFilterNoOwnerTest::vfunc0
bool CTraceFilterNoOwnerTest::vfunc0(void *pHandleEntity, int contentsMask)
{
	if (pHandleEntity != m_pOwner)
		return sub_101d31c0(pHandleEntity, contentsMask);
	return false;
}
// END FUNCTION
