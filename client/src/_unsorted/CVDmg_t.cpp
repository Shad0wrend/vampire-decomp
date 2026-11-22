// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101586f0 size=0x97
#include "CVDmg_t.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];

// TARGET: CVDmg_t::CVDmg_t
CVDmg_t::CVDmg_t()
{
    g_101e3124[*g_101e3128].a = "CVDmg_t::CVDmg_t";
    g_101e3124[*g_101e3128].b = g_102de300;
    g_101e3124[*g_101e3128].c = g_102de300;
    ++*g_101e3128;
    m_pad0000 = -1;
    m_field10 = 0;
    m_field04 = 0;
    m_field08 = 0;
    m_field0c = 0;
    m_field34 = 0;
    m_field40 = 0;
    m_field38 = -1;
    m_field3c = 1.0f;
    --*g_101e3128;
}
// END FUNCTION
