// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001c180 size=0x6
#include "C_ItemGPishaBook.h"
namespace lifted {
extern char g_102736bc;
}
int C_ItemGPishaBook::vfunc17()
{
    return (int)&lifted::g_102736bc;
}
// END FUNCTION

// FUNCTION: 0x1001c210 size=0x1e
#include "C_ItemGPishaBook.h"

// VC6 writes C_ItemGPishaBook's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGPishaBook *pcd_emit_1001c210() { return new C_ItemGPishaBook; }

// TARGET: ??_GC_ItemGPishaBook@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001c230 size=0x6
#include "C_ItemGPishaBook.h"
namespace lifted {
extern char g_1027449c;
}
int C_ItemGPishaBook::vfunc16()
{
    return (int)&lifted::g_1027449c;
}
// END FUNCTION

// FUNCTION: 0x1001c240 size=0x3
#include "C_ItemGPishaBook.h"
int C_ItemGPishaBook::vfunc15()
{
    return 0;
}
// END FUNCTION
