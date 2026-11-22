// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100bbba0 size=0x1e
#include "C_GameRules.h"

// VC6 writes C_GameRules's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_GameRules *pcd_emit_100bbba0() { return new C_GameRules; }

// TARGET: ??_GC_GameRules@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100bbc60 size=0x1
#include "C_GameRules.h"
void C_GameRules::vfunc1()
{
}
// END FUNCTION

// FUNCTION: 0x100bbc70 size=0x1
#include "C_GameRules.h"
void C_GameRules::vfunc2()
{
}
// END FUNCTION

// FUNCTION: 0x100bbc80 size=0x1
#include "C_GameRules.h"
void C_GameRules::vfunc3()
{
}
// END FUNCTION
