// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1004f900 size=0xca
#include "CSimplePhysicsBrush.h"
#include "CCollisionProperty.h"
#include "CUnknown101466e0.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CSimplePhysicsBrush::vfunc103()
{
	CBaseEntity *pEnt = (CBaseEntity *)this;
	int tmp;
	const char *pszModel = *pEnt->vfunc9(&tmp);
	if (!pszModel)
		pszModel = g_106b8540;
	pEnt->vfunc105(pszModel);
	pEnt->vfunc93(7, 0);
	const char *name = pEnt->m_name26c ? pEnt->m_name26c : g_106b8540;
	g_109f3620[*g_109f3680].a = "CBaseEntity::SetSolid";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(6);
	(*g_109f3680)--;
	pEnt->m_nTakeDamage = 1;
	((CUnknown101466e0 *)((char *)this + 0x1b0))->sub_101466e0(1);
	pEnt->sub_100b3900(2);
}
// END FUNCTION

// FUNCTION: 0x1004fb00 size=0x1e
#include "CSimplePhysicsBrush.h"

void sub_100aa7b0(void *p);

// TARGET: CSimplePhysicsBrush::vfunc5
CSimplePhysicsBrush *CSimplePhysicsBrush::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
