// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10016f00 size=0x6
#include "C_ItemGDrugsPerscriptionBottle.h"
namespace lifted {
extern char g_10273320;
}
int C_ItemGDrugsPerscriptionBottle::vfunc17()
{
    return (int)&lifted::g_10273320;
}
// END FUNCTION

// FUNCTION: 0x10016f90 size=0x1e
#include "C_ItemGDrugsPerscriptionBottle.h"

// VC6 writes C_ItemGDrugsPerscriptionBottle's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGDrugsPerscriptionBottle *pcd_emit_10016f90() { return new C_ItemGDrugsPerscriptionBottle; }

// TARGET: ??_GC_ItemGDrugsPerscriptionBottle@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10016fb0 size=0x6
#include "C_ItemGDrugsPerscriptionBottle.h"
namespace lifted {
extern char g_10274768;
}
int C_ItemGDrugsPerscriptionBottle::vfunc16()
{
    return (int)&lifted::g_10274768;
}
// END FUNCTION

// FUNCTION: 0x10016fc0 size=0x3
#include "C_ItemGDrugsPerscriptionBottle.h"
int C_ItemGDrugsPerscriptionBottle::vfunc15()
{
    return 0;
}
// END FUNCTION
