// C_Beam: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
#pragma once
#include "C_BaseEntity.h"

struct Vector3;
class C_Beam : public C_BaseEntity
{
public:
	Vector3 *sub_100806f0();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with C_Beam's own function
	virtual void vfunc15();
	virtual void vfunc16();
	virtual void vfunc19();
	virtual void vfunc21();
	virtual void vfunc37();
	virtual void vfunc56();
	virtual void vfunc113();
	// the slots C_Beam adds to its base's vtable: 120-121, vfuncK at slot K
	virtual void vfunc120();
	virtual int vfunc121();
};
