// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10020d10 size=0x1e
#include "C_ItemKGalleryNoirKey.h"

// VC6 writes C_ItemKGalleryNoirKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKGalleryNoirKey *pcd_emit_10020d10() { return new C_ItemKGalleryNoirKey; }

// TARGET: ??_GC_ItemKGalleryNoirKey@@UAEPAXI@Z
// END FUNCTION
