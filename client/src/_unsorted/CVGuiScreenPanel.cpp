// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100c8c80 size=0x1e
#include "CVGuiScreenPanel.h"

// VC6 writes CVGuiScreenPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CVGuiScreenPanel *pcd_emit_100c8c80() { return new CVGuiScreenPanel; }

// TARGET: ??_GCVGuiScreenPanel@@UAEPAXI@Z
// END FUNCTION
