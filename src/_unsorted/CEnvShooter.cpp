// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100f5880 size=0x10f
#include "CEnvShooter.h"
#include "CGib.h"
#include "CUnknown100f5600.h"
#include "ScopeTrace.h"

struct S100f5880Rand
{
	virtual void v0();
	virtual void v1();
	virtual int RandomInt(int lo, int hi);
};

struct S100f5880Gib
{
	char m_pad0000[0x168];
	int m_n168;
	int m_n16c;
	char m_pad0170[0x1a0 - 0x170];
	int m_n1a0;
	char m_pad01a4[0x670 - 0x1a4];
	int m_n670;
	char m_pad0674[0x67c - 0x674];
	int m_nBody;
	int m_n680;
	int m_n684;
	char m_pad0688[0x730 - 0x688];
	int m_n730;
	char m_pad0734[4];
	int m_n738;
	float m_flLife73c;
};

extern S100f5880Rand *g_1070b244;
extern struct S100f5880Globals { char m_pad[0xc]; float curtime; } *g_1070b228;
extern char g_10538764[];
extern char g_10566074[];
extern "C" void *__cdecl __RTDynamicCast(void *pObject, long vfDelta, void *pSrcType, void *pTargetType, int isReference);
CBaseEntity *sub_10136580(const char *pszName);
CUnknown100f5600 *sub_100f54c0(CGib *pGib);
__declspec(dllimport) void Warning(const char *fmt, ...);

CGib *CEnvShooter::vfunc241()
{
	CGib *pGib = (CGib *)__RTDynamicCast(sub_10136580("gib"), 0, g_10538764, g_10566074, 0);
	if (!pGib)
		Warning("classname %s used to create wrong class type\n");
	int unused;
	const char *pszModel = *((CBaseEntity *)this)->vfunc9(&unused);
	if (!pszModel)
		pszModel = g_106b8540;
	pGib->sub_1012b080(pszModel);
	S100f5880Gib *pView = (S100f5880Gib *)pGib;
	int nBody = 0;
	if (m_nBodies470 > 1)
		nBody = g_1070b244->RandomInt(0, m_nBodies470 - 1);
	pView->m_nBody = nBody;
	pView->m_n730 = -1;
	pView->m_n738 = m_n458;
	pView->m_n16c = m_n16c;
	pView->m_n1a0 = m_n1a0;
	pView->m_n168 = m_n168;
	pView->m_n684 = m_n47c;
	pView->m_n670 = m_n478;
	pView->m_flLife73c = m_flLife468 + g_1070b228->curtime;
	if (m_flags204 & 2) {
		CUnknown100f5600 *pFlame = sub_100f54c0(pGib);
		if (pFlame)
			pFlame->sub_100f5600(pView->m_flLife73c);
	}
	return pGib;
}
// END FUNCTION

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
