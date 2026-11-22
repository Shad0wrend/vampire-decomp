// vgui2::TextImage: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 5 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__Image.h"

namespace vgui2
{
class TextImage : public vgui2::Image
{
public:
	virtual ~TextImage();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with TextImage's own function
	virtual int vfunc0();
	virtual int vfunc9(int, int);
	// the slots TextImage adds to its base's vtable: 26-34, vfuncK at slot K
	virtual void vfunc26();
	virtual void vfunc27();
	virtual void vfunc28();
	virtual void vfunc29();
	virtual void vfunc30();
	virtual int vfunc31();
	virtual void vfunc32();
	virtual void vfunc33();
	virtual void vfunc34();
};
}
