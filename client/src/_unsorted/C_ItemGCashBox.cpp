// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10017900 size=0x6
#include "C_ItemGCashBox.h"
namespace lifted {
extern char g_10273390;
}
int C_ItemGCashBox::vfunc17()
{
    return (int)&lifted::g_10273390;
}
// END FUNCTION

// FUNCTION: 0x10017990 size=0x1e
#include "C_ItemGCashBox.h"

// VC6 writes C_ItemGCashBox's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGCashBox *pcd_emit_10017990() { return new C_ItemGCashBox; }

// TARGET: ??_GC_ItemGCashBox@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100179c0 size=0x3
#include "C_ItemGCashBox.h"
int C_ItemGCashBox::vfunc15()
{
    return 0;
}
// END FUNCTION
