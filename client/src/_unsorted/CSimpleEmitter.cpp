// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10118130 size=0x1e
#include "CSimpleEmitter.h"

// VC6 writes CSimpleEmitter's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CSimpleEmitter *pcd_emit_10118130() { return new CSimpleEmitter; }

// TARGET: ??_GCSimpleEmitter@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10118240 size=0x39
#include "CSimpleEmitter.h"
struct SimpleParticle8 {
    char m_unk00[0x28];
    float m_flDieTime;
    float m_flLifetime;
    char m_unk30[3];
    unsigned char m_uchStartAlpha;
    unsigned char m_uchEndAlpha;
};
// TARGET: CSimpleEmitter::vfunc8
float CSimpleEmitter::vfunc8(SimpleParticle8 *p, int unused)
{
    float t = p->m_flLifetime / p->m_flDieTime;
    float s = (float)p->m_uchStartAlpha * (1.0f / 255.0f);
    float e = (float)p->m_uchEndAlpha * (1.0f / 255.0f);
    return s + (e - s) * t;
}
// END FUNCTION

// FUNCTION: 0x10118280 size=0x2d
#include "CSimpleEmitter.h"
struct XSP { char u0[0x28]; float m_flDieTime; float m_flLifetime; char u1[5]; unsigned char m_a; unsigned char m_b; };
// TARGET: CSimpleEmitter::vfunc9
float CSimpleEmitter::vfunc9(XSP *p, int unused)
{
	float t = p->m_flLifetime / p->m_flDieTime;
	return (float)p->m_a + ((float)p->m_b - (float)p->m_a) * t;
}
// END FUNCTION

// FUNCTION: 0x10118360 size=0x14
#include "CSimpleEmitter.h"
float CSimpleEmitter::vfunc10(SimpleParticleAux_t *p, float dt)
{
	return p->m_fl24 += dt * p->m_fl38;
}
// END FUNCTION
