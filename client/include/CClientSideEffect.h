// CClientSideEffect: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 0 of its vtable; the virtual functions before it are not declared yet
#pragma once

class CClientSideEffect
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the slots CClientSideEffect adds to its base's vtable: 0-4, vfuncK at slot K
	virtual ~CClientSideEffect();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
};
