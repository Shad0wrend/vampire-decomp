// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c9ef0 size=0xbb
#include "CTriggerProximity.h"

extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];
extern void (__cdecl *g_109f362c)(const char *, ...);

void CTriggerProximity::vfunc113()
{
	sub_100113a6();
	const char *pszName = m_pszMeasureTarget;
	if (!pszName)
		pszName = g_106b8540;
	CGlobalEntityList_Ent *pTarget = (CGlobalEntityList_Ent *)g_106eb5d8.sub_100f7770(0, pszName, 0, 0);
	if (pTarget)
		m_hMeasureTarget.m_Index = *pTarget->v1();
	else
		m_hMeasureTarget.m_Index = 0xffffffff;
	if (!(m_hMeasureTarget.IsValid() && m_hMeasureTarget.Get()->m_pEdict))
		g_109f362c("TriggerProximity - Missing measure target or measure target with no origin!\n");
}
// END FUNCTION
