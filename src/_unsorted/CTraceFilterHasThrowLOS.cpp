// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103be570 size=0x86
#include "CTraceFilterHasThrowLOS.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

bool CTraceFilterHasThrowLOS::vfunc0(void *pHandleEntity, int contentsMask)
{
	g_109f3620[*g_109f3680].m_pszFunc = "CTraceFilterHasThrowLOS::ShouldHitEntity";
	g_109f3620[*g_109f3680].m_pszName = g_106b8540;
	g_109f3620[*g_109f3680].m_pszExtra = g_106b8540;
	(*g_109f3680)++;
	if (pHandleEntity && (*(unsigned int *)((char *)pHandleEntity + 0x4c) & 0x83e)) {
		(*g_109f3680)--;
		return false;
	}
	bool bResult = CTraceFilterSimple::vfunc0(pHandleEntity, contentsMask);
	(*g_109f3680)--;
	return bResult;
}
// END FUNCTION
