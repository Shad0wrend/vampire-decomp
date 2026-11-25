// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100c4c80 size=0x6
#include "C_Sun.h"
namespace lifted {
extern char g_102b67cc;
}
int C_Sun::vfunc16()
{
    return (int)&lifted::g_102b67cc;
}
// END FUNCTION

// FUNCTION: 0x100c4c90 size=0x3
#include "C_Sun.h"
int C_Sun::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100c4f00 size=0x1e
#include "C_Sun.h"

// VC6 writes C_Sun's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_Sun *pcd_emit_100c4f00(const C_Sun &other) { return new C_Sun(other); }

// TARGET: ??_GC_Sun@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100c4f20 size=0x38
#include "C_Sun.h"
// TARGET: ??1C_Sun@@UAE@XZ
C_Sun::~C_Sun()
{
}
// END FUNCTION
