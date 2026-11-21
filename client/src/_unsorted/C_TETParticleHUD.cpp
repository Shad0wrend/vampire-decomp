// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10040660 size=0x1e
#include "C_TETParticleHUD.h"

// VC6 writes C_TETParticleHUD's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TETParticleHUD *pcd_emit_10040660() { return new C_TETParticleHUD; }

// TARGET: ??_GC_TETParticleHUD@@UAEPAXI@Z
// END FUNCTION
