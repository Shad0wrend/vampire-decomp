// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10010380 size=0x6
#include "C_ItemMMoneyClip.h"
namespace lifted {
extern char g_10272e6c;
}
int C_ItemMMoneyClip::vfunc17()
{
    return (int)&lifted::g_10272e6c;
}
// END FUNCTION

// FUNCTION: 0x10010410 size=0x1e
#include "C_ItemMMoneyClip.h"

// VC6 writes C_ItemMMoneyClip's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemMMoneyClip *pcd_emit_10010410() { return new C_ItemMMoneyClip; }

// TARGET: ??_GC_ItemMMoneyClip@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10010430 size=0x6
#include "C_ItemMMoneyClip.h"
namespace lifted {
extern char g_10274b44;
}
int C_ItemMMoneyClip::vfunc16()
{
    return (int)&lifted::g_10274b44;
}
// END FUNCTION

// FUNCTION: 0x10010440 size=0x3
#include "C_ItemMMoneyClip.h"
int C_ItemMMoneyClip::vfunc15()
{
    return 0;
}
// END FUNCTION
