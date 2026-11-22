// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1007e4e0 size=0x3
#include "C_BaseGrenade.h"
void C_BaseGrenade::vfunc149(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x1007f160 size=0x4
#include "C_BaseGrenade.h"
int C_BaseGrenade::vfunc152()
{
    return -1;
}
// END FUNCTION

// FUNCTION: 0x1007f190 size=0x5
#include "C_BaseGrenade.h"
bool C_BaseGrenade::vfunc156(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1007f1e0 size=0x1e
#include "C_BaseGrenade.h"

// VC6 writes C_BaseGrenade's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseGrenade *pcd_emit_1007f1e0() { return new C_BaseGrenade; }

// TARGET: ??_GC_BaseGrenade@@UAEPAXI@Z
// END FUNCTION
