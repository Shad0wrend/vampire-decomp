// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10014c00 size=0x6
#include "C_BlueBloodPack.h"
namespace lifted {
extern char g_10273198;
}
int C_BlueBloodPack::vfunc17()
{
    return (int)&lifted::g_10273198;
}
// END FUNCTION

// FUNCTION: 0x10014c90 size=0x1e
#include "C_BlueBloodPack.h"

// VC6 writes C_BlueBloodPack's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BlueBloodPack *pcd_emit_10014c90() { return new C_BlueBloodPack; }

// TARGET: ??_GC_BlueBloodPack@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10014cc0 size=0x3
#include "C_BlueBloodPack.h"
int C_BlueBloodPack::vfunc15()
{
    return 0;
}
// END FUNCTION
