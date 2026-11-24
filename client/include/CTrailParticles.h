// CTrailParticles: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases; nothing else yet
#pragma once
#include "CSimpleEmitter.h"

#include "CParticleCollision.h"

struct TrailParticle;
struct ParticleDraw;

class CTrailParticles : public CSimpleEmitter
{
public:
	char m_pad0070[0x78 - 0x70];
	CParticleCollision m_ParticleCollision;
	int m_fFlags;
	float m_flVelocityDampen;

	virtual void vfunc13(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
	bool vfunc3(TrailParticle *pParticle, ParticleDraw *pDraw, float &sortKey);
};
