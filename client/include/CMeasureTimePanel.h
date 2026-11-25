// CMeasureTimePanel: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__Panel.h"

class CMeasureTimePanel : public vgui2::Panel
{
public:
	virtual ~CMeasureTimePanel();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CMeasureTimePanel's own function
	virtual void vfunc2();
	virtual int vfunc74(int);
	virtual void vfunc98();
	// the slots CMeasureTimePanel adds to its base's vtable: 107-107, vfuncK at slot K
	virtual bool vfunc107();
	void *sub_10167de0(void *parent);
};
