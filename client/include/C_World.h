// C_World: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
// the destructor is slot 8 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseEntity.h"

class C_World : public C_BaseEntity
{
public:
	virtual ~C_World();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with C_World's own function
	virtual int vfunc15();
	virtual int vfunc16();
	virtual void vfunc19();
	virtual void vfunc21();
	virtual int vfunc66();
};
