// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1008eaa0 size=0x1e
#include "C_BaseVCombatCharacter.h"

// VC6 writes C_BaseVCombatCharacter's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseVCombatCharacter *pcd_emit_1008eaa0() { return new C_BaseVCombatCharacter; }

// TARGET: ??_GC_BaseVCombatCharacter@@UAEPAXI@Z
// END FUNCTION
