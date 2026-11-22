// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100b63d0 size=0x6
#include "C_EntityFlame.h"
namespace lifted {
extern char g_102b39a0;
}
int C_EntityFlame::vfunc16()
{
    return (int)&lifted::g_102b39a0;
}
// END FUNCTION

// FUNCTION: 0x100b63e0 size=0x3
#include "C_EntityFlame.h"
int C_EntityFlame::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100b6610 size=0x1e
#include "C_EntityFlame.h"

// VC6 writes C_EntityFlame's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_EntityFlame *pcd_emit_100b6610() { return new C_EntityFlame; }

// TARGET: ??_GC_EntityFlame@@UAEPAXI@Z
// END FUNCTION
