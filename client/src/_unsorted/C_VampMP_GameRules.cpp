// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100c8af0 size=0x1e
#include "C_VampMP_GameRules.h"

// VC6 writes C_VampMP_GameRules's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_VampMP_GameRules *pcd_emit_100c8af0() { return new C_VampMP_GameRules; }

// TARGET: ??_GC_VampMP_GameRules@@UAEPAXI@Z
// END FUNCTION
