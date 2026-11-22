// C_BaseAnimating: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
// the destructor is slot 8 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseEntity.h"

class C_BaseAnimating : public C_BaseEntity
{
public:
	virtual ~C_BaseAnimating();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with C_BaseAnimating's own function
	virtual void vfunc15();
	virtual void vfunc16();
	virtual void vfunc17();
	virtual void vfunc27();
	virtual void vfunc37();
	virtual void vfunc57();
	virtual void vfunc61();
	virtual void vfunc62();
	virtual int vfunc66();
	virtual void vfunc67();
	virtual void vfunc70();
	virtual void vfunc71();
	virtual void vfunc72();
	virtual void vfunc73();
	virtual int vfunc86();
	virtual void vfunc112();
	// the slots C_BaseAnimating adds to its base's vtable: 120-142, vfuncK at slot K
	virtual void vfunc120();
	virtual void vfunc121();
	virtual void vfunc122();
	virtual void vfunc123();
	virtual void vfunc124();
	virtual void vfunc125();
	virtual void vfunc126();
	virtual void vfunc127();
	virtual void vfunc128();
	virtual void vfunc129();
	virtual void vfunc130();
	virtual void vfunc131();
	virtual void vfunc132();
	virtual void vfunc133();
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual void vfunc138();
	virtual int vfunc139(int);
	virtual void vfunc140();
	virtual void vfunc141();
	virtual bool vfunc142();
};
