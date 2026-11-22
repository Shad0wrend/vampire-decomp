// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10002690 size=0x1
#include "C_BaseAnimating.h"
void C_BaseAnimating::vfunc141()
{
}
// END FUNCTION

// FUNCTION: 0x1008edc0 size=0x6
#include "C_BaseAnimating.h"
namespace lifted {
extern char g_102ad9f0;
}
int C_BaseAnimating::vfunc16()
{
    return (int)&lifted::g_102ad9f0;
}
// END FUNCTION

// FUNCTION: 0x1008edd0 size=0x3
#include "C_BaseAnimating.h"
int C_BaseAnimating::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1008f5a0 size=0x1e
#include "C_BaseAnimating.h"

// VC6 writes C_BaseAnimating's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseAnimating *pcd_emit_1008f5a0() { return new C_BaseAnimating; }

// TARGET: ??_GC_BaseAnimating@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10090b60 size=0x3
#include "C_BaseAnimating.h"
void C_BaseAnimating::vfunc124(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x100910f0 size=0x1b
#include "C_BaseAnimating.h"
namespace lifted {
struct C10094020 { bool sub_10094020(); };
struct C100a1aa0 { int sub_100a1aa0(); };
}
int C_BaseAnimating::vfunc66()
{
    bool t0 = ((lifted::C10094020 *)this)->sub_10094020();
    if (t0 != 0) {
        return 2;
    }
    return ((lifted::C100a1aa0 *)this)->sub_100a1aa0();
}
// END FUNCTION

// FUNCTION: 0x10091640 size=0x3
#include "C_BaseAnimating.h"
void C_BaseAnimating::vfunc131(int a0, int a1, int a2, int a3, int a4, int a5)
{
}
// END FUNCTION

// FUNCTION: 0x10091960 size=0x3
#include "C_BaseAnimating.h"
bool C_BaseAnimating::vfunc142()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10095870 size=0x6
#include "C_BaseAnimating.h"
namespace lifted {
extern char g_102ad9d8;
}
int C_BaseAnimating::vfunc17()
{
    return (int)&lifted::g_102ad9d8;
}
// END FUNCTION
