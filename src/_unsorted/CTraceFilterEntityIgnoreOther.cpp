// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101cd220 size=0x19
#include "CTraceFilterEntityIgnoreOther.h"

// TARGET: CTraceFilterEntityIgnoreOther::vfunc0
bool CTraceFilterEntityIgnoreOther::vfunc0(void *pHandleEntity, int contentsMask)
{
	if (pHandleEntity == m_pIgnore)
		return false;
	return sub_101d31c0(pHandleEntity, contentsMask);
}
// END FUNCTION
