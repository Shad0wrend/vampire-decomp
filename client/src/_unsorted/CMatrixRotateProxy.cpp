// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1004a800 size=0x1e
#include "CMatrixRotateProxy.h"

// VC6 writes CMatrixRotateProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CMatrixRotateProxy *pcd_emit_1004a800() { return new CMatrixRotateProxy; }

// TARGET: ??_GCMatrixRotateProxy@@UAEPAXI@Z
// END FUNCTION
