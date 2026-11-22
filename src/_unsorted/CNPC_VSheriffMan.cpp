// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103adaa0 size=0x6
#include "CNPC_VSheriffMan.h"
#include "datamap.h"
namespace lifted {
extern char g_106504e8;
}
datamap_t *CNPC_VSheriffMan::vfunc82()
{
    return (datamap_t *)&lifted::g_106504e8;
}
// END FUNCTION

// FUNCTION: 0x103adc50 size=0x6
extern char g_10650710;
// TARGET: sub_103adc50
char sub_103adc50() { return g_10650710; }
// END FUNCTION

// FUNCTION: 0x103adcb0 size=0x1d
#include "CNPC_VSheriffMan.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093c568;
extern B g_10936c74;
int CNPC_VSheriffMan::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093c568.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103adce0 size=0x583
#include "CNPC_VSheriffMan.h"
#include "UtlMem.h"
#include "UtlVec8.h"
#include "CUtlVector4.h"
#include "CUtlVector16.h"
#include "CUnknown10359c50.h"

extern "C" void __cdecl qsort(void *, unsigned int, unsigned int, int (__cdecl *)(const void *, const void *));
extern "C" int __cdecl sub_102bec60(const void *, const void *);
extern char g_109203cc[], g_109203d4[], g_109203dc[], g_10936c74[];
extern char g_1093d330[], g_1093d348[], g_1093d360[], g_1093d30c[];
extern char g_106511b0[], g_1065118c[], g_10651160[], g_10651134[], g_10651110[], g_106510e8[], g_106510c0[], g_1065108c[];
extern char g_10651058[], g_10651034[], g_10651014[], g_10650f08[], g_10650edc[], g_10650d48[], g_10650d18[], g_10650b18[];
extern char g_10650af0[], g_106508f0[];
extern bool g_10650710;
extern const char *g_10650718;
extern const char g_10594488[], g_10600e78[], g_10577ca0[], g_10628c94[];
extern CUnknown10359c50 g_1093c520, g_1093c538, g_1093c550, g_1093c568;

struct VecU {
	UtlMem mem;
	int size;
	int *elems;
};

struct Frame {
	UtlVec8Elem e;
	UtlVec8 task;
	VecU a;
	UtlVec8 sched;
	VecU b;
	UtlVec8 cond;
	UtlVec8 squad;
	const char *t2;
	const char *t1;
	const char *t3;
	const char *t4;
};

class CUnknown10936b68 { public: bool sub_1030d850(const char *cls, int name, CUnknown10359c50 *reg); };
extern CUnknown10936b68 g_10936b68;
extern char g_106508ac[];

struct Elem { const char *name; int id; };

