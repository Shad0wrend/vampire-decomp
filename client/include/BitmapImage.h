// BitmapImage: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "vgui2__Image.h"

class BitmapImage : public vgui2::Image
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with BitmapImage's own function
    virtual int vfunc0();
    virtual int vfunc1(int, int);
    virtual int vfunc2(int, int);
    virtual int vfunc8(int);
};
