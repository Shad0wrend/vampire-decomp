// CCamoTextureRegen: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "ITextureRegenerator.h"

class CCamoTextureRegen : public ITextureRegenerator
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the slots CCamoTextureRegen adds to its base's vtable: 0-1, vfuncK at slot K
    virtual int vfunc0(int, int, int);
    virtual void vfunc1();
};
