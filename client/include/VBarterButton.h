// VBarterButton: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "vgui2__Button.h"

class VBarterButton : public vgui2::Button
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with VBarterButton's own function
    virtual int vfunc164(int, int, int, int);
};
