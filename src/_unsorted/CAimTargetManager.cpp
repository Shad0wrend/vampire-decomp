// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100f6990 size=0x3
#include "CAimTargetManager.h"
void CAimTargetManager::OnEntityCreated(CBaseEntity *pEntity)
{
}
// END FUNCTION

// FUNCTION: 0x100f69b0 size=0x66
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CBaseEntity.h"
#include "CAimTargetManager.h"
#include "utlvector.h"

struct AimTargetList : CUtlVector<CBaseEntity *>
{
	void FastRemoveMove(int elem)
	{
		if (m_Size > 0)
		{
			memmove(&Element(elem), &Element(m_Size - 1), sizeof(CBaseEntity *));
			--m_Size;
		}
	}
};

void CAimTargetManager::OnEntityDeleted(CBaseEntity *pEntity)
{
	if (pEntity->sub_100b3700() & 0x10000)
	{
		int i = m_targetList.Find(pEntity);
		if (i >= 0 && i < m_targetList.m_Size)
			((AimTargetList *)&m_targetList)->FastRemoveMove(i);
	}
}
// END FUNCTION
