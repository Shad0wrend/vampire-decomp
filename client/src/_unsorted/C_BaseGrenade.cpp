// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1007e210 size=0x6
#include "C_BaseGrenade.h"
namespace lifted {
extern char g_102ac710;
}
int C_BaseGrenade::vfunc16()
{
    return (int)&lifted::g_102ac710;
}
// END FUNCTION

// FUNCTION: 0x1007e220 size=0x3
#include "C_BaseGrenade.h"
int C_BaseGrenade::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1007e4d0 size=0x6
#include "C_BaseGrenade.h"
namespace lifted {
extern char g_102ac6b4;
}
int C_BaseGrenade::vfunc17()
{
    return (int)&lifted::g_102ac6b4;
}
// END FUNCTION

// FUNCTION: 0x1007e4e0 size=0x3
#include "C_BaseGrenade.h"
void C_BaseGrenade::vfunc149(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x1007f160 size=0x4
#include "C_BaseGrenade.h"
int C_BaseGrenade::vfunc152()
{
    return -1;
}
// END FUNCTION

// FUNCTION: 0x1007f170 size=0x7
#include "C_BaseGrenade.h"
namespace lifted {
extern float g_1022671c;
}
float C_BaseGrenade::vfunc154()
{
    return lifted::g_1022671c;
}
// END FUNCTION

// FUNCTION: 0x1007f180 size=0x7
#include "C_BaseGrenade.h"
namespace lifted {
extern float g_1022c2d0;
}
float C_BaseGrenade::vfunc155()
{
    return lifted::g_1022c2d0;
}
// END FUNCTION

// FUNCTION: 0x1007f190 size=0x5
#include "C_BaseGrenade.h"
bool C_BaseGrenade::vfunc156(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1007f1a0 size=0x7
#include "C_BaseGrenade.h"
float C_BaseGrenade::vfunc157()
{
    return *(float *)((char *)this + 0x10f0);
}
// END FUNCTION

// FUNCTION: 0x1007f1b0 size=0x7
#include "C_BaseGrenade.h"
float C_BaseGrenade::vfunc158()
{
    return *(float *)((char *)this + 0x10e8);
}
// END FUNCTION

// FUNCTION: 0x1007f1c0 size=0xd
#include "C_BaseGrenade.h"
int C_BaseGrenade::vfunc159(int a0)
{
    *(int *)((char *)this + 0x10f0) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x1007f1d0 size=0xd
#include "C_BaseGrenade.h"
int C_BaseGrenade::vfunc160(int a0)
{
    *(int *)((char *)this + 0x10e8) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x1007f1e0 size=0x1e
#include "C_BaseGrenade.h"

// VC6 writes C_BaseGrenade's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseGrenade *pcd_emit_1007f1e0() { return new C_BaseGrenade; }

// TARGET: ??_GC_BaseGrenade@@UAEPAXI@Z
// END FUNCTION
