// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001a880 size=0x6
#include "C_ItemGBachJournal.h"
namespace lifted {
extern char g_102735a4;
}
int C_ItemGBachJournal::vfunc17()
{
    return (int)&lifted::g_102735a4;
}
// END FUNCTION

// FUNCTION: 0x1001a910 size=0x1e
#include "C_ItemGBachJournal.h"

// VC6 writes C_ItemGBachJournal's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGBachJournal *pcd_emit_1001a910() { return new C_ItemGBachJournal; }

// TARGET: ??_GC_ItemGBachJournal@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001a930 size=0x6
#include "C_ItemGBachJournal.h"
namespace lifted {
extern char g_10274594;
}
int C_ItemGBachJournal::vfunc16()
{
    return (int)&lifted::g_10274594;
}
// END FUNCTION

// FUNCTION: 0x1001a940 size=0x3
#include "C_ItemGBachJournal.h"
int C_ItemGBachJournal::vfunc15()
{
    return 0;
}
// END FUNCTION
