// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10008e00 size=0x6
#include "C_WeaponMelee_Knife.h"
namespace lifted {
extern char g_10272948;
}
int C_WeaponMelee_Knife::vfunc17()
{
    return (int)&lifted::g_10272948;
}
// END FUNCTION

// FUNCTION: 0x10008e90 size=0x1e
#include "C_WeaponMelee_Knife.h"

// VC6 writes C_WeaponMelee_Knife's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_Knife *pcd_emit_10008e90() { return new C_WeaponMelee_Knife; }

// TARGET: ??_GC_WeaponMelee_Knife@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10008ec0 size=0x3
#include "C_WeaponMelee_Knife.h"
int C_WeaponMelee_Knife::vfunc15()
{
    return 0;
}
// END FUNCTION
