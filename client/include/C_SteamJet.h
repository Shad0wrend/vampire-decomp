// C_SteamJet: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
// the destructor is slot 8 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseParticleEntity.h"
#include "IPrototypeAppEffect.h"

class C_SteamJet : public C_BaseParticleEntity, public IPrototypeAppEffect
{
public:
	virtual ~C_SteamJet();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with C_SteamJet's own function
	virtual int vfunc15();
	virtual int vfunc16();
};