void CNPC_VSheriffMan::InitCustomSchedules()
{
	int i;
	Frame f;

	f.a.mem.sub_102c6a00(0, 0);
	f.a.size = 0;
	f.a.elems = f.a.mem.m_pMemory;
	f.b.mem.sub_102c6b80(0, 0);
	f.b.size = 0;
	f.b.elems = f.b.mem.m_pMemory;
	f.sched.sub_102c66f0(0, 0);
	f.task.sub_102c66f0(0, 0);
	f.cond.sub_102c66f0(0, 0);
	f.squad.sub_102c66f0(0, 0);

	f.e.a = (int)g_106511b0;
	f.e.b = 0x79;
	f.cond.sub_102c6a50(f.cond.m_Size, &f.e);
	f.e.a = (int)g_1065118c;
	f.e.b = 0x150;
	f.task.sub_102c6a50(f.task.m_Size, &f.e);
	f.e.a = (int)g_10651160;
	f.e.b = 0x151;
	f.task.sub_102c6a50(f.task.m_Size, &f.e);
	f.e.a = (int)g_10651134;
	f.e.b = 0x152;
	f.task.sub_102c6a50(f.task.m_Size, &f.e);
	f.e.a = (int)g_10651110;
	f.e.b = 0x153;
	f.task.sub_102c6a50(f.task.m_Size, &f.e);
	f.e.a = (int)g_106510e8;
	f.e.b = 0x154;
	f.task.sub_102c6a50(f.task.m_Size, &f.e);
	f.e.a = (int)g_106510c0;
	f.e.b = 0x155;
	f.task.sub_102c6a50(f.task.m_Size, &f.e);
	f.e.a = (int)g_1065108c;
	f.e.b = 0x156;
	f.task.sub_102c6a50(f.task.m_Size, &f.e);
	f.e.a = (int)g_10651058;
	f.e.b = 0x157;
	f.task.sub_102c6a50(f.task.m_Size, &f.e);
	f.e.a = (int)g_10651034;
	f.e.b = 0x158;
	f.task.sub_102c6a50(f.task.m_Size, &f.e);
	f.e.a = (int)g_10651014;
	f.e.b = 0x15a;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t3 = g_10650f08;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (const int *)&f.t3);
	f.e.a = (int)g_10650edc;
	f.e.b = 0x15b;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t4 = g_10650d48;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (const int *)&f.t4);
	f.e.a = (int)g_10650d18;
	f.e.b = 0x15c;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t2 = g_10650b18;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (const int *)&f.t2);
	f.e.a = (int)g_10650af0;
	f.e.b = 0x15d;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t1 = g_106508f0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (const int *)&f.t1);

	if (g_1093c520.sub_1001153b(g_109203cc, g_1093d330)
		&& g_1093c538.sub_1001153b(g_109203d4, g_1093d348))
		g_1093c550.sub_1001153b(g_109203dc, g_1093d360);
	g_1093c568.sub_1001153b(g_10936c74, g_1093d30c);

	if (f.sched.m_Size)
		qsort(f.sched.m_pMemory, f.sched.m_Size, 8, sub_102bec60);
	if (f.task.m_Size)
		qsort(f.task.m_pMemory, f.task.m_Size, 8, sub_102bec60);
	if (f.cond.m_Size)
		qsort(f.cond.m_pMemory, f.cond.m_Size, 8, sub_102bec60);
	if (f.squad.m_Size)
		qsort(f.squad.m_pMemory, f.squad.m_Size, 8, sub_102bec60);

	for (i = 0; i < f.sched.m_Size; i++) {
		Elem *p = (Elem *)f.sched.m_pMemory;
		const char *cn = g_10650718;
		int id = p[i].id;
		const char *nm = p[i].name;
		if (!g_1093c520.sub_102ea130(nm, id, g_10594488, cn))
			goto fail;
	}
	for (i = 0; i < f.task.m_Size; i++) {
		Elem *p = (Elem *)f.task.m_pMemory;
		const char *cn = g_10650718;
		int id = p[i].id;
		const char *nm = p[i].name;
		if (!g_1093c538.sub_102ea130(nm, id, g_10600e78, cn))
			goto fail;
	}
	for (i = 0; i < f.cond.m_Size; i++) {
		Elem *p = (Elem *)f.cond.m_pMemory;
		const char *cn = g_10650718;
		int id = p[i].id;
		const char *nm = p[i].name;
		if (!g_1093c550.sub_102ea130(nm, id, g_10577ca0, cn))
			goto fail;
	}
	for (i = 0; i < f.squad.m_Size; i++) {
		if (!g_1093c568.sub_102ea130(((const char **)f.squad.m_pMemory)[i * 2], ((int *)f.squad.m_pMemory)[i * 2 + 1], g_10628c94, g_10650718))
			goto fail;
	}
	for (i = 0; i < f.b.size; i++)
		((void (*)())f.b.mem.m_pMemory[i])();
	for (i = 0; i < f.a.size; i++) {
		if (!g_10650710)
			break;
		g_10650710 = g_10936b68.sub_1030d850(g_106508ac, f.a.mem.m_pMemory[i], &g_1093c520);
	}
	f.squad.sub_102c8a90();
	f.cond.sub_102c8a90();
	((CUtlVector16 *)&f.task)->sub_102c8b60();
	((UtlMem *)&f.task)->sub_102c8c00();
	((CUtlVector16 *)&f.sched)->sub_102c8b60();
	((UtlMem *)&f.sched)->sub_102c8c00();
	goto cleanup;
