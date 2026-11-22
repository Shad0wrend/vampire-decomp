// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000d710 size=0x1e
#include "C_WeaponRanged_Pistol_Anaconda.h"

// VC6 writes C_WeaponRanged_Pistol_Anaconda's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Pistol_Anaconda *pcd_emit_1000d710() { return new C_WeaponRanged_Pistol_Anaconda; }

// TARGET: ??_GC_WeaponRanged_Pistol_Anaconda@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000d740 size=0x3
#include "C_WeaponRanged_Pistol_Anaconda.h"
int C_WeaponRanged_Pistol_Anaconda::vfunc15()
{
    return 0;
}
// END FUNCTION
