// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10131ac0 size=0x151
#include "CLogicLineToEntity.h"
#include "CGlobalEntityList.h"
#include "CEHandleGet.h"

extern CGlobalEntityList g_106eb5d8;
__declspec(dllimport) void Warning(const char *pszFormat, ...);

// TARGET: CLogicLineToEntity::vfunc113
void CLogicLineToEntity::vfunc113()
{
	CBaseEntity::vfunc113();
	const char *pszTarget = *(const char **)((char *)this + 0x20c);
	if (pszTarget) {
		CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, pszTarget, 0, 0);
		unsigned int *phTarget = &m_hTarget;
		if (pEnt)
			*phTarget = *pEnt->vfunc1();
		else
			*phTarget = 0xffffffff;
		if (!g_10566458->sub_100290c0(phTarget) || !g_10566458->sub_100290c0(phTarget)->m_pEdict2e0) {
			Warning("logic_lineto - Target not found or target with no origin!\n");
			m_hTarget = *vfunc1();
		}
	} else {
		m_hTarget = *vfunc1();
	}
	if (m_pszSource) {
		CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, m_pszSource, 0, 0);
		if (pEnt)
			m_hSource = *pEnt->vfunc1();
		else
			m_hSource = 0xffffffff;
		if (EHandle_Get(m_hSource) && ((CBaseEntity *)EHandle_Get(m_hSource))->m_pEdict2e0)
			return;
		Warning("logic_lineto - Source not found or source with no origin!\n");
	}
	m_hSource = *vfunc1();
}
// END FUNCTION
