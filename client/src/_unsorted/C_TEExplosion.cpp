// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10036a40 size=0x1e
#include "C_TEExplosion.h"

// VC6 writes C_TEExplosion's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEExplosion *pcd_emit_10036a40() { return new C_TEExplosion; }

// TARGET: ??_GC_TEExplosion@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10036d10 size=0x5
#include "C_TEExplosion.h"
bool C_TEExplosion::vfunc16(int a0, int a1, int a2)
{
    return 0;
}
// END FUNCTION
