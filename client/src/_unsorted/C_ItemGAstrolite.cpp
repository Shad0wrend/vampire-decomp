// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10017710 size=0x1e
#include "C_ItemGAstrolite.h"

// VC6 writes C_ItemGAstrolite's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGAstrolite *pcd_emit_10017710() { return new C_ItemGAstrolite; }

// TARGET: ??_GC_ItemGAstrolite@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10017740 size=0x3
#include "C_ItemGAstrolite.h"
int C_ItemGAstrolite::vfunc15()
{
    return 0;
}
// END FUNCTION
