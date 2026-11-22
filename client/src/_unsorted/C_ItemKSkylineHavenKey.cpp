// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10026680 size=0x6
#include "C_ItemKSkylineHavenKey.h"
namespace lifted {
extern char g_10273df4;
}
int C_ItemKSkylineHavenKey::vfunc17()
{
    return (int)&lifted::g_10273df4;
}
// END FUNCTION

// FUNCTION: 0x10026710 size=0x1e
#include "C_ItemKSkylineHavenKey.h"

// VC6 writes C_ItemKSkylineHavenKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKSkylineHavenKey *pcd_emit_10026710() { return new C_ItemKSkylineHavenKey; }

// TARGET: ??_GC_ItemKSkylineHavenKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10026740 size=0x3
#include "C_ItemKSkylineHavenKey.h"
int C_ItemKSkylineHavenKey::vfunc15()
{
    return 0;
}
// END FUNCTION
