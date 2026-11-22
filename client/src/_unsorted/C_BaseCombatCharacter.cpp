// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10097ec0 size=0x1e
#include "C_BaseCombatCharacter.h"

// VC6 writes C_BaseCombatCharacter's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseCombatCharacter *pcd_emit_10097ec0() { return new C_BaseCombatCharacter; }

// TARGET: ??_GC_BaseCombatCharacter@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100981e0 size=0x3
#include "C_BaseCombatCharacter.h"
int C_BaseCombatCharacter::vfunc15()
{
    return 0;
}
// END FUNCTION
