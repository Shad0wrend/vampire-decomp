// C_WeaponRanged_FlameThrower: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
#pragma once
#include "C_BaseCombatWeapon.h"

class C_WeaponRanged_FlameThrower : public C_BaseCombatWeapon
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	C_WeaponRanged_FlameThrower();
    // the base slots the game's vtable fills with C_WeaponRanged_FlameThrower's own function
    virtual int vfunc15();
    virtual int vfunc16();
    virtual int vfunc17();
    virtual bool vfunc116(int, int);
    virtual void vfunc118(int);
    virtual void vfunc143();
    char m_pad0014[0x1670 - 0x14];
};
