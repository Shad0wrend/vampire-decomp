// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10118130 size=0x1e
#include "CSimpleEmitter.h"

// VC6 writes CSimpleEmitter's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CSimpleEmitter *pcd_emit_10118130(const CSimpleEmitter &other) { return new CSimpleEmitter(other); }

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

// FUNCTION: 0x101182b0 size=0xa4
#include "Vector.h"

struct IEngineView39
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual void v4();
	virtual void v5();
	virtual void v6();
	virtual void v7();
	virtual void v8();
	virtual void v9();
	virtual void v10();
	virtual void v11();
	virtual void v12();
	virtual void v13();
	virtual void v14();
	virtual void v15();
	virtual void v16();
	virtual void v17();
	virtual void v18();
	virtual void v19();
	virtual void v20();
	virtual void v21();
	virtual void v22();
	virtual void v23();
	virtual void v24();
	virtual void v25();
	virtual void v26();
	virtual void v27();
	virtual void v28();
	virtual void v29();
	virtual void v30();
	virtual void v31();
	virtual void v32();
	virtual void v33();
	virtual void v34();
	virtual void v35();
	virtual void v36();
	virtual void v37();
	virtual void v38();
	virtual float v39(int);
};

extern void *g_104a57d4;

struct ParticleV
{
	char pad[0x18];
	volatile float m_vel[3];
	char pad2[0x37 - 0x24];
	unsigned char m_flags37;
};

void sub_100e2fc0(float f, Vector *v);

// TARGET: sub_101182b0
void __stdcall sub_101182b0(ParticleV *p, float dt)
{
	if (!(p->m_flags37 & 1))
		return;
	Vector normal;
	sub_100e2fc0(((IEngineView39 *)g_104a57d4)->v39(0), &normal);
	for (int i = 0; i < 2; i++)
	{
		if (p->m_vel[i] < normal[i])
		{
			p->m_vel[i] = p->m_vel[i] + dt * 50.0f;
			if (p->m_vel[i] > normal[i])
				p->m_vel[i] = normal[i];
		}
		else if (p->m_vel[i] > normal[i])
		{
			*(float *)&p->m_vel[i] = *(float *)&p->m_vel[i] - dt * 50.0f;
			if (p->m_vel[i] < normal[i])
				p->m_vel[i] = normal[i];
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10118360 size=0x14
#include "CSimpleEmitter.h"
float CSimpleEmitter::vfunc10(SimpleParticleAux_t *p, float dt)
{
	return p->m_fl24 += dt * p->m_fl38;
}
// END FUNCTION

// FUNCTION: 0x10118380 size=0x95
#include "CSimpleEmitter.h"
#include "Vector.h"

struct VD_10118380 : public Vector {
	~VD_10118380() {}
};

Vector CSimpleEmitter::vfunc12(const SimpleParticleC_t *p, float unused)
{
	static VD_10118380 cColor;
	cColor.x = p->m_uchColor[0] / 255.0f;
	cColor.y = p->m_uchColor[1] / 255.0f;
	cColor.z = p->m_uchColor[2] / 255.0f;
	return cColor;
}
// END FUNCTION
