// VQTextEntry: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__TextEntry.h"

class VQTextEntry : public vgui2::TextEntry
{
public:
	virtual ~VQTextEntry();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with VQTextEntry's own function
	virtual void vfunc74();
	virtual void vfunc132();
	virtual void vfunc171();
	// the slots VQTextEntry adds to its base's vtable: 173-174, vfuncK at slot K
	virtual void vfunc173();
	virtual void vfunc174();
};
