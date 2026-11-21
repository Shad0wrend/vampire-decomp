// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101a7660 size=0x1e
#include "CHudWeaponSelection.h"

// VC6 writes CHudWeaponSelection's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudWeaponSelection *pcd_emit_101a7660() { return new CHudWeaponSelection; }

// TARGET: ??_GCHudWeaponSelection@@UAEPAXI@Z
// END FUNCTION
