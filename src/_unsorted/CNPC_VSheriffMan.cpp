// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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

// FUNCTION: 0x103af830 size=0x72
#include "CNPC_VSheriffMan.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
struct CGlobalVarsStub {
	char pad[0xc];
	float curtime;
};
extern CGlobalVarsStub *g_1070b228;
extern float g_104c6120;

void CNPC_VSheriffMan::vfunc431()
{
	g_109f3620[*g_109f3680].a = "CNPC_VSheriffMan::NPCThink";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_100052d6();
	*(float *)((char *)this + 0x17c) = g_104c6120 + g_1070b228->curtime;
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
