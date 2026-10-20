// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1036a3f0 size=0x1d
#include "CNPC_VChangBros.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093aa70;
extern B g_10936c74;
int CNPC_VChangBros::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093aa70.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1036afc0 size=0x6d
#include "CNPC_VChangBros.h"
struct ScopeTraceEntry { const char *m_pFunction; const char *m_pEntity; const char *m_pExtra; };
extern int *g_109f3680;
extern ScopeTraceEntry *g_109f3620;
void CNPC_VChangBros::vfunc103()
{
	g_109f3620[*g_109f3680].m_pFunction = "CNPC_VChangBros::Spawn";
	g_109f3620[*g_109f3680].m_pEntity = "";
	g_109f3620[*g_109f3680].m_pExtra = "";
	++*g_109f3680;
	sub_10012855(0x209000);
	sub_10014876();
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1036b460 size=0x7c
#include "CNPC_VChangBros.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_10630f54[];
extern char g_106b8540[];
int CNPC_VChangBros::vfunc440(int schedule)
{
    g_109f3620[*g_109f3680].a = g_10630f54;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    if (schedule != 0x17) {
        int r = CNPC_VHuman::vfunc440(schedule);
        --*g_109f3680;
        return r;
    }
    --*g_109f3680;
    return 0x15d;
}
// END FUNCTION

// FUNCTION: 0x1036b500 size=0x68
#include "CNPC_VChangBros.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int CNPC_VChangBros::vfunc461()
{
	g_109f3620[*g_109f3680].a = "CNPC_VChangBros::SelectIdealState";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	*(int *)((char *)this + 0x1b38) = 10;
	int result = sub_10011225();
	(*g_109f3680)--;
	return result;
}
// END FUNCTION

// FUNCTION: 0x1036c6c0 size=0x72
#include "CNPC_VChangBros.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
struct CGlobalVarsStub {
	char pad[0xc];
	float curtime;
};
extern CGlobalVarsStub *g_1070b228;
extern float g_104ad9f0;

void CNPC_VChangBros::vfunc431()
{
	g_109f3620[*g_109f3680].a = "CNPC_VChangBros::NPCThink";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_100052d6();
	*(float *)((char *)this + 0x17c) = g_104ad9f0 + g_1070b228->curtime;
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1036c760 size=0x64
#include "CNPC_VChangBros.h"
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_10631094[];
extern char g_106b8540[];

// TARGET: CNPC_VChangBros::vfunc619
void CNPC_VChangBros::vfunc619(int arg)
{
	g_109f3620[*g_109f3680].a = g_10631094;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1000c27a(arg);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1036d1d0 size=0x78
#include "CNPC_VChangBros.h"
struct ScopeEnt { const char *name; const char *file; const char *file2; };
extern ScopeEnt *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CNPC_VChangBros::vfunc448(int code)
{
    g_109f3620[*g_109f3680].name = "CNPC_VChangBros::TaskFail";
    g_109f3620[*g_109f3680].file = g_106b8540;
    g_109f3620[*g_109f3680].file2 = g_106b8540;
    ++*g_109f3680;
    if (code >= 12 && code <= 15)
        *(int *)((char *)this + 0x5c54) = 0x15d;
    sub_100054bb(code);
    --*g_109f3680;
}
// END FUNCTION
