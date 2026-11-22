// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10023980 size=0x6
#include "C_ItemKEmpireMafiaKey.h"
namespace lifted {
extern char g_10273bfc;
}
int C_ItemKEmpireMafiaKey::vfunc17()
{
    return (int)&lifted::g_10273bfc;
}
// END FUNCTION

// FUNCTION: 0x10023a10 size=0x1e
#include "C_ItemKEmpireMafiaKey.h"

// VC6 writes C_ItemKEmpireMafiaKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKEmpireMafiaKey *pcd_emit_10023a10() { return new C_ItemKEmpireMafiaKey; }

// TARGET: ??_GC_ItemKEmpireMafiaKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10023a30 size=0x6
#include "C_ItemKEmpireMafiaKey.h"
namespace lifted {
extern char g_1027405c;
}
int C_ItemKEmpireMafiaKey::vfunc16()
{
    return (int)&lifted::g_1027405c;
}
// END FUNCTION

// FUNCTION: 0x10023a40 size=0x3
#include "C_ItemKEmpireMafiaKey.h"
int C_ItemKEmpireMafiaKey::vfunc15()
{
    return 0;
}
// END FUNCTION
