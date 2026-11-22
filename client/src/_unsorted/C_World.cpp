// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100ca210 size=0x6
#include "C_World.h"
namespace lifted {
extern char g_102b8030;
}
int C_World::vfunc16()
{
    return (int)&lifted::g_102b8030;
}
// END FUNCTION

// FUNCTION: 0x100ca220 size=0x3
#include "C_World.h"
int C_World::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100ca620 size=0x3
#include "C_World.h"
int C_World::vfunc66()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100ca630 size=0x1e
#include "C_World.h"

// VC6 writes C_World's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_World *pcd_emit_100ca630() { return new C_World; }

// TARGET: ??_GC_World@@UAEPAXI@Z
// END FUNCTION
