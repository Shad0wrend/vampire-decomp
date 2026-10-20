// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1034cc60 size=0x127
#include "CNPCMaker_Zombie.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
struct CGlobalVarsX { char pad[0xc]; float curtime; };
extern CGlobalVarsX *g_1070b228;
extern "C" __declspec(dllimport) float __cdecl RandomFloat(float flMin, float flMax);
void sub_10015c4e();

// TARGET: CNPCMaker_Zombie::vfunc103
void CNPCMaker_Zombie::vfunc103()
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
        sub_100ac4e0((int)sub_10015c4e, 0, 0);
        *(float *)((char *)this + 0x17c) = RandomFloat(1.0f, 2.0f) + m_flSpawnDelay + g_1070b228->curtime;
    } else {
        sub_100ac4e0(0, 0, 0);
    }
    sub_100b3b00();
    m_n66b8 = 0;
    m_nCounters[0] = 999999;
    m_nCounters[1] = 999999;
    m_nCounters[2] = 999999;
    m_nCounters[3] = 999999;
    m_nCounters[4] = 999999;
}
// END FUNCTION
