// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1018b250 size=0x1e
#include "CStudiomodelPanel.h"

// VC6 writes CStudiomodelPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CStudiomodelPanel *pcd_emit_1018b250() { return new CStudiomodelPanel; }

// TARGET: ??_GCStudiomodelPanel@@UAEPAXI@Z
// END FUNCTION
