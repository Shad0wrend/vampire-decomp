// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1022c0e0 size=0x7b
#include "CPropRadio.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_105b49d0[];
extern char g_105387dc[];
extern char g_106b8540[];
int CPropRadio::vfunc35(int a)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_105b49d0;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    int v = *(int *)((char *)this + 0x730);
    --*g_109f3680;
    return v;
}
// END FUNCTION

// FUNCTION: 0x1022c180 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_1022c180(char *self, int, int a)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CPropRadio::GetHighlightMaterial";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1022c680 size=0x96
#include "CPropRadio.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

// TARGET: CPropRadio::vfunc173
void CPropRadio::vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, int value)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (name == 0)
            name = g_106b8540;
    } else
        name = "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CPropRadio::Use";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    if (*((char *)this + 0x734))
        sub_1022c750(0);
    else
        sub_1022c750(1);
    --*g_109f3680;
}
// END FUNCTION
