// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e4c10 size=0x6d
#include "CExplosionParticle.h"

extern "C" double fabs(double);
#pragma intrinsic(fabs)

float CExplosionParticle::vfunc10(SimpleParticleAux_t *p, float dt)
{
	p->m_fl24 += dt * p->m_fl38;

	float flFactor = dt * -8.0f;
	flFactor = flFactor + 1.0f;
	p->m_fl38 = flFactor * p->m_fl38;

	if ( fabs(p->m_fl38) < 0.5 )
	{
		p->m_fl38 = ( p->m_fl38 > 0.0f ) ? 0.5f : -0.5f;
	}

	return p->m_fl24;
}
// END FUNCTION

// FUNCTION: 0x100e4c80 size=0xfa
#include "CExplosionParticle.h"
#include "Vector.h"
#include <math.h>

extern float g_10680ea0;
extern float g_10680ea4;

void CExplosionParticle::vfunc11(PartT *pPart, float dt)
{
    Vector vec = *(Vector *)((char *)pPart + 0x18);
    if ( g_10680ea0 != dt )
    {
        g_10680ea0 = dt;
        g_10680ea4 = exp(2.0f * dt * (float)log(0.0001f));
    }
    *(Vector *)((char *)pPart + 0x18) = *(Vector *)((char *)pPart + 0x18) * g_10680ea4;
    if ( ((Vector *)((char *)pPart + 0x18))->LengthSqr() < 4096.0f )
    {
        VectorNormalize(vec);
        *(Vector *)((char *)pPart + 0x18) = vec * 64.0f;
    }
}
// END FUNCTION

// FUNCTION: 0x100e4d80 size=0x24
#include "CExplosionParticle.h"
float CExplosionParticle::vfunc8(PartT *p, float dt) { float t = 1.0f - p->m_fl2c / p->m_fl28; if (t < 0.75f) t = t * t; return t; }
// END FUNCTION

// FUNCTION: 0x100e4db0 size=0x80
#include "CExplosionParticle.h"
struct Vec3x { float x, y, z; };
// TARGET: ?vfunc12@CExplosionParticle@@QAEPAUVec3x@@PAU2@PAUExpPartColor@@M@Z
Vec3x *CExplosionParticle::vfunc12(Vec3x *out, ExpPartColor *p, float dt)
{
	float a = 1.0f - p->m_flLife / p->m_flDie;
	Vec3x c;
	c.x = p->m_r * a * 0.003921569f;
	c.y = p->m_g * a * 0.003921569f;
	c.z = p->m_b * a * 0.003921569f;
	*out = c;
	return out;
}
// END FUNCTION

// FUNCTION: 0x100e4e30 size=0x1e
#include "CExplosionParticle.h"

// VC6 writes CExplosionParticle's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CExplosionParticle *pcd_emit_100e4e30(const CExplosionParticle &other) { return new CExplosionParticle(other); }

// TARGET: ??_GCExplosionParticle@@UAEPAXI@Z
// END FUNCTION
