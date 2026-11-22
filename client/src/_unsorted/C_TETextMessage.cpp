// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003fbc0 size=0x1e
#include "C_TETextMessage.h"

// VC6 writes C_TETextMessage's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TETextMessage *pcd_emit_1003fbc0() { return new C_TETextMessage; }

// TARGET: ??_GC_TETextMessage@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1003fce0 size=0x6
#include "C_TETextMessage.h"
namespace lifted {
extern char g_10281d5c;
}
int C_TETextMessage::vfunc9()
{
    return (int)&lifted::g_10281d5c;
}
// END FUNCTION

// FUNCTION: 0x1003fcf0 size=0x3
#include "C_TETextMessage.h"
int C_TETextMessage::vfunc8()
{
    return 0;
}
// END FUNCTION
