// vgui2::LabelComboBox: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__Button.h"

namespace vgui2
{
class LabelComboBox : public vgui2::Button
{
public:
	virtual ~LabelComboBox();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with LabelComboBox's own function
	virtual void vfunc87(int);
	virtual void vfunc101();
	virtual void vfunc118();
	virtual int vfunc164(int, int, int, int);
	// the slots LabelComboBox adds to its base's vtable: 166-167, vfuncK at slot K
	virtual int vfunc166();
	virtual int vfunc167();
};
}
