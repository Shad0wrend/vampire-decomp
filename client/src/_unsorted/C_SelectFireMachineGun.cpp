// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10007780 size=0x6
#include "C_SelectFireMachineGun.h"
namespace lifted {
extern char g_1027284c;
}
int C_SelectFireMachineGun::vfunc17()
{
    return (int)&lifted::g_1027284c;
}
// END FUNCTION

// FUNCTION: 0x10007810 size=0x1e
#include "C_SelectFireMachineGun.h"

// VC6 writes C_SelectFireMachineGun's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_SelectFireMachineGun *pcd_emit_10007810() { return new C_SelectFireMachineGun; }

// TARGET: ??_GC_SelectFireMachineGun@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10007830 size=0x6
#include "C_SelectFireMachineGun.h"
namespace lifted {
extern char g_10275124;
}
int C_SelectFireMachineGun::vfunc16()
{
    return (int)&lifted::g_10275124;
}
// END FUNCTION

// FUNCTION: 0x10007840 size=0x3
#include "C_SelectFireMachineGun.h"
int C_SelectFireMachineGun::vfunc15()
{
    return 0;
}
// END FUNCTION
