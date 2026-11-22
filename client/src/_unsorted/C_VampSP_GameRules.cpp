// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100c8a60 size=0x1e
#include "C_VampSP_GameRules.h"

// VC6 writes C_VampSP_GameRules's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_VampSP_GameRules *pcd_emit_100c8a60() { return new C_VampSP_GameRules; }

// TARGET: ??_GC_VampSP_GameRules@@UAEPAXI@Z
// END FUNCTION
