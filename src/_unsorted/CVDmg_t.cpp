// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101fa5b0 size=0x97
#include "CVDmg_t.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

// TARGET: CVDmg_t::CVDmg_t
CVDmg_t::CVDmg_t()
{
    g_109f3620[*g_109f3680].a = "CVDmg_t::CVDmg_t";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    m_pad0000 = -1;
    m_field10 = 0;
    m_field04 = 0;
    m_field08 = 0;
    m_field0c = 0;
    m_field34 = 0;
    m_field40 = 0;
    m_field38 = -1;
    m_field3c = 1.0f;
    --*g_109f3680;
}
// END FUNCTION
