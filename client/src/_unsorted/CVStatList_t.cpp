// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1015d1e0 size=0x73
#include "CVStatList_t.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern TraceEnt *g_101e3124;
extern char g_102cc214[];
extern char g_102de300[];
CVStatList_t::CVStatList_t(int a)
{
    g_101e3124[*g_101e3128].a = g_102cc214;
    g_101e3124[*g_101e3128].b = g_102de300;
    g_101e3124[*g_101e3128].c = g_102de300;
    ++*g_101e3128;
    m_field10 = a;
    m_field0c = 0;
    m_field04 = 0;
    m_field08 = 0;
    --*g_101e3128;
}
// END FUNCTION
