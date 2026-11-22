// CBaseAnimatedTextureProxy: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 3 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "IMaterialProxy.h"

class CBaseAnimatedTextureProxy : public IMaterialProxy
{
public:
	virtual ~CBaseAnimatedTextureProxy();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CBaseAnimatedTextureProxy's own function
	virtual bool vfunc0(void*, void*);
	virtual void vfunc1();
	virtual void vfunc2();
	// the slots CBaseAnimatedTextureProxy adds to its base's vtable: 4-5, vfuncK at slot K
	virtual void vfunc4();
	virtual void vfunc5(int);
};
