// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000a200 size=0x6
#include "C_WeaponMelee_Claws_Protean5.h"
namespace lifted {
extern char g_10272a28;
}
int C_WeaponMelee_Claws_Protean5::vfunc17()
{
    return (int)&lifted::g_10272a28;
}
// END FUNCTION

// FUNCTION: 0x1000a290 size=0x1e
#include "C_WeaponMelee_Claws_Protean5.h"

// VC6 writes C_WeaponMelee_Claws_Protean5's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_Claws_Protean5 *pcd_emit_1000a290() { return new C_WeaponMelee_Claws_Protean5; }

// TARGET: ??_GC_WeaponMelee_Claws_Protean5@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000a2b0 size=0x6
#include "C_WeaponMelee_Claws_Protean5.h"
namespace lifted {
extern char g_10274f88;
}
int C_WeaponMelee_Claws_Protean5::vfunc16()
{
    return (int)&lifted::g_10274f88;
}
// END FUNCTION

// FUNCTION: 0x1000a2c0 size=0x3
#include "C_WeaponMelee_Claws_Protean5.h"
int C_WeaponMelee_Claws_Protean5::vfunc15()
{
    return 0;
}
// END FUNCTION
