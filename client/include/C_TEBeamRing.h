// C_TEBeamRing: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
// the destructor is slot 10 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_TEBaseBeam.h"

class C_TEBeamRing : public C_TEBaseBeam
{
public:
	virtual ~C_TEBeamRing();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with C_TEBeamRing's own function
	virtual void vfunc8();
	virtual int vfunc9();
};
