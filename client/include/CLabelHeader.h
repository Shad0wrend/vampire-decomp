// CLabelHeader: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "vgui2__Label.h"

class CLabelHeader : public vgui2::Label
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with CLabelHeader's own function
    virtual int vfunc51(int);
    virtual int vfunc74(int);
    virtual void vfunc98();
    virtual int vfunc108(int);
    virtual int vfunc111(int);
    virtual void vfunc118();
    // the slots CLabelHeader adds to its base's vtable: 138-138, vfuncK at slot K
    virtual void vfunc138();
};
