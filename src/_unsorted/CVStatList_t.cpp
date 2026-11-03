// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10200610 size=0x73
#include "CVStatList_t.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_105a8510[];
extern char g_106b8540[];
CVStatList_t::CVStatList_t(int a)
{
    g_109f3620[*g_109f3680].a = g_105a8510;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    m_field10 = a;
    m_field0c = 0;
    m_field04 = 0;
    m_field08 = 0;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x102006b0 size=0x5f
#include "CVStatList_t.h"
#include "ScopeTrace.h"

CVStatList_t::~CVStatList_t()
{
	ScopeTrace trace("CVStatList_t::~CVStatList_t", g_106b8540);
	m_field04 = 0;
}
// END FUNCTION
