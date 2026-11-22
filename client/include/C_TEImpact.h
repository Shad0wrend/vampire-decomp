// C_TEImpact: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
// the destructor is slot 10 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseTempEntity.h"

class C_TEImpact : public C_BaseTempEntity
{
public:
	virtual ~C_TEImpact();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with C_TEImpact's own function
	virtual int vfunc8();
	virtual int vfunc9();
	virtual void vfunc13();
	// the slots C_TEImpact adds to its base's vtable: 16-17, vfuncK at slot K
	virtual void vfunc16(int);
	virtual void vfunc17(int, int);
};
