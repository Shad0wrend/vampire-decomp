// CSimpleEmitter: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor; nothing else yet
// the destructor is slot 0 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "CParticleEffect.h"

struct SimpleParticleAux_t
{
	char m_unk00[0x24];
	float m_fl24;
	char m_unk28[0x38 - 0x28];
	float m_fl38;
};

class CSimpleEmitter : public CParticleEffect
{
public:
	virtual ~CSimpleEmitter();
	float vfunc8(struct SimpleParticle8 *p, int unused);
	float vfunc9(struct XSP *p, int unused);
	virtual float vfunc10(SimpleParticleAux_t *p, float dt);
};
