// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10370970 size=0x1e
#include "CNPC_VCop.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VCop::vfunc5
CNPC_VCop *CNPC_VCop::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10370ad0 size=0x1d
#include "CNPC_VCop.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093ac40;
extern B g_10936c74;
int CNPC_VCop::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093ac40.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10371b70 size=0x65
#include "CGlobalEntityList.h"
#include "CAI_BaseNPC.h"
#include "CNPC_VHumanCombatant.h"
#include "CNPC_VCop.h"

#define S1(p, n) virtual void p##n();
#define S10(p) S1(p,0) S1(p,1) S1(p,2) S1(p,3) S1(p,4) S1(p,5) S1(p,6) S1(p,7) S1(p,8) S1(p,9)
struct Slots598 {
    S10(a0) S10(a1) S10(a2) S10(a3) S10(a4) S10(a5) S10(a6) S10(a7) S10(a8) S10(a9)
    S10(b0) S10(b1) S10(b2) S10(b3) S10(b4) S10(b5) S10(b6) S10(b7) S10(b8) S10(b9)
    S10(c0) S10(c1) S10(c2) S10(c3) S10(c4) S10(c5) S10(c6) S10(c7) S10(c8) S10(c9)
    S10(d0) S10(d1) S10(d2) S10(d3) S10(d4) S10(d5) S10(d6) S10(d7) S10(d8) S10(d9)
    S10(e0) S10(e1) S10(e2) S10(e3) S10(e4) S10(e5) S10(e6) S10(e7) S10(e8) S10(e9)
    S10(f0) S10(f1) S10(f2) S10(f3) S10(f4) S10(f5) S10(f6) S10(f7) S10(f8)
    S1(x, 0) S1(x, 1) S1(x, 2) S1(x, 3) S1(x, 4) S1(x, 5) S1(x, 6) S1(x, 7)
    virtual void f598(void *pEnt);
};

extern CGlobalEntityList *g_10566458;

// TARGET: CNPC_VCop::vfunc442
void CNPC_VCop::vfunc442(int *pEvent)
{
    switch (*pEvent) {
    case 0x107:
        ((CAI_BaseNPC *)this)->sub_10273e80(0);
        break;
    case 0x14a: {
        unsigned int h = m_h628c;
        CGlobalEntityList_Slot *s;
        void *pEnt = (h != 0xffffffff && (s = &g_10566458->m_Slots[h & 0x1fff])->m_Serial == (int)(h >> 13)) ? s->m_pEntity : 0;
        ((Slots598 *)this)->f598(pEnt);
        break;
    }
    default:
        ((CNPC_VHumanCombatant *)this)->sub_10387290(pEvent);
        break;
    }
}
// END FUNCTION

// FUNCTION: 0x10372b70 size=0xaa
#include "CNPC_VCop.h"
extern unsigned int g_1093ac3c;
extern float g_1093aca8;
extern CGlobalEntityList *g_10566458;
struct CGlobalVars_10372b70
{
	char m_pad0000[0xc];
	float curtime;	// 0x0c
};
extern CGlobalVars_10372b70 *g_1070b228;

static inline CGlobalEntityList_Ent *LookupHandle(unsigned int h)
{
	if (h != -1) {
		CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
		if (pSlot->m_Serial == (int)(h >> 13))
			return pSlot->m_pEntity;
	}
	return 0;
}

int CNPC_VCop::vfunc404(CNPC_VCopTarget *pEnt)
{
	if (!pEnt)
		return 0;
	if ((void *)pEnt == (void *)LookupHandle(g_1093ac3c) && g_1070b228->curtime < g_1093aca8)
		return 1;
	CNPC_VCopPlayer *pPlayer = pEnt->m_pPlayer;
	if (pPlayer) {
		if (pPlayer->sub_1017f8d0())
			return 1;
		if (pPlayer->sub_1017f770() > 0)
			return 1;
	}
	return sub_10299da0(pEnt);
}
// END FUNCTION

// FUNCTION: 0x10372cc0 size=0xc9
#include "CNPC_VCop.h"

struct EntInfo { CBaseEntity *m_pEntity; int m_serial; int m_unused; };
struct EntInfoList { int m_unused; EntInfo m_entries[1]; };
extern EntInfoList *g_10566458;

static inline CBaseEntity *ResolveHandle(unsigned int h)
{
	EntInfo *e;
	return (h != 0xffffffff && (e = &g_10566458->m_entries[h & 0x1fff], e->m_serial == (int)(h >> 13))) ? e->m_pEntity : 0;
}

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)
struct CCopSlots
{
	S100(a) S100(b) S100(c) S100(d) S10(e0) S10(e1) S10(e2) S10(e3) S10(e4) S10(e5)
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3();
	virtual int vfunc464();	// the NPC state
	void sub_10273790(const char *pszMessage, int a);
	void sub_102b4fb0(CBaseEntity *pTarget, int a);	// CAI_BaseNPCTroika::vfunc597
};

struct CNPC_VCopUnit
{
	virtual void v0();
	virtual unsigned int *vfunc1();	// GetRefEHandle
	void sub_1017f650();
};

void CNPC_VCop::vfunc597(CBaseEntity *pTarget, int a)
{
	if (pTarget == ResolveHandle(m_h628c)) {
		if (!ResolveHandle(*(unsigned int *)((char *)this + 0x6664))) {
			if (((CCopSlots *)this)->vfunc464() == 2) {
				CNPC_VCopUnit *pPlayer;
				if (pTarget == 0)
					pPlayer = 0;
				else
					pPlayer = *(CNPC_VCopUnit **)((char *)pTarget + 0xa8);
				pPlayer->sub_1017f650();
				if (pPlayer)
					*(unsigned int *)((char *)this + 0x6664) = *pPlayer->vfunc1();
				else
					*(unsigned int *)((char *)this + 0x6664) = 0xffffffff;
			}
		}
		((CCopSlots *)this)->sub_10273790("Player D_HT 10", 0);
	}
	((CCopSlots *)this)->sub_102b4fb0(pTarget, a);
}
// END FUNCTION
