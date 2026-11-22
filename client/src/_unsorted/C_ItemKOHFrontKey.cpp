// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10025780 size=0x6
#include "C_ItemKOHFrontKey.h"
namespace lifted {
extern char g_10273d4c;
}
int C_ItemKOHFrontKey::vfunc17()
{
    return (int)&lifted::g_10273d4c;
}
// END FUNCTION

// FUNCTION: 0x10025810 size=0x1e
#include "C_ItemKOHFrontKey.h"

// VC6 writes C_ItemKOHFrontKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKOHFrontKey *pcd_emit_10025810() { return new C_ItemKOHFrontKey; }

// TARGET: ??_GC_ItemKOHFrontKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10025830 size=0x6
#include "C_ItemKOHFrontKey.h"
namespace lifted {
extern char g_10273f2c;
}
int C_ItemKOHFrontKey::vfunc16()
{
    return (int)&lifted::g_10273f2c;
}
// END FUNCTION

// FUNCTION: 0x10025840 size=0x3
#include "C_ItemKOHFrontKey.h"
int C_ItemKOHFrontKey::vfunc15()
{
    return 0;
}
// END FUNCTION
