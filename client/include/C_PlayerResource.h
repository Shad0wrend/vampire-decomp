// C_PlayerResource: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
// the destructor is slot 8 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseEntity.h"

class C_PlayerResource : public C_BaseEntity
{
public:
	virtual ~C_PlayerResource();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with C_PlayerResource's own function
	virtual int vfunc15();
	virtual int vfunc16();
	// the slots C_PlayerResource adds to its base's vtable: 120-138, vfuncK at slot K
	virtual void vfunc120();
	virtual void vfunc121();
	virtual void vfunc122();
	virtual void vfunc123();
	virtual void vfunc124();
	virtual void vfunc125();
	virtual int vfunc126(int);
	virtual void vfunc127();
	virtual void vfunc128();
	virtual void vfunc129();
	virtual void vfunc130();
	virtual void vfunc131();
	virtual void vfunc132();
	virtual void vfunc133();
	virtual void vfunc134();
	virtual int vfunc135(int);
	virtual int vfunc136(int);
	virtual float vfunc137(int);
	virtual void vfunc138(int);
};
