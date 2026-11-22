// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10020a00 size=0x6
#include "C_ItemGSewerBook1.h"
namespace lifted {
extern char g_102739e8;
}
int C_ItemGSewerBook1::vfunc17()
{
    return (int)&lifted::g_102739e8;
}
// END FUNCTION

// FUNCTION: 0x10020a90 size=0x1e
#include "C_ItemGSewerBook1.h"

// VC6 writes C_ItemGSewerBook1's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGSewerBook1 *pcd_emit_10020a90() { return new C_ItemGSewerBook1; }

// TARGET: ??_GC_ItemGSewerBook1@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10020ac0 size=0x3
#include "C_ItemGSewerBook1.h"
int C_ItemGSewerBook1::vfunc15()
{
    return 0;
}
// END FUNCTION
