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

	bool vfunc3(TrailParticle *pParticle, ParticleDraw *pDraw, float &sortKey);
};
