// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10014a10 size=0x1e
#include "C_BloodPack.h"

// VC6 writes C_BloodPack's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BloodPack *pcd_emit_10014a10() { return new C_BloodPack; }

// TARGET: ??_GC_BloodPack@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10014a40 size=0x3
#include "C_BloodPack.h"
int C_BloodPack::vfunc15()
{
    return 0;
}
// END FUNCTION
