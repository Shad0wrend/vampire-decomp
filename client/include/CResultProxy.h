// CResultProxy: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "IMaterialProxy.h"

class CResultProxy : public IMaterialProxy
{
public:
    CResultProxy();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with CResultProxy's own function
    virtual bool vfunc0(void*, void*);
    virtual void vfunc2();
    void sub_100e33c0(float);
};
