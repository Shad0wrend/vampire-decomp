// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10037980 size=0x26
#include "CTraceFilterAgainstEntityList.h"

// TARGET: CTraceFilterAgainstEntityList::vfunc0
bool CTraceFilterAgainstEntityList::vfunc0(void *pEntity, int contentsMask)
{
	for (int i = m_nEntities - 1; i >= 0; i--) {
		if (m_pEntities[i] == (int)pEntity)
			return true;
	}
	return false;
}
// END FUNCTION
