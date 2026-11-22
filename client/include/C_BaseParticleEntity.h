// C_BaseParticleEntity: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases; nothing else yet
#pragma once
#include "C_BaseEntity.h"
#include "IParticleEffect.h"

class C_BaseParticleEntity : public C_BaseEntity, public IParticleEffect
{
};
