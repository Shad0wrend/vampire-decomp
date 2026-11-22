// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10007810 size=0x1e
#include "C_SelectFireMachineGun.h"

// VC6 writes C_SelectFireMachineGun's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_SelectFireMachineGun *pcd_emit_10007810() { return new C_SelectFireMachineGun; }

// TARGET: ??_GC_SelectFireMachineGun@@UAEPAXI@Z
// END FUNCTION
