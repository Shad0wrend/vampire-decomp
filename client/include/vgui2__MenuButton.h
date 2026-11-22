// vgui2::MenuButton: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__Button.h"

namespace vgui2
{
class MenuButton : public vgui2::Button
{
public:
	virtual ~MenuButton();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with MenuButton's own function
	virtual void vfunc81();
	virtual void vfunc85();
	virtual void vfunc87(int);
	virtual void vfunc92();
	virtual int vfunc102();
	virtual void vfunc147();
	virtual void vfunc163(int, int, int, int);
	// the slots MenuButton adds to its base's vtable: 166-172, vfuncK at slot K
	virtual void vfunc166(int);
	virtual void vfunc167(int);
	virtual void vfunc168();
	virtual void vfunc169();
	virtual void vfunc170();
	virtual int vfunc171(int);
	virtual int vfunc172(int);
};
}
