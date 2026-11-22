// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10014700 size=0x6
#include "C_GargoyleTalisman.h"
namespace lifted {
extern char g_10273160;
}
int C_GargoyleTalisman::vfunc17()
{
    return (int)&lifted::g_10273160;
}
// END FUNCTION

// FUNCTION: 0x10014790 size=0x1e
#include "C_GargoyleTalisman.h"

// VC6 writes C_GargoyleTalisman's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_GargoyleTalisman *pcd_emit_10014790() { return new C_GargoyleTalisman; }

// TARGET: ??_GC_GargoyleTalisman@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100147c0 size=0x3
#include "C_GargoyleTalisman.h"
int C_GargoyleTalisman::vfunc15()
{
    return 0;
}
// END FUNCTION
