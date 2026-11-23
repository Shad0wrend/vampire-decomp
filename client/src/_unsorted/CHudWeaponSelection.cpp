// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101a7660 size=0x1e
#include "CHudWeaponSelection.h"

// VC6 writes CHudWeaponSelection's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudWeaponSelection *pcd_emit_101a7660(const CHudWeaponSelection &other) { return new CHudWeaponSelection(other); }

// TARGET: ??_GCHudWeaponSelection@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101a76f0 size=0x13
#include "CHudWeaponSelection.h"
namespace lifted {
extern char g_10678dd4;
struct C101a8c90 { int sub_101a8c90(); };
}
void CHudWeaponSelection::vfunc7()
{
    int t0 = ((lifted::C101a8c90 *)((int)&lifted::g_10678dd4))->sub_101a8c90();
    *(char *)((char *)this + 0x1c) = 0;
}
// END FUNCTION
