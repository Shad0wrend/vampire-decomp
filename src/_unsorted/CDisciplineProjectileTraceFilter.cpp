// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101da730 size=0x19
#include "CTraceFilterSimple.h"

// TARGET: CDisciplineProjectileTraceFilter::vfunc0
bool CDisciplineProjectileTraceFilter::vfunc0(void *pHandleEntity, int contentsMask)
{
	if (pHandleEntity == m_pIgnore)
		return sub_101d31c0(pHandleEntity, contentsMask);
	return false;
}
// END FUNCTION

// FUNCTION: 0x101da760 size=0x6
// TARGET: sub_101da760
int sub_101da760()
{
	return 2;
}
// END FUNCTION
