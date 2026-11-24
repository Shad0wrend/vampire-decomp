// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e53a0 size=0x1
#include "C_BaseExplosionEffect.h"
void C_BaseExplosionEffect::vfunc4()
{
}
// END FUNCTION

// FUNCTION: 0x100e53b0 size=0x7d
#include "C_BaseExplosionEffect.h"
#include "ConVar.h"
#include "Vector.h"

struct dlight_t_100e53b0
{
	int flags;
	Vector origin;
	float radius;
	unsigned char r, g, b, exponent;
	float die;
	float decay;
};

struct IVEfx_100e53b0
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual dlight_t_100e53b0 *CL_AllocDlight(int key);
};

struct IVEngineClient_100e53b0
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
	virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
	virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
	virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
	virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
	virtual void v36(); virtual void v37(); virtual void v38();
	virtual double Time(int);
};

struct C_BaseExplosionEffect_Helper_100e53b0
{
	void *vtable;
	Vector m_vecOrigin;  // 0x04
	char pad_10[0x10];
	int m_fFlags;        // 0x20
};

extern ConVar *g_105fb29c;
extern IVEfx_100e53b0 *g_104a57dc;
extern IVEngineClient_100e53b0 *g_104a57d4;

void C_BaseExplosionEffect::vfunc5()
{
	C_BaseExplosionEffect_Helper_100e53b0 *pSelf = (C_BaseExplosionEffect_Helper_100e53b0 *)this;
	if (pSelf->m_fFlags & 2)
		return;

	if (g_105fb29c->vfunc1() || !g_105fb29c->m_nValue)
		return;

	dlight_t_100e53b0 *dl = g_104a57dc->CL_AllocDlight(0);
	dl->origin = pSelf->m_vecOrigin;
	dl->decay = 200.0f;
	dl->radius = 255.0f;
	dl->r = 255;
	dl->g = 220;
	dl->b = 128;
	dl->die = (float)(g_104a57d4->Time(0) + 0.1f);
}
// END FUNCTION
