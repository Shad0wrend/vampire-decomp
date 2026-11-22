// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10037040 size=0x1e
#include "C_TEFizz.h"

// VC6 writes C_TEFizz's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEFizz *pcd_emit_10037040() { return new C_TEFizz; }

// TARGET: ??_GC_TEFizz@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100370e0 size=0x6
#include "C_TEFizz.h"
namespace lifted {
extern char g_1027f3dc;
}
int C_TEFizz::vfunc9()
{
    return (int)&lifted::g_1027f3dc;
}
// END FUNCTION

// FUNCTION: 0x100370f0 size=0x3
#include "C_TEFizz.h"
int C_TEFizz::vfunc8()
{
    return 0;
}
// END FUNCTION
