// C_Corpse: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
#pragma once
#include "C_BaseAnimating.h"

class C_Corpse : public C_BaseAnimating
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with C_Corpse's own function
    virtual int vfunc15();
    virtual int vfunc16();
};
