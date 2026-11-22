// VMapIconButton: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__Label.h"

class VMapIconButton : public vgui2::Label
{
public:
	virtual ~VMapIconButton();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with VMapIconButton's own function
	virtual int vfunc74(int);
	virtual void vfunc85();
	virtual void vfunc86();
	virtual void vfunc87(int);
	virtual void vfunc89(int);
	virtual void vfunc98();
};
