// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001e980 size=0x6
#include "C_ItemGIdolCat.h"
namespace lifted {
extern char g_1027387c;
}
int C_ItemGIdolCat::vfunc17()
{
    return (int)&lifted::g_1027387c;
}
// END FUNCTION

// FUNCTION: 0x1001ea10 size=0x1e
#include "C_ItemGIdolCat.h"

// VC6 writes C_ItemGIdolCat's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGIdolCat *pcd_emit_1001ea10() { return new C_ItemGIdolCat; }

// TARGET: ??_GC_ItemGIdolCat@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001ea30 size=0x6
#include "C_ItemGIdolCat.h"
namespace lifted {
extern char g_10274338;
}
int C_ItemGIdolCat::vfunc16()
{
    return (int)&lifted::g_10274338;
}
// END FUNCTION

// FUNCTION: 0x1001ea40 size=0x3
#include "C_ItemGIdolCat.h"
int C_ItemGIdolCat::vfunc15()
{
    return 0;
}
// END FUNCTION
