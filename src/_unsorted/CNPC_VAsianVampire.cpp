// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10360610 size=0x1d
#include "CNPC_VAsianVampire.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093a578;
extern B g_10936c74;
int CNPC_VAsianVampire::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093a578.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10360bc0 size=0x6a
#include "CNPC_VAsianVampire.h"
struct TraceEntry { const char *a, *b, *c; };
extern int *g_109f3680;
extern TraceEntry *g_109f3620;
extern char g_106b8540[];
struct ScopeTrace {
    ScopeTrace(const char *a, const char *b, const char *c) {
        g_109f3620[*g_109f3680].a = a;
        g_109f3620[*g_109f3680].b = b;
        g_109f3620[*g_109f3680].c = c;
        ++*g_109f3680;
    }
    ~ScopeTrace() { --*g_109f3680; }
};
void sub_101d0ec0(const char *name);

void CNPC_VAsianVampire::sub_10360bc0()
{
    ScopeTrace trace("CNPC_VAsianVampire::Precache", g_106b8540, g_106b8540);
    sub_10384670();
    sub_101d0ec0("item_w_avamp_blade");
}
// END FUNCTION

// FUNCTION: 0x10360c50 size=0x6d
#include "CNPC_VAsianVampire.h"
struct ScopeTraceEntry { const char *m_pFunction; const char *m_pEntity; const char *m_pExtra; };
extern int *g_109f3680;
extern ScopeTraceEntry *g_109f3620;
void CNPC_VAsianVampire::vfunc103()
{
	g_109f3620[*g_109f3680].m_pFunction = "CNPC_VAsianVampire::Spawn";
	g_109f3620[*g_109f3680].m_pEntity = "";
	g_109f3620[*g_109f3680].m_pExtra = "";
	++*g_109f3680;
	sub_10012855(0x201000);
	sub_10014876();
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10361490 size=0x72
#include "CNPC_VAsianVampire.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
struct CGlobalVarsStub {
	char pad[0xc];
	float curtime;
};
extern CGlobalVarsStub *g_1070b228;
extern float g_104a9304;

void CNPC_VAsianVampire::vfunc431()
{
	g_109f3620[*g_109f3680].a = "CNPC_VAsianVampire::NPCThink";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_100052d6();
	m_flNextThink = g_104a9304 + g_1070b228->curtime;
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10361530 size=0x64
#include "CNPC_VAsianVampire.h"
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_1062cdd8[];
extern char g_106b8540[];

// TARGET: CNPC_VAsianVampire::vfunc619
void CNPC_VAsianVampire::vfunc619(int arg)
{
	g_109f3620[*g_109f3680].a = g_1062cdd8;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1000c27a(arg);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10362390 size=0x75
#include "CNPC_VAsianVampire.h"
struct ScopeEnt { const char *name; const char *file; const char *file2; };
extern ScopeEnt *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CNPC_VAsianVampire::vfunc448(int code)
{
    g_109f3620[*g_109f3680].name = "CNPC_VAsianVampire::TaskFail";
    g_109f3620[*g_109f3680].file = g_106b8540;
    g_109f3620[*g_109f3680].file2 = g_106b8540;
    ++*g_109f3680;
    if (code >= 12 && code <= 15)
        m_bTaskFailedJump = 1;
    sub_100054bb(code);
    --*g_109f3680;
}
// END FUNCTION
