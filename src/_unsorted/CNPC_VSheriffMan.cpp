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

// FUNCTION: 0x103af780 size=0x6c
#include "CNPC_VSheriffMan.h"

struct ScopeTraceEntry {
    const char *m_pszName;
    const char *m_pszEntity;
    const char *m_pszExtra;
};
extern "C" __declspec(dllimport) ScopeTraceEntry g_ScopeTraceStack[];
extern "C" __declspec(dllimport) int g_ScopeTraceStackDepth;
extern const char g_106b8540[];

struct ScopeTrace {
    ScopeTrace(const char *name, const char *entity)
    {
        g_ScopeTraceStack[g_ScopeTraceStackDepth].m_pszName = name;
        g_ScopeTraceStack[g_ScopeTraceStackDepth].m_pszEntity = entity;
        g_ScopeTraceStack[g_ScopeTraceStackDepth].m_pszExtra = g_106b8540;
        g_ScopeTraceStackDepth++;
    }
    ~ScopeTrace() { g_ScopeTraceStackDepth--; }
};

// TARGET: CNPC_VSheriffMan::vfunc444
void CNPC_VSheriffMan::vfunc444(int *pTask)
{
    ScopeTrace trace("CNPC_VSheriffMan::RunTask", g_106b8540);
    if (*pTask != 0x154)
        sub_103c5f40(pTask);
}
// END FUNCTION

// FUNCTION: 0x103af810 size=0x5
#include "CNPC_VSheriffMan.h"
bool CNPC_VSheriffMan::vfunc566(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103af830 size=0x72
#include "CNPC_VSheriffMan.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
extern float g_104c6120;

void CNPC_VSheriffMan::vfunc431()
{
	g_109f3620[*g_109f3680].a = "CNPC_VSheriffMan::NPCThink";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_100052d6();
	*(float *)((char *)this + 0x17c) = g_104c6120 + gpGlobals->curtime;
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103b0290 size=0x64
#include "CNPC_VSheriffMan.h"
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_106514b8[];
extern char g_106b8540[];

// TARGET: CNPC_VSheriffMan::vfunc448
void CNPC_VSheriffMan::vfunc448(int arg)
{
	g_109f3620[*g_109f3680].a = g_106514b8;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_100054bb(arg);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103b0320 size=0x65
#include "CNPC_VSheriffMan.h"
struct ScopeEntry { const char *name; const void *a; const void *b; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106514d8[];
extern char g_106b8540[];

int CNPC_VSheriffMan::vfunc440(int a)
{
	g_109f3620[*g_109f3680].name = g_106514d8;
	g_109f3620[*g_109f3680].a = g_106b8540;
	g_109f3620[*g_109f3680].b = g_106b8540;
	(*g_109f3680)++;
	int r = sub_10005e20(a);
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x103b0e90 size=0x1d7
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CNPC_VSheriffMan.h"
#include "ScopeTrace.h"
#include "CVDmg_t.h"
#include "CVStatList_t.h"

class SBossGlobalView
{
public:
	virtual void v0();
	virtual void vfunc1();
};
extern SBossGlobalView *g_10924a6c;

struct SDamageInfoView	// the 0x4c byte damage record
{
	CVDmg_t *m_pVDmg;	// 0x00
	char m_pad0004[0x30 - 4];
	float m_flDamage;	// 0x30
	char m_pad0034[0x4c - 0x34];
};

int CNPC_VSheriffMan::vfunc390(const void *pInfo)
{
	ScopeTrace trace("CNPC_VSheriffMan::OnTakeDamage_Alive", g_106b8540);
	SDamageInfoView info = *(const SDamageInfoView *)pInfo;
	float flDamage;
	if (info.m_pVDmg)
		flDamage = (float)info.m_pVDmg->sub_101faa70();
	else
		flDamage = info.m_flDamage;
	int nMax = CVStatListSet::Of(this)->Find(0)->sub_102012d0(0x11);
	int nCur = CVStatListSet::Of(this)->Find(0)->sub_102012d0(0xf);
	if ((float)nCur + flDamage >= nMax) {
		*(int *)((char *)this + 0x1fc) = 0;
		g_10924a6c->vfunc1();
		sub_10269a20(0x79);
		m_b66e5 = 1;
	} else {
		if (!m_b66e4)
			goto skip;
	}
	info.m_flDamage = 0;
	if (info.m_pVDmg) {
		*(int *)((char *)info.m_pVDmg + 4) = 0;
		*(int *)((char *)info.m_pVDmg + 0xc) = 0;
	}
skip:
	return sub_10385a50(&info);
}
// END FUNCTION
