// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10019480 size=0x6
#include "C_ItemGBailbondReceipt.h"
namespace lifted {
extern char g_102734c4;
}
int C_ItemGBailbondReceipt::vfunc17()
{
    return (int)&lifted::g_102734c4;
}
// END FUNCTION

// FUNCTION: 0x10019510 size=0x1e
#include "C_ItemGBailbondReceipt.h"

// VC6 writes C_ItemGBailbondReceipt's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGBailbondReceipt *pcd_emit_10019510() { return new C_ItemGBailbondReceipt; }

// TARGET: ??_GC_ItemGBailbondReceipt@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10019530 size=0x6
#include "C_ItemGBailbondReceipt.h"
namespace lifted {
extern char g_10274640;
}
int C_ItemGBailbondReceipt::vfunc16()
{
    return (int)&lifted::g_10274640;
}
// END FUNCTION

// FUNCTION: 0x10019540 size=0x3
#include "C_ItemGBailbondReceipt.h"
int C_ItemGBailbondReceipt::vfunc15()
{
    return 0;
}
// END FUNCTION
