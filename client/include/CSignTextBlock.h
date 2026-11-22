// CSignTextBlock: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__TextEntry.h"

class CSignTextBlock : public vgui2::TextEntry
{
public:
	virtual ~CSignTextBlock();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CSignTextBlock's own function
	virtual void vfunc74();
};
