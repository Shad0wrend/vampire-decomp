// CExplosionParticle: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases; nothing else yet
#pragma once
#include "CSimpleEmitter.h"
#include "CDustParticle.h"

class CExplosionParticle : public CSimpleEmitter
{
public:
	float vfunc8(PartT *p, float dt);
	float vfunc10(SimpleParticleAux_t *p, float dt);
};
