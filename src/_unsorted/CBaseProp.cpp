// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1004fc90 size=0x3
#include "CBaseProp.h"
bool CBaseProp::vfunc158()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1018df70 size=0x107
#include "CBaseAnimating.h"
#include "CBaseProp.h"

extern "C" __declspec(dllimport) void __cdecl Warning(const char *pszFormat, ...);
extern char g_106b8540[];


void sub_101cd940(CBaseEntity *pEnt);

#define HV1(p) virtual void p();
#define HV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct PropProbe	// the prop as seen through its vtable: slots 92 (solid type), 220 (origin) are typed
{
	HV10(pa0) HV10(pa1) HV10(pa2) HV10(pa3) HV10(pa4) HV10(pa5) HV10(pa6) HV10(pa7) HV10(pa8)
	HV1(pb0) HV1(pb1)
	virtual int vfunc92();
	HV10(pc0) HV10(pc1) HV10(pc2) HV10(pc3) HV10(pc4) HV10(pc5) HV10(pc6) HV10(pc7) HV10(pc8) HV10(pc9) HV10(pd0) HV10(pd1)
	HV1(pe0) HV1(pe1) HV1(pe2) HV1(pe3) HV1(pe4) HV1(pe5) HV1(pe6)
	virtual float *vfunc220();
};

void CBaseProp::vfunc103()
{
	CBaseAnimating *pAnim = (CBaseAnimating *)this;
	int nUnused;
	const char *pszModel = *pAnim->vfunc9(&nUnused);
	if (!pszModel)
		pszModel = g_106b8540;
	if (*pszModel) {
		pAnim->vfunc104();
		pAnim->vfunc105(pszModel);
		pAnim->vfunc93(0, 0);
		pAnim->m_nTakeDamage = 0;
		*(int *)((char *)this + 0x17c) = 0;
		*(float *)((char *)this + 0x174) = gpGlobals->curtime;
		*(int *)((char *)this + 0x6f4) = 0;
		*(int *)((char *)this + 0x6f8) = 0;
		int nSequence = pAnim->sub_1008dc40(1, -1);
		*(int *)((char *)this + 0x6f0) = nSequence;
		if (nSequence < 0)
			*(int *)((char *)this + 0x6f0) = 0;
		pAnim->sub_100b3b00();
		int nSolid = ((PropProbe *)this)->vfunc92();
		if (nSolid > 0 && (nSolid <= 2 || nSolid == 6))
			pAnim->sub_100a9470(1);
	} else {
		Warning("prop at %.0f %.0f %0.f missing modelname\n", ((PropProbe *)this)->vfunc220()[0], ((PropProbe *)this)->vfunc220()[1], ((PropProbe *)this)->vfunc220()[2]);
		sub_101cd940(pAnim);
	}
}
// END FUNCTION

// FUNCTION: 0x1018e0d0 size=0x26
#include "CBaseProp.h"
#include "CBaseEntity.h"
#include "IVEngineServerFull.h"

extern char g_106b8540[];

void CBaseProp::vfunc104()
{
	int unused;
	const char *name = *((CBaseEntity *)this)->vfunc9(&unused);
	if (!name)
		name = g_106b8540;
	engine->vfunc13(name, 0);
}
// END FUNCTION

// FUNCTION: 0x1018e240 size=0x1e
#include "CBaseProp.h"

void sub_100aa7b0(void *p);

// TARGET: CBaseProp::vfunc5
CBaseEntity *CBaseProp::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
