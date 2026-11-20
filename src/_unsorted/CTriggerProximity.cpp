// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c9c90 size=0x6
#include "datamap.h"
#include "CTriggerProximity.h"
namespace lifted {
extern char g_1059e208;
}
datamap_t * CTriggerProximity::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059e208);
}
// END FUNCTION

// FUNCTION: 0x101c9ea0 size=0x32
#include "CTriggerProximity.h"

void sub_101cf600(CTriggerProximity *pTrigger);

// TARGET: CTriggerProximity::vfunc103
void CTriggerProximity::vfunc103()
{
    if (m_flMeasure05a0 == 0.0f) {
        m_flMeasure05a0 = 32.0f;
    }
    sub_101c5080();
    sub_101cf600(this);
}
// END FUNCTION

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

// FUNCTION: 0x101c9fe0 size=0x4a
#include "CTriggerProximity.h"

void sub_1000ffbf();

void CTriggerProximity::vfunc174(CBaseEntity *pOther)
{
	CBaseTrigger::vfunc174(pOther);
	if (sub_101c5460(pOther)) {
		m_i05a4++;
		sub_100ac4e0((int)sub_1000ffbf, 0, 0);
		m_flNextThink = gpGlobals->curtime;
	}
}
// END FUNCTION

// FUNCTION: 0x101ca050 size=0x45
#include "CTriggerProximity.h"
void CTriggerProximity::vfunc176(CBaseEntity *pOther)
{
	CBaseTrigger::vfunc176(pOther);
	if (sub_101c5460(pOther)) {
		if (--m_i05a4 == 0) {
			sub_100ac4e0(0, 0, 0);
			m_flNextThink = 0;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101cc140 size=0x57
#include "CCineNPC.h"
#include "CTriggerProximity.h"

void sub_100aa7b0(void *);
void __fastcall sub_1009df20(void *self);

// TARGET: CTriggerProximity::vfunc5
CBaseEntity *CTriggerProximity::vfunc5(unsigned int flags)
{
	((CCineNPCSlot *)((char *)this + 0x5a8))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x580))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x568))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x4bc))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x4a4))->sub_10015708();
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION
