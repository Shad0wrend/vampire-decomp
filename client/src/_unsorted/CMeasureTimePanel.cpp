// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10167e70 size=0x1e
#include "CMeasureTimePanel.h"

// VC6 writes CMeasureTimePanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CMeasureTimePanel *pcd_emit_10167e70() { return new CMeasureTimePanel; }

// TARGET: ??_GCMeasureTimePanel@@UAEPAXI@Z
// END FUNCTION
