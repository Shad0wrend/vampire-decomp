// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10117340 size=0x1e
#include "CParticleMgr.h"

// VC6 writes CParticleMgr's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CParticleMgr *pcd_emit_10117340() { return new CParticleMgr; }

// TARGET: ??_GCParticleMgr@@UAEPAXI@Z
// END FUNCTION
