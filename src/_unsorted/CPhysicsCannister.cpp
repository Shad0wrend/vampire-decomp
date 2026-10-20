// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
