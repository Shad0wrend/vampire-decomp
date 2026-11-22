// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10007590 size=0x1e
#include "C_MachineGun.h"

// VC6 writes C_MachineGun's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_MachineGun *pcd_emit_10007590() { return new C_MachineGun; }

// TARGET: ??_GC_MachineGun@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100075c0 size=0x3
#include "C_MachineGun.h"
int C_MachineGun::vfunc15()
{
    return 0;
}
// END FUNCTION
