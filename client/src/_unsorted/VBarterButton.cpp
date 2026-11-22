// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1016cd90 size=0x5
#include "VBarterButton.h"
int VBarterButton::vfunc164(int a0, int a1, int a2, int a3)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1016cda0 size=0x1e
#include "VBarterButton.h"

// VC6 writes VBarterButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VBarterButton *pcd_emit_1016cda0() { return new VBarterButton; }

// TARGET: ??_GVBarterButton@@UAEPAXI@Z
// END FUNCTION
