// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001f100 size=0x6
#include "C_ItemGIdolElephant.h"
namespace lifted {
extern char g_102738d0;
}
int C_ItemGIdolElephant::vfunc17()
{
    return (int)&lifted::g_102738d0;
}
// END FUNCTION

// FUNCTION: 0x1001f190 size=0x1e
#include "C_ItemGIdolElephant.h"

// VC6 writes C_ItemGIdolElephant's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGIdolElephant *pcd_emit_1001f190() { return new C_ItemGIdolElephant; }

// TARGET: ??_GC_ItemGIdolElephant@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001f1c0 size=0x3
#include "C_ItemGIdolElephant.h"
int C_ItemGIdolElephant::vfunc15()
{
    return 0;
}
// END FUNCTION
