// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10017400 size=0x6
#include "C_ItemGDrugsDrugBox.h"
namespace lifted {
extern char g_10273358;
}
int C_ItemGDrugsDrugBox::vfunc17()
{
    return (int)&lifted::g_10273358;
}
// END FUNCTION

// FUNCTION: 0x10017490 size=0x1e
#include "C_ItemGDrugsDrugBox.h"

// VC6 writes C_ItemGDrugsDrugBox's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGDrugsDrugBox *pcd_emit_10017490() { return new C_ItemGDrugsDrugBox; }

// TARGET: ??_GC_ItemGDrugsDrugBox@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100174b0 size=0x6
#include "C_ItemGDrugsDrugBox.h"
namespace lifted {
extern char g_1027473c;
}
int C_ItemGDrugsDrugBox::vfunc16()
{
    return (int)&lifted::g_1027473c;
}
// END FUNCTION

// FUNCTION: 0x100174c0 size=0x3
#include "C_ItemGDrugsDrugBox.h"
int C_ItemGDrugsDrugBox::vfunc15()
{
    return 0;
}
// END FUNCTION
