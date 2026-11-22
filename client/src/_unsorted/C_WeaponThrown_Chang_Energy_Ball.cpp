// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10016780 size=0x6
#include "C_WeaponThrown_Chang_Energy_Ball.h"
namespace lifted {
extern char g_102732cc;
}
int C_WeaponThrown_Chang_Energy_Ball::vfunc17()
{
    return (int)&lifted::g_102732cc;
}
// END FUNCTION

// FUNCTION: 0x10016810 size=0x1e
#include "C_WeaponThrown_Chang_Energy_Ball.h"

// VC6 writes C_WeaponThrown_Chang_Energy_Ball's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponThrown_Chang_Energy_Ball *pcd_emit_10016810() { return new C_WeaponThrown_Chang_Energy_Ball; }

// TARGET: ??_GC_WeaponThrown_Chang_Energy_Ball@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10016830 size=0x6
#include "C_WeaponThrown_Chang_Energy_Ball.h"
namespace lifted {
extern char g_102747c0;
}
int C_WeaponThrown_Chang_Energy_Ball::vfunc16()
{
    return (int)&lifted::g_102747c0;
}
// END FUNCTION

// FUNCTION: 0x10016840 size=0x3
#include "C_WeaponThrown_Chang_Energy_Ball.h"
int C_WeaponThrown_Chang_Energy_Ball::vfunc15()
{
    return 0;
}
// END FUNCTION
