// C_SoundscapeSystem: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "IGameSystem.h"

class C_SoundscapeSystem : public IGameSystem
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with C_SoundscapeSystem's own function
    virtual bool vfunc0();
    virtual void vfunc1();
    virtual void vfunc2();
    virtual void vfunc3();
    virtual void vfunc4();
    virtual void vfunc5();
    virtual void vfunc6();
    virtual void vfunc7();
    // the slots C_SoundscapeSystem adds to its base's vtable: 9-9, vfuncK at slot K
    virtual void vfunc9();
    void *sub_100c0a90(unsigned int flags);
};
