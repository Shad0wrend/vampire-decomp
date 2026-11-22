// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001bf00 size=0x6
#include "C_ItemGMilligansBuisnesscard.h"
namespace lifted {
extern char g_102736a0;
}
int C_ItemGMilligansBuisnesscard::vfunc17()
{
    return (int)&lifted::g_102736a0;
}
// END FUNCTION

// FUNCTION: 0x1001bf90 size=0x1e
#include "C_ItemGMilligansBuisnesscard.h"

// VC6 writes C_ItemGMilligansBuisnesscard's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGMilligansBuisnesscard *pcd_emit_1001bf90() { return new C_ItemGMilligansBuisnesscard; }

// TARGET: ??_GC_ItemGMilligansBuisnesscard@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001bfc0 size=0x3
#include "C_ItemGMilligansBuisnesscard.h"
int C_ItemGMilligansBuisnesscard::vfunc15()
{
    return 0;
}
// END FUNCTION
