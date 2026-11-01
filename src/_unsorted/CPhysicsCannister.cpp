// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1014fac0 size=0xc
#include "CPhysicsCannister.h"
namespace lifted {
int sub_1000cfa9();
}
int CPhysicsCannister::vfunc226()
{
    *(char *)((char *)this + 0x1b1) = 1;
    return lifted::sub_1000cfa9();
}
// END FUNCTION

// FUNCTION: 0x1014fae0 size=0x67
#include "CPhysicsCannister.h"
#include "CCollisionProperty.h"

bool sub_102404e0(const float *a, const float *b, const float *c, const float *d, int e);

// TARGET: CPhysicsCannister::vfunc99
bool CPhysicsCannister::vfunc99(const float *pRay, int b, int c)
{
    float vA[3];
    float vB[3];
    CCollisionProperty *prop = (CCollisionProperty *)((char *)this + 0x270);
    prop->sub_100dcd90((const float *)((char *)prop + 4), (const float *)((char *)prop + 0x10), vB, vA);
    bool hit = sub_102404e0(vB, vA, pRay, pRay + 3, 0);
    if (!hit)
        return hit;
    return sub_100956e0(pRay, b, c);
}
// END FUNCTION

// FUNCTION: 0x1014fb70 size=0x3
#include "CPhysicsCannister.h"
bool CPhysicsCannister::vfunc158()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1014fb90 size=0x5
#include "CPhysicsCannister.h"
bool CPhysicsCannister::vfunc72(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1014fbb0 size=0x6
#include "CPhysicsCannister.h"
namespace lifted {
extern char g_1057c8b8;
}
CPhysicsCannister::Datamap82 CPhysicsCannister::vfunc82()
{
    return (CPhysicsCannister::Datamap82)&lifted::g_1057c8b8;
}
// END FUNCTION

// FUNCTION: 0x10150380 size=0x120
#include "CPhysicsCannister.h"
#include "CBaseCombatCharacter.h"
#include "CCollisionProperty.h"
#include "CBCCSlotViews.h"
#include "ScopeTrace.h"

struct CannisterGlobals { char pad[0xc]; int curtime; };
extern CannisterGlobals *g_1070b228;

struct CannisterView : CBaseCombatCharacter {
};
struct CannisterSlots {
    VIEW_SLOT100(0) VIEW_SLOT100(1)
    VIEW_SLOT10(20) VIEW_SLOT(210) VIEW_SLOT(211) VIEW_SLOT(212) VIEW_SLOT(213) VIEW_SLOT(214) VIEW_SLOT(215) VIEW_SLOT(216) VIEW_SLOT(217) VIEW_SLOT(218) VIEW_SLOT(219)
    VIEW_SLOT(220) VIEW_SLOT(221) VIEW_SLOT(222)
    virtual void vfunc223();
};
struct CannisterFields {
    char m_pad0000[0x17c];
    int m_nNextThink;
    char m_pad0180[0x1fc - 0x180];
    int m_nTakeDamage;
    char m_pad0200[0x210 - 0x200];
    int m_iHealth;
};

void CPhysicsCannister::vfunc103()
{
    CBaseCombatCharacter *e = (CBaseCombatCharacter *)this;
    int t;
    e->vfunc104();
    const char *model = *e->vfunc9(&t);
    if (model == 0)
        model = g_106b8540;
    e->vfunc105(model);
    e->sub_10327960(-1);
    {
        ScopeTrace trace("CBaseEntity::AddSolidFlags", e->m_name26c ? e->m_name26c : g_106b8540);
        CCollisionProperty *c = (CCollisionProperty *)((char *)this + 0x270);
        c->sub_100dc580(*(unsigned short *)((char *)c + 0x44) | 1);
    }
    *(int *)((char *)this + 0x1fc) = 2;
    *(int *)((char *)this + 0x17c) = 0;
    if (*(int *)((char *)this + 0x210) <= 0)
        *(int *)((char *)this + 0x210) = 0x19;
    *(int *)((char *)this + 0x174) = g_1070b228->curtime;
    *(int *)((char *)this + 0x6f4) = 0;
    *(int *)((char *)this + 0x6f8) = 0;
    *(int *)((char *)this + 0x6f0) = 0;
    e->sub_100b3b00();
    *((char *)this + 0x19e4) = 0;
    e->sub_100b3580(0x20000000);
    ((CannisterSlots *)this)->vfunc223();
}
// END FUNCTION

// FUNCTION: 0x101504f0 size=0x28
#include "CPhysicsCannister.h"
#include "CUnknown101466e0.h"

void __stdcall sub_1000e78c(int a, int b, char c, int d);

// TARGET: CPhysicsCannister::vfunc223
char CPhysicsCannister::vfunc223()
{
    sub_1000e78c(6, 0, m_b204 & 1, 0);
    ((CUnknown101466e0 *)((char *)this + 0x1b0))->sub_101466e0(1);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10150670 size=0x1e
#include "CPhysicsCannister.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysicsCannister::vfunc5
CPhysicsCannister *CPhysicsCannister::vfunc5(unsigned int flags)
{
	sub_10001ebf();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10150710 size=0x104
#include "CVDmg_t.h"
#include "CPhysicsCannister.h"
struct CRandomHook { virtual void v0(); virtual void v1(); virtual int RandomInt(int lo, int hi); };
extern CRandomHook *g_1070b244;
extern char g_1070ba40[];

#define DMGBITS(p) ((p)->m_pDmg ? ((p)->m_pDmg->m_field10 | (p)->m_nDamageType) : (p)->m_nDamageType)

// TARGET: CPhysicsCannister::vfunc142
int CPhysicsCannister::vfunc142(CCannisterTakeInfo *pInfo)
{
	if (!m_nTakeDamage)
		return 0;
	if (!m_bLeaking) {
		float flDamage;
		if (pInfo->m_pDmg)
			flDamage = (float)pInfo->m_pDmg->sub_101faa70();
		else
			flDamage = pInfo->m_flDamage;
		m_iHealth = (int)((float)m_iHealth - flDamage);
		if (m_iHealth < 0)
			sub_10150f50();
		else if ((DMGBITS(pInfo) & 0x40) || ((DMGBITS(pInfo) & 0x85) && g_1070b244->RandomInt(1, 100) < 50))
			sub_10150910(pInfo->m_field2c, g_1070ba40);
		return 1;
	}
	if (gpGlobals->curtime - m_flLeakStart <= 0.1)
		return 0;
	if (DMGBITS(pInfo) & 0x400004a)
		sub_10150f50();
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10150870 size=0x76
#include "CPhysicsCannister.h"
#include "CGameTrace.h"

void CPhysicsCannister::vfunc141(CCannisterTakeInfo *pInfo, const Vector *pDir, CGameTrace *pTrace)
{
	if (!m_bLeaking && pTrace->m_hitgroup)
	{
		Vector vecDir(-pDir->x, -pDir->y, -pDir->z - 5.0f);
		VectorNormalize(vecDir);
		sub_10150910(pInfo->m_field2c, &vecDir);
	}
	sub_100a7de0(pInfo, pDir, pTrace);
}
// END FUNCTION
