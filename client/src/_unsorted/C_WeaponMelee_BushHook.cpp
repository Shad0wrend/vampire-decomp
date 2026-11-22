// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10008180 size=0x6
#include "C_WeaponMelee_BushHook.h"
namespace lifted {
extern char g_102728bc;
}
int C_WeaponMelee_BushHook::vfunc17()
{
    return (int)&lifted::g_102728bc;
}
// END FUNCTION

// FUNCTION: 0x10008210 size=0x1e
#include "C_WeaponMelee_BushHook.h"

// VC6 writes C_WeaponMelee_BushHook's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_BushHook *pcd_emit_10008210() { return new C_WeaponMelee_BushHook; }

// TARGET: ??_GC_WeaponMelee_BushHook@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10008240 size=0x3
#include "C_WeaponMelee_BushHook.h"
int C_WeaponMelee_BushHook::vfunc15()
{
    return 0;
}
// END FUNCTION
