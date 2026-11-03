// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102e32d0 size=0x12d
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CTraceFilterNavGround.h"
#include "ScopeTrace.h"

extern char g_1060ea10[];

#define SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

// The virtual views of the entities this filter asks (the placeholders keep the slot numbers right).
struct HitEntView	// slot 91 on the entity being tested
{
    SLOTS10(a0) SLOTS10(a1) SLOTS10(a2) SLOTS10(a3) SLOTS10(a4) SLOTS10(a5) SLOTS10(a6) SLOTS10(a7) SLOTS10(a8)
    virtual void b0();
    virtual bool vfunc91(int group, int contentsMask);
    char m_pad0004[0x368 - 4];
    int m_nCollisionGroup;	// 0x368
};

struct PassEntView	// slot 68 on the pass entity
{
    SLOTS10(a0) SLOTS10(a1) SLOTS10(a2) SLOTS10(a3) SLOTS10(a4) SLOTS10(a5)
    virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7();
    virtual bool vfunc68(void *pEnt);
};

struct GameRulesView	// slot 77 of the game rules
{
    SLOTS10(a0) SLOTS10(a1) SLOTS10(a2) SLOTS10(a3) SLOTS10(a4) SLOTS10(a5) SLOTS10(a6)
    virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6();
    virtual bool vfunc77(int group, int collisionGroup);
};

extern GameRulesView *g_1070ba0c;
bool sub_102eb170(void *pEnt, int a);
bool sub_101d2fc0(void *pEnt, void *pPassEnt);

bool CTraceFilterNavGround::vfunc0(void *pHandleEntity, int contentsMask)
{
    ScopeTrace trace(g_1060ea10, g_106b8540);
    if (sub_102eb170(pHandleEntity, 0))
        return false;
    if (m_pPassEnt2 && !sub_101d2fc0(pHandleEntity, m_pPassEnt2))
        return false;
    HitEntView *pEnt = (HitEntView *)pHandleEntity;
    if (!pEnt->vfunc91(m_nGroup, contentsMask))
        return false;
    if (!g_1070ba0c->vfunc77(m_nGroup, pEnt->m_nCollisionGroup))
        return false;
    if (((PassEntView *)m_pPassEnt2)->vfunc68(pHandleEntity))
        return false;
    return sub_101d31c0(pHandleEntity, contentsMask);
}
// END FUNCTION
