// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000eb10 size=0x1e
#include "C_WeaponRanged_Rifle_SteyrAug.h"

// VC6 writes C_WeaponRanged_Rifle_SteyrAug's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Rifle_SteyrAug *pcd_emit_1000eb10() { return new C_WeaponRanged_Rifle_SteyrAug; }

// TARGET: ??_GC_WeaponRanged_Rifle_SteyrAug@@UAEPAXI@Z
// END FUNCTION
