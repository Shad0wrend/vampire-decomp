// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10024380 size=0x6
#include "C_ItemKMalkavianRefrigeratorKey.h"
namespace lifted {
extern char g_10273c6c;
}
int C_ItemKMalkavianRefrigeratorKey::vfunc17()
{
    return (int)&lifted::g_10273c6c;
}
// END FUNCTION

// FUNCTION: 0x10024410 size=0x1e
#include "C_ItemKMalkavianRefrigeratorKey.h"

// VC6 writes C_ItemKMalkavianRefrigeratorKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKMalkavianRefrigeratorKey *pcd_emit_10024410() { return new C_ItemKMalkavianRefrigeratorKey; }

// TARGET: ??_GC_ItemKMalkavianRefrigeratorKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10024430 size=0x6
#include "C_ItemKMalkavianRefrigeratorKey.h"
namespace lifted {
extern char g_10273ff0;
}
int C_ItemKMalkavianRefrigeratorKey::vfunc16()
{
    return (int)&lifted::g_10273ff0;
}
// END FUNCTION

// FUNCTION: 0x10024440 size=0x3
#include "C_ItemKMalkavianRefrigeratorKey.h"
int C_ItemKMalkavianRefrigeratorKey::vfunc15()
{
    return 0;
}
// END FUNCTION
