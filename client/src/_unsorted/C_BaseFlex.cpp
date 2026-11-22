// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100c3660 size=0x6
#include "C_BaseFlex.h"
namespace lifted {
extern char g_102b653c;
}
int C_BaseFlex::vfunc16()
{
    return (int)&lifted::g_102b653c;
}
// END FUNCTION

// FUNCTION: 0x100c3670 size=0x3
#include "C_BaseFlex.h"
int C_BaseFlex::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100c38f0 size=0x1e
#include "C_BaseFlex.h"

// VC6 writes C_BaseFlex's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseFlex *pcd_emit_100c38f0() { return new C_BaseFlex; }

// TARGET: ??_GC_BaseFlex@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100c4200 size=0x6
#include "C_BaseFlex.h"
namespace lifted {
extern char g_102aea5c;
}
int C_BaseFlex::vfunc143()
{
    return (int)&lifted::g_102aea5c;
}
// END FUNCTION
