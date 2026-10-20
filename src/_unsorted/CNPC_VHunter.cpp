// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103880a0 size=0x1e
#include "CNPC_VHunter.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VHunter::vfunc5
CNPC_VHunter *CNPC_VHunter::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10388200 size=0x1d
#include "CNPC_VHunter.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093b5e8;
extern B g_10936c74;
int CNPC_VHunter::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093b5e8.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10388bb0 size=0x6d
#include "CNPC_VHunter.h"
#include "CGlobalEntityList.h"
struct S1070b228 { char pad[0xc]; float curtime; };
extern S1070b228 *g_1070b228;
extern CGlobalEntityList *g_10566458;
extern unsigned int g_1093b650;
extern float g_1093b658;
int CNPC_VHunter::vfunc404(CBaseEntity *pEnt)
{
    if (!pEnt)
        return 0;
    unsigned int h = g_1093b650;
    CGlobalEntityList_Ent *pTarget;
    if (h != 0xffffffff) {
        CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
        pTarget = s->m_Serial == (int)(h >> 13) ? s->m_pEntity : 0;
    } else
        pTarget = 0;
    if ((CGlobalEntityList_Ent *)pEnt == pTarget && g_1070b228->curtime < g_1093b658)
        return 1;
    return sub_10299da0(pEnt);
}
// END FUNCTION
