// C_WeaponThrown_Grenade_Frag: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
#pragma once
#include "C_WeaponIThrown.h"

class C_WeaponThrown_Grenade_Frag : public C_WeaponIThrown
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with C_WeaponThrown_Grenade_Frag's own function
    virtual int vfunc15();
    virtual int vfunc16();
    virtual int vfunc17();
};
