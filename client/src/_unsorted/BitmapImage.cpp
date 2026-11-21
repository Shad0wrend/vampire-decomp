// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101644a0 size=0x1e
#include "BitmapImage.h"

// VC6 writes BitmapImage's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
BitmapImage *pcd_emit_101644a0() { return new BitmapImage; }

// TARGET: ??_GBitmapImage@@UAEPAXI@Z
// END FUNCTION
