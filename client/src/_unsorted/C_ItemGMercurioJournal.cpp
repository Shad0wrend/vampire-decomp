// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001e200 size=0x6
#include "C_ItemGMercurioJournal.h"
namespace lifted {
extern char g_10273828;
}
int C_ItemGMercurioJournal::vfunc17()
{
    return (int)&lifted::g_10273828;
}
// END FUNCTION

// FUNCTION: 0x1001e290 size=0x1e
#include "C_ItemGMercurioJournal.h"

// VC6 writes C_ItemGMercurioJournal's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGMercurioJournal *pcd_emit_1001e290() { return new C_ItemGMercurioJournal; }

// TARGET: ??_GC_ItemGMercurioJournal@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001e2b0 size=0x6
#include "C_ItemGMercurioJournal.h"
namespace lifted {
extern char g_1027437c;
}
int C_ItemGMercurioJournal::vfunc16()
{
    return (int)&lifted::g_1027437c;
}
// END FUNCTION

// FUNCTION: 0x1001e2c0 size=0x3
#include "C_ItemGMercurioJournal.h"
int C_ItemGMercurioJournal::vfunc15()
{
    return 0;
}
// END FUNCTION
