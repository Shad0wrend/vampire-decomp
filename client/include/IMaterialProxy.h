// IMaterialProxy: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the virtual functions before the destructor are not declared yet
#pragma once

class IMaterialProxy
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the slots IMaterialProxy adds to its base's vtable: 0-3, vfuncK at slot K
	virtual bool vfunc0(void*, void*);
	virtual void vfunc1(int);
	virtual void vfunc2();
	virtual ~IMaterialProxy();
};
