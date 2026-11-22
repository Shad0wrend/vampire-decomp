// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000f290 size=0x1e
#include "C_WeaponRanged_Pistol_Thirtyeight.h"

// VC6 writes C_WeaponRanged_Pistol_Thirtyeight's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Pistol_Thirtyeight *pcd_emit_1000f290() { return new C_WeaponRanged_Pistol_Thirtyeight; }

// TARGET: ??_GC_WeaponRanged_Pistol_Thirtyeight@@UAEPAXI@Z
// END FUNCTION
