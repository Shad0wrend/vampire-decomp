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

// FUNCTION: 0x10388780 size=0x5
#include "CNPC_VHunter.h"
#include "CNPC_VHumanCombatant.h"

// TARGET: CNPC_VHunter::vfunc104
// the game's 0x10388780: a tail call (jmp) of CNPC_VHumanCombatant::vfunc104
void CNPC_VHunter::vfunc104()
{
	CNPC_VHumanCombatant::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x103887a0 size=0x15
#include "CNPC_VHunter.h"

struct CUnk1026dc00 {
    char pad[0x5cec];
    unsigned int m_5cec;
    unsigned int sub_1026dc00(unsigned int flags);
};

void CNPC_VHunter::vfunc103()
{
    ((CUnk1026dc00 *)this)->sub_1026dc00(0x200d00);
    CNPC_VHumanCombatant::vfunc103();
}
// END FUNCTION

// FUNCTION: 0x103887d0 size=0x36
#include "CNPC_VHunter.h"
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"

void sub_10387fd0(CBaseEntity *pEnt);

// TARGET: CNPC_VHunter::vfunc472
void CNPC_VHunter::vfunc472(int a)
{
	if (!*((char *)this + 0x6081))
	{
		if (((CEntityVSlots *)this)->slot404((void *)a) == 1)
			sub_10387fd0((CBaseEntity *)a);
	}
	((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc472((CBaseEntity *)a);
}
// END FUNCTION

// FUNCTION: 0x10388820 size=0x6
#include "CNPC_VHunter.h"
int CNPC_VHunter::vfunc138()
{
    return 7;
}
// END FUNCTION

// FUNCTION: 0x10388840 size=0x5
#include "CNPC_VHunter.h"
#include "CNPC_VHumanCombatant.h"

// TARGET: CNPC_VHunter::vfunc442
// the game's 0x10388840: a tail call (jmp) of CNPC_VHumanCombatant::vfunc442
void CNPC_VHunter::vfunc442(int const *a0)
{
	CNPC_VHumanCombatant::vfunc442(a0);
}
// END FUNCTION

// FUNCTION: 0x10388860 size=0x5
#include "CNPC_VHunter.h"
#include "CNPC_VHumanCombatant.h"

// TARGET: CNPC_VHunter::vfunc453
// the game's 0x10388860: a tail call (jmp) of CNPC_VHumanCombatant::vfunc453
void CNPC_VHunter::vfunc453()
{
	CNPC_VHumanCombatant::vfunc453();
}
// END FUNCTION

// FUNCTION: 0x10388880 size=0x123
#include "CNPC_VHunter.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

#define HGV(n) virtual void g##n();
#define HGV10(p) HGV(p##0) HGV(p##1) HGV(p##2) HGV(p##3) HGV(p##4) HGV(p##5) HGV(p##6) HGV(p##7) HGV(p##8) HGV(p##9)

struct CHunterChar
{
	virtual void vfunc0();
	virtual unsigned int *vfunc1();
	void sub_1017f7b0();
	void sub_1017f830();
};
struct CHunterGrip
{
	char m_pad0000[0xa8];
	CHunterChar *m_pChar;
};
struct CHunterView
{
	HGV10(0) HGV10(1) HGV10(2) HGV10(3) HGV10(4) HGV10(5) HGV10(6) HGV10(7) HGV10(8) HGV10(9)
	HGV10(10) HGV10(11) HGV10(12) HGV10(13) HGV10(14) HGV10(15)
	HGV(160) HGV(161) HGV(162) HGV(163) HGV(164) HGV(165) HGV(166)
	virtual CHunterGrip *vfunc167();
};

// TARGET: CNPC_VHunter::vfunc463
void CNPC_VHunter::vfunc463(int nOld, int nNew)
{
	CHunterView *pView = (CHunterView *)this;
	CHunterGrip *pEnemy;
	CHunterChar *pChar;
	if (pView->vfunc167() && (pEnemy = pView->vfunc167()) && (pChar = pEnemy->m_pChar) && nNew == 2)
	{
		sub_10388c40();
		pChar->sub_1017f7b0();
		m_hHold6664 = *pChar->vfunc1();
	}
	if (nOld == 2 && m_hHold6664 != 0xffffffff)
	{
		CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[m_hHold6664 & 0x1fff];
		if (pSlot->m_Serial == (int)(m_hHold6664 >> 13))
		{
			CHunterGrip *pHeld = (CHunterGrip *)pSlot->m_pEntity;
			CHunterChar *pHeldChar;
			if (pHeld && (pHeldChar = pHeld->m_pChar))
			{
				m_hHold6664 = 0xffffffff;
				pHeldChar->sub_1017f830();
			}
		}
	}
	switch (nNew)
	{
	case 1:
		if (sub_1032e7b0())
		{
			sub_1032e7b0()->vfunc66();
			break;
		}
		break;
	case 2:
	case 3:
	case 0xb:
		if (sub_1032e7b0())
			sub_1032e7b0()->vfunc67();
		break;
	}
	sub_103871c0(nOld, nNew);
}
// END FUNCTION

// FUNCTION: 0x10388a00 size=0x5
#include "animevent_t.h"
#include "CNPC_VHunter.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VHunter::vfunc259
// the game's 0x10388a00: a tail call (jmp) of CNPC_VHuman::vfunc259
void CNPC_VHunter::vfunc259(animevent_t *a0)
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc259(a0);
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

// FUNCTION: 0x10388a90 size=0x5
#include "CNPC_VHunter.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VHunter::vfunc433
// the game's 0x10388a90: a tail call (jmp) of CAI_BaseNPCTroika::vfunc433
void CNPC_VHunter::vfunc433()
{
	((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc433();
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

// FUNCTION: 0x10388af0 size=0x5
#include "CNPC_VHunter.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VHunter::vfunc434
// the game's 0x10388af0: a tail call (jmp) of CNPC_VHuman::vfunc434
void CNPC_VHunter::vfunc434()
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc434();
}
// END FUNCTION

// FUNCTION: 0x10388b10 size=0x5
#include "CTakeDamageInfo.h"
#include "CNPC_VHunter.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VHunter::vfunc390
// the game's 0x10388b10: a tail call (jmp) of CNPC_VHuman::vfunc390
int CNPC_VHunter::vfunc390(CTakeDamageInfo *a0)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc390(a0);
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

// FUNCTION: 0x10388b70 size=0x5
#include "CNPC_VHunter.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VHunter::vfunc366
// the game's 0x10388b70: a tail call (jmp) of CNPC_VHuman::vfunc366
bool CNPC_VHunter::vfunc366(int a0, int a1, int a2)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc366(a0, a1, a2);
}
// END FUNCTION

// FUNCTION: 0x10388b90 size=0x5
#include "CNPC_VHunter.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VHunter::vfunc144
// the game's 0x10388b90: a tail call (jmp) of CNPC_VHuman::vfunc144
void CNPC_VHunter::vfunc144(int a0)
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc144(a0);
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