fail:
	f.squad.sub_102c8a90();
	f.cond.sub_102c8a90();
	f.task.sub_102c8a90();
	f.sched.sub_102c8a90();
cleanup:
	((CUtlVector16 *)&f.b)->sub_102c8bb0();
	f.b.mem.sub_102c8c40();
	((CUtlVector16 *)&f.a)->sub_102c8b10();
	f.a.mem.sub_1021e540();
}
// END FUNCTION

// FUNCTION: 0x103ae4b0 size=0x6
#include "CNPC_VSheriffMan.h"
namespace lifted {
extern char g_1093c520;
}
int CNPC_VSheriffMan::vfunc580()
{
    return (int)&lifted::g_1093c520;
}
// END FUNCTION

// FUNCTION: 0x103ae4d0 size=0x6
#include "CNPC_VSheriffMan.h"
namespace lifted {
extern int g_10650718;
}
int CNPC_VSheriffMan::vfunc451()
{
    return lifted::g_10650718;
}
// END FUNCTION

// FUNCTION: 0x103ae4f0 size=0x36
#include "CNPC_VSheriffMan.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1028d610();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CNPC_VSheriffMan *CNPC_VSheriffMan::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x66b8))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x6664))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1028d610();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103ae540 size=0xb2
#include "CNPC_VSheriffMan.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
void sub_10006c3a(const char *pszWeapon);

