// CHudInfoBar: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "CManagedHudElement.h"

class CHudInfoBar : public CManagedHudElement
{
public:
	virtual ~CHudInfoBar();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CHudInfoBar's own function
	virtual void vfunc98();
	virtual void vfunc107();
	virtual void vfunc112();
	virtual void vfunc113();
	// the slots CHudInfoBar adds to its base's vtable: 114-116, vfuncK at slot K
	virtual void vfunc114();
	virtual void vfunc115();
	virtual void vfunc116();
};
