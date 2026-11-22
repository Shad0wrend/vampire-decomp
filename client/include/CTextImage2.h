// CTextImage2: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "vgui2__Image.h"

class CTextImage2 : public vgui2::Image
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with CTextImage2's own function
    virtual int vfunc0();
    virtual int vfunc1(int, int);
    virtual int vfunc2(int, int);
    virtual void vfunc3();
};
