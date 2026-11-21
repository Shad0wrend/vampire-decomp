// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10001900 size=0x1e
#include "C_BaseCineCamera.h"

// VC6 writes C_BaseCineCamera's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseCineCamera *pcd_emit_10001900() { return new C_BaseCineCamera; }

// TARGET: ??_GC_BaseCineCamera@@UAEPAXI@Z
// END FUNCTION
