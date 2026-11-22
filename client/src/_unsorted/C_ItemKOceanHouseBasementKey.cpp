// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10021680 size=0x6
#include "C_ItemKOceanHouseBasementKey.h"
namespace lifted {
extern char g_10273a74;
}
int C_ItemKOceanHouseBasementKey::vfunc17()
{
    return (int)&lifted::g_10273a74;
}
// END FUNCTION

// FUNCTION: 0x10021710 size=0x1e
#include "C_ItemKOceanHouseBasementKey.h"

// VC6 writes C_ItemKOceanHouseBasementKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKOceanHouseBasementKey *pcd_emit_10021710() { return new C_ItemKOceanHouseBasementKey; }

// TARGET: ??_GC_ItemKOceanHouseBasementKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10021730 size=0x6
#include "C_ItemKOceanHouseBasementKey.h"
namespace lifted {
extern char g_102741b4;
}
int C_ItemKOceanHouseBasementKey::vfunc16()
{
    return (int)&lifted::g_102741b4;
}
// END FUNCTION

// FUNCTION: 0x10021740 size=0x3
#include "C_ItemKOceanHouseBasementKey.h"
int C_ItemKOceanHouseBasementKey::vfunc15()
{
    return 0;
}
// END FUNCTION
