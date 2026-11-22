// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 31 blocks
#include "vampire.h"

// FUNCTION: 0x100f45c0 size=0x6
#include "datamap.h"
#include "CGibShooter.h"
namespace lifted {
extern char g_10565940;
}
datamap_t *CGibShooter::vfunc82()
{
    return (datamap_t *)&lifted::g_10565940;
}
// END FUNCTION

// FUNCTION: 0x100f45e0 size=0x5
int sub_100f4620(void);
int g_106eb418 = ((int (*)(int))sub_100f4620)(0);
// END FUNCTION

// FUNCTION: 0x100f4620 size=0x1a
namespace lifted {
extern int g_10565940;
extern int g_10565944;
extern char g_10565984;
}
int sub_100f4620()
{
    lifted::g_10565944 = 0xc;
    lifted::g_10565940 = (int)&lifted::g_10565984;
    return (int)&lifted::g_10565940;
}
// END FUNCTION

// FUNCTION: 0x100f4650 size=0x4b
#include "platform.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_1045505c[];	// CGibShooter vftable
extern const char g_10566024[];

// TARGET: gibshooter
DLL_EXPORT CBaseEntity *gibshooter()
{
	void *mem = sub_100aa720(0x478);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_1045505c;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_10566024);
	return p;
}
// END FUNCTION

// FUNCTION: 0x100f46c0 size=0x5
#include "CGibShooter.h"
int CGibShooter::vfunc242(int a0, int a1, int a2, int a3, int a4, int a5)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100f46e0 size=0x39
#include "CGibShooter.h"

extern int g_1070ba34;
extern char g_10566034[];
extern char g_10541fc4[];

// TARGET: ?vfunc104@CGibShooter@@QAEXXZ
void CGibShooter::vfunc104()
{
    if (g_1070ba34 == 1) {
        m_nGibModel45c = engine->vfunc13(g_10566034, 0);
    } else {
        m_nGibModel45c = engine->vfunc13(g_10541fc4, 0);
    }
}
// END FUNCTION

// FUNCTION: 0x100f4730 size=0x23
#include "CGibShooter.h"
struct globalvars_t { int pad[3]; int curtime; };
extern globalvars_t *g_1070b228;
void CGibShooter::sub_100f4730(int a, int b, int c, int d)
{
	sub_100ac4e0(&CGibShooter::sub_1000913d, 0, 0);
	m_nNextThink = g_1070b228->curtime;
}
// END FUNCTION

// FUNCTION: 0x100f4770 size=0x23
#include "globalvars.h"
struct CThinkCall_100f4770
{
    void sub_100ac4e0(void *fn, int a, int b);
};
void sub_1000913d();

