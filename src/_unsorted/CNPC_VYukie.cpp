// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103dd050 size=0x6
#include "CNPC_VYukie.h"

extern int g_10940330;

// TARGET: CNPC_VYukie::vfunc580
void *CNPC_VYukie::vfunc580()
{
	return &g_10940330;
}
// END FUNCTION

// FUNCTION: 0x103dd070 size=0x6
#include "CNPC_VYukie.h"

extern const char *g_10663ec0;

// TARGET: CNPC_VYukie::vfunc451
const char *CNPC_VYukie::vfunc451()
{
	return g_10663ec0;
}
// END FUNCTION

// FUNCTION: 0x103dd090 size=0x1e
#include "CNPC_VYukie.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VYukie::vfunc5
CBaseEntity *CNPC_VYukie::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103dd190 size=0x6
#include "CNPC_VYukie.h"

extern char g_10663eb8;

// TARGET: CNPC_VYukie::vfunc452
char CNPC_VYukie::vfunc452()
{
	return g_10663eb8;
}
// END FUNCTION

// FUNCTION: 0x103dd1f0 size=0x1d
#include "CNPC_VYukie.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_10940314;
extern B g_10936c74;
int CNPC_VYukie::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_10940314.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103dd600 size=0x5
#include "CNPC_VYukie.h"
#include "CNPC_VHumanCombatant.h"

// TARGET: CNPC_VYukie::vfunc104
// the game's 0x103dd600: a tail call (jmp) of CNPC_VHumanCombatant::vfunc104
void CNPC_VYukie::vfunc104()
{
	((CNPC_VHumanCombatant *)this)->CNPC_VHumanCombatant::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x103dd620 size=0x20
#include "CNPC_VYukie.h"
#include "CNPC_VHumanCombatant.h"

struct YukieView
{
	char pad[0x1574];
	float m_fl1574;
};

// TARGET: CNPC_VYukie::vfunc103
void CNPC_VYukie::vfunc103()
{
	CNPC_VHumanCombatant *pThis = (CNPC_VHumanCombatant *)this;
	pThis->sub_10012855(0x200d00);
	pThis->CNPC_VHumanCombatant::vfunc103();
	((YukieView *)this)->m_fl1574 = -1.0f;
}
// END FUNCTION

// FUNCTION: 0x103dd650 size=0x6
#include "CNPC_VYukie.h"
int CNPC_VYukie::vfunc138()
{
    return 4;
}
// END FUNCTION

// FUNCTION: 0x103dd670 size=0x5
#include "CNPC_VYukie.h"
#include "CNPC_VHumanCombatant.h"

// TARGET: CNPC_VYukie::vfunc463
// the game's 0x103dd670: a tail call (jmp) of CNPC_VHumanCombatant::vfunc463
void CNPC_VYukie::vfunc463(int a0, int a1)
{
	((CNPC_VHumanCombatant *)this)->CNPC_VHumanCombatant::vfunc463(a0, a1);
}
// END FUNCTION

// FUNCTION: 0x103dd690 size=0x5
#include "animevent_t.h"
#include "CNPC_VYukie.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VYukie::vfunc259
// the game's 0x103dd690: a tail call (jmp) of CNPC_VHuman::vfunc259
void CNPC_VYukie::vfunc259(animevent_t *a0)
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc259(a0);
}
// END FUNCTION

// FUNCTION: 0x103dd6b0 size=0x67
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CNPC_VYukie.h"

#define D(x) virtual void x();
#define T(p) D(p##0) D(p##1) D(p##2) D(p##3) D(p##4) D(p##5) D(p##6) D(p##7) D(p##8) D(p##9)
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)

struct CYukieSlots604
{
	H(a0) H(b0) H(c0) H(d0) H(e0) H(f0)
	D(g0) D(g1) D(g2) D(g3)
	virtual int slot604(unsigned int flags);
	virtual int slot605(unsigned int flags);
};

int CNPC_VYukie::vfunc438()
{
	*(int *)((char *)this + 0x1b2c) = 0x2a;
	switch (*(int *)((char *)this + 0x5cc0)) {
	case 2: {
		*((char *)this + 0x5b80) = 0;
		unsigned int flags;
		if (sub_1032e7b0())
			flags = sub_1032e7b0()->slot360();
		else
			flags = 0;
		int result;
		if (flags & 0x18000) {
			result = ((CYukieSlots604 *)this)->slot604(flags);
			if (result)
				return result;
		} else {
			result = ((CYukieSlots604 *)this)->slot605(flags);
			if (result)
				return result;
		}
		break;
	}
	}
	return sub_103872d0();
}
// END FUNCTION

