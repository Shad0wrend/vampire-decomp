// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10002f70 size=0x6
#include "C_ItemPhysicsHand.h"
namespace lifted {
extern char g_102713c8;
}
int C_ItemPhysicsHand::vfunc17()
{
    return (int)&lifted::g_102713c8;
}
// END FUNCTION

// FUNCTION: 0x10003220 size=0xd
#include "C_ItemPhysicsHand.h"
namespace lifted {
int sub_1005fa40(int);
}
bool C_ItemPhysicsHand::vfunc188()
{
    lifted::sub_1005fa40(1);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10003230 size=0x1e
#include "C_ItemPhysicsHand.h"

// VC6 writes C_ItemPhysicsHand's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemPhysicsHand *pcd_emit_10003230() { return new C_ItemPhysicsHand; }

// TARGET: ??_GC_ItemPhysicsHand@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10003250 size=0x6
#include "C_ItemPhysicsHand.h"
namespace lifted {
extern char g_102713e4;
}
int C_ItemPhysicsHand::vfunc16()
{
    return (int)&lifted::g_102713e4;
}
// END FUNCTION

// FUNCTION: 0x10003260 size=0x3
#include "C_ItemPhysicsHand.h"
int C_ItemPhysicsHand::vfunc15()
{
    return 0;
}
// END FUNCTION
