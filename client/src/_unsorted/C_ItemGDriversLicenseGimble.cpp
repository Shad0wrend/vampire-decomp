// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10019700 size=0x6
#include "C_ItemGDriversLicenseGimble.h"
namespace lifted {
extern char g_102734e0;
}
int C_ItemGDriversLicenseGimble::vfunc17()
{
    return (int)&lifted::g_102734e0;
}
// END FUNCTION

// FUNCTION: 0x10019790 size=0x1e
#include "C_ItemGDriversLicenseGimble.h"

// VC6 writes C_ItemGDriversLicenseGimble's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGDriversLicenseGimble *pcd_emit_10019790() { return new C_ItemGDriversLicenseGimble; }

// TARGET: ??_GC_ItemGDriversLicenseGimble@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100197b0 size=0x6
#include "C_ItemGDriversLicenseGimble.h"
namespace lifted {
extern char g_10274624;
}
int C_ItemGDriversLicenseGimble::vfunc16()
{
    return (int)&lifted::g_10274624;
}
// END FUNCTION

// FUNCTION: 0x100197c0 size=0x3
#include "C_ItemGDriversLicenseGimble.h"
int C_ItemGDriversLicenseGimble::vfunc15()
{
    return 0;
}
// END FUNCTION
