// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1017d640 size=0x1e
#include "VRAcceptButton.h"

// VC6 writes VRAcceptButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VRAcceptButton *pcd_emit_1017d640() { return new VRAcceptButton; }

// TARGET: ??_GVRAcceptButton@@UAEPAXI@Z
// END FUNCTION
