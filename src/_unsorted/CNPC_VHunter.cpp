// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10387ed0 size=0x6
#include "CNPC_VHunter.h"
namespace lifted {
extern char g_1063fe80;
}
datamap_t * CNPC_VHunter::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1063fe80);
}
// END FUNCTION

// FUNCTION: 0x10388060 size=0x6
#include "CNPC_VHunter.h"
namespace lifted {
extern char g_1093b608;
}
int CNPC_VHunter::vfunc580()
{
    return (int)&lifted::g_1093b608;
}
// END FUNCTION

// FUNCTION: 0x10388080 size=0x6
#include "CNPC_VHunter.h"
namespace lifted {
extern int g_1063fef8;
}
int CNPC_VHunter::vfunc451()
{
    return lifted::g_1063fef8;
}
// END FUNCTION

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

// FUNCTION: 0x103881a0 size=0x6
extern unsigned char g_1063fef0;
// TARGET: sub_103881a0
unsigned char sub_103881a0()
{
    return g_1063fef0;
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

// FUNCTION: 0x10388820 size=0x6
#include "CNPC_VHunter.h"
int CNPC_VHunter::vfunc138()
{
    return 7;
}
// END FUNCTION

// FUNCTION: 0x10388a20 size=0xf
#include "CNPC_VHunter.h"

int CNPC_VHunter::vfunc438()
{
	*(int *)((char *)this + 0x1b2c) = 0x17;
	return CNPC_VHumanCombatant::vfunc438();
}
// END FUNCTION

// FUNCTION: 0x10388a40 size=0x40
#include "vampire.h"
#include "CNPC_VHunter.h"

// TARGET: CNPC_VHunter::vfunc440
int CNPC_VHunter::vfunc440(int arg)
{
    if (arg != 0x6b)
    {
        if (arg != 0x103)
        {
            return CNPC_VHumanCombatant::vfunc440(arg);
        }
        return 0x15a;
    }
    int t = (*(int *)((char *)this + 0x14bc) & 0x80000) - 0x80000;
    return (((t != 0) ? -1 : 0) & 0x29) + 0x132;
}
// END FUNCTION

// FUNCTION: 0x10388ab0 size=0xf
#include "CNPC_VHunter.h"

int CNPC_VHunter::vfunc461()
{
	*(int *)((char *)this + 0x1b38) = 0x17;
	return CNPC_VHumanCombatant::vfunc461();
}
// END FUNCTION

// FUNCTION: 0x10388ad0 size=0xd
struct CNPC_VHumanCombatantFwd;
struct CNPC_VHunterFwd {
    void sub_10388ad0(int a);
};
struct CNPC_VHumanCombatantFwd {
    void sub_10387500(int a);
};

// TARGET: sub_10388ad0
void CNPC_VHunterFwd::sub_10388ad0(int a)
{
    a = *(volatile int *)&a;
    ((CNPC_VHumanCombatantFwd *)this)->sub_10387500(a);
}
// END FUNCTION

// FUNCTION: 0x10388b30 size=0x27
// TARGET: CNPC_VHunter::vfunc420
#include "CNPC_VHunter.h"

struct CAI_BaseNPCTroikaPlaceholder {
	void sub_1000dcba();
};

void CNPC_VHunter::vfunc420()
{
	((CAI_BaseNPCTroikaPlaceholder *)this)->sub_1000dcba();
	if (sub_1032e7b0() != 0)
	{
		CHunterMate *w = sub_1032e7b0();
		w->vfunc66();
	}
}
// END FUNCTION

// FUNCTION: 0x10388bb0 size=0x6d
#include "CNPC_VHunter.h"
#include "CGlobalEntityList.h"
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
    if ((CGlobalEntityList_Ent *)pEnt == pTarget && gpGlobals->curtime < g_1093b658)
        return 1;
    return sub_10299da0(pEnt);
}
// END FUNCTION