// TARGET: sub_100f4770
void __fastcall sub_100f4770(char *self, int dummy, int arg)
{
    ((CThinkCall_100f4770 *)self)->sub_100ac4e0((void *)sub_1000913d, 0, 0);
    *(float *)(self + 0x17c) = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x100f47b0 size=0xf2
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CGibShooter.h"
#include "ScopeTrace.h"


struct CCollisionObj { void sub_1000428c(int solid); };

struct CGibShooterFields
{
	char m_pad0000[0x19c];
	unsigned int m_nFlags;	// 0x19c
	char m_pad01a0[0x26c - 0x1a0];
	const char *m_name26c;
	char m_pad0270[0x450 - 0x270];
	int m_n450;
	int m_n454;
	char m_pad0458[4];
	int m_n45c;
	char m_pad0460[8];
	float m_f468;
	int m_n46c;
	int m_n470;
	float m_f474;
};

void CGibShooter::vfunc103()
{
	((CBaseEntity *)this)->vfunc104();
	CGibShooterFields *f = (CGibShooterFields *)this;
	{
		ScopeTrace t("CBaseEntity::SetSolid", f->m_name26c ? f->m_name26c : g_106b8540);
		((CCollisionObj *)((char *)this + 0x270))->sub_1000428c(0);
	}
	f->m_nFlags |= 0x40;
	if (f->m_f474 == 0.0f)
		*(int *)&f->m_f474 = 0x3a83126f;
	if (f->m_f468 == 0.0f)
		*(int *)&f->m_f468 = 0x41c80000;
	f->m_n454 = f->m_n450;
	f->m_n470 = engine->vfunc26(f->m_n45c);
	sub_100b3b00();
}
// END FUNCTION

// FUNCTION: 0x100f48f0 size=0xbe
#include "CGibShooter.h"
#include "CGib.h"

struct CGibCvar { virtual void v0(); virtual bool vfunc1(); char m_pad[0x28]; int m_nValue; };
struct CGibCvarRef { char m_pad[4]; CGibCvar *m_pCvar; };
struct CGibCvarMgr { virtual void v0(); virtual void v1(); virtual CGibCvarRef *vfunc2(const char *name); };
struct CGibEngine { virtual void v0(); virtual void v1(); virtual int vfunc2(int a, int b); };

extern CGibCvarMgr *g_1070b234;
extern CGibEngine *g_1070b244;
extern void (__cdecl *g_109f362c)(const char *fmt, ...);
extern void (__cdecl *g_109f3658)(int level, const char *fmt, ...);
extern char g_10538764[];
extern char g_10566074[];
extern "C" void *__cdecl __RTDynamicCast(void *inptr, long vfdelta, void *srcType, void *targetType, int isReference);
CBaseEntity *sub_10002e32(const char *classname);

CGib *CGibShooter::vfunc241()
{
	CGibCvarRef *pRef = g_1070b234->vfunc2("violence_hgibs");
	if (pRef) {
		if (pRef->m_pCvar->vfunc1() || pRef->m_pCvar->m_nValue == 0)
			return 0;
	}
	CGib *pGib = (CGib *)__RTDynamicCast(sub_10002e32("gib"), 0, g_10538764, g_10566074, 0);
	if (!pGib)
		g_109f362c("classname %s used to create wrong class type\n");
	pGib->sub_1012b080("models/gibs/hgibs.mdl");
	pGib->m_n730 = 0xf7;
	if (m_nBodies <= 1)
		g_109f3658(2, "GibShooter Body is <= 1!\n");
	pGib->m_nBody = g_1070b244->vfunc2(1, m_nBodies - 1);
	return pGib;
}
// END FUNCTION

// FUNCTION: 0x100f5710 size=0x6
#include "datamap.h"
#include "CEnvShooter.h"
namespace lifted {
extern char g_10565c44;
}
datamap_t *CEnvShooter::vfunc82()
{
    return (datamap_t *)&lifted::g_10565c44;
}
// END FUNCTION

// FUNCTION: 0x100f5730 size=0x5
int sub_100f5770(void);
int g_106eb53c = ((int (*)(int))sub_100f5770)(0);
// END FUNCTION

// FUNCTION: 0x100f5770 size=0x1a
namespace lifted {
extern int g_10565c44;
extern int g_10565c48;
extern char g_10565c8c;
}
int sub_100f5770()
{
    lifted::g_10565c48 = 4;
    lifted::g_10565c44 = (int)&lifted::g_10565c8c;
    return (int)&lifted::g_10565c44;
}
// END FUNCTION

// FUNCTION: 0x100f57a0 size=0x4b
#include "platform.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_10455984[];	// CEnvShooter vftable
extern const char g_105660f0[];

// TARGET: env_shooter
DLL_EXPORT CBaseEntity *env_shooter()
{
	void *mem = sub_100aa720(0x488);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_10455984;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_105660f0);
	return p;
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
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
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
#include "CBaseEntity.h"
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

// FUNCTION: 0x100f5aa0 size=0x1e
#include "CGibShooter.h"

void sub_100aa7b0(void *p);

// TARGET: CGibShooter::vfunc5
CGibShooter *CGibShooter::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
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

// FUNCTION: 0x100fe5b0 size=0x6
#include "datamap.h"
#include "CEnvWind.h"
namespace lifted {
extern char g_105680f8;
}
datamap_t * CEnvWind::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105680f8);
}
// END FUNCTION

// FUNCTION: 0x100fe5d0 size=0x5
int sub_100fe610(void);
int g_10709098 = ((int (*)(int))sub_100fe610)(0);
// END FUNCTION

