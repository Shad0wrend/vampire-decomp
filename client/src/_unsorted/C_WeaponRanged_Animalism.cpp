// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10006190 size=0x6
#include "C_WeaponRanged_Animalism.h"

// TARGET: C_WeaponRanged_Animalism::vfunc16
int C_WeaponRanged_Animalism::vfunc16()
{
	return (int)"C_WeaponRanged_Animalism";
}
// END FUNCTION

// FUNCTION: 0x10006ce0 size=0x18
#include "C_WeaponRanged_Animalism.h"
void sub_10064c60();
bool C_WeaponRanged_Animalism::vfunc189(int a)
{
	bool r = C_BaseCombatWeapon::vfunc189(a);
	sub_10064c60();
	return r;
}
// END FUNCTION

// FUNCTION: 0x10006f90 size=0x1e
#include "C_WeaponRanged_Animalism.h"

// VC6 writes C_WeaponRanged_Animalism's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Animalism *pcd_emit_10006f90(const C_WeaponRanged_Animalism &other) { return new C_WeaponRanged_Animalism(other); }

// TARGET: ??_GC_WeaponRanged_Animalism@@UAEPAXI@Z
// END FUNCTION
