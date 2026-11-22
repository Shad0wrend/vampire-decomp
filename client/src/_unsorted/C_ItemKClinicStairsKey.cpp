// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10021e00 size=0x6
#include "C_ItemKClinicStairsKey.h"
namespace lifted {
extern char g_10273ac8;
}
int C_ItemKClinicStairsKey::vfunc17()
{
    return (int)&lifted::g_10273ac8;
}
// END FUNCTION

// FUNCTION: 0x10021e90 size=0x1e
#include "C_ItemKClinicStairsKey.h"

// VC6 writes C_ItemKClinicStairsKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKClinicStairsKey *pcd_emit_10021e90() { return new C_ItemKClinicStairsKey; }

// TARGET: ??_GC_ItemKClinicStairsKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10021eb0 size=0x6
#include "C_ItemKClinicStairsKey.h"
namespace lifted {
extern char g_10274160;
}
int C_ItemKClinicStairsKey::vfunc16()
{
    return (int)&lifted::g_10274160;
}
// END FUNCTION

// FUNCTION: 0x10021ec0 size=0x3
#include "C_ItemKClinicStairsKey.h"
int C_ItemKClinicStairsKey::vfunc15()
{
    return 0;
}
// END FUNCTION