void CNPC_VSheriffMan::vfunc104()
{
	g_109f3620[*g_109f3680].a = "CNPC_VSheriffMan::Precache";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_100013f7();
	engine->vfunc13("models/character/monster/manbat/manbat.mdl", 1);
	engine->vfunc17((const char *)"sheriff_landblast_emitter", 1);
	engine->vfunc17((const char *)"sheriff_teleport_emitter", 1);
	engine->vfunc17((const char *)"sheriff_teleport_emitter", 1);
	sub_10006c3a("item_w_sheriff_sword");
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103ae630 size=0x6d
#include "CNPC_VSheriffMan.h"
struct ScopeTraceEntry { const char *m_pFunction; const char *m_pEntity; const char *m_pExtra; };
extern int *g_109f3680;
extern ScopeTraceEntry *g_109f3620;
void CNPC_VSheriffMan::vfunc103()
{
	g_109f3620[*g_109f3680].m_pFunction = "CNPC_VSheriffMan::Spawn";
	g_109f3620[*g_109f3680].m_pEntity = "";
	g_109f3620[*g_109f3680].m_pExtra = "";
	++*g_109f3680;
	sub_10012855(0x201000);
	sub_10014876();
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x103ae6c0 size=0xeb
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CNPC_VSheriffMan.h"
#include "CEntityVSlots.h"

struct CGlobalVarsTime
{
	char m_pad0000[0xc];
	int m_nCurtimeBits;
};

extern CGlobalVarsTime *g_1070b228;
extern int g_109340d8;
extern float g_104c6148;

void CNPC_VSheriffMan::vfunc420()
{
	ScopeTrace trace("CNPC_VSheriffMan::NPCInit", g_106b8540);
	CBaseEntity *pNone = 0;
	m_hTeleportBats = pNone;
	m_b66e4 = 0;
	m_b66e5 = 0;
	m_bAttacking = 0;
	const int *pOrigin = (const int *)((CEntityVSlots *)this)->slot220();
	m_nSpawnOrigin[0] = pOrigin[0];
	m_nSpawnOrigin[1] = pOrigin[1];
	m_nSpawnOrigin[2] = pOrigin[2];
	m_nSpawnTime = g_1070b228->m_nCurtimeBits;
	m_bTransformed = 0;
	sub_10013e85();
	m_pszMonsterModelName = "models/character/monster/manbat/manbat.mdl";
	m_pszNpcName = "npc_VSheriffMan";
	sub_10014c22();
	float f = g_104c6148;
	m_flJumpGravity = f + 0.0f;
	g_109340d8 = 0x15;
}
// END FUNCTION

// FUNCTION: 0x103ae7f0 size=0x3b
#include "CNPC_VSheriffMan.h"

struct CSheriffBossCall
{
	void sub_103c5910(int a);
};

extern int g_109340d8;
extern float g_104c6148;

// TARGET: CNPC_VSheriffMan::vfunc127
void CNPC_VSheriffMan::vfunc127(int a)
{
	((CSheriffBossCall *)this)->sub_103c5910(a);
	m_pszMonsterModelName = "models/character/monster/manbat/manbat.mdl";
	m_pszNpcName = "npc_VSheriffMan";
	float f = g_104c6148;
	m_flJumpGravity = f + 0.0f;
	g_109340d8 = 0x15;
}
// END FUNCTION

// FUNCTION: 0x103ae840 size=0x5e
#include "CNPC_VSheriffMan.h"
struct SScope { const char *a; const char *b; const char *c; };
extern "C" __declspec(dllimport) SScope g_ScopeTraceStack[];
extern "C" __declspec(dllimport) int g_ScopeTraceStackDepth;
extern char g_106b8540[];
int CNPC_VSheriffMan::vfunc337()
{
	g_ScopeTraceStack[g_ScopeTraceStackDepth].a = "CNPC_VSheriffMan::GetUsedHullBits";
	g_ScopeTraceStack[g_ScopeTraceStackDepth].b = g_106b8540;
	g_ScopeTraceStack[g_ScopeTraceStackDepth].c = g_106b8540;
	g_ScopeTraceStackDepth++;
	g_ScopeTraceStackDepth--;
	return 0x200000;
}
// END FUNCTION

// FUNCTION: 0x103ae8c0 size=0x18a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VSheriffMan.h"
#include "ScopeTrace.h"
#include "ConVar.h"

extern ConVar g_1093c588;
extern float g_104c6150;

// TARGET: CNPC_VSheriffMan::vfunc438
int CNPC_VSheriffMan::vfunc438()
{
	ScopeTrace trace("CNPC_VSheriffMan::SelectSchedule", g_106b8540);
	m_n1b2c = 0x21;
	if (m_bAttacking)
	{
		int nHeightA = 0;
		int nHeightB = 0;
		sub_103b1680(&nHeightA, &nHeightB);
		if (m_n5cc0 == 5)
			return 0x158;
		if (m_b66e5)
		{
			sub_103b10f0();
			return sub_10384ee0();
		}
		if (g_1093c588.GetInt() > 0)
		{
			g_1093c588.sub_10246160(0);
			return 0x15a;
		}
		if (nHeightA == 0)
		{
			if (nHeightB == 1)
				return 0x15c;
		}
		else if (nHeightA == 1 && nHeightB == 0)
			return 0x15d;
		if (!(sub_103c6a20() >= 0.05f))
		{
			if (!sub_103c67f0(g_104c6150))
				return sub_10384ee0();
		}
		return 0x15a;
	}
	return sub_10384ee0();
}
// END FUNCTION

// FUNCTION: 0x103aeac0 size=0x68
#include "CNPC_VSheriffMan.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int CNPC_VSheriffMan::vfunc461()
{
	g_109f3620[*g_109f3680].a = "CNPC_VSheriffMan::SelectIdealSchedule";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	m_nIdealState = 33;
	int result = sub_10011225();
	(*g_109f3680)--;
	return result;
}
// END FUNCTION

// FUNCTION: 0x103aeb50 size=0x5a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VSheriffMan.h"
#include "ScopeTrace.h"

void CNPC_VSheriffMan::vfunc433()
{
	g_109f3620[*g_109f3680].name = "CNPC_VSheriffMan::GatherConditions";
	g_109f3620[*g_109f3680].file = g_106b8540;
	g_109f3620[*g_109f3680].line = g_106b8540;
	(*g_109f3680)++;
	sub_102b27f0();
	(*g_109f3680)--;
}
// END FUNCTION
