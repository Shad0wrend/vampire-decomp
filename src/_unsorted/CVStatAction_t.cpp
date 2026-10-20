// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101fc830 size=0x7f
#include "CVStatAction_t.h"
extern char g_106b8540[];
struct ScopeTraceEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeTraceEntry *g_109f3620;
extern "C++" void __cdecl operator delete(void *);
CVStatAction_t::~CVStatAction_t()
{
    g_109f3620[*g_109f3680].a = "CVStatAction_t::~CVStatAction_t";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    if (m_pad0004 == 4) {
        operator delete(m_pData);
        m_pData = 0;
    }
    --*g_109f3680;
}
// END FUNCTION
