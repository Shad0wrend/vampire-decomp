// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101da730 size=0x19
#include "vampire_all.h"
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

// FUNCTION: 0x101da780 size=0x20
#include "vampire_all.h"
#include "CDisciplineProjectileTraceFilter.h"

extern char g_10483528[];

void *CDisciplineProjectileTraceFilter::vfunc2(char flags)
{
	*(void **)this = g_10483528;
	if (flags & 1)
		::operator delete(this);
	return this;
}
// END FUNCTION
