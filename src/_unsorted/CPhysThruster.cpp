// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10027c20 size=0x6
#include "CPhysThruster.h"
namespace lifted {
extern char g_10537024;
}
CPhysThruster::Datamap82 CPhysThruster::vfunc82()
{
    return (CPhysThruster::Datamap82)&lifted::g_10537024;
}
// END FUNCTION

// FUNCTION: 0x10027cb0 size=0xe4
#include "CPhysThruster.h"
#include "CEHandleGet.h"

#define SV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

// the entity vtable up to slot 217 (GetAbsOrigin)
struct CEntitySlotsView
{
	SV10(a0) SV10(a1) SV10(a2) SV10(a3) SV10(a4) SV10(a5) SV10(a6) SV10(a7) SV10(a8) SV10(a9)
	SV10(b0) SV10(b1) SV10(b2) SV10(b3) SV10(b4) SV10(b5) SV10(b6) SV10(b7) SV10(b8) SV10(b9)
	SV10(c0)
	virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14();
	virtual void u15(); virtual void u16();
	virtual Vector *vfunc217();
};

extern Vector g_1070d1b0;

void CPhysThruster::vfunc242()
{
	if (!EHandle_Get(m_hAttached))
		return;
	if (m_flags204 & 0x20)
	{
		m_vecOffset = g_1070d1b0;
		return;
	}
	CEntitySlotsView *pAttached = (CEntitySlotsView *)EHandle_Get(m_hAttached);
	Vector *pAttachedOrigin = pAttached->vfunc217();
	m_vecOffset = *((CEntitySlotsView *)this)->vfunc217() - *pAttachedOrigin;
}
// END FUNCTION

// FUNCTION: 0x10027de0 size=0x18c
#include "CPhysThruster.h"
#include "IPhysicsObject.h"
#include "CEntityVSlots.h"
#include "CUnknown101d1460.h"
#include "CEHandleGet.h"
#include "QAngle.h"

struct CMatrix10027de0 : CUnknown101d1460
{
	void sub_10027fe0(Vector *pOut, const Vector *pIn);
	void sub_10028060(Vector *pOut, const Vector *pIn);
	void sub_100280e0(Vector *pOut, const Vector *pIn);
};

void sub_10139550(const QAngle &angles, Vector *pForward);

void CPhysThruster::vfunc241(IPhysicsObject *pPhys, Vector *pLinear, Vector *pAngular)
{
	Vector vecForce;
	sub_10139550(*(const QAngle *)((CEntityVSlots *)this)->slot221(), &vecForce);
	vecForce = vecForce * m_flForce;
	if (m_flags204 & 0x10)
		vecForce = vecForce * pPhys->vfunc12();
	{
		CMatrix10027de0 matAttached;
		matAttached.sub_101d1530((CBaseEntity *)EHandle_Get(m_hAttached), 0);
		Vector vecOffset;
		matAttached.sub_10027fe0(&vecOffset, &m_vecOffset);
		{
			Vector vecTemp;
			matAttached.sub_10028060(&vecTemp, &vecForce);
			vecForce = vecTemp;
		}
		pPhys->vfunc33(&vecForce, &vecOffset, pLinear, pAngular);
		if (m_flags204 & 8)
		{
			Vector vecLocal;
			matAttached.sub_100280e0(&vecLocal, pLinear);
			*pLinear = vecLocal;
		}
	}
	if (!(m_flags204 & 2))
	{
		pLinear->x = 0;
		pLinear->y = 0;
		pLinear->z = 0;
	}
	if (!(m_flags204 & 4))
	{
		pAngular->x = 0;
		pAngular->y = 0;
		pAngular->z = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10029b50 size=0x1e
#include "CPhysThruster.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysThruster::vfunc5
CPhysThruster *CPhysThruster::vfunc5(unsigned int flags)
{
	sub_10014470();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
