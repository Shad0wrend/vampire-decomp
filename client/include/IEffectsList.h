// IEffectsList: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the virtual functions before the destructor are not declared yet
#pragma once

class IEffectsList
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the slots IEffectsList adds to its base's vtable: 0-4, vfuncK at slot K
	virtual ~IEffectsList();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
};
