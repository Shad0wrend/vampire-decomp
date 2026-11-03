// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1012f3d0 size=0xbd
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CInfoIntermission.h"
#include "CCollisionProperty.h"
#include "CBaseEntitySlots.h"
#include "ScopeTrace.h"

extern float g_1070d9d0[3];

// TARGET: CInfoIntermission::vfunc103
void CInfoIntermission::vfunc103()
{
	{
		ScopeTrace trace("CBaseEntity::SetSolid", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	*(unsigned int *)((char *)this + 0x19c) |= 0x40;
	((CBaseEntitySlots *)this)->slot64(g_1070d9d0);
	sub_100b3b00();
	*(float *)((char *)this + 0x17c) = gpGlobals->curtime + 2.0f;
}
// END FUNCTION

// FUNCTION: 0x1012f4c0 size=0xac
#include "CInfoIntermission.h"
#include "CGlobalEntityList.h"
#include "QAngle.h"

#define SV1(n) virtual void n();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)

struct CSlotView220
{
	SV100(a) SV100(b) SV10(c0) SV10(c1)
	virtual float *vfunc220();
};

extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];
void sub_10139970(const Vector &forward, QAngle &angles);

void CInfoIntermission::vfunc134()
{
	const char *pszTarget = *(const char **)((char *)this + 0x20c);
	CBaseEntity *pTarget = g_106eb5d8.sub_100f7770(0, pszTarget ? pszTarget : g_106b8540, 0, 0);
	if (pTarget)
	{
		Vector vecToTarget = *(Vector *)((CSlotView220 *)pTarget)->vfunc220() - *(Vector *)((CSlotView220 *)this)->vfunc220();
		VectorNormalize(vecToTarget);
		QAngle angles;
		sub_10139970(vecToTarget, angles);
		vfunc64((float *)&angles);
	}
}
// END FUNCTION

// FUNCTION: 0x1012f610 size=0x1e
#include "CInfoIntermission.h"

void sub_100aa7b0(void *p);

// TARGET: CInfoIntermission::vfunc5
CInfoIntermission *CInfoIntermission::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
