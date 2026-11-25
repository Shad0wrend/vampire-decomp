// CDustParticle: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases; nothing else yet
#pragma once
#include "CSimpleEmitter.h"

struct PartT { char m_unk[0x28]; float m_fl28; float m_fl2c; };
class CDustParticle : public CSimpleEmitter
{
public:
	float vfunc8(PartT *p, float dt);
	float vfunc10(SimpleParticleAux_t *p, float dt);
	char m_pad0004[0x78 - 0x4];
};
