// vgui2::PropertyDialog: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__Frame.h"

namespace vgui2
{
class PropertyDialog : public vgui2::Frame
{
public:
	virtual ~PropertyDialog();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with PropertyDialog's own function
	virtual void vfunc78(int);
	virtual void vfunc92();
	virtual void vfunc101();
	virtual void vfunc108();
	// the slots PropertyDialog adds to its base's vtable: 145-155, vfuncK at slot K
	virtual int vfunc145();
	virtual void vfunc146();
	virtual void vfunc147();
	virtual void vfunc148();
	virtual void vfunc149();
	virtual void vfunc150();
	virtual void vfunc151();
	virtual void vfunc152();
	virtual void vfunc153();
	virtual int vfunc154(int);
	virtual void vfunc155();
};
}
