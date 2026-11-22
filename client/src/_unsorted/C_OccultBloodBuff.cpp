// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10013a80 size=0x6
#include "C_OccultBloodBuff.h"
namespace lifted {
extern char g_102730d4;
}
int C_OccultBloodBuff::vfunc17()
{
    return (int)&lifted::g_102730d4;
}
// END FUNCTION

// FUNCTION: 0x10013b10 size=0x1e
#include "C_OccultBloodBuff.h"

// VC6 writes C_OccultBloodBuff's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_OccultBloodBuff *pcd_emit_10013b10() { return new C_OccultBloodBuff; }

// TARGET: ??_GC_OccultBloodBuff@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10013b40 size=0x3
#include "C_OccultBloodBuff.h"
int C_OccultBloodBuff::vfunc15()
{
    return 0;
}
// END FUNCTION
