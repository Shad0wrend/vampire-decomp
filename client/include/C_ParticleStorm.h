// C_ParticleStorm: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor; nothing else yet
// the destructor is slot 8 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseParticleEntity.h"
#include "IPrototypeAppEffect.h"

class C_ParticleStorm : public C_BaseParticleEntity, public IPrototypeAppEffect
{
public:
	virtual ~C_ParticleStorm();
};
