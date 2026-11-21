// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1017d170 size=0x1e
#include "VHCheckButton.h"

// VC6 writes VHCheckButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VHCheckButton *pcd_emit_1017d170() { return new VHCheckButton; }

// TARGET: ??_GVHCheckButton@@UAEPAXI@Z
// END FUNCTION
