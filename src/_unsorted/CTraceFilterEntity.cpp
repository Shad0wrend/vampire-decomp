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
