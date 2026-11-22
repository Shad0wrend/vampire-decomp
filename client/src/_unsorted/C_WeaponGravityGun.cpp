// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10028280 size=0x6
#include "C_WeaponGravityGun.h"
namespace lifted {
extern char g_1027acb8;
}
int C_WeaponGravityGun::vfunc17()
{
    return (int)&lifted::g_1027acb8;
}
// END FUNCTION

// FUNCTION: 0x10028360 size=0xd
#include "C_WeaponGravityGun.h"
namespace lifted {
int sub_1005fa40(int);
}
bool C_WeaponGravityGun::vfunc188()
{
    lifted::sub_1005fa40(1);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10028390 size=0x1e
#include "C_WeaponGravityGun.h"

// VC6 writes C_WeaponGravityGun's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponGravityGun *pcd_emit_10028390() { return new C_WeaponGravityGun; }

// TARGET: ??_GC_WeaponGravityGun@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100283b0 size=0x6
#include "C_WeaponGravityGun.h"
namespace lifted {
extern char g_1027acd4;
}
int C_WeaponGravityGun::vfunc16()
{
    return (int)&lifted::g_1027acd4;
}
// END FUNCTION

// FUNCTION: 0x100283c0 size=0x3
#include "C_WeaponGravityGun.h"
int C_WeaponGravityGun::vfunc15()
{
    return 0;
}
// END FUNCTION
