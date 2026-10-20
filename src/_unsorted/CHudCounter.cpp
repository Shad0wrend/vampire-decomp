// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1012e4c0 size=0x1e
#include "CHudCounter.h"

void sub_100aa7b0(void *p);

// TARGET: CHudCounter::vfunc5
CHudCounter *CHudCounter::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1012e580 size=0x9e
#include "CHudCounter.h"
#include "CCollisionProperty.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CHudCounter::vfunc103()
{
	vfunc104();
	const char *name = m_name26c ? m_name26c : g_106b8540;
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseEntity::SetSolid";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = g_106b8540;
	(*g_109f3680)++;
	((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	(*g_109f3680)--;
	vfunc93(0, 0);
	*(int *)((char *)this + 0x450) = -1;
	sub_100b3b00();
}
// END FUNCTION
