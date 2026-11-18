// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10050280 size=0x1e
#include "CPointEntity.h"

void sub_100aa7b0(void *p);

// TARGET: CPointEntity::vfunc5
CBaseEntity *CPointEntity::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101c0820 size=0x89
#include "CPointEntity.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

void CPointEntity::sub_101c0820()
{
	CBaseEntity *pEnt = (CBaseEntity *)this;
	const char *name;
	if (pEnt)
		name = pEnt->m_name26c ? pEnt->m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseEntity::SetSolid";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	((CCollisionProperty *)((char *)pEnt + 0x270))->sub_100dc480(0);
	(*g_109f3680)--;
	pEnt->sub_100b3b00();
}
// END FUNCTION
