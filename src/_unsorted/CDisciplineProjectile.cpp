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

// FUNCTION: 0x101da020 size=0x235
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CDisciplineProjectile.h"
#include "CUnknown101e0f00.h"
#include "ScopeTrace.h"
#include "engineserver.h"

extern CUnknown101e0f00 g_10739a4c;
extern char g_10538764[];
extern char g_105a1e08[];
extern "C" void *__cdecl __RTDynamicCast(void *pObj, long nVfDelta, void *pSrcType, void *pTargetType, int bIsReference);

struct CUnkView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual CBaseEntity *vfunc4();
};

struct CEdictView
{
	char m_pad[0x40];
	CUnkView *m_pUnk;
};

// TARGET: CDisciplineProjectile::vfunc266
void CDisciplineProjectile::vfunc266(CBaseEntity *pOther)
{
	if (__RTDynamicCast(pOther, 0, g_10538764, g_105a1e08, 0))
		return;
	CBaseEntity *pWorld;
	{
		CEdictView *pEdict = (CEdictView *)engine->vfunc38(0);
		ScopeTrace trace("CBaseEntity::Instance", g_106b8540);
		if (!pEdict)
			pEdict = (CEdictView *)engine->vfunc38(0);
		pWorld = (pEdict && pEdict->m_pUnk) ? pEdict->m_pUnk->vfunc4() : 0;
	}
	void *pOwner = pOther->m_p9c;
	if (!pOther->sub_100b5110() && pWorld != pOther) {
		if (!pOwner)
			return;
		if (m_h8a8.Get() && m_h8a8.Get() != pOwner)
			return;
		CBaseEntity *pTarget = m_h778.Get();
		if (pTarget)
			g_10739a4c.sub_101e3850((int)pTarget->m_p9c, (int)pOwner, m_nDisc8bc, m_n8c0);
		sub_101ee7d0();
	} else {
		bool bSolidFlag;
		{
			ScopeTrace trace("CBaseEntity::IsSolidFlagSet", pOther->m_name26c ? pOther->m_name26c : g_106b8540);
			bSolidFlag = (pOther->m_b2b4 >> 3) & 1;
		}
		if (!bSolidFlag)
			sub_101ee7d0();
	}
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
