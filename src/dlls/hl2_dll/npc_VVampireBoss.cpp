// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103c59d0 size=0xbe
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VVampireBoss.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

int sub_1000633e(CNPC_VVampireBoss *pNPC, int a, int b, float flRadius, int c, int d);
extern char g_1065ec20[];

bool CNPC_VVampireBoss::sub_103c59d0(int a, int b)
{
    ScopeTrace trace("CNPC_VVampireBoss::SelectHintNode", g_106b8540);
    m_pTarget5ddc = sub_1000633e(this, a, b, 5000.0f, 0, 0);
    if (m_pTarget5ddc) {
        sub_1000ac68(0);
        return true;
    }
    m_pszSourceFile = g_1065ec20;
    m_nSourceLine = 0xd1;
    ((CEntityVSlots *)this)->slot448(4);
    return false;
}
// END FUNCTION

// FUNCTION: 0x103c60a0 size=0x278
#include "CAI_BaseNPCTroika.h"
#include "CBaseAnimating.h"
#include "CBaseEntity.h"
#include "CNPC_VVampireBoss.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CNPCSlots614.h"
#include "CEntityVSlots.h"

extern char g_1065ec20[];
extern char g_10587908[];
extern char g_1062a654[];
CBaseEntity *sub_10136580(const char *pszName);
void sub_101d1280(void *p);

void CNPC_VVampireBoss::vfunc618()
{
	ScopeTrace trace("CNPC_VVampireBoss::TransformationStart", g_106b8540);

	CNPC_VVampireBoss *pNew;
	CBaseEntity *pEnt = sub_10136580(m_pDefaultNPCName);
	if (!(!((int)pEnt == 0))) pNew = 0; else pNew = (CNPC_VVampireBoss *)pEnt->m_pNPC98;

	((CAI_BaseNPCTroika *)pNew)->m_flags204 |= 4;

	((CEntityVSlots *)pNew)->slot62((const float *)((CEntityVSlots *)this)->slot217());
	((CEntityVSlots *)pNew)->slot64((const float *)((CEntityVSlots *)this)->slot221());
	((CEntityVSlots *)pNew)->slot202((CEntityVSlots *)this);
	((CBaseAnimating *)pNew)->sub_10097310((CBaseAnimating *)this);

	((CAI_BaseNPCTroika *)pNew)->m_flSeekDistBase = 4096.0f;
	((CEntityVSlots *)pNew)->slot105(m_pMonsterModelName);
	sub_101d1280(pNew);

	((CAI_BaseNPCTroika *)pNew)->m_flags19c |= 0x60;
	((CNPCSlots614 *)pNew)->slot614();
	((CEntityVSlots *)pNew)->slot105(m_pMonsterModelName);

	((CAI_BaseNPCTroika *)pNew)->m_flags19c &= ~0x60;
	*(unsigned char *)((char *)pNew + 0x1a3) = 1;
	pNew->m_n168 = 0x1f;
	pNew->m_n16c = 2;
	pNew->m_h155c = *((CEntityVSlots *)this)->slot1();
	float flCurTime = gpGlobals->curtime;
	m_flTime1560 = flCurTime;
	pNew->m_flTime1560 = flCurTime;
	((CAI_BaseNPCTroika *)pNew)->m_n5cc0 = 5;
	const char *pszFile = g_1065ec20;
	*(0x1480 + (char *)pNew) = 1;
	((CAI_BaseNPCTroika *)pNew)->m_pszFile1b3c = pszFile;
	((CAI_BaseNPCTroika *)pNew)->m_n5cc4 = 5;
	((CAI_BaseNPCTroika *)pNew)->m_nLine1b40 = 0x205;
	((CAI_BaseNPCTroika *)pNew)->m_pszFile1b30 = pszFile;
	((CAI_BaseNPCTroika *)pNew)->m_nLine1b34 = 0x206;
	((CAI_BaseNPCTroika *)pNew)->sub_102ae750(0x158, 0);

	pNew->m_n6348[0] = m_n6348[0];
	pNew->m_n6348[1] = m_n6348[1];
	*(pNew->m_n6348 + 2) = m_n6348[2];
	pNew->m_n6348[3] = *(3 + m_n6348);
	*(pNew->m_n6348 + 4) = *(m_n6348 + 4);
	*(pNew->m_n6420 + 0) = m_n6420[0];
	*(pNew->m_n6420 + 1) = m_n6420[1];
	pNew->m_n6420[2] = m_n6420[2];
	pNew->m_n6420[3] = m_n6420[3];
	pNew->m_n6420[4] = m_n6420[4];

	CNPC_VVampireBoss *pOther = (CNPC_VVampireBoss *)__RTDynamicCast(pNew, 0, g_10587908, g_1062a654, 0);
	if (pOther)
		*(unsigned int *)((char *)pOther + 0x66b0) = *((CEntityVSlots *)this)->slot1();

	m_n168 = 0x1e;
	m_n16c = 2;
	m_h155c = *((CEntityVSlots *)pNew)->slot1();
}
// END FUNCTION