// FUNCTION: 0x103dd740 size=0x5
#include "CNPC_VYukie.h"
#include "CNPC_VHumanCombatant.h"

// TARGET: CNPC_VYukie::vfunc440
// the game's 0x103dd740: a tail call (jmp) of CNPC_VHumanCombatant::vfunc440
int CNPC_VYukie::vfunc440(int a0)
{
	return ((CNPC_VHumanCombatant *)this)->CNPC_VHumanCombatant::vfunc440(a0);
}
// END FUNCTION

// FUNCTION: 0x103dd760 size=0x5
#include "CNPC_VYukie.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VYukie::vfunc433
// the game's 0x103dd760: a tail call (jmp) of CAI_BaseNPCTroika::vfunc433
void CNPC_VYukie::vfunc433()
{
	((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc433();
}
// END FUNCTION

// FUNCTION: 0x103dd780 size=0xf
#include "CNPC_VYukie.h"
#include "CNPC_VHumanCombatant.h"

int CNPC_VYukie::vfunc461()
{
	*(int *)((char *)this + 0x1b38) = 0x2a;
	return ((CNPC_VHumanCombatant *)this)->vfunc461();
}
// END FUNCTION

// FUNCTION: 0x103dd7a0 size=0xd
#include "CNPC_VYukie.h"

void CNPC_VYukie::vfunc432(float x)
{
	sub_10387500(x);
}
// END FUNCTION

// FUNCTION: 0x103dd7c0 size=0x5
#include "CNPC_VYukie.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VYukie::vfunc434
// the game's 0x103dd7c0: a tail call (jmp) of CNPC_VHuman::vfunc434
void CNPC_VYukie::vfunc434()
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc434();
}
// END FUNCTION

// FUNCTION: 0x103dd7e0 size=0x5
#include "CTakeDamageInfo.h"
#include "CNPC_VYukie.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VYukie::vfunc390
// the game's 0x103dd7e0: a tail call (jmp) of CNPC_VHuman::vfunc390
int CNPC_VYukie::vfunc390(CTakeDamageInfo *a0)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc390(a0);
}
// END FUNCTION

// FUNCTION: 0x103dd800 size=0x27
#include "CEntityVSlots.h"
#include "CNPC_VYukie.h"

struct CAI_BaseNPCTroikaPlaceholder {
    void sub_1000dcba();
};

// TARGET: CNPC_VYukie::vfunc420
void CNPC_VYukie::vfunc420()
{
    ((CAI_BaseNPCTroikaPlaceholder *)this)->sub_1000dcba();
    if (sub_1032e7b0() != 0) {
        CEntityVSlots *w = sub_1032e7b0();
        void **vt = *(void ***)w;
        ((void (__fastcall *)(void *))vt[0x108 / 4])(w);
    }
}
// END FUNCTION

// FUNCTION: 0x103dd840 size=0x5
#include "CNPC_VYukie.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VYukie::vfunc366
// the game's 0x103dd840: a tail call (jmp) of CNPC_VHuman::vfunc366
bool CNPC_VYukie::vfunc366(int a0, int a1, int a2)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc366(a0, a1, a2);
}
// END FUNCTION

// FUNCTION: 0x103dd860 size=0x5
#include "CNPC_VYukie.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VYukie::vfunc144
// the game's 0x103dd860: a tail call (jmp) of CNPC_VHuman::vfunc144
void CNPC_VYukie::vfunc144(int a0)
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc144(a0);
}
// END FUNCTION

// FUNCTION: 0x103dd880 size=0x14
#include "CNPC_VYukie.h"
#include "CAI_BaseNPCTroika.h"

