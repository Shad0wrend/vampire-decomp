// BlankImage: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "vgui2__IImage.h"

class BlankImage : public vgui2::IImage
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the slots BlankImage adds to its base's vtable: 0-6, vfuncK at slot K
    virtual void vfunc0();
    virtual void vfunc1(int, int);
    virtual int vfunc2(int, int);
    virtual void vfunc3(int);
    virtual void vfunc4(int);
    virtual int vfunc5(int, int);
    virtual void vfunc6(int, int);
};
