// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1004fbb0 size=0x26
#include "CVampireProjectile.h"

struct CKeyValueVec1004fbb0 { bool sub_1001216b(const char *key, Vector vec); };	// CBaseEntity::vfunc108 (stub 0x1001216b): the vector given by value

bool CVampireProjectile::vfunc108(const char *key, float x, float y, float z)
{
	return ((CKeyValueVec1004fbb0 *)this)->sub_1001216b(key, *(Vector *)&x);
}
// END FUNCTION

// FUNCTION: 0x10095030 size=0x202
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CVampireProjectile.h"
#include "CBaseAnimating.h"
#include "CAI_BaseNPC.h"
#include "ScopeTrace.h"
extern void sub_101cf4a0(CBaseEntity *, const char *);
extern void sub_100c7be0(void *, void *, void *, void *, void *);
extern void (*g_109f3628)(const char *, ...);

struct SStudio {
    char pad[0x18c];
    int numchains;
    int chainindex;
};

void CVampireProjectile::vfunc105(const char *pModelName)
{
    CBaseAnimating *self = (CBaseAnimating *)this;
    ScopeTrace trace("CBaseAnimating::SetModel", self ? (self->m_name26c ? self->m_name26c : g_106b8540) : g_105387dc, pModelName);
    int *d = (int *)self;
    char szOld[0x100];
    self->vfunc11(self->m_name26c ? self->m_name26c : g_106b8540);
    self->vfunc13(*(d + 0x47) ? (const char *)d[0x47] : g_106b8540);
    int oldType = self->vfunc8();
    if (*pModelName) {
        int idx = engine->vfunc20(pModelName);
        if (engine->vfunc21(idx) != 3)
            g_109f3628("Setting CBaseAnimating to non-studio model %s  (type:%i)\n", pModelName, engine->vfunc21(idx));
    }
    szOld[0] = 0;
    int *seq = (int *)self->sub_1008d990(*(0x1bc + d));
    if (seq) {
        const char *s = (const char *)seq + *seq;
        char c;
        char *o = szOld;
        do { c = *s++; *o++ = c; } while (c);
    }
    sub_101cf4a0(self, pModelName);
    if (!(!(!(self->vfunc8() != oldType)))) return; d[0x1cb] = 0;
        SStudio *studio = (SStudio *)self->sub_100952d0(-1);
        if (studio) {
            int i = 0;
            if (0 < studio->numchains) {
                int off = 0;
                do {
                    if (*(int *)(off + (char *)studio + studio->chainindex) < 0)
                        *(d + 0x1cb) |= 1 << i;
                    i++;
                    off += 0x1c;
                } while (i < studio->numchains);
            }
        }
        { int i = 0; while (2 > i) { sub_100c7be0((5 * (int)i) + (d + 0x171), self->sub_100952d0(i), 0x17b + d, self->sub_100952d0(-1), 0x185 + d); i++; } }
        if (!(szOld[0])) return; int s = self->sub_1008f7b0(szOld);
            d[0x1bc] = s;
            if (0 > s)
                ((CAI_BaseNPC *)this)->sub_10260a50(0);
            *(d + 0x67) |= 0x10;
}
// END FUNCTION

// FUNCTION: 0x101d9e50 size=0x3
#include "CVampireProjectile.h"
bool CVampireProjectile::vfunc270()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101d9e70 size=0x7
#include "CVampireProjectile.h"
namespace lifted {
extern float g_1046bac0;
}
float CVampireProjectile::vfunc271()
{
    return lifted::g_1046bac0;
}
// END FUNCTION

// FUNCTION: 0x101d9e90 size=0x7e
#include "CVampireProjectile.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_105387c4[];
extern char g_105387dc[];
extern char g_106b8540[];
typedef void (CVampireProjectile::*ThinkFn)();
void CVampireProjectile::vfunc134()
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_105387c4;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    ThinkFn fn = *(ThinkFn *)((char *)this + 0x118);
    if (fn)
        (this->*fn)();
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x101edee0 size=0x6
#include "CVampireProjectile.h"
namespace lifted {
extern char g_1073a6ac;
}
int CVampireProjectile::vfunc80()
{
    return (int)&lifted::g_1073a6ac;
}
// END FUNCTION

// FUNCTION: 0x101edf00 size=0x3
#include "CVampireProjectile.h"
int CVampireProjectile::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101ee250 size=0x6
#include "CVampireProjectile.h"
#include "datamap.h"
namespace lifted {
extern char g_105a4c58;
}
datamap_t * CVampireProjectile::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105a4c58);
}
// END FUNCTION

// FUNCTION: 0x101ee3a0 size=0x1e
#include "CVampireProjectile.h"

void sub_100aa7b0(void *p);

