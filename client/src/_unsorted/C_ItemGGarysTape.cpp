// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001fb00 size=0x6
#include "C_ItemGGarysTape.h"
namespace lifted {
extern char g_10273940;
}
int C_ItemGGarysTape::vfunc17()
{
    return (int)&lifted::g_10273940;
}
// END FUNCTION

// FUNCTION: 0x1001fb90 size=0x1e
#include "C_ItemGGarysTape.h"

// VC6 writes C_ItemGGarysTape's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGGarysTape *pcd_emit_1001fb90() { return new C_ItemGGarysTape; }

// TARGET: ??_GC_ItemGGarysTape@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001fbc0 size=0x3
#include "C_ItemGGarysTape.h"
int C_ItemGGarysTape::vfunc15()
{
    return 0;
}
// END FUNCTION
