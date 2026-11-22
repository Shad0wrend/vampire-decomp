// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10021900 size=0x6
#include "C_ItemKOceanHouseUpstairsKey.h"
namespace lifted {
extern char g_10273a90;
}
int C_ItemKOceanHouseUpstairsKey::vfunc17()
{
    return (int)&lifted::g_10273a90;
}
// END FUNCTION

// FUNCTION: 0x10021990 size=0x1e
#include "C_ItemKOceanHouseUpstairsKey.h"

// VC6 writes C_ItemKOceanHouseUpstairsKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKOceanHouseUpstairsKey *pcd_emit_10021990() { return new C_ItemKOceanHouseUpstairsKey; }

// TARGET: ??_GC_ItemKOceanHouseUpstairsKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100219c0 size=0x3
#include "C_ItemKOceanHouseUpstairsKey.h"
int C_ItemKOceanHouseUpstairsKey::vfunc15()
{
    return 0;
}
// END FUNCTION
