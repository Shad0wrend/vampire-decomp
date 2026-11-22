// vgui2::CheckButton: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__ToggleButton.h"

namespace vgui2
{
class CheckButton : public vgui2::ToggleButton
{
public:
	virtual ~CheckButton();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CheckButton's own function
	virtual void vfunc74();
	virtual void vfunc75();
	virtual void vfunc76();
	virtual int vfunc102();
	virtual void vfunc108();
	virtual void vfunc143();
	virtual void vfunc156();
	virtual int vfunc164(int, int, int, int);
	// the slots CheckButton adds to its base's vtable: 166-166, vfuncK at slot K
	virtual void vfunc166(int);
};
}
