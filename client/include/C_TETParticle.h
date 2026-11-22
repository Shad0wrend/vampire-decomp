// C_TETParticle: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
// the destructor is slot 10 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseTempEntity.h"

class C_TETParticle : public C_BaseTempEntity
{
public:
	virtual ~C_TETParticle();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with C_TETParticle's own function
	virtual int vfunc8();
	virtual int vfunc9();
};
