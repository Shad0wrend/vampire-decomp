// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100a2110 size=0x6a
struct SScope { const char *a; const char *b; const char *c; };
struct SVec { char pad[0xc]; int count; };
extern "C" __declspec(dllimport) SScope g_ScopeTraceStack[];
extern "C" __declspec(dllimport) int g_ScopeTraceStackDepth;
extern char g_106b8540[];
struct S100a2110 { bool sub_100a2110(SVec **pp); };
// TARGET: S100a2110::sub_100a2110
bool S100a2110::sub_100a2110(SVec **pp)
{
    g_ScopeTraceStack[g_ScopeTraceStackDepth].a = "CThinkContextsSaveDataOps::IsEmpty";
    g_ScopeTraceStack[g_ScopeTraceStackDepth].b = g_106b8540;
    g_ScopeTraceStack[g_ScopeTraceStackDepth].c = g_106b8540;
    g_ScopeTraceStackDepth++;
    int n = (*pp)->count;
    g_ScopeTraceStackDepth--;
    if (n == 0)
        return true;
    return false;
}
// END FUNCTION

// FUNCTION: 0x100a21a0 size=0x58
#include "CThinkContextsSaveDataOps.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

void CThinkContextsSaveDataOps::vfunc3(void *pField)
{
	g_109f3620[*g_109f3680].m_pszFunc = "CThinkContextsSaveDataOps::MakeEmpty";
	g_109f3620[*g_109f3680].m_pszName = "";
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	(*g_109f3680)--;
}
// END FUNCTION
