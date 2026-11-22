// CManagedHudElement: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "CBasePanel.h"
#include "IManagedHudElement.h"

class CManagedHudElement : public CBasePanel, public IManagedHudElement
{
public:
	virtual ~CManagedHudElement();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the slots CManagedHudElement adds to its base's vtable: 112-113, vfuncK at slot K
	virtual void vfunc112();
	virtual void vfunc113();
};
