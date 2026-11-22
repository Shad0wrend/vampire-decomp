// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10017b80 size=0x6
#include "C_ItemGCarStereo.h"
namespace lifted {
extern char g_102733ac;
}
int C_ItemGCarStereo::vfunc17()
{
    return (int)&lifted::g_102733ac;
}
// END FUNCTION

// FUNCTION: 0x10017c10 size=0x1e
#include "C_ItemGCarStereo.h"

// VC6 writes C_ItemGCarStereo's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGCarStereo *pcd_emit_10017c10() { return new C_ItemGCarStereo; }

// TARGET: ??_GC_ItemGCarStereo@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10017c30 size=0x6
#include "C_ItemGCarStereo.h"
namespace lifted {
extern char g_10274704;
}
int C_ItemGCarStereo::vfunc16()
{
    return (int)&lifted::g_10274704;
}
// END FUNCTION

// FUNCTION: 0x10017c40 size=0x3
#include "C_ItemGCarStereo.h"
int C_ItemGCarStereo::vfunc15()
{
    return 0;
}
// END FUNCTION
