// vgui2::ComboBox: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__TextEntry.h"

namespace vgui2
{
class ComboBox : public vgui2::TextEntry
{
public:
	virtual ~ComboBox();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with ComboBox's own function
	virtual void vfunc11();
	virtual void vfunc74();
	virtual void vfunc78();
	virtual void vfunc81();
	virtual void vfunc85();
	virtual void vfunc86();
	virtual void vfunc87();
	virtual void vfunc88();
	virtual void vfunc101();
	virtual void vfunc102();
	virtual void vfunc167();
	// the slots ComboBox adds to its base's vtable: 173-184, vfuncK at slot K
	virtual void vfunc173();
	virtual void vfunc174();
	virtual void vfunc175();
	virtual void vfunc176();
	virtual void vfunc177();
	virtual void vfunc178();
	virtual void vfunc179();
	virtual void vfunc180();
	virtual void vfunc181();
	virtual void vfunc182();
	virtual void vfunc183();
	virtual void vfunc184();
};
}
