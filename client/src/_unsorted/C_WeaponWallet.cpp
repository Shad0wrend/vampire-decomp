// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000fe80 size=0x6
#include "C_WeaponWallet.h"
namespace lifted {
extern char g_10272e34;
}
int C_WeaponWallet::vfunc17()
{
    return (int)&lifted::g_10272e34;
}
// END FUNCTION

// FUNCTION: 0x1000ff10 size=0x1e
#include "C_WeaponWallet.h"

// VC6 writes C_WeaponWallet's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponWallet *pcd_emit_1000ff10() { return new C_WeaponWallet; }

// TARGET: ??_GC_WeaponWallet@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000ff40 size=0x3
#include "C_WeaponWallet.h"
int C_WeaponWallet::vfunc15()
{
    return 0;
}
// END FUNCTION
