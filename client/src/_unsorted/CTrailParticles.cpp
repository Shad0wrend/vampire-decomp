// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10045ee0 size=0x1e
#include "CTrailParticles.h"

// VC6 writes CTrailParticles's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CTrailParticles *pcd_emit_10045ee0(const CTrailParticles &other) { return new CTrailParticles(other); }

// TARGET: ??_GCTrailParticles@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10045f00 size=0x3f
#include "CTrailParticles.h"
void CTrailParticles::vfunc13(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
	m_fFlags |= a8 | 2;
	m_ParticleCollision.vfunc4(a1, a2, a3, a4, a5, a6, a7);
}
// END FUNCTION

// FUNCTION: 0x10045f40 size=0x221
#include "CTrailParticles.h"
#include "VMatrix.h"
#include "CGameTrace.h"

struct TrailParticle
{
	int m_unk00[3];
	Vector m_Pos;          // 0x0c
	float m_flDieTime;     // 0x18
	float m_flLifetime;    // 0x1c
	Vector m_vecVelocity;  // 0x20
	float m_flLength;      // 0x2c
	float m_flWidth;       // 0x30
	float m_color[4];      // 0x34
};

struct ParticleDraw
{
	int m_unk00[2];
	float m_flTimeDelta;   // 0x08
};

extern VMatrix g_104e08d4;
extern int sub_10198d80();
extern void sub_101a2930(const VMatrix &m, const Vector &in, Vector &out);
extern void sub_100425c0(ParticleDraw *pDraw, const Vector &tPos, const Vector &delta, float width, const float *color);

static inline float TransformParticle(const VMatrix &m, const Vector &vIn, Vector &vOut)
{
	vOut.x = m.m[0][0] * vIn.x + (m.m[0][1] * vIn.y + m.m[0][2] * vIn.z) + m.m[0][3];
	vOut.y = m.m[1][0] * vIn.x + (m.m[1][1] * vIn.y + m.m[1][2] * vIn.z) + m.m[1][3];
	vOut.z = m.m[2][0] * vIn.x + (m.m[2][1] * vIn.y + m.m[2][2] * vIn.z) + m.m[2][3];
	return vOut.z;
}

bool CTrailParticles::vfunc3(TrailParticle *pParticle, ParticleDraw *pDraw, float &sortKey)
{
	float timeDelta = pDraw->m_flTimeDelta;

	float length = (1.0f - (pParticle->m_flLifetime / pParticle->m_flDieTime)) * pParticle->m_flLength;
	if (length < 0.01f)
		length = 0.01f;

	Vector tPos;
	sortKey = TransformParticle(g_104e08d4, pParticle->m_Pos, tPos);

	Vector tVelocity;
	sub_101a2930(*(const VMatrix *)sub_10198d80(), pParticle->m_vecVelocity, tVelocity);

	float scale = (m_fFlags & 4) ? (1.0f - (pParticle->m_flLifetime / pParticle->m_flDieTime)) : 1.0f;

	float color[4];
	color[0] = pParticle->m_color[0] * scale;
	color[1] = pParticle->m_color[1] * scale;
	color[2] = pParticle->m_color[2] * scale;
	color[3] = pParticle->m_color[3] * scale;

	Vector delta = tVelocity * length;
	sub_100425c0(pDraw, tPos, delta, pParticle->m_flWidth, color);

	if (!(m_fFlags & 2))
	{
		m_ParticleCollision.sub_10114d80();
	}

	CGameTrace trace;
	m_ParticleCollision.vfunc5(pParticle->m_Pos, pParticle->m_vecVelocity, 0, timeDelta, &trace);

	if (m_fFlags & 1)
	{
		float damp = 1.0f - (timeDelta * m_flVelocityDampen);
		if (damp < 0.0f)
			damp = 0.0f;
		pParticle->m_vecVelocity.x *= damp;
		pParticle->m_vecVelocity.y *= damp;
		pParticle->m_vecVelocity.z *= damp;
	}

	pParticle->m_flLifetime += timeDelta;
	if (pParticle->m_flLifetime >= pParticle->m_flDieTime)
		return false;

	return true;
}
// END FUNCTION
