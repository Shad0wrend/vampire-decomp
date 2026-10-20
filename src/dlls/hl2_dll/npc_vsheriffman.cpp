// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103af8d0 size=0x64
#include "CNPC_VSheriffMan.h"
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_10651428[];
extern char g_106b8540[];

// TARGET: CNPC_VSheriffMan::vfunc619
void CNPC_VSheriffMan::vfunc619(int arg)
{
	g_109f3620[*g_109f3680].a = g_10651428;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1000c27a(arg);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103b15e0 size=0x7a
#include "CNPC_VSheriffMan.h"
struct ScopeEnt { const char *name; const char *file; const char *file2; };
extern ScopeEnt *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CNPC_VSheriffMan::sub_103b15e0(int arg)
{
    g_109f3620[*g_109f3680].name = "CNPC_VSheriffMan::StartTransformation";
    g_109f3620[*g_109f3680].file = g_106b8540;
    g_109f3620[*g_109f3680].file2 = g_106b8540;
    ++*g_109f3680;
    m_pszSourceFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\npc_vsheriffman.cpp";
    m_nSourceLine = 0x4c7;
    sub_102ae750(0x15b, 0);
    --*g_109f3680;
}
// END FUNCTION
