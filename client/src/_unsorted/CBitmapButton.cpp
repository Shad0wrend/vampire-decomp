// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10164270 size=0x1
#include "CBitmapButton.h"
void CBitmapButton::vfunc97()
{
}
// END FUNCTION

// FUNCTION: 0x10164280 size=0x1e
#include "CBitmapButton.h"

// VC6 writes CBitmapButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CBitmapButton *pcd_emit_10164280() { return new CBitmapButton; }

// TARGET: ??_GCBitmapButton@@UAEPAXI@Z
// END FUNCTION
