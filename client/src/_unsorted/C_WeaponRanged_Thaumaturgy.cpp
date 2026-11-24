// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10006a00 size=0x6
#include "C_WeaponRanged_Thaumaturgy.h"

// TARGET: C_WeaponRanged_Thaumaturgy::vfunc16
int C_WeaponRanged_Thaumaturgy::vfunc16()
{
	return (int)"C_WeaponRanged_Thaumaturgy";
}
// END FUNCTION

// FUNCTION: 0x10007140 size=0x1e
#include "C_WeaponRanged_Thaumaturgy.h"

// VC6 writes C_WeaponRanged_Thaumaturgy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Thaumaturgy *pcd_emit_10007140(const C_WeaponRanged_Thaumaturgy &other) { return new C_WeaponRanged_Thaumaturgy(other); }

// TARGET: ??_GC_WeaponRanged_Thaumaturgy@@UAEPAXI@Z
// END FUNCTION
