// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10104d10 size=0x7b
#include "CExpressionTable.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1056b6f4[];
extern char g_106b8540[];
CExpressionTable::CExpressionTable()
{
    m_field00 = 0;
    m_field04 = 0;
    m_field08 = 0;
    m_field0c = 0;
    m_field10 = 0;
    m_list.sub_1024b2d0(0, 0x20, 0);
    g_109f3620[*g_109f3680].a = g_1056b6f4;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10104db0 size=0xb9
#include "CExpressionTable.h"
#include "CUnknown1024b370.h"
#include "utlvector.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

CExpressionTable::~CExpressionTable()
{
	g_109f3620[*g_109f3680].m_pszFunc = "CExpressionTable::~CExpressionTable";
	g_109f3620[*g_109f3680].m_pszName = g_106b8540;
	g_109f3620[*g_109f3680].m_pszExtra = g_106b8540;
	(*g_109f3680)++;
	(*g_109f3680)--;
	((CUnknown1024b370 *)&m_list)->sub_1024b370();
	((CUtlVector<int> *)this)->~CUtlVector<int>();
}
// END FUNCTION
