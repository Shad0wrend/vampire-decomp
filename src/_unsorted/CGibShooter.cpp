// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100f45c0 size=0x6
#include "CGibShooter.h"
namespace lifted {
extern char g_10565940;
}
datamap_t *CGibShooter::vfunc82()
{
    return (datamap_t *)&lifted::g_10565940;
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

// FUNCTION: 0x100f47b0 size=0xf2
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
