// C_BaseAnimating: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
// the destructor is slot 8 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseEntity.h"

class C_BaseAnimating : public C_BaseEntity
{
public:
	C_BaseAnimating();
	void sub_100966e0();
	bool sub_10094020();
	bool sub_10091910(int idx, int arg);
	bool sub_10093e40();
	void sub_10002680(int);
	bool sub_10095ac0(int idx, int arg);
	virtual ~C_BaseAnimating();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with C_BaseAnimating's own function
	virtual int vfunc15();
	virtual int vfunc16();
	virtual int vfunc17();
	virtual bool vfunc27(int, int, int);
	virtual void vfunc37();
	virtual bool vfunc57(int, int, int);
	virtual void vfunc61();
	virtual int vfunc62();
	virtual int vfunc66();
	virtual bool vfunc67();
	virtual int vfunc70();
	virtual bool vfunc71();
	virtual int vfunc72();
	virtual void vfunc73();
	virtual int vfunc86();
	virtual void vfunc112();
	// the slots C_BaseAnimating adds to its base's vtable: 120-142, vfuncK at slot K
	virtual void vfunc120(int, int);
	virtual void vfunc121();
	virtual float vfunc122();
	virtual void vfunc123();
	virtual void vfunc124(int, int);
	virtual int vfunc125(int, int);
	virtual void vfunc126();
	virtual void vfunc127();
	virtual void vfunc128();
	virtual void vfunc129();
	virtual void vfunc130();
	virtual void vfunc131(int, int, int, int, int, int);
	virtual void vfunc132();
	virtual int vfunc133();
	virtual void vfunc134();
	virtual void vfunc135();
	virtual float vfunc136(float flInterval);
	virtual float vfunc137(float);
	virtual float vfunc138(int iSequence);
	virtual int vfunc139(int);
	virtual bool vfunc140();
	virtual void vfunc141();
	virtual bool vfunc142();
};
