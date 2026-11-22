// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10035990 size=0x1e
#include "C_TEBubbleTrail.h"

// VC6 writes C_TEBubbleTrail's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEBubbleTrail *pcd_emit_10035990() { return new C_TEBubbleTrail; }

// TARGET: ??_GC_TEBubbleTrail@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10035a30 size=0x6
#include "C_TEBubbleTrail.h"
namespace lifted {
extern char g_1027eaac;
}
int C_TEBubbleTrail::vfunc9()
{
    return (int)&lifted::g_1027eaac;
}
// END FUNCTION
