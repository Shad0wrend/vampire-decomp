// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10117f60 size=0x1e
#include "CParticleEffect.h"

// VC6 writes CParticleEffect's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CParticleEffect *pcd_emit_10117f60() { return new CParticleEffect; }

// TARGET: ??_GCParticleEffect@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10117f80 size=0x20
#include "CParticleEffect.h"
#include "CParticleEffectBinding.h"
extern void *vt_101e5584[];
CParticleEffect::~CParticleEffect()
{
	m_unk68 = 0;
	CParticleEffectBinding *b = (CParticleEffectBinding *)&m_unk08;
	b->~CParticleEffectBinding();
	*(void ***)this = vt_101e5584;
}
// END FUNCTION

// FUNCTION: 0x10118030 size=0x2a
#include "CParticleEffect.h"
#include "CParticleEffectBinding.h"
void CParticleEffect::vfunc5(int a)
{
	CParticleEffectBinding *b = (CParticleEffectBinding *)&m_unk08;
	if (!b->sub_10116710() && sub_10117fc0())
		b->m_unk34 |= 1;
}
// END FUNCTION

// FUNCTION: 0x10118060 size=0x3
// TARGET: sub_10118060
void __stdcall sub_10118060(int)
{
}
// END FUNCTION

// FUNCTION: 0x10118070 size=0xd
struct V_10118070 { virtual void v0(char); int m_unk[0x68 / 4 - 1]; unsigned char m_f68; };
// TARGET: sub_10118070
void __fastcall sub_10118070(V_10118070 *self)
{
	if (self->m_f68 & 2)
		self->v0(1);
}
// END FUNCTION
