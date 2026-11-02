// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101319e0 size=0x6
#include "CLogicLineToEntity.h"
namespace lifted {
extern char g_105760fc;
}
datamap_t * CLogicLineToEntity::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105760fc);
}
// END FUNCTION

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

// FUNCTION: 0x10131cb0 size=0x153
#include "CLogicLineToEntity.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"

extern Vector g_1070d1b0;

// TARGET: CLogicLineToEntity::vfunc134
void CLogicLineToEntity::vfunc134()
{
	CEntityVSlots *pTarget = (CEntityVSlots *)EHandle_Get(m_hTarget);
	CEntityVSlots *pSource = (CEntityVSlots *)EHandle_Get(m_hSource);

	if (pTarget && pSource && ((CBaseEntity *)pTarget)->m_pEdict2e0 && ((CBaseEntity *)pSource)->m_pEdict2e0) {
		Vector *pSourceOrigin = pSource->slot217();
		Vector *pTargetOrigin = pTarget->slot217();
		m_Output.SetVector3D(*pTargetOrigin - *pSourceOrigin);
		m_Output.sub_100cd300(*(CVariantCopy *)&m_Output, this, this, 0.0f);
		m_flNextThink = gpGlobals->curtime + 0.01;
	} else {
		m_Output.SetVector3D(g_1070d1b0);
		m_Output.sub_100cd300(*(CVariantCopy *)&m_Output, this, this, 0.0f);
		m_flNextThink = gpGlobals->curtime + 10.0f;
	}
}
// END FUNCTION

// FUNCTION: 0x10135e30 size=0x2b
#include "CLogicLineToEntity.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_1000cb8a();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CLogicLineToEntity::vfunc5
CLogicLineToEntity *CLogicLineToEntity::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x450))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION
