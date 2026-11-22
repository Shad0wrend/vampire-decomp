// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10026180 size=0x6
#include "C_ItemKHitmanJiKey.h"
namespace lifted {
extern char g_10273dbc;
}
int C_ItemKHitmanJiKey::vfunc17()
{
    return (int)&lifted::g_10273dbc;
}
// END FUNCTION

// FUNCTION: 0x10026210 size=0x1e
#include "C_ItemKHitmanJiKey.h"

// VC6 writes C_ItemKHitmanJiKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKHitmanJiKey *pcd_emit_10026210() { return new C_ItemKHitmanJiKey; }

// TARGET: ??_GC_ItemKHitmanJiKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10026240 size=0x3
#include "C_ItemKHitmanJiKey.h"
int C_ItemKHitmanJiKey::vfunc15()
{
    return 0;
}
// END FUNCTION
