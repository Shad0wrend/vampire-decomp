// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e02a0 size=0x1e
#include "CDetailModel.h"

// VC6 writes CDetailModel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CDetailModel *pcd_emit_100e02a0() { return new CDetailModel; }

// TARGET: ??_GCDetailModel@@UAEPAXI@Z
// END FUNCTION
