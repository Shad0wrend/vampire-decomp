// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100574e0 size=0x1e
#include "CFireSmoke.h"

void sub_100aa7b0(void *p);

// TARGET: CFireSmoke::vfunc5
CFireSmoke *CFireSmoke::vfunc5(unsigned int flags)
{
	sub_1000eff7();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10057570 size=0x13
struct IEnginePrecache {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12();
	virtual int PrecacheModel(const char *name, int preload);
};
extern IEnginePrecache *g_1070b22c;

void CFireSmoke::sub_10057570()
{
	g_1070b22c->PrecacheModel("sprites/fire1.vmt", 0);
}
// END FUNCTION
