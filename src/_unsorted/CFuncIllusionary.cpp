// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100bf740 size=0x8
#include "CFuncIllusionary.h"
// TARGET: CFuncIllusionary::sub_100bf740
unsigned char CFuncIllusionary::sub_100bf740()
{
    unsigned char b;
    b = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
    b &= 0xfd;
    return b;
}
// END FUNCTION

// FUNCTION: 0x100bf760 size=0xc4
#include "CFuncIllusionary.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "CUnknown101466e0.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern float g_1070d9d0[3];

void CFuncIllusionary::vfunc103()
{
	((CEntityVSlots *)this)->slot64(g_1070d9d0);
	vfunc93(0, 0);
	const char *name = m_name26c ? m_name26c : g_106b8540;
	g_109f3620[*g_109f3680].a = "CBaseEntity::SetSolid";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	(*g_109f3680)--;
	int tmp;
	const char *pszModel = *vfunc9(&tmp);
	if (!pszModel)
		pszModel = g_106b8540;
	vfunc105(pszModel);
	((CUnknown101466e0 *)((char *)this + 0x1b0))->sub_101466e0(1);
}
// END FUNCTION

// FUNCTION: 0x100c0df0 size=0x1e
#include "CFuncIllusionary.h"

void sub_100aa7b0(void *p);

// TARGET: CFuncIllusionary::vfunc5
CBaseEntity *CFuncIllusionary::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
