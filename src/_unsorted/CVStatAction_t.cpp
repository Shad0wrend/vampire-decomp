// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101fc760 size=0x9c
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CVStatAction_t.h"
#include "ScopeTrace.h"

CVStatAction_t::CVStatAction_t(int a, int b)
{
	ScopeTrace trace("CVStatAction_t::CVStatAction_t", g_106b8540);
	m_pad0000 = 0;
	m_pad0004 = 0;
	m_nMin = -1;
	m_nMax = 999999;
	m_pData = (void *)-1;
	m_a50 = a;
	m_b54 = b;
}
// END FUNCTION

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
