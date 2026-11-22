// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10041440 size=0x6
#include "C_TestTraceline.h"
namespace lifted {
extern char g_10282744;
}
int C_TestTraceline::vfunc16()
{
    return (int)&lifted::g_10282744;
}
// END FUNCTION

// FUNCTION: 0x10041450 size=0x3
#include "C_TestTraceline.h"
int C_TestTraceline::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10041740 size=0x1e
#include "C_TestTraceline.h"

// VC6 writes C_TestTraceline's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TestTraceline *pcd_emit_10041740() { return new C_TestTraceline; }

// TARGET: ??_GC_TestTraceline@@UAEPAXI@Z
// END FUNCTION
