// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10021400 size=0x6
#include "C_ItemKOceanHouseSewerKey.h"
namespace lifted {
extern char g_10273a58;
}
int C_ItemKOceanHouseSewerKey::vfunc17()
{
    return (int)&lifted::g_10273a58;
}
// END FUNCTION

// FUNCTION: 0x10021490 size=0x1e
#include "C_ItemKOceanHouseSewerKey.h"

// VC6 writes C_ItemKOceanHouseSewerKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKOceanHouseSewerKey *pcd_emit_10021490() { return new C_ItemKOceanHouseSewerKey; }

// TARGET: ??_GC_ItemKOceanHouseSewerKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100214c0 size=0x3
#include "C_ItemKOceanHouseSewerKey.h"
int C_ItemKOceanHouseSewerKey::vfunc15()
{
    return 0;
}
// END FUNCTION
