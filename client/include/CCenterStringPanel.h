// CCenterStringPanel: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__Panel.h"

class CCenterStringPanel : public vgui2::Panel
{
public:
	virtual ~CCenterStringPanel();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CCenterStringPanel's own function
	virtual void vfunc2();
	virtual void vfunc25();
	virtual void vfunc74();
	virtual void vfunc98();
	// the slots CCenterStringPanel adds to its base's vtable: 107-111, vfuncK at slot K
	virtual void vfunc107();
	virtual void vfunc108();
	virtual void vfunc109();
	virtual void vfunc110();
	virtual void vfunc111();
};
