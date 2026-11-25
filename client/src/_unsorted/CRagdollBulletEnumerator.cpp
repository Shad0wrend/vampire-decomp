// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100390a0 size=0xe6
#include "CRagdollBulletEnumerator.h"
#include "C_BaseAnimating.h"
#include "CGameTrace.h"
#include "CUnknown1070b254.h"
#include "IPhysicsObject.h"

// TARGET: CRagdollBulletEnumerator::vfunc0
int CRagdollBulletEnumerator::vfunc0(CBaseEntity *pEnt)
{
    if (pEnt)
    {
        IPhysicsObject *pPhysics = (IPhysicsObject *)((C_BaseAnimating *)pEnt)->vfunc133();
        if (pPhysics)
        {
            CGameTrace trace;
            g_104a582c->vfunc2(&m_rayShot, 0x46004003, pEnt, &trace);
            if (trace.m_fraction < 1.0)
            {
                Vector vecDir = *(Vector *)m_rayShot.m_Delta;
                VectorNormalize(vecDir);

                Vector impulse = vecDir * m_flForce;
                pPhysics->vfunc31(&impulse, (const Vector *)trace.m_endpos);
                m_bHit = true;
                return 1;
            }
        }
    }
    return 0;
}
// END FUNCTION
