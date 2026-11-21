// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10039a70 size=0x1e
#include "C_TEExplosiveGunshotDecal.h"

// VC6 writes C_TEExplosiveGunshotDecal's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEExplosiveGunshotDecal *pcd_emit_10039a70() { return new C_TEExplosiveGunshotDecal; }

// TARGET: ??_GC_TEExplosiveGunshotDecal@@UAEPAXI@Z
// END FUNCTION
