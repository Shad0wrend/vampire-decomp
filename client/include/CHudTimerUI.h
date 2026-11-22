// CHudTimerUI: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "CManagedHudElement.h"

class CHudTimerUI : public CManagedHudElement
{
public:
	virtual ~CHudTimerUI();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CHudTimerUI's own function
	virtual void vfunc98();
	virtual void vfunc107();
	// the slots CHudTimerUI adds to its base's vtable: 114-114, vfuncK at slot K
	virtual void vfunc114();
};