// TARGET: CVampireProjectile::vfunc5
CVampireProjectile *CVampireProjectile::vfunc5(unsigned int flags)
{
	sub_100085d5();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101ee3d0 size=0x1c
#include "CVampireProjectile.h"

void __fastcall sub_101fa680(char *p);
void __fastcall sub_1008b3c0(CVampireProjectile *self);

CVampireProjectile::~CVampireProjectile()
{
	sub_101fa680((char *)this + 0x834);
	sub_1008b3c0(this);
}
// END FUNCTION

// FUNCTION: 0x101ee400 size=0x26
#include "CVampireProjectile.h"
#include "CUnknown1070b22c.h"

extern CUnknown1070b22c *g_1070b22c;

// TARGET: CVampireProjectile::vfunc104
void CVampireProjectile::vfunc104()
{
	const char *s = "models/items/Pearl_of_Dubai/ground/Pearl_of_Dubai_g.mdl";
	g_1070b22c->vfunc13(s, 0);
	vfunc105(s);
}
// END FUNCTION

// FUNCTION: 0x101ee440 size=0x109
#include "CVampireProjectile.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

extern float g_1070d1b0[3];
void sub_1000e903();
struct CTouchHolderX : CBaseEntity { void sub_101e4a90(CBaseEntity *pOther); };

// TARGET: CVampireProjectile::vfunc103
void CVampireProjectile::vfunc103()
{
    vfunc104();
    {
        ScopeTrace trace("CBaseEntity::SetSolid", STRINGR(m_name26c));
        ((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(2);
    }
    sub_100adf10(g_1070d1b0, g_1070d1b0);
    vfunc93(13, 0);
    m_nEffectFlags |= 0xa0;
    m_fl884 = gpGlobals->curtime;
    m_pfnTouch = (void (CBaseEntity::*)(CBaseEntity *))&CTouchHolderX::sub_101e4a90;
    const char *pszModel = STRINGR(m_pszModel87c);
    if (*pszModel)
        vfunc105(pszModel);
    sub_100ac4e0((int)sub_1000e903, 0, 0);
    m_flNextThink = gpGlobals->curtime + 0.03;
}
// END FUNCTION

// FUNCTION: 0x101ee710 size=0x1
#include "CVampireProjectile.h"
void CVampireProjectile::vfunc268()
{
}
// END FUNCTION

// FUNCTION: 0x101ee750 size=0xb
#include "CVampireProjectile.h"
struct S168 { char pad[0x168]; int v; };
bool CVampireProjectile::vfunc265()
{
	bool r = ((S168 *)this)->v == 5;
	return r;
}
// END FUNCTION

// FUNCTION: 0x101ee7b0 size=0xd
#include "CBaseAnimating.h"
#include "CVampireProjectile.h"
void CVampireProjectile::vfunc130(int a)
{
	volatile int *p = &a;
	*p = *p;
	((CBaseAnimating *)this)->CBaseAnimating::vfunc130(a);
}
// END FUNCTION

// FUNCTION: 0x101eec10 size=0x1
#include "CVampireProjectile.h"
void CVampireProjectile::vfunc269()
{
}
// END FUNCTION

// FUNCTION: 0x101ef350 size=0x58
#include "CVampireProjectile.h"

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

struct CEntView332
{
	V100(a) V100(b) V100(c) V10(d) V10(e) V10(f)
	virtual void g0();
	virtual void g1();
	virtual void vfunc332(int a);
};

// TARGET: CVampireProjectile::vfunc267
void CVampireProjectile::vfunc267(int a)
{
	sub_101ef3d0();
	EHANDLE &h = *(EHANDLE *)((char *)this + 0x778);
	CBaseEntity *pEnt = h.Get();
	if (pEnt)
		((CEntView332 *)pEnt)->vfunc332(a);
	if (*((char *)this + 0x7a4))
		sub_101efcf0();
}
// END FUNCTION

// FUNCTION: 0x101efa30 size=0x120
#include "CVampireProjectile.h"
#include "CEntityVSlots.h"

void sub_101cf5c0(CBaseEntity *pEnt, const Vector *pOrigin, int a);
void sub_10139970(const Vector *forward, Vector *angles);

struct ProjLaunchView
{
    char pad0000[0x6f0];
    int m_nSequence;	// 0x6f0
    char pad06f4[0x878 - 0x6f4];
    int m_nDamage878;	// 0x878
    const char *m_pszModel87c;	// 0x87c
    const char *m_pszSound880;	// 0x880
    char pad0884[4];
    Vector m_vecStart888;	// 0x888
    Vector m_vecDir894;	// 0x894
    float m_flSpeed8a0;	// 0x8a0

    void sub_10090950();	// CBaseAnimating::ResetSequenceInfo (stub 0x100117b1)
    void sub_100963d0();	// CBaseAnimating member (stub 0x100024b9)
};

// TARGET: CVampireProjectile::vfunc272
void CVampireProjectile::vfunc272(const Vector *pOrigin, const Vector *pDir, CBaseEntity *pOwner, int nDamage, float flSpeed, const char *pszModel, const char *pszSound)
{
    ProjLaunchView *p = (ProjLaunchView *)this;
    sub_101cf5c0(this, pOrigin, 0);
    p->m_nDamage878 = nDamage;
    p->m_flSpeed8a0 = flSpeed;
    p->m_pszModel87c = *pszModel ? pszModel : 0;
    p->m_pszSound880 = *pszSound ? pszSound : 0;
    Vector vecAngles;
    sub_10139970(pDir, &vecAngles);
    vfunc64(&vecAngles.x);
    ((CEntityVSlots *)this)->slot202((CEntityVSlots *)pOwner);
    vfunc103();
    Vector vecVelocity = flSpeed * *pDir;
    sub_100b2e30(&vecVelocity.x);
    p->m_vecStart888 = *pOrigin;
    p->m_vecDir894 = *pDir;
    p->m_nSequence = 0;
    p->sub_10090950();
    p->sub_100963d0();
}
// END FUNCTION

// FUNCTION: 0x101efba0 size=0x1e
#include "CVampireProjectile.h"

struct VProjView91
{
	char pad[0x758];
	unsigned char m_b758;
	char pad2[0x8a4 - 0x759];
	unsigned char m_b8a4;
};

char CVampireProjectile::vfunc91(void *pPassEnt, int contentsMask)
{
	VProjView91 *p = (VProjView91 *)this;
	if (p->m_b758 || p->m_b8a4)
		return 0;
	return CBaseEntity::vfunc91(pPassEnt, contentsMask);
}
// END FUNCTION
