// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e4d80 size=0x24
#include "CExplosionParticle.h"
float CExplosionParticle::vfunc8(PartT *p, float dt) { float t = 1.0f - p->m_fl2c / p->m_fl28; if (t < 0.75f) t = t * t; return t; }
// END FUNCTION

// FUNCTION: 0x100e4e30 size=0x1e
#include "CExplosionParticle.h"

// VC6 writes CExplosionParticle's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CExplosionParticle *pcd_emit_100e4e30(const CExplosionParticle &other) { return new CExplosionParticle(other); }

// TARGET: ??_GCExplosionParticle@@UAEPAXI@Z
// END FUNCTION
