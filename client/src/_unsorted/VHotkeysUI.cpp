// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101826f0 size=0x1e
#include "VHotkeysUI.h"

// VC6 writes VHotkeysUI's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VHotkeysUI *pcd_emit_101826f0() { return new VHotkeysUI; }

// TARGET: ??_GVHotkeysUI@@UAEPAXI@Z
// END FUNCTION
