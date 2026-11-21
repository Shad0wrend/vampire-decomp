// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1017b160 size=0x1e
#include "VRButton.h"

// VC6 writes VRButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VRButton *pcd_emit_1017b160() { return new VRButton; }

// TARGET: ??_GVRButton@@UAEPAXI@Z
// END FUNCTION
