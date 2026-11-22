// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10003920 size=0x6
#include "C_ItemKeyGeneric.h"
namespace lifted {
extern char g_1027160c;
}
int C_ItemKeyGeneric::vfunc17()
{
    return (int)&lifted::g_1027160c;
}
// END FUNCTION

// FUNCTION: 0x10003980 size=0x6
#include "C_ItemKeyGeneric.h"
namespace lifted {
extern char g_10271628;
}
int C_ItemKeyGeneric::vfunc16()
{
    return (int)&lifted::g_10271628;
}
// END FUNCTION

// FUNCTION: 0x10003990 size=0x3
#include "C_ItemKeyGeneric.h"
int C_ItemKeyGeneric::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10003ba0 size=0x1e
#include "C_ItemKeyGeneric.h"

// VC6 writes C_ItemKeyGeneric's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKeyGeneric *pcd_emit_10003ba0() { return new C_ItemKeyGeneric; }

// TARGET: ??_GC_ItemKeyGeneric@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10003bc0 size=0x7
#include "C_ItemKeyGeneric.h"
char * C_ItemKeyGeneric::vfunc114()
{
    return (char *)this + 0x978;
}
// END FUNCTION
