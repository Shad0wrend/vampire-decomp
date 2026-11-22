// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10018580 size=0x6
#include "C_ItemGRingSilver.h"
namespace lifted {
extern char g_1027341c;
}
int C_ItemGRingSilver::vfunc17()
{
    return (int)&lifted::g_1027341c;
}
// END FUNCTION

// FUNCTION: 0x10018610 size=0x1e
#include "C_ItemGRingSilver.h"

// VC6 writes C_ItemGRingSilver's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGRingSilver *pcd_emit_10018610() { return new C_ItemGRingSilver; }

// TARGET: ??_GC_ItemGRingSilver@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10018630 size=0x6
#include "C_ItemGRingSilver.h"
namespace lifted {
extern char g_102746bc;
}
int C_ItemGRingSilver::vfunc16()
{
    return (int)&lifted::g_102746bc;
}
// END FUNCTION

// FUNCTION: 0x10018640 size=0x3
#include "C_ItemGRingSilver.h"
int C_ItemGRingSilver::vfunc15()
{
    return 0;
}
// END FUNCTION
