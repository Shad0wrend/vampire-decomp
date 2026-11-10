// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100f6990 size=0x3
#include "CAimTargetManager.h"
void CAimTargetManager::vfunc0(int a0)
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

struct AimMgrView {
	void *m_vtbl;
	AimTargetList m_Targets;
};

void CAimTargetManager::vfunc1(CBaseEntity *pEntity)
{
	if (pEntity->sub_100b3700() & 0x10000)
	{
		int i = ((AimMgrView *)this)->m_Targets.Find(pEntity);
		if (i >= 0 && i < m_nTargets)
			((AimMgrView *)this)->m_Targets.FastRemoveMove(i);
	}
}
// END FUNCTION
