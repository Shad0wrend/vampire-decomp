// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101d9f30 size=0x1e
#include "CDisciplineProjectile.h"

void sub_100aa7b0(void *p);

// TARGET: CDisciplineProjectile::vfunc5
CDisciplineProjectile *CDisciplineProjectile::vfunc5(unsigned int flags)
{
	sub_1000d800();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101d9f80 size=0x7d
#include "CBaseEntity.h"
#include "CDisciplineProjectile.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

struct SEffectMgr {
	void sub_100159fb(CBaseEntity *pEnt, int nValue, int nParam);
};
extern SEffectMgr g_10739a4c;

inline CBaseEntity *ResolveHandle(const unsigned int &h)
{
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
		if (s->m_Serial == (int)(h >> 13))
			return (CBaseEntity *)s->m_pEntity;
	}
	return 0;
}

void CDisciplineProjectile::vfunc269()
{
	CBaseEntity *pFirst = ResolveHandle(*(unsigned int *)((char *)this + 0x8a8));
	int nValue = 0;
	if (pFirst)
		nValue = *(int *)((char *)pFirst + 0x9c);
	CBaseEntity *pSecond = ResolveHandle(*(unsigned int *)((char *)this + 0x778));
	g_10739a4c.sub_100159fb(pSecond, nValue, *(int *)((char *)this + 0x8bc));
}
// END FUNCTION
