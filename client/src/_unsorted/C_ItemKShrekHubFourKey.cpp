// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10025000 size=0x6
#include "C_ItemKShrekHubFourKey.h"
namespace lifted {
extern char g_10273cf8;
}
int C_ItemKShrekHubFourKey::vfunc17()
{
    return (int)&lifted::g_10273cf8;
}
// END FUNCTION

// FUNCTION: 0x10025090 size=0x1e
#include "C_ItemKShrekHubFourKey.h"

// VC6 writes C_ItemKShrekHubFourKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKShrekHubFourKey *pcd_emit_10025090() { return new C_ItemKShrekHubFourKey; }

// TARGET: ??_GC_ItemKShrekHubFourKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100250b0 size=0x6
#include "C_ItemKShrekHubFourKey.h"
namespace lifted {
extern char g_10273f68;
}
int C_ItemKShrekHubFourKey::vfunc16()
{
    return (int)&lifted::g_10273f68;
}
// END FUNCTION

// FUNCTION: 0x100250c0 size=0x3
#include "C_ItemKShrekHubFourKey.h"
int C_ItemKShrekHubFourKey::vfunc15()
{
    return 0;
}
// END FUNCTION
