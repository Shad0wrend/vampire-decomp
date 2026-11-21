// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1018da50 size=0x1e
#include "CVProfPanel.h"

// VC6 writes CVProfPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CVProfPanel *pcd_emit_1018da50() { return new CVProfPanel; }

// TARGET: ??_GCVProfPanel@@UAEPAXI@Z
// END FUNCTION
