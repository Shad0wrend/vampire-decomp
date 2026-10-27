// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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

// FUNCTION: 0x101ee710 size=0x1
void CVampireProjectile::vfunc268()
{
}
// END FUNCTION

// FUNCTION: 0x101ee750 size=0xb
struct S168 { char pad[0x168]; int v; };
bool CVampireProjectile::vfunc265()
{
	bool r = ((S168 *)this)->v == 5;
	return r;
}
// END FUNCTION

// FUNCTION: 0x101eec10 size=0x1
void CVampireProjectile::vfunc269()
{
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
