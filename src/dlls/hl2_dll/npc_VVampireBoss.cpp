// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103c59d0 size=0xbe
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
