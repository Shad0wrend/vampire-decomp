// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10017e00 size=0x6
#include "C_ItemGGhostPendant.h"
namespace lifted {
extern char g_102733c8;
}
int C_ItemGGhostPendant::vfunc17()
{
    return (int)&lifted::g_102733c8;
}
// END FUNCTION

// FUNCTION: 0x10017e90 size=0x1e
#include "C_ItemGGhostPendant.h"

// VC6 writes C_ItemGGhostPendant's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGGhostPendant *pcd_emit_10017e90() { return new C_ItemGGhostPendant; }

// TARGET: ??_GC_ItemGGhostPendant@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10017eb0 size=0x6
#include "C_ItemGGhostPendant.h"
namespace lifted {
extern char g_102746f0;
}
int C_ItemGGhostPendant::vfunc16()
{
    return (int)&lifted::g_102746f0;
}
// END FUNCTION

// FUNCTION: 0x10017ec0 size=0x3
#include "C_ItemGGhostPendant.h"
int C_ItemGGhostPendant::vfunc15()
{
    return 0;
}
// END FUNCTION
