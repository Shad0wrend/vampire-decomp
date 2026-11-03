// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10267170 size=0xbb
#include "CBaseEntity.h"
#include "CTriggerTraceEnum.h"
#include "CUnknown1070b254.h"
#include "CGameTrace.h"
#include "CTakeDamageInfo.h"
#include "CVDmg_t.h"

extern CUnknown1070b254 *g_1070b254;

bool CTriggerTraceEnum::vfunc0(CBaseEntity *pEnt)
{
	CTakeDamageInfo info;
	CGameTrace trace;
	g_1070b254->vfunc2(&m_Ray, m_fMask, pEnt, &trace);
	if (trace.m_fraction < 1.0f) {
		CVDmg_t vdmg;
		vdmg.sub_101fa8d0(1, m_nDamageType, m_nDamage);
		info.sub_101c26d0(m_pAttacker, m_pAttacker, (float)m_nDamage, m_nDamageType, 0, (int)&vdmg, -1);
		info.sub_101c29e0(&trace);
		pEnt->sub_100a7d00((int)&info, (int)m_vecDir, (int)&trace);
		vdmg.sub_101fa680();
	}
	return true;
}
// END FUNCTION
