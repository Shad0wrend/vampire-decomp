// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102df090 size=0x7b
#include "CAI_MemoryListSaveRestoreOps.h"
#include "CAI_InterestingPlaceMarkersSaveRestoreOps.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;
extern char g_1060de84[];
CAI_MemoryNode *sub_102df130();
void sub_102df1b0(CAI_MemoryNode *p);

// TARGET: CAI_MemoryListSaveRestoreOps::vfunc1
void CAI_MemoryListSaveRestoreOps::vfunc1(SaveRestoreFieldInfo_t *fieldInfo, CRestore *pRestore)
{
	CAI_MemoryNode **ppHead = (CAI_MemoryNode **)fieldInfo->pField;
	*ppHead = 0;
	for (int n = pRestore->vfunc14(); n != 0; n--)
	{
		CAI_MemoryNode *pNode = sub_102df130();
		pRestore->vfunc2((CBaseEntity *)pNode, (int)g_1060de84);
		unsigned int h = pNode->m_hEntity;
		if (h != 0xffffffff)
		{
			CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
			if (pSlot->m_Serial == (int)(h >> 13) && pSlot->m_pEntity)
			{
				pNode->m_pNext = *ppHead;
				*ppHead = pNode;
				continue;
			}
		}
		sub_102df1b0(pNode);
	}
}
// END FUNCTION

// FUNCTION: 0x102df210 size=0x11
bool __stdcall sub_102df210(int **p)
{
    return **p == 0;
}
// END FUNCTION
