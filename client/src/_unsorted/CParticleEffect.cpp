// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10117f60 size=0x1e
#include "CParticleEffect.h"

// VC6 writes CParticleEffect's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CParticleEffect *pcd_emit_10117f60() { return new CParticleEffect; }

// TARGET: ??_GCParticleEffect@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10118060 size=0x3
// TARGET: sub_10118060
void __stdcall sub_10118060(int)
{
}
// END FUNCTION
