// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10002bc0 size=0x6
#include "C_Corpse.h"
namespace lifted {
extern char g_102710cc;
}
int C_Corpse::vfunc16()
{
    return (int)&lifted::g_102710cc;
}
// END FUNCTION

// FUNCTION: 0x10002bd0 size=0x3
#include "C_Corpse.h"
int C_Corpse::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10002dc0 size=0x1e
#include "C_Corpse.h"

// VC6 writes C_Corpse's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_Corpse *pcd_emit_10002dc0() { return new C_Corpse; }

// TARGET: ??_GC_Corpse@@UAEPAXI@Z
// END FUNCTION
