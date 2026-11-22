// vgui2::MessageBox: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__Frame.h"

namespace vgui2
{
class MessageBox : public vgui2::Frame
{
public:
	virtual ~MessageBox();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with MessageBox's own function
	virtual void vfunc101();
	virtual void vfunc102();
	virtual void vfunc130();
	// the slots MessageBox adds to its base's vtable: 145-149, vfuncK at slot K
	virtual void vfunc145();
	virtual void vfunc146();
	virtual void vfunc147();
	virtual void vfunc148();
	virtual void vfunc149();
};
}
