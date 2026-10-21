// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1034afe0 size=0x105
#include "CNPCMaker.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
struct CGlobalVarsX { char pad[0xc]; float curtime; };
extern CGlobalVarsX *g_1070b228;
void sub_1000696a();
void sub_1000572c();

// TARGET: CNPCMaker::vfunc103
void CNPCMaker::vfunc103()
{
    {
        ScopeTrace trace("CBaseEntity::SetSolid", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
        ((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
    }
    m_n66b0 = 0;
    vfunc104();
    if (m_b66c3)
        m_b66c2 = 1;
    if (!m_b66c0) {
        sub_100ac4e0((int)sub_1000696a, 0, 0);
        *(float *)((char *)this + 0x17c) = m_flSpawnDelay + g_1070b228->curtime;
        sub_100b3b00();
        m_n66b8 = 0;
    } else {
        sub_100ac4e0((int)sub_1000572c, 0, 0);
        sub_100b3b00();
        m_n66b8 = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x1034bc90 size=0x74
#include "CNPCMaker.h"
#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)
struct CMakerChildView {
    S100(a0) S10(b0) S10(b1) S10(b2) S10(b3) S10(b4)
    virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3();
    virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7();
    virtual char vfunc158();
    char m_pad[0x44c - 4];
    char m_bCounted;
};
struct CMakerList {
    void sub_10010794(CBaseEntity *pChild, CNPCMaker *pMaker, int a);
};

void CNPCMaker::vfunc139(CBaseEntity *pEnt)
{
    CMakerChildView *pChild = (CMakerChildView *)pEnt;
    if (!pChild->m_bCounted) {
        pChild->m_bCounted = 1;
        if (pChild->vfunc158())
            ++*(int *)((char *)this + 0x6660);
        else
            ((CMakerList *)((char *)this + 0x6680))->sub_10010794(pEnt, this, 0);
        if (sub_1034b430())
            ((CMakerList *)((char *)this + 0x6698))->sub_10010794(pEnt, this, 0);
        m_n66b0 = (m_n66b0 - 1 >= 0) ? m_n66b0 - 1 : 0;
    }
}
// END FUNCTION
