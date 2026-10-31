// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101ccf50 size=0x66
#include "CTraceFilterEntity.h"
#include "CBaseEntity.h"

// TARGET: CTraceFilterEntity::CTraceFilterEntity
CTraceFilterEntity::CTraceFilterEntity(void *pPassEnt, int collisionGroup) : CTraceFilterSimple(pPassEnt, collisionGroup)
{
	if (((EHANDLE *)((char *)pPassEnt + 0x25c))->Get() == 0)
		m_pRootParent = 0;
	else
		m_pRootParent = sub_101cd070(pPassEnt);
}
// END FUNCTION

// FUNCTION: 0x101ccfe0 size=0x61
#include "CTraceFilterEntity.h"

struct CTraceEntParentView { char pad[0x25c]; EHANDLE m_hParent; };

bool CTraceFilterEntity::vfunc0(void *pHandleEntity, int contentsMask)
{
	if (m_pRootParent || ((CTraceEntParentView *)pHandleEntity)->m_hParent.Get()) {
		if (m_pRootParent == sub_101cd070(pHandleEntity))
			return false;
	}
	return sub_101d31c0(pHandleEntity, contentsMask);
}
// END FUNCTION
