// vgui2::PageTab: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "vgui2__Button.h"

namespace vgui2
{
class PageTab : public vgui2::Button
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with PageTab's own function
    virtual void vfunc74();
    virtual void vfunc87(int);
    virtual void vfunc89(int);
    virtual void vfunc156();
    virtual int vfunc164(int, int, int, int);
    // the slots PageTab adds to its base's vtable: 166-166, vfuncK at slot K
    virtual void vfunc166();
};
}
