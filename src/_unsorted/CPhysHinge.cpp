// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002b700 size=0x6
#include "datamap.h"
#include "CPhysHinge.h"
namespace lifted {
extern char g_10538ddc;
}
datamap_t *CPhysHinge::vfunc82()
{
    return (datamap_t *)&lifted::g_10538ddc;
}
// END FUNCTION

// FUNCTION: 0x1002b920 size=0x96
#include "CPhysHinge.h"

void sub_10142e90(const Vector &start, const Vector &end, int r, int g, int b, bool noDepthTest, float duration);

// TARGET: CPhysHinge::vfunc123
void CPhysHinge::vfunc123()
{
    if (m_debugOverlays224 & 0x2c)
    {
        Vector vecEnd = m_hinge.worldPosition + m_hinge.worldAxisDirection * 48.0f;
        sub_10142e90(m_hinge.worldPosition, vecEnd, 0, 255, 0, false, 0.0f);
    }
    sub_100a0130();
}
// END FUNCTION

// FUNCTION: 0x1002b9f0 size=0xe3
#include "CPhysHinge.h"

void sub_101cf680(Vector &v, float f);

#define SV1(p) virtual void p();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)
struct CPhysHingeOriginView
{
    SV100(a) SV100(b)
    SV10(c0) SV10(c1)
    virtual const Vector *vfunc220();
};

void CPhysHinge::vfunc103()
{
    m_hinge.worldPosition = *((CPhysHingeOriginView *)this)->vfunc220();
    m_hinge.worldAxisDirection -= *((CPhysHingeOriginView *)this)->vfunc220();
    VectorNormalize(m_hinge.worldAxisDirection);
    sub_101cf680(m_hinge.worldAxisDirection, 0.01f);
    m_hinge.minRotation = 0.0f;
    m_hinge.maxRotation = 0.0f;
    m_hinge.angularVelocity = 0.0f;
    m_hinge.torque = 0.0f;
    m_hinge.constraint.Defaults();
    CPhysBreakableParams *pc = &m_hinge.constraint;
    float *pf = &pc->forceLimit;
    pf[0] = m_flForceLimit * 0.45454544f;
    pf[1] = m_flTorqueLimit * 0.45454544f;
    pc->isActive = ~(unsigned char)(m_spawnflags204 >> 2) & 1;
    pf[-1] = 1.0f;
}
// END FUNCTION

// FUNCTION: 0x1002cae0 size=0x1e
#include "CPhysHinge.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysHinge::vfunc5
CPhysHinge *CPhysHinge::vfunc5(unsigned int flags)
{
	sub_100121ac();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
