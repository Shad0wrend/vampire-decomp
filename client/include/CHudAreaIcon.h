// CHudAreaIcon: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor; nothing else yet
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "CManagedHudElement.h"

class CHudAreaIcon : public CManagedHudElement
{
public:
	virtual ~CHudAreaIcon();
};
