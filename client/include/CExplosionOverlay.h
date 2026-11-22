// CExplosionOverlay: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "CWarpOverlay.h"

class CExplosionOverlay : public CWarpOverlay
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the slots CExplosionOverlay adds to its base's vtable: 1-4, vfuncK at slot K
    virtual void vfunc1();
    virtual void vfunc2();
    virtual void vfunc3();
    virtual void vfunc4();
};
