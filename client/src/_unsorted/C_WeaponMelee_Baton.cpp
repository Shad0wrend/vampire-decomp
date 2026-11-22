// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10009a80 size=0x6
#include "C_WeaponMelee_Baton.h"
namespace lifted {
extern char g_102729d4;
}
int C_WeaponMelee_Baton::vfunc17()
{
    return (int)&lifted::g_102729d4;
}
// END FUNCTION

// FUNCTION: 0x10009b10 size=0x1e
#include "C_WeaponMelee_Baton.h"

// VC6 writes C_WeaponMelee_Baton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_Baton *pcd_emit_10009b10() { return new C_WeaponMelee_Baton; }

// TARGET: ??_GC_WeaponMelee_Baton@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10009b30 size=0x6
#include "C_WeaponMelee_Baton.h"
namespace lifted {
extern char g_10274fe4;
}
int C_WeaponMelee_Baton::vfunc16()
{
    return (int)&lifted::g_10274fe4;
}
// END FUNCTION

// FUNCTION: 0x10009b40 size=0x3
#include "C_WeaponMelee_Baton.h"
int C_WeaponMelee_Baton::vfunc15()
{
    return 0;
}
// END FUNCTION
