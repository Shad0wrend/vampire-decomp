// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10024600 size=0x6
#include "C_ItemKTutorialChopshopStairsKey.h"
namespace lifted {
extern char g_10273c88;
}
int C_ItemKTutorialChopshopStairsKey::vfunc17()
{
    return (int)&lifted::g_10273c88;
}
// END FUNCTION

// FUNCTION: 0x10024690 size=0x1e
#include "C_ItemKTutorialChopshopStairsKey.h"

// VC6 writes C_ItemKTutorialChopshopStairsKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKTutorialChopshopStairsKey *pcd_emit_10024690() { return new C_ItemKTutorialChopshopStairsKey; }

// TARGET: ??_GC_ItemKTutorialChopshopStairsKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100246c0 size=0x3
#include "C_ItemKTutorialChopshopStairsKey.h"
int C_ItemKTutorialChopshopStairsKey::vfunc15()
{
    return 0;
}
// END FUNCTION
