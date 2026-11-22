// CDetailObjectSystem: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "IDetailObjectSystem.h"
#include "ISpatialLeafEnumerator.h"

class CDetailObjectSystem : public IDetailObjectSystem, public ISpatialLeafEnumerator
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the slots CDetailObjectSystem adds to its base's vtable: 9-11, vfuncK at slot K
    virtual void vfunc9();
    virtual void vfunc10();
    virtual void vfunc11();
};
