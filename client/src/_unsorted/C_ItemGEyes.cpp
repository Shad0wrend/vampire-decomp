// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001d300 size=0x6
#include "C_ItemGEyes.h"
namespace lifted {
extern char g_10273780;
}
int C_ItemGEyes::vfunc17()
{
    return (int)&lifted::g_10273780;
}
// END FUNCTION

// FUNCTION: 0x1001d390 size=0x1e
#include "C_ItemGEyes.h"

// VC6 writes C_ItemGEyes's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGEyes *pcd_emit_1001d390() { return new C_ItemGEyes; }

// TARGET: ??_GC_ItemGEyes@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001d3c0 size=0x3
#include "C_ItemGEyes.h"
int C_ItemGEyes::vfunc15()
{
    return 0;
}
// END FUNCTION
