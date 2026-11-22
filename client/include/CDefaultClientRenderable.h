// CDefaultClientRenderable: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "IClientUnknown.h"
#include "IClientRenderable.h"

class CDefaultClientRenderable : public IClientUnknown, public IClientRenderable
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the slots CDefaultClientRenderable adds to its base's vtable: 8-8, vfuncK at slot K
    virtual int vfunc8(int, int);
};
