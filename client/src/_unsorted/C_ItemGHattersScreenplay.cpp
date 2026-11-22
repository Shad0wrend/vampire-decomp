// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001d580 size=0x6
#include "C_ItemGHattersScreenplay.h"
namespace lifted {
extern char g_1027379c;
}
int C_ItemGHattersScreenplay::vfunc17()
{
    return (int)&lifted::g_1027379c;
}
// END FUNCTION

// FUNCTION: 0x1001d610 size=0x1e
#include "C_ItemGHattersScreenplay.h"

// VC6 writes C_ItemGHattersScreenplay's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGHattersScreenplay *pcd_emit_1001d610() { return new C_ItemGHattersScreenplay; }

// TARGET: ??_GC_ItemGHattersScreenplay@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001d630 size=0x6
#include "C_ItemGHattersScreenplay.h"
namespace lifted {
extern char g_102743e4;
}
int C_ItemGHattersScreenplay::vfunc16()
{
    return (int)&lifted::g_102743e4;
}
// END FUNCTION

// FUNCTION: 0x1001d640 size=0x3
#include "C_ItemGHattersScreenplay.h"
int C_ItemGHattersScreenplay::vfunc15()
{
    return 0;
}
// END FUNCTION
