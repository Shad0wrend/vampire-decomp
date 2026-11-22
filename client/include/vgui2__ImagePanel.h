// vgui2::ImagePanel: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__Panel.h"

namespace vgui2
{
class ImagePanel : public vgui2::Panel
{
public:
	virtual ~ImagePanel();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with ImagePanel's own function
	virtual void vfunc75();
	virtual void vfunc76();
	virtual void vfunc77();
	virtual void vfunc97();
	virtual void vfunc102();
	// the slots ImagePanel adds to its base's vtable: 107-108, vfuncK at slot K
	virtual void vfunc107();
	virtual void vfunc108();
};
}
