// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10020c80 size=0x6
#include "C_ItemKGalleryNoirKey.h"
namespace lifted {
extern char g_10273a04;
}
int C_ItemKGalleryNoirKey::vfunc17()
{
    return (int)&lifted::g_10273a04;
}
// END FUNCTION

// FUNCTION: 0x10020d10 size=0x1e
#include "C_ItemKGalleryNoirKey.h"

// VC6 writes C_ItemKGalleryNoirKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKGalleryNoirKey *pcd_emit_10020d10() { return new C_ItemKGalleryNoirKey; }

// TARGET: ??_GC_ItemKGalleryNoirKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10020d30 size=0x6
#include "C_ItemKGalleryNoirKey.h"
namespace lifted {
extern char g_10274214;
}
int C_ItemKGalleryNoirKey::vfunc16()
{
    return (int)&lifted::g_10274214;
}
// END FUNCTION

// FUNCTION: 0x10020d40 size=0x3
#include "C_ItemKGalleryNoirKey.h"
int C_ItemKGalleryNoirKey::vfunc15()
{
    return 0;
}
// END FUNCTION
