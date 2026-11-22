// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1017d430 size=0x1e
#include "VHOHeadingLabel.h"

// VC6 writes VHOHeadingLabel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VHOHeadingLabel *pcd_emit_1017d430() { return new VHOHeadingLabel; }

// TARGET: ??_GVHOHeadingLabel@@UAEPAXI@Z
// END FUNCTION
