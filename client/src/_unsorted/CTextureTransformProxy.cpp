// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1004a670 size=0x1e
#include "CTextureTransformProxy.h"

// VC6 writes CTextureTransformProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CTextureTransformProxy *pcd_emit_1004a670() { return new CTextureTransformProxy; }

// TARGET: ??_GCTextureTransformProxy@@UAEPAXI@Z
// END FUNCTION
