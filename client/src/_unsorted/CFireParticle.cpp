// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10118ab0 size=0x1e
#include "CFireParticle.h"

// VC6 writes CFireParticle's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CFireParticle *pcd_emit_10118ab0(const CFireParticle &other) { return new CFireParticle(other); }

// TARGET: ??_GCFireParticle@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10118b20 size=0x1b
#include "CFireParticle.h"
#include "Vector.h"

Vector CFireParticle::vfunc12(const SimpleParticleC_t *p, float unused)
{
	return CSimpleEmitter::vfunc12(p, unused);
}
// END FUNCTION
