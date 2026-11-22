// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001b000 size=0x6
#include "C_ItemGEDanePrintReport.h"
namespace lifted {
extern char g_102735f8;
}
int C_ItemGEDanePrintReport::vfunc17()
{
    return (int)&lifted::g_102735f8;
}
// END FUNCTION

// FUNCTION: 0x1001b090 size=0x1e
#include "C_ItemGEDanePrintReport.h"

// VC6 writes C_ItemGEDanePrintReport's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGEDanePrintReport *pcd_emit_1001b090() { return new C_ItemGEDanePrintReport; }

// TARGET: ??_GC_ItemGEDanePrintReport@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001b0b0 size=0x6
#include "C_ItemGEDanePrintReport.h"
namespace lifted {
extern char g_10274550;
}
int C_ItemGEDanePrintReport::vfunc16()
{
    return (int)&lifted::g_10274550;
}
// END FUNCTION

// FUNCTION: 0x1001b0c0 size=0x3
#include "C_ItemGEDanePrintReport.h"
int C_ItemGEDanePrintReport::vfunc15()
{
    return 0;
}
// END FUNCTION
