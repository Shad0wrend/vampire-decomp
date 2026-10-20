// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100f59e0 size=0x90
#include "CEnvShooter.h"
#include "CEntityVSlots.h"

CEntityVSlots *sub_100a9ab0(const char *pszClassname, const float *pOrigin, const float *pAngles, CEntityVSlots *pOwner);
extern char g_10566100[];	// "prop_physics"

struct CShooterSlots
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4();
	virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8();
	virtual int *slot9(int *pOut);
};

struct CShooterProp : CEntityVSlots
{
	void sub_1018f9f0(float flScale);
};

class CShooterRandom
{
public:
	virtual void v0();
	virtual double RandomFloat(float flMin, float flMax);
};
extern CShooterRandom *g_1070b244;

CBaseEntity *CEnvShooter::vfunc242(Vector origin, Vector angles)
{
	union { int model; float flScale; } u;
	CShooterProp *pGib = (CShooterProp *)sub_100a9ab0(g_10566100, &origin.x, &angles.x, 0);
	pGib->slot212(*((CShooterSlots *)this)->slot9(&u.model));
	*(int *)((char *)pGib + 0x670) = *(int *)((char *)this + 0x478);
	pGib->slot103();
	*(unsigned int *)((char *)pGib + 0x19c) |= 0xa0;
	u.flScale = (float)(g_1070b244->RandomFloat(0.95f, 1.05f) * *(float *)((char *)this + 0x468));
	pGib->sub_1018f9f0(u.flScale);
	return (CBaseEntity *)pGib;
}
// END FUNCTION

// FUNCTION: 0x100f5ad0 size=0x1e
#include "CEnvShooter.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvShooter::vfunc5
CEnvShooter *CEnvShooter::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
