// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10022f80 size=0x6
#include "C_ItemKMuseumStoreroomKey.h"
namespace lifted {
extern char g_10273b8c;
}
int C_ItemKMuseumStoreroomKey::vfunc17()
{
    return (int)&lifted::g_10273b8c;
}
// END FUNCTION

// FUNCTION: 0x10023010 size=0x1e
#include "C_ItemKMuseumStoreroomKey.h"

// VC6 writes C_ItemKMuseumStoreroomKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKMuseumStoreroomKey *pcd_emit_10023010() { return new C_ItemKMuseumStoreroomKey; }

// TARGET: ??_GC_ItemKMuseumStoreroomKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10023040 size=0x3
#include "C_ItemKMuseumStoreroomKey.h"
int C_ItemKMuseumStoreroomKey::vfunc15()
{
    return 0;
}
// END FUNCTION
