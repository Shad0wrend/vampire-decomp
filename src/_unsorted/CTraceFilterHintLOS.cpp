// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10296850 size=0x3
#include "CTraceFilterHintLOS.h"
int CTraceFilterHintLOS::vfunc1()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10296870 size=0x58
#include "CTraceFilterHintLOS.h"
#include "CBaseEntity.h"
#include "CGameRules.h"
extern CGameRules *g_1070ba0c;

bool CTraceFilterHintLOS::vfunc0(void *pEntity, int contentsMask)
{
#define pEntity ((CBaseEntity *)pEntity)
	if (!pEntity->vfunc91(m_pPassEnt, contentsMask))
		return (bool)(0);
	if (pEntity->m_p9c)
		return (bool)(0);
	CGameRules *pRules = g_1070ba0c;
	int group = pEntity->m_field368;
	return (bool)(pRules->vfunc77(m_pPassEnt, group) != 0);
#undef pEntity
}
// END FUNCTION
