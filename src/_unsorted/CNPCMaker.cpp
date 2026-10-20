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
