// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1034bdc0 size=0x6
#include "CNPCMaker_Fleshpile.h"
namespace lifted {
extern char g_106250f0;
}
datamap_t * CNPCMaker_Fleshpile::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_106250f0);
}
// END FUNCTION

// FUNCTION: 0x1034be90 size=0x14
#include "CNPCMaker_Fleshpile.h"

// TARGET: CNPCMaker_Fleshpile::vfunc370
int CNPCMaker_Fleshpile::vfunc370(int a)
{
	void **vt = *(void ***)this;
	union {
		void *p;
		void (CNPCMaker_Fleshpile::*pm)(int);
	} u;
	u.p = vt[368];
	(this->*u.pm)(a);
	return a;
}
// END FUNCTION

// FUNCTION: 0x1034bec0 size=0x14
#include "CNPCMaker_Fleshpile.h"

// TARGET: CNPCMaker_Fleshpile::vfunc371
int CNPCMaker_Fleshpile::vfunc371(int a)
{
	void **vt = *(void ***)this;
	union {
		void *p;
		void (CNPCMaker_Fleshpile::*pm)(int);
	} u;
	u.p = vt[369];
	(this->*u.pm)(a);
	return a;
}
// END FUNCTION

// FUNCTION: 0x1034bef0 size=0x5
#include "CNPCMaker_Fleshpile.h"
bool CNPCMaker_Fleshpile::vfunc363(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1034bf10 size=0x5
#include "CNPCMaker_Fleshpile.h"
bool CNPCMaker_Fleshpile::vfunc362(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1034bf30 size=0x5
#include "CNPCMaker_Fleshpile.h"
bool CNPCMaker_Fleshpile::vfunc365(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1034bf50 size=0x5
#include "CNPCMaker_Fleshpile.h"
bool CNPCMaker_Fleshpile::vfunc364(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1034bf70 size=0x3
#include "CNPCMaker_Fleshpile.h"
void CNPCMaker_Fleshpile::vfunc619(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1034bf90 size=0x3
#include "CNPCMaker_Fleshpile.h"
void CNPCMaker_Fleshpile::vfunc620(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1034bfb0 size=0x41
#include "CNPCMaker_Fleshpile.h"
#include "COutputEvent.h"

struct CGargoyleBaseUnit { void sub_100123af(); };
void sub_100aa7b0(void *p);

CNPCMaker_Fleshpile *CNPCMaker_Fleshpile::vfunc5(unsigned int flags)
{
	((COutputEvent *)((char *)this + 0x6698))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x6680))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x6668))->sub_100cd2d0();
	((CGargoyleBaseUnit *)this)->sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1034c020 size=0x105
#include "CNPCMaker_Fleshpile.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

void sub_10010dd4();
void sub_1000572c();

void CNPCMaker_Fleshpile::vfunc103()
{
	{
		ScopeTrace trace("CBaseEntity::SetSolid", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	*(int *)((char *)this + 0x66b0) = 0;
	vfunc104();
	if (*((char *)this + 0x66c3))
		*((char *)this + 0x66c2) = 1;
	if (!*((char *)this + 0x66c0)) {
		sub_100ac4e0((int)sub_10010dd4, 0, 0);
		*(float *)((char *)this + 0x17c) = *(float *)((char *)this + 0x6664) + gpGlobals->curtime;
		sub_100b3b00();
		*(int *)((char *)this + 0x66b8) = 0;
	} else {
		sub_100ac4e0((int)sub_1000572c, 0, 0);
		sub_100b3b00();
		*(int *)((char *)this + 0x66b8) = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1034c180 size=0xa9
#include "CNPCMaker_Fleshpile.h"
#include "CEntityVSlots.h"

extern "C" __declspec(dllimport) void __cdecl Warning(const char *fmt, ...);
extern char g_106b8540[];
void sub_101d0ec0(const char *pszClassname);
void sub_101cd940(CBaseEntity *pEnt);

// TARGET: CNPCMaker_Fleshpile::vfunc104
void CNPCMaker_Fleshpile::vfunc104()
{
	int nOut;
	const char *pszModel = *vfunc9(&nOut);
	if (!pszModel)
		pszModel = g_106b8540;
	if (*pszModel) {
		engine->vfunc13(pszModel, 0);
		sub_1027bb50();
		const char *pszTemplate = *(const char **)((char *)this + 0x665c);
		if (!pszTemplate)
			pszTemplate = g_106b8540;
		sub_101d0ec0(pszTemplate);
		return;
	}
	CEntityVSlots *pSlots = (CEntityVSlots *)this;
	Vector *pOrigin = pSlots->slot220();
	Warning("%s at %.0f %.0f %0.f missing modelname\n", sub_100ab4f0(), pOrigin->x, pSlots->slot220()->y, pSlots->slot220()->z);
	sub_101cd940(this);
}
// END FUNCTION

// FUNCTION: 0x1034c260 size=0x44
#include "CNPCMaker_Fleshpile.h"
#include "CNPC_VAndreiBlood.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList g_106eb5d8;
extern CNPC_VAndreiBlood *g_10938040;
extern char g_10538764[];
extern char g_10625234[];
extern "C" void *__cdecl __RTDynamicCast(void *, long, void *, void *, int);
// TARGET: CNPCMaker_Fleshpile::vfunc130
void CNPCMaker_Fleshpile::vfunc130(int a)
{
	CBaseEntity *pEnt = g_106eb5d8.sub_100f7380(0, "npc_VAndreiBlood");
	if (pEnt)
		g_10938040 = (CNPC_VAndreiBlood *)__RTDynamicCast(pEnt, 0, g_10538764, g_10625234, 0);
	sub_102998c0(a);
}
// END FUNCTION

// FUNCTION: 0x1034c8e0 size=0x7a
#include "CNPCMaker_Fleshpile.h"

struct SBossCounts {
	char pad[0x66b8];
	float m_flA;
	float m_flB;
};

struct SRunner {
	char pad[0x6671];
	char m_bCounted;
};

extern SBossCounts *g_10938040;
extern char g_10538764[];
extern char g_10625270[];

void CNPCMaker_Fleshpile::vfunc139(CBaseEntity *pEnt)
{
	if (g_10938040) {
		SRunner *pRunner = (SRunner *)__RTDynamicCast(pEnt, 0, g_10538764, g_10625270, 0);
		if (pRunner && !pRunner->m_bCounted) {
			g_10938040->m_flA = g_10938040->m_flA - 1.0f;
			g_10938040->m_flB = g_10938040->m_flB + 1.0f;
			pRunner->m_bCounted = 1;
		}
	}
	sub_10009c41(pEnt);
}
// END FUNCTION
