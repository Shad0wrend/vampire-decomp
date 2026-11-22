// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10025c80 size=0x6
#include "C_ItemKChineseTheatreKey.h"
namespace lifted {
extern char g_10273d84;
}
int C_ItemKChineseTheatreKey::vfunc17()
{
    return (int)&lifted::g_10273d84;
}
// END FUNCTION

// FUNCTION: 0x10025d10 size=0x1e
#include "C_ItemKChineseTheatreKey.h"

// VC6 writes C_ItemKChineseTheatreKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKChineseTheatreKey *pcd_emit_10025d10() { return new C_ItemKChineseTheatreKey; }

// TARGET: ??_GC_ItemKChineseTheatreKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10025d30 size=0x6
#include "C_ItemKChineseTheatreKey.h"
namespace lifted {
extern char g_10273efc;
}
int C_ItemKChineseTheatreKey::vfunc16()
{
    return (int)&lifted::g_10273efc;
}
// END FUNCTION

// FUNCTION: 0x10025d40 size=0x3
#include "C_ItemKChineseTheatreKey.h"
int C_ItemKChineseTheatreKey::vfunc15()
{
    return 0;
}
// END FUNCTION
