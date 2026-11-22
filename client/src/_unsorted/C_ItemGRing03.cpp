// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10018080 size=0x6
#include "C_ItemGRing03.h"
namespace lifted {
extern char g_102733e4;
}
int C_ItemGRing03::vfunc17()
{
    return (int)&lifted::g_102733e4;
}
// END FUNCTION

// FUNCTION: 0x10018110 size=0x1e
#include "C_ItemGRing03.h"

// VC6 writes C_ItemGRing03's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGRing03 *pcd_emit_10018110() { return new C_ItemGRing03; }

// TARGET: ??_GC_ItemGRing03@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10018140 size=0x3
#include "C_ItemGRing03.h"
int C_ItemGRing03::vfunc15()
{
    return 0;
}
// END FUNCTION
