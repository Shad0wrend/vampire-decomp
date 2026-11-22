// vgui2::RadioButton: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__ToggleButton.h"

namespace vgui2
{
class RadioButton : public vgui2::ToggleButton
{
public:
	virtual ~RadioButton();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with RadioButton's own function
	virtual void vfunc74();
	virtual void vfunc75();
	virtual void vfunc76();
	virtual void vfunc77();
	virtual void vfunc87();
	virtual void vfunc91();
	virtual void vfunc92();
	virtual void vfunc94();
	virtual void vfunc98();
	virtual void vfunc101();
	virtual void vfunc102();
	virtual void vfunc143();
	virtual void vfunc164();
	// the slots RadioButton adds to its base's vtable: 166-169, vfuncK at slot K
	virtual void vfunc166();
	virtual void vfunc167();
	virtual void vfunc168();
	virtual void vfunc169();
};
}
