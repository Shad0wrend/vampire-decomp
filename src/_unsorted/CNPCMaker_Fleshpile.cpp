// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1034bdc0 size=0x6
#include "datamap.h"
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

CBaseEntity *CNPCMaker_Fleshpile::vfunc5(unsigned int flags)
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
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
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

// FUNCTION: 0x1034c2d0 size=0x4a2
#include "CNPCMaker_Fleshpile.h"
#include "CNPC_VAndreiBlood.h"
#include "CEntityVSlots.h"
#include "UTIL_Trace.h"
#include "CGlobalEntityList.h"
#include "COutputEvent.h"
extern CGlobalEntityList g_106eb5d8;
extern CBaseEntity *g_10938040;
extern char g_106b8540[];
CBaseEntity *sub_10136580(const char *);
int sub_101cca80(void *, int, Vector *, Vector *, int, int);
void sub_101d1280(CBaseEntity *);
__declspec(dllimport) void Warning(const char *, ...);
#define F(p, o) (*(int *)((char *)(p) + (o)))
#define FF(p, o) (*(float *)((char *)(p) + (o)))
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

struct CSpawnView : CEntityVSlots
{
	void sub_102781e0(string_t); void SetHintGroup(string_t s) { sub_102781e0(s); } void sub_100a0420(string_t);
	void Set1584(string_t v) { *(string_t *)((char *)this + 0x1584) = v; }
	void Set5da8(string_t v) { *(string_t *)((char *)this + 0x5da8) = v; }
	void Set6558(string_t v) { *(string_t *)((char *)this + 0x6558) = v; }
};
// TARGET: CNPCMaker_Fleshpile::vfunc617
CBaseEntity *CNPCMaker_Fleshpile::vfunc617(char bSkipCheck)
{
	CEntityVSlots *me = (CEntityVSlots *)this;
	if (!g_10938040) {
		CBaseEntity *e = g_106eb5d8.sub_100f7380(0, "npc_VAndreiBlood");
		if (e)
			g_10938040 = (CBaseEntity *)dynamic_cast<CNPC_VAndreiBlood *>(e);
	}
	if (!bSkipCheck) {
		if (!g_10938040 || FF(g_10938040, 0x66b8) >= 2.0f)
			return 0;
		if (m_flGroundZ66b8 == 0.0f) {
			CGameTrace tr;
			UTIL_TraceLine_Calls(*me->slot217(), *me->slot217() - Vector(0, 0, 2048.0f), 0x2400b, this, 0, &tr);
			m_flGroundZ66b8 = tr.m_endpos[2];
		}
		Vector vecMins = *me->slot217() - Vector(34.0f, 34.0f, 0);
		Vector vecMaxs = *me->slot217() + Vector(34.0f, 34.0f, 0);
		vecMaxs.z = me->slot217()->z;
		if (!m_bNoDrop)
			vecMins.z = m_flGroundZ66b8;
		char buf[8];
		if (sub_101cca80(buf, 2, &vecMins, &vecMaxs, 0x2080, 0))
			return 0;
	}
	CBaseEntity *ent = sub_10136580(STRINGR(m_pszNPCClassname665c));
	if (!ent) {
		Warning("NULL Ent in NPCMaker!\n");
		return 0;
	}
	CSpawnView *npc = (CSpawnView *)F(ent, 0x98);
	if (!npc) {
		Warning("Non Troika Ent in NPCMaker!\n");
		return 0;
	}
	npc->Set1584(*(string_t *)((char *)this + 0x1584));
	((COutputEvent *)m_Output6668)->sub_100cd660(this, this, 0);
	npc->slot62((const float *)me->slot217());
	npc->slot64((const float *)me->slot221());
	F(npc, 0x204) |= 4;
	if (m_b66c2)
		F(npc, 0x204) |= 0x200;
	F(npc, 0x5dec) = m_n5dec;
	npc->Set5da8(*(string_t *)((char *)this + 0x5da8));
	npc->SetHintGroup(*(string_t *)&m_n5db0);
	F(npc, 0x1a98) = m_n1a98;
	F(npc, 0x63b0) = m_n63b0;
	F(npc, 0x63b4) = m_n63b4;
	F(npc, 0x63bc) = m_n63bc;
	{
		int tmp;
		npc->slot105(STRINGR(*me->slot9(&tmp)));
	}
	F(npc, 0x64bc) = m_n64bc;
	npc->Set6558(*(string_t *)((char *)this + 0x6558));
	F(npc, 0x64c4) = m_n64c4;
	F(npc, 0x62d8) = m_n62d8;
	F(npc, 0x6338) = m_n6338;
	F(npc, 0x633c) = m_n633c;
	F(npc, 0x6344) = m_n6344;
	F(npc, 0x6348) = m_n6348;
	F(npc, 0x634c) = m_n634c;
	F(npc, 0x6350) = m_n6350;
	F(npc, 0x6354) = m_n6354;
	F(npc, 0x6358) = m_n6358;
	F(npc, 0x63b0) = m_n63b0;
	F(npc, 0x63b4) = m_n63b4;
	F(npc, 0x63bc) = m_n63bc;
	F(npc, 0x63ac) = m_n63ac;
	*((char *)npc + 0x63d9) = m_b63d9;
	F(npc, 0x670) = m_n670;
	F(npc, 0x10e4) = m_n10e4;
	vfunc619((int)npc);
	sub_101d1280((CBaseEntity *)npc);
	npc->slot202((CEntityVSlots *)this);
	if (m_pszTargetName66bc)
		npc->sub_100a0420(*(string_t *)&m_pszTargetName66bc);
	vfunc620((int)npc);
	FF(g_10938040, 0x66b8) += 1.0f;
	return (CBaseEntity *)npc;
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
