// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100b5490 size=0x1e
#include "C_FireSmoke.h"

// VC6 writes C_FireSmoke's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_FireSmoke *pcd_emit_100b5490() { return new C_FireSmoke; }

// TARGET: ??_GC_FireSmoke@@UAEPAXI@Z
// END FUNCTION
