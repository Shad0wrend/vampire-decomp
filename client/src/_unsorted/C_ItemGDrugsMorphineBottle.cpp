// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10016c80 size=0x6
#include "C_ItemGDrugsMorphineBottle.h"
namespace lifted {
extern char g_10273304;
}
int C_ItemGDrugsMorphineBottle::vfunc17()
{
    return (int)&lifted::g_10273304;
}
// END FUNCTION

// FUNCTION: 0x10016d10 size=0x1e
#include "C_ItemGDrugsMorphineBottle.h"

// VC6 writes C_ItemGDrugsMorphineBottle's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGDrugsMorphineBottle *pcd_emit_10016d10() { return new C_ItemGDrugsMorphineBottle; }

// TARGET: ??_GC_ItemGDrugsMorphineBottle@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10016d40 size=0x3
#include "C_ItemGDrugsMorphineBottle.h"
int C_ItemGDrugsMorphineBottle::vfunc15()
{
    return 0;
}
// END FUNCTION
