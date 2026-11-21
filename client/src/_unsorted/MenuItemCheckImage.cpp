// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c6ea0 size=0x1e
#include "MenuItemCheckImage.h"

// VC6 writes MenuItemCheckImage's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
MenuItemCheckImage *pcd_emit_101c6ea0() { return new MenuItemCheckImage; }

// TARGET: ??_GMenuItemCheckImage@@UAEPAXI@Z
// END FUNCTION