// FUNCTION: 0x100fe610 size=0x1a
namespace lifted {
extern int g_105680f8;
extern int g_105680fc;
extern char g_1056813c;
}
int sub_100fe610()
{
    lifted::g_105680fc = 4;
    lifted::g_105680f8 = (int)&lifted::g_1056813c;
    return (int)&lifted::g_105680f8;
}
// END FUNCTION

// FUNCTION: 0x100fe640 size=0x4b
#include "platform.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_10457f6c[];	// CEnvWind vftable
extern const char g_105682c8[];

// TARGET: env_wind
DLL_EXPORT CBaseEntity *env_wind()
{
	void *mem = sub_100aa720(0x460);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_10457f6c;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_105682c8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x100fe6b0 size=0x12
#include "CEnvWind.h"
void CEnvWind::vfunc113()
{
	sub_100a53d0(0);
	CBaseEntity::vfunc113();
}
// END FUNCTION

// FUNCTION: 0x100fe6e0 size=0x8
#include "CEnvWind.h"
// TARGET: CEnvWind::sub_100fe6e0
unsigned char CEnvWind::sub_100fe6e0()
{
    unsigned char b;
    b = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
    b &= 0xfd;
    return b;
}
// END FUNCTION

// FUNCTION: 0x100fe700 size=0x3
#include "CEnvWind.h"
void CEnvWind::vfunc241(int a0, int a1, int a2, int a3, int a4)
{
}
// END FUNCTION

// FUNCTION: 0x100fe720 size=0x3
#include "CEnvWind.h"
void CEnvWind::vfunc141(class CVDmg_t *a0, const Vector *a1, struct CGameTrace *a2)
{
}
// END FUNCTION

// FUNCTION: 0x100fe740 size=0x208
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CEnvWind.h"
#include "CCollisionProperty.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"

#define ENVWIND_COL ((CCollisionProperty *)((char *)this + 0x270))

void CEnvWind::vfunc103()
{
	CBaseEntity::vfunc103();
	CGlobalEntityList_Ent *pTarget = EHandle_Get(m_hTouch254);
	{
		ScopeTrace trace("CBaseEntity::SetSolid", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
		ENVWIND_COL->sub_100dc480(pTarget ? 6 : 1);
	}
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
		ENVWIND_COL->AddSolidFlags(4);
	}
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
		ENVWIND_COL->AddSolidFlags(8);
	}
	vfunc93(0, 0);
	int tmp;
	const char *pszModel = *vfunc9(&tmp);
	vfunc105(pszModel ? pszModel : g_106b8540);
	m_nEffectFlags |= 0x40;
}
// END FUNCTION

// FUNCTION: 0x100fe9e0 size=0x52
#include "CBaseAnimating.h"
#include "CEnvWind.h"
// TARGET: CEnvWind::vfunc174
void CEnvWind::vfunc174(CBaseEntity *pOther)
{
	CBaseEntity::vfunc174(pOther);
	CBaseAnimating *pAnimating = dynamic_cast<CBaseAnimating *>(pOther);
	if (pAnimating)
	{
		const int *p = (const int *)((char *)this + 0x450);
		pAnimating->sub_1008e480(this, p[0], p[1], p[2], p[3]);
	}
}
// END FUNCTION

// FUNCTION: 0x100fea60 size=0x36
#include "CBaseAnimating.h"

extern char g_10538764;
extern char g_1053dd10;
void *sub_10430b64(void *pObject, int vfDelta, void *pSrcType, void *pDstType, int bReference);

struct CUnknown100fea60
{
	void sub_100fea60(CBaseEntity *pOther);
};

// TARGET: CUnknown100fea60::sub_100fea60
void CUnknown100fea60::sub_100fea60(CBaseEntity *pOther)
{
	((CBaseEntity *)this)->CBaseEntity::vfunc176(pOther);
	CBaseAnimating *pAnim = (CBaseAnimating *)sub_10430b64(pOther, 0, &g_10538764, &g_1053dd10, 0);
	if (pAnim != 0)
	{
		pAnim->sub_1008e630((CBaseEntity *)this);
	}
}
// END FUNCTION

// FUNCTION: 0x100feab0 size=0x1e
#include "CEnvWind.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvWind::vfunc5
CBaseEntity *CEnvWind::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
