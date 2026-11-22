// CVMenuButton: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "vgui2__Button.h"

class CVMenuButton : public vgui2::Button
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with CVMenuButton's own function
    virtual void vfunc85();
    virtual void vfunc86();
    virtual void vfunc87(int);
    virtual void vfunc91(int);
    virtual void vfunc94(int);
    virtual void vfunc98();
};
