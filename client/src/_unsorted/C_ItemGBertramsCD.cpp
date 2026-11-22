// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001fd80 size=0x6
#include "C_ItemGBertramsCD.h"
namespace lifted {
extern char g_1027395c;
}
int C_ItemGBertramsCD::vfunc17()
{
    return (int)&lifted::g_1027395c;
}
// END FUNCTION

// FUNCTION: 0x1001fe10 size=0x1e
#include "C_ItemGBertramsCD.h"

// VC6 writes C_ItemGBertramsCD's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGBertramsCD *pcd_emit_1001fe10() { return new C_ItemGBertramsCD; }

// TARGET: ??_GC_ItemGBertramsCD@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001fe30 size=0x6
#include "C_ItemGBertramsCD.h"
namespace lifted {
extern char g_1027429c;
}
int C_ItemGBertramsCD::vfunc16()
{
    return (int)&lifted::g_1027429c;
}
// END FUNCTION

// FUNCTION: 0x1001fe40 size=0x3
#include "C_ItemGBertramsCD.h"
int C_ItemGBertramsCD::vfunc15()
{
    return 0;
}
// END FUNCTION
