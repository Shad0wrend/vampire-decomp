// CShadowProxy: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "IMaterialProxy.h"

class CShadowProxy : public IMaterialProxy
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with CShadowProxy's own function
    virtual bool vfunc0(void*, void*);
    virtual void vfunc1();
    virtual void vfunc2();
};
