// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101189d0 size=0x1e
#include "CFireSmokeEffect.h"

// VC6 writes CFireSmokeEffect's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CFireSmokeEffect *pcd_emit_101189d0(const CFireSmokeEffect &other) { return new CFireSmokeEffect(other); }

// TARGET: ??_GCFireSmokeEffect@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10118a50 size=0x2a
#include "CFireSmokeEffect.h"
extern "C" double sin(double);
#pragma intrinsic(sin)
struct FireSmokeParticle_10118a50 {
	char m_unk00[0x28];
	float m_flDieTime;
	float m_flLife;
	char m_unk30[3];
	unsigned char m_uchAlpha;
};
// TARGET: CFireSmokeEffect::vfunc8
float CFireSmokeEffect::vfunc8(FireSmokeParticle_10118a50 *p, float dt)
{
	return (float)sin(p->m_flLife / p->m_flDieTime * 3.141592653589793) * ((float)p->m_uchAlpha * 0.003921569f);
}
// END FUNCTION

// FUNCTION: 0x10118a80 size=0x3
#include "CFireSmokeEffect.h"
void CFireSmokeEffect::vfunc11(int a0, int a1)
{
}
// END FUNCTION
