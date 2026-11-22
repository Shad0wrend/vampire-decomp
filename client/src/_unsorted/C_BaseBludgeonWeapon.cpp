// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10007a90 size=0x1e
#include "C_BaseBludgeonWeapon.h"

// VC6 writes C_BaseBludgeonWeapon's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseBludgeonWeapon *pcd_emit_10007a90() { return new C_BaseBludgeonWeapon; }

// TARGET: ??_GC_BaseBludgeonWeapon@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10007ac0 size=0x3
#include "C_BaseBludgeonWeapon.h"
int C_BaseBludgeonWeapon::vfunc15()
{
    return 0;
}
// END FUNCTION
