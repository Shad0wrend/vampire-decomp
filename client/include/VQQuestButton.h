// VQQuestButton: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__Button.h"

class VQQuestButton : public vgui2::Button
{
public:
	virtual ~VQQuestButton();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with VQQuestButton's own function
	virtual void vfunc74();
	virtual void vfunc156();
	virtual void vfunc164();
	// the slots VQQuestButton adds to its base's vtable: 166-166, vfuncK at slot K
	virtual void vfunc166();
};
