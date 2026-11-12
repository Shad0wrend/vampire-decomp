// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002c190 size=0x113
#include "CPhysFixed.h"
#include "IPhysicsObject.h"

struct IPhysEnvView { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
	virtual void *vfunc14(void *pRef, void *pAttached, void *pGroup, const CPhysFixedParams &params); };
struct IPhysObjSetFlags { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
	virtual void vfunc7(unsigned int flags); };
extern void *g_10723938;
extern IPhysEnvView *g_10723940;
void sub_10139a90(matrix3x4_t *);
void sub_10138630(const matrix3x4_t *in, matrix3x4_t *out);
void sub_10138df0(const matrix3x4_t *a, const matrix3x4_t *b, matrix3x4_t *out);

inline void FixedDefaults(CPhysFixedParams &p)
{
	sub_10139a90(&p.attachedRefXform);
	p.constraint.Defaults();
}

inline void FixedInitWithCurrentObjectState(CPhysFixedParams &p, void *pRef0, void *pAttached0)
{
	IPhysicsObject *pRef = (IPhysicsObject *)pRef0;
	IPhysicsObject *pAttached = (IPhysicsObject *)pAttached0;
	matrix3x4_t world1, world2, tmp;
	pRef->vfunc38((float *)&world1);
	sub_10138630(&world1, &tmp);
	pAttached->vfunc38((float *)&world2);
	sub_10138df0(&tmp, &world2, &p.attachedRefXform);
}

#define lbs2kg(x) ((x)*(1.0f/(2.2f)))

void *CPhysFixed::vfunc241(void *pGroup, CPhysConstraintObjects *pObjects)
{
	CPhysFixedParams fixed;
	FixedDefaults(fixed);
	FixedInitWithCurrentObjectState(fixed, pObjects->m_pReference, pObjects->m_pAttached);
	fixed.constraint.Defaults();
	fixed.constraint.forceLimit = lbs2kg(m_flForceLimit);
	fixed.constraint.torqueLimit = lbs2kg(m_flTorqueLimit);
	fixed.constraint.isActive = HasSpawnFlags(4) ? false : true;
	if (pObjects->m_pReference == g_10723938)
	{
		unsigned int f = ((IPhysicsObject *)pObjects->m_pAttached)->vfunc8();
		((IPhysObjSetFlags *)pObjects->m_pAttached)->vfunc7(f | 2);
	}
	return g_10723940->vfunc14(pObjects->m_pReference, pObjects->m_pAttached, pGroup, fixed);
}
// END FUNCTION

// FUNCTION: 0x1002cb70 size=0x1e
#include "CPhysFixed.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysFixed::vfunc5
CPhysFixed *CPhysFixed::vfunc5(unsigned int flags)
{
	sub_100121ac();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
