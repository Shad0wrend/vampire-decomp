// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10016590 size=0x1e
#include "C_WeaponThrown_Grenade_Frag.h"

// VC6 writes C_WeaponThrown_Grenade_Frag's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponThrown_Grenade_Frag *pcd_emit_10016590() { return new C_WeaponThrown_Grenade_Frag; }

// TARGET: ??_GC_WeaponThrown_Grenade_Frag@@UAEPAXI@Z
// END FUNCTION
