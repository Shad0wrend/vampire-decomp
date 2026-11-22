// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100bb4d0 size=0x6
#include "C_Func_LOD.h"
namespace lifted {
extern char g_102b47b0;
}
int C_Func_LOD::vfunc16()
{
    return (int)&lifted::g_102b47b0;
}
// END FUNCTION

// FUNCTION: 0x100bb4e0 size=0x3
#include "C_Func_LOD.h"
int C_Func_LOD::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100bb6f0 size=0x1e
#include "C_Func_LOD.h"

// VC6 writes C_Func_LOD's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_Func_LOD *pcd_emit_100bb6f0() { return new C_Func_LOD; }

// TARGET: ??_GC_Func_LOD@@UAEPAXI@Z
// END FUNCTION
