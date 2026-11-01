// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100f5710 size=0x6
#include "CEnvShooter.h"
namespace lifted {
extern char g_10565c44;
}
datamap_t *CEnvShooter::vfunc82()
{
    return (datamap_t *)&lifted::g_10565c44;
}
// END FUNCTION

// FUNCTION: 0x100f5810 size=0x48
#include "CEnvShooter.h"
#include "CGibShooter.h"
#include "CBaseEntity.h"
#include "engineserver.h"

struct CEnvShooterSlots
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4();
	virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8();
	virtual const char **s9(int *pOut);
	virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14();
	virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19();
	virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24();
	virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29();
	virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34();
	virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39();
	virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44();
	virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49();
	virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54();
	virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59();
	virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64();
	virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69();
	virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74();
	virtual void s75(); virtual void s76(); virtual void s77(); virtual void s78(); virtual void s79();
	virtual void s80(); virtual void s81(); virtual void s82(); virtual void s83(); virtual void s84();
	virtual void s85(); virtual void s86(); virtual void s87(); virtual void s88(); virtual void s89();
	virtual void s90(); virtual void s91(); virtual void s92(); virtual void s93(); virtual void s94();
	virtual void s95(); virtual void s96(); virtual void s97(); virtual void s98(); virtual void s99();
	virtual void s100(); virtual void s101(); virtual void s102(); virtual void s103(); virtual void s104();
	virtual void s105(); virtual void s106(); virtual void s107(); virtual void s108(); virtual void s109();
	virtual void s110(); virtual void s111(); virtual void s112(); virtual void s113(); virtual void s114();
	virtual void s115(); virtual void s116(); virtual void s117(); virtual void s118(); virtual void s119();
	virtual void s120(); virtual void s121(); virtual void s122(); virtual void s123(); virtual void s124();
	virtual void s125(); virtual void s126(); virtual void s127(); virtual void s128(); virtual void s129();
	virtual void s130(); virtual void s131(); virtual void s132(); virtual void s133(); virtual void s134();
	virtual void s135(); virtual void s136(); virtual void s137(); virtual void s138(); virtual void s139();
	virtual void s140(); virtual void s141(); virtual void s142(); virtual void s143(); virtual void s144();
	virtual void s145(); virtual void s146(); virtual void s147(); virtual void s148(); virtual void s149();
	virtual void s150(); virtual void s151(); virtual void s152(); virtual void s153(); virtual void s154();
	virtual void s155(); virtual void s156(); virtual void s157(); virtual void s158(); virtual void s159();
	virtual void s160(); virtual void s161(); virtual void s162(); virtual void s163(); virtual void s164();
	virtual void s165(); virtual void s166(); virtual void s167(); virtual void s168(); virtual void s169();
	virtual void s170(); virtual void s171(); virtual void s172(); virtual void s173(); virtual void s174();
	virtual void s175(); virtual void s176(); virtual void s177(); virtual void s178(); virtual void s179();
	virtual void s180(); virtual void s181(); virtual void s182(); virtual void s183(); virtual void s184();
	virtual void s185(); virtual void s186(); virtual void s187(); virtual void s188(); virtual void s189();
	virtual void s190(); virtual void s191(); virtual void s192(); virtual void s193(); virtual void s194();
	virtual void s195(); virtual void s196(); virtual void s197(); virtual void s198(); virtual void s199();
	virtual void s200(); virtual void s201(); virtual void s202(); virtual void s203(); virtual void s204();
	virtual void s205(); virtual void s206(); virtual void s207(); virtual void s208(); virtual void s209();
	virtual void s210(); virtual void s211();
	virtual void s212(int a);
};

// TARGET: CEnvShooter::vfunc104
void CEnvShooter::vfunc104()
{
	((CGibShooter *)this)->vfunc104();
	CEnvShooterSlots *pThis = (CEnvShooterSlots *)this;
	pThis->s212(*(int *)((char *)this + 0x480));
	int n;
	const char *name = *pThis->s9(&n);
	if (!name)
		name = "";
	*(int *)((char *)this + 0x45c) = engine->vfunc13(name, 0);
}
// END FUNCTION

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
