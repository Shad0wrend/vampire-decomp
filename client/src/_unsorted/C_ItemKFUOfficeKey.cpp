// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10025a00 size=0x6
#include "C_ItemKFUOfficeKey.h"
namespace lifted {
extern char g_10273d68;
}
int C_ItemKFUOfficeKey::vfunc17()
{
    return (int)&lifted::g_10273d68;
}
// END FUNCTION

// FUNCTION: 0x10025a90 size=0x1e
#include "C_ItemKFUOfficeKey.h"

// VC6 writes C_ItemKFUOfficeKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKFUOfficeKey *pcd_emit_10025a90() { return new C_ItemKFUOfficeKey; }

// TARGET: ??_GC_ItemKFUOfficeKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10025ab0 size=0x6
#include "C_ItemKFUOfficeKey.h"
namespace lifted {
extern char g_10273f18;
}
int C_ItemKFUOfficeKey::vfunc16()
{
    return (int)&lifted::g_10273f18;
}
// END FUNCTION

// FUNCTION: 0x10025ac0 size=0x3
#include "C_ItemKFUOfficeKey.h"
int C_ItemKFUOfficeKey::vfunc15()
{
    return 0;
}
// END FUNCTION
