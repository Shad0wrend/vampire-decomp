// CGodLight: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "CLightRays.h"

class CGodLight : public CLightRays
{
public:
    CGodLight();
    // vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with CGodLight's own function
    virtual void vfunc1();
    // the slots CGodLight adds to its base's vtable: 3-3, vfuncK at slot K
    virtual void vfunc3();
};
