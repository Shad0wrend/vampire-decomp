// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10022d00 size=0x6
#include "C_ItemKMuseumBasementKey.h"
namespace lifted {
extern char g_10273b70;
}
int C_ItemKMuseumBasementKey::vfunc17()
{
    return (int)&lifted::g_10273b70;
}
// END FUNCTION

// FUNCTION: 0x10022d90 size=0x1e
#include "C_ItemKMuseumBasementKey.h"

// VC6 writes C_ItemKMuseumBasementKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKMuseumBasementKey *pcd_emit_10022d90() { return new C_ItemKMuseumBasementKey; }

// TARGET: ??_GC_ItemKMuseumBasementKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10022dc0 size=0x3
#include "C_ItemKMuseumBasementKey.h"
int C_ItemKMuseumBasementKey::vfunc15()
{
    return 0;
}
// END FUNCTION
