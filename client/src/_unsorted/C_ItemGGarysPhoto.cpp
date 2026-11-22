// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001f880 size=0x6
#include "C_ItemGGarysPhoto.h"
namespace lifted {
extern char g_10273924;
}
int C_ItemGGarysPhoto::vfunc17()
{
    return (int)&lifted::g_10273924;
}
// END FUNCTION

// FUNCTION: 0x1001f910 size=0x1e
#include "C_ItemGGarysPhoto.h"

// VC6 writes C_ItemGGarysPhoto's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGGarysPhoto *pcd_emit_1001f910() { return new C_ItemGGarysPhoto; }

// TARGET: ??_GC_ItemGGarysPhoto@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001f930 size=0x6
#include "C_ItemGGarysPhoto.h"
namespace lifted {
extern char g_102742c4;
}
int C_ItemGGarysPhoto::vfunc16()
{
    return (int)&lifted::g_102742c4;
}
// END FUNCTION

// FUNCTION: 0x1001f940 size=0x3
#include "C_ItemGGarysPhoto.h"
int C_ItemGGarysPhoto::vfunc15()
{
    return 0;
}
// END FUNCTION
