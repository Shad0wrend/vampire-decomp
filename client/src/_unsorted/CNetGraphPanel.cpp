// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10168c80 size=0x1e
#include "CNetGraphPanel.h"

// VC6 writes CNetGraphPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CNetGraphPanel *pcd_emit_10168c80() { return new CNetGraphPanel; }

// TARGET: ??_GCNetGraphPanel@@UAEPAXI@Z
// END FUNCTION
