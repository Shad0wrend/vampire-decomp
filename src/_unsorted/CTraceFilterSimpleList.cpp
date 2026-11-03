// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101d33a0 size=0x2d
#include "CTraceFilterSimpleList.h"

// TARGET: ??0CTraceFilterSimpleList@@QAE@H@Z
CTraceFilterSimpleList::CTraceFilterSimpleList(int collisionGroup) : CTraceFilterSimple(0, collisionGroup)
{
    m_i0c = 0;
    m_i10 = 0;
    m_i14 = 0;
    m_i18 = 0;
    m_i1c = 0;
}
// END FUNCTION

// FUNCTION: 0x101d33e0 size=0x3a
#include "CTraceFilterSimpleList.h"

// TARGET: CTraceFilterSimpleList::vfunc0
bool CTraceFilterSimpleList::vfunc0(void *pHandleEntity, int contentsMask)
{
	int i = 0;
	if (m_i18 > 0)
	{
		int *pItem = (int *)m_i0c;
		do
		{
			if (*pItem == (int)pHandleEntity)
			{
				if (i != -1)
					return 0;
				break;
			}
			i++;
			pItem++;
		} while (i < m_i18);
	}
	return sub_101d31c0(pHandleEntity, contentsMask);
}
// END FUNCTION
