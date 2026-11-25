// CExplosionParticle: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases; nothing else yet
#pragma once
#include "CSimpleEmitter.h"
#include "CDustParticle.h"

struct ExpPartColor { char m_unk[0x28]; float m_flDie; float m_flLife; unsigned char m_r; unsigned char m_g; unsigned char m_b; };
struct Vec3x;
class CExplosionParticle : public CSimpleEmitter
{
public:
	Vec3x *vfunc12(Vec3x *out, ExpPartColor *p, float dt);
	float vfunc8(PartT *p, float dt);
	void vfunc11(PartT *p, float dt);
	float vfunc10(SimpleParticleAux_t *p, float dt);
};
