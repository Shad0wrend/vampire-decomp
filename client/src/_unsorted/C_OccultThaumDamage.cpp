// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10013f80 size=0x6
#include "C_OccultThaumDamage.h"
namespace lifted {
extern char g_1027310c;
}
int C_OccultThaumDamage::vfunc17()
{
    return (int)&lifted::g_1027310c;
}
// END FUNCTION

// FUNCTION: 0x10014010 size=0x1e
#include "C_OccultThaumDamage.h"

// VC6 writes C_OccultThaumDamage's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_OccultThaumDamage *pcd_emit_10014010() { return new C_OccultThaumDamage; }

// TARGET: ??_GC_OccultThaumDamage@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10014040 size=0x3
#include "C_OccultThaumDamage.h"
int C_OccultThaumDamage::vfunc15()
{
    return 0;
}
// END FUNCTION
