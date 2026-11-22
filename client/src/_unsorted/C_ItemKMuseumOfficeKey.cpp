// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10026900 size=0x6
#include "C_ItemKMuseumOfficeKey.h"
namespace lifted {
extern char g_10273e10;
}
int C_ItemKMuseumOfficeKey::vfunc17()
{
    return (int)&lifted::g_10273e10;
}
// END FUNCTION

// FUNCTION: 0x10026990 size=0x1e
#include "C_ItemKMuseumOfficeKey.h"

// VC6 writes C_ItemKMuseumOfficeKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKMuseumOfficeKey *pcd_emit_10026990() { return new C_ItemKMuseumOfficeKey; }

// TARGET: ??_GC_ItemKMuseumOfficeKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100269b0 size=0x6
#include "C_ItemKMuseumOfficeKey.h"
namespace lifted {
extern char g_10273e8c;
}
int C_ItemKMuseumOfficeKey::vfunc16()
{
    return (int)&lifted::g_10273e8c;
}
// END FUNCTION

// FUNCTION: 0x100269c0 size=0x3
#include "C_ItemKMuseumOfficeKey.h"
int C_ItemKMuseumOfficeKey::vfunc15()
{
    return 0;
}
// END FUNCTION
