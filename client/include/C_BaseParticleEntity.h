// C_BaseParticleEntity: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
#pragma once
#include "C_BaseEntity.h"
#include "IParticleEffect.h"

class C_BaseParticleEntity : public C_BaseEntity, public IParticleEffect
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with C_BaseParticleEntity's own function
    virtual int vfunc15();
    virtual int vfunc16();
    virtual int vfunc17();
    virtual void vfunc95();
    // the slots C_BaseParticleEntity adds to its base's vtable: 120-120, vfuncK at slot K
    virtual void vfunc120();
};