int CNPC_VYukie::vfunc404(CBaseEntity *pEnt)
{
	if (!pEnt)
		return 0;
	return ((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc404(pEnt);
}
// END FUNCTION

// FUNCTION: 0x103dd8b0 size=0x3e
#include "CNPC_VYukie.h"

struct CVirtSimpleA
{
	virtual void slot0();
	virtual void slot1();
};

struct CVirtSoundB
{
	virtual float slot0();
	virtual float slot1(float a, float b);
};


extern CVirtSimpleA *g_10924edc;
extern CVirtSoundB *g_1070b244;

struct CNPC_VYukieView
{
	char m_pad0000[0x6074];
	float m_fTime6074;	// +0x6074
	char m_b6078;	// +0x6078
};

// TARGET: CNPC_VYukie::vfunc599
char CNPC_VYukie::vfunc599(int unused)
{
	CNPC_VYukieView *pView = (CNPC_VYukieView *)this;
	g_10924edc->slot1();
	pView->m_b6078 = 1;
	pView->m_fTime6074 = g_1070b244->slot1(22.5f, 45.0f) + gpGlobals->curtime;
	return 1;
}
// END FUNCTION

// FUNCTION: 0x103dd900 size=0x74
#include "CNPC_VYukie.h"
#include "CEntityVSlots.h"
struct IRandomLike { virtual void v0(); virtual float RandomFloat(float lo, float hi); };
struct ISlot1 { virtual void v0(); virtual void vfunc1(); };
extern IRandomLike *g_1070b244;
extern ISlot1 *g_10924edc;
char CNPC_VYukie::vfunc600(int unused)
{
    unsigned int flags = sub_1032e7b0() ? sub_1032e7b0()->slot360() : 0;
    if ((flags & 0x18000) && !*((char *)this + 0x6078)) {
        *((char *)this + 0x6078) = 1;
        *(float *)((char *)this + 0x6074) = g_1070b244->RandomFloat(22.5f, 45.0f) + gpGlobals->curtime;
        g_10924edc->vfunc1();
        return 1;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103dd9a0 size=0x4b
#include "CBaseEntity.h"
#include "CNPC_VYukie.h"
#include "globalvars.h"
#include "engineiface.h"
struct SYukieNotify { virtual void a0(); virtual void vfunc1(); };
extern SYukieNotify *g_10924edc;
// TARGET: CNPC_VYukie::vfunc601
void CNPC_VYukie::vfunc601(int unused)
{
	g_10924edc->vfunc1();
	*(char *)((char *)this + 0x6078) = 0;
	if (((char (__fastcall *)(CNPC_VYukie *))(*(void ***)this)[308])(this))
		*(float *)((char *)this + 0x6070) = enginerandom->vfunc1(5.0f, 10.0f) + gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x103dda10 size=0x67
#include "CNPC_VYukie.h"
#include "CEntityVSlots.h"
struct CGameRulesY { virtual void vfunc0(); virtual char vfunc1(); char pad[0x24]; float f28; };
extern CGameRulesY *g_10924a1c;
extern float g_1044f02c;
struct YukieView { char pad[0x6074]; float m_fNextTime; char pad2[0x6268 - 0x6078]; float m_fTime2; };
// TARGET: CNPC_VYukie::vfunc602
char CNPC_VYukie::vfunc602()
{
    YukieView *v = (YukieView *)this;
    if (((CEntityVSlots *)this)->slot308()) {
        if (gpGlobals->curtime >= v->m_fNextTime)
            return 1;
    } else {
        double f = g_10924a1c->vfunc1() ? 0.0f : g_10924a1c->f28;
        float p = (float)((f + f) * g_1044f02c);
        if (p <= v->m_fTime2)
            return 1;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103ddaa0 size=0x3a
extern char g_10924fba;
extern char g_10924fb9;

// TARGET: sub_103ddaa0
bool __stdcall sub_103ddaa0(char *pEntity)
{
    if (pEntity == 0)
    {
        return false;
    }
    if (g_10924fba != 0)
    {
        return false;
    }
    if (g_10924fb9 != 0 && *(int *)(pEntity + 0xa8) != 0)
    {
        return false;
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x103ddaf0 size=0x6d
#include "CNPC_VYukie.h"

#define TEN(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define HUN(p) TEN(p##0) TEN(p##1) TEN(p##2) TEN(p##3) TEN(p##4) TEN(p##5) TEN(p##6) TEN(p##7) TEN(p##8) TEN(p##9)
struct Y0 { HUN(a) };
struct Y1 : Y0 { HUN(b) };
struct Y2 : Y1 { HUN(c) };
struct Y3 : Y2 { HUN(d) };
struct Y4 : Y3 { HUN(e) };
struct Y594 : Y4 { TEN(f0) TEN(f1) TEN(f2) TEN(f3) TEN(f4) TEN(f5) TEN(f6) TEN(f7) TEN(f8) virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual char h0(void *, int, int, int); };

extern unsigned char g_10924fba;
extern unsigned char g_10924fb9;

// TARGET: CNPC_VYukie::vfunc201
bool CNPC_VYukie::vfunc201(void *pEnt, int traceMask, int *ppBlocker, int d)
{
	if (!pEnt)
		return false;
	if (g_10924fba) {
		if (ppBlocker)
			*ppBlocker = 0;
		return false;
	}
	if (g_10924fb9 && *(int *)((char *)pEnt + 0xa8)) {
		if (ppBlocker)
			*ppBlocker = 0;
		return false;
	}
	if (!((Y594 *)this)->h0(pEnt, traceMask, 0, 0))
		return false;
	return true;
}
// END FUNCTION
