// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101d9ad0 size=0x6
#include "CDisciplineProjectile.h"
namespace lifted {
extern char g_10739a0c;
}
int CDisciplineProjectile::vfunc80()
{
    return (int)&lifted::g_10739a0c;
}
// END FUNCTION

// FUNCTION: 0x101d9af0 size=0x3
#include "CDisciplineProjectile.h"
int CDisciplineProjectile::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101d9d90 size=0x6
#include "CDisciplineProjectile.h"
namespace lifted {
extern char g_105a1b3c;
}
datamap_t * CDisciplineProjectile::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105a1b3c);
}
// END FUNCTION

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

// FUNCTION: 0x101da7b0 size=0x9a
#include "CBaseEntity.h"
#include "CDisciplineProjectile.h"
#include "CUnknown101e0f00.h"

extern CUnknown101e0f00 g_10739a4c;

#define SV1(n) virtual void n();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)
struct CSlot220View
{
	SV100(a0) SV100(a1) SV10(a20) SV10(a21)
	virtual float *vfunc220();
};

void CDisciplineProjectile::vfunc268()
{
	int index = g_10739a4c.sub_101e12a0(m_nDisc8bc);
	if (index >= 0) {
		float flRange = (float)g_10739a4c.sub_101e11c0(index)->m_range.m_nRange;
		if (flRange != 0) {
			Vector delta;
			delta = *(Vector *)((CSlot220View *)this)->vfunc220() - m_vecStart888;
			if (delta.Length() > flRange)
				sub_101ee7d0();
		}
	}
}
// END FUNCTION
