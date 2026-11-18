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

// FUNCTION: 0x100956e0 size=0x284
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CVampireProjectile.h"
#include "ScopeTrace.h"
#define MB_V(n) virtual void v##n();
#define MB_V10(p) MB_V(p##0) MB_V(p##1) MB_V(p##2) MB_V(p##3) MB_V(p##4) MB_V(p##5) MB_V(p##6) MB_V(p##7) MB_V(p##8) MB_V(p##9)

struct CAnimTestView
{
	MB_V10(0) MB_V10(1) MB_V10(2) MB_V10(3) MB_V10(4) MB_V10(5) MB_V10(6) MB_V10(7) MB_V10(8) MB_V10(9)
	virtual bool v100(int pRay, int mask, int pTrace);
};

struct TestRay { char pad[0x30]; bool m_IsRay; };
struct TestTrace
{
	char pad[0x2c]; float fraction; char pad30[6]; bool allsolid; bool startsolid;
	bool DidHit() const { return fraction < 1.0f || allsolid || startsolid; }
};

__declspec(dllimport) void Warning(const char *fmt, ...);
extern "C" __declspec(dllimport) void DevMsg(int level, const char *fmt, ...);

#define ENT_NAME (this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc)

struct CSolidFlagView : CVampireProjectile
{
	bool IsSolidFlagSet(int flagMask)
	{
		ScopeTrace t("CBaseEntity::IsSolidFlagSet", ENT_NAME, g_106b8540);
		return (m_b2b4 & flagMask) != 0;
	}
};

bool CVampireProjectile::vfunc99(int pRay, int mask, int pTrace)
{
	ScopeTrace trace("CBaseAnimating::TestCollision", ENT_NAME, g_106b8540);
	const TestRay &ray = *(TestRay *)pRay;
	if (ray.m_IsRay && ((CSolidFlagView *)this)->IsSolidFlagSet(1))
	{
		TestTrace &tr = *(TestTrace *)pTrace;
		if (!((CAnimTestView *)this)->v100(pRay, mask, pTrace))
			return true;
		return tr.DidHit();
	}
	if (!ray.m_IsRay && ((CSolidFlagView *)this)->IsSolidFlagSet(2))
	{
		TestTrace &tr = *(TestTrace *)pTrace;
		if (!((CAnimTestView *)this)->v100(pRay, mask, pTrace))
			return true;
		return tr.DidHit();
	}
	if (vfunc92() == 6) {
		const char *pName = *vfunc9((int *)&pTrace);
		if (!pName)
			pName = g_106b8540;
		Warning("CBaseAnimating::TestCollision() error on %s with model %s. Make sure it has a .phy file!!!\n", sub_1000b5cd(), pName);
		return false;
	}
	const char *pName = *vfunc9((int *)&pTrace);
	if (!pName)
		pName = g_106b8540;
	DevMsg(1, "CBaseAnimating::TestCollision() error on %s with model %s.\n", sub_1000b5cd(), pName);
	return false;
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
CBaseEntity *CVampireProjectile::vfunc5(unsigned int flags)
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

// FUNCTION: 0x101ee730 size=0x5
#include "CVampireProjectile.h"
#include "CBaseEntity.h"

// TARGET: CVampireProjectile::vfunc113
// the game's 0x101ee730: a tail call (jmp) of CBaseEntity::vfunc113
void CVampireProjectile::vfunc113()
{
	CBaseEntity::vfunc113();
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

// FUNCTION: 0x101ee770 size=0x5
#include "CVampireProjectile.h"
#include "CBaseEntity.h"

// TARGET: CVampireProjectile::vfunc126
// the game's 0x101ee770: a tail call (jmp) of CBaseEntity::vfunc126
int CVampireProjectile::vfunc126(int a0)
{
	return CBaseEntity::vfunc126(a0);
}
// END FUNCTION

// FUNCTION: 0x101ee790 size=0x5
#include "CVampireProjectile.h"
#include "CBaseEntity.h"

// TARGET: CVampireProjectile::vfunc127
// the game's 0x101ee790: a tail call (jmp) of CBaseEntity::vfunc127
int CVampireProjectile::vfunc127(int a0)
{
	return CBaseEntity::vfunc127(a0);
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

// FUNCTION: 0x101ee850 size=0x2f9
#include "CVampireProjectile.h"
#include "CEntityVSlots.h"

void sub_10139500(const float *start, float scale, const float *direction, float *dest);

// TARGET: CVampireProjectile::vfunc238
void CVampireProjectile::vfunc238(Vector *pVelocity, Vector *pOut, int a, int b)
{
	float flTime = gpGlobals->curtime + gpGlobals->frametime;

	if (m_fl738 != 0.0f)
	{
		if (flTime > m_fl738 - 5.0f && m_n168 != 5)
			m_n168 = 5;
		if (flTime > m_fl738)
		{
			sub_101ee7d0();
			return;
		}
	}

	if (flTime - m_fl884 < 0.0f)
		return;

	if (m_b758 || m_b8a4)
	{
		pOut->x = 0;
		pOut->y = 0;
		pOut->z = 0;
		m_flSpeed8a0 = 0.0f;
		if (m_b8a4)
		{
			CBaseEntity *pEnt = m_h730.Get();
			if (!pEnt || !pEnt->m_p9c)
			{
				m_b8a4 = 0;
				m_n734 = -1;
			}
		}
		return;
	}

	CEntityVSlots *pTarget = (CEntityVSlots *)m_h8a8.Get();
	if (pTarget)
	{
		if (!pTarget->slot158())
		{
			sub_101ee7d0();
			return;
		}
		Vector vecEye;
		pTarget->slot193(&vecEye);
		Vector vecOrigin = *vfunc217();
		Vector vecCenter = pTarget->slot192();

		Vector vecDelta;
		vecDelta = (vecEye - vecOrigin) - (vecEye - vecCenter) * 0.5f;

		if (VectorLength(vecDelta) > 100.0f)
		{
			m_vecDir894 = vecDelta;
			VectorNormalize(m_vecDir894);
		}

		if (m_b8ac)
		{
			CBaseEntity *pOwner = (CBaseEntity *)((CBaseEntity *)pTarget)->m_p9c;
			if (pOwner && *(int *)((char *)pOwner + 0xfb0) != m_n8b0)
			{
				vfunc269();
				sub_101ee7d0();
			}
		}
	}

	float flSpeed = m_flSpeed8a0;
	pOut->x = m_vecDir894.x * flSpeed;
	pOut->y = m_vecDir894.y * flSpeed;
	pOut->z = m_vecDir894.z * flSpeed;
	sub_10139500(&vfunc220()->x, gpGlobals->frametime, &pOut->x, &pVelocity->x);
}
// END FUNCTION

// FUNCTION: 0x101eec10 size=0x1
#include "CVampireProjectile.h"
void CVampireProjectile::vfunc269()
{
}
// END FUNCTION

// FUNCTION: 0x101eec30 size=0x5af
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include "RTTI.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"
#include "CBaseAnimating.h"
#include "CVDmg_t.h"
#include "CUnknown1003ff80.h"
#include "CEntityVSlots.h"
#include "CVampireProjectile.h"

CBaseEntity *sub_100ab250(void *pEdict);
void sub_10138630(float *in, float *out);
void sub_10138df0(float *a, float *b, float *out);
void sub_10137ed0(float *mat, float *angles);
void sub_10138720(float *mat, int n, float *out);
extern "C" void *__RTDynamicCast(void *, long, void *, void *, int);
extern char g_10538764[], g_105a1e08[];
extern Vector g_1070d1b0;

struct CVampireBulletInfo101eec30
{
	int n00, n04;
	Vector org;
	Vector v14;
	Vector force;
	Vector vel;
	Vector v38;
	int n44;
	CVDmg_t dmg;
	int nDamage;
	int n90;
	CBaseEntity *pEnt1;
	CBaseEntity *pEnt2;
	float fl9c;
	int za0;
	float fla4;
	int za8, zac, zb0, zb4, zb8, zbc, zc0;
	CUnknown1003ff80 u;
	char pad[0x54 - sizeof(CUnknown1003ff80)];

	CVampireBulletInfo101eec30()
	{
		u.sub_1003ff80();
		n00 = 1;
		n04 = 1;
		n90 = 4;
		nDamage = -1;
		org = g_1070d1b0;
		vel.sub_1003e4b0(g_1070d1b0);
		v14.sub_1003e4b0(g_1070d1b0);
		v38.sub_1003e4b0(g_1070d1b0);
	}
	~CVampireBulletInfo101eec30() { dmg.sub_101fa680(); }
};

// TARGET: CVampireProjectile::vfunc266
void CVampireProjectile::vfunc266(CBaseEntity *pOther)
{
	int iHit = -1;
	if (__RTDynamicCast(pOther, 0, g_10538764, g_105a1e08, 0))
		return;
	if (m_b758)
		return;
	if (m_b8a4)
		return;

	void *pEdict = engine->vfunc38(0);
	CBaseEntity *pInst;
	{
		ScopeTrace t("CBaseEntity::Instance", g_106b8540);
		if (!pEdict)
			pEdict = engine->vfunc38(0);
		pInst = sub_100ab250(pEdict);
	}
	CBaseAnimating *pOwner = (CBaseAnimating *)pOther->m_p9c;
	if (pOther->sub_100b5110() || pInst == pOther)
	{
		char bSolid;
		{
			ScopeTrace t("CBaseEntity::IsSolidFlagSet", pOther->m_name26c ? pOther->m_name26c : g_106b8540);
			bSolid = (pOther->m_b2b4 >> 3) & 1;
		}
		if (bSolid)
			return;
		m_b758 = 1;
		m_fl738 = gpGlobals->curtime + 15.0f;
	}
	else if (pOwner)
	{
		if (m_iProjectileFlags & 2)
		{
			sub_100a0670((CBaseEntity *)pOwner, 0);
			vfunc93(0, 0);
			m_b8a4 = 1;
			m_fl738 = gpGlobals->curtime + 75.0f;
		}
	}
	else if (pOther->m_n00a0)
		return;

	if (m_bBulletParamSet)
	{
		CBaseEntity *pEnt1 = (CBaseEntity *)g_10566458->sub_100290c0((const unsigned int *)&m_h778);
		CBaseEntity *pEnt2 = (CBaseEntity *)g_10566458->sub_100290c0((const unsigned int *)&m_h77c);
		CVampireBulletInfo101eec30 bi;
		bi.fla4 = 0.0f;
		bi.org = m_vecOrigin75c;
		bi.vel = m_vecVelocity768;
		bi.za0 = 0; bi.za8 = 0; bi.zac = 0; bi.zb0 = 0; bi.zb4 = 0; bi.zb8 = 0; bi.zbc = 0; bi.zc0 = 0;
		bi.nDamage = m_nDamage774;
		bi.dmg = *(CVDmg_t *)m_dmg834;
		bi.force = m_vecForce780;
		bi.pEnt1 = pEnt1;
		bi.pEnt2 = pEnt2;
		bi.fl9c = m_fl78c;
		bi.n44 = m_n790;
		bi.n90 = m_n7a0;
		if (pEnt1)
		{
			iHit = pEnt1->sub_10267b60(&bi);
			pEnt1->sub_10268330(pOther, &bi, m_n830);
		}
		m_bBulletParamSet = 0;
		m_n734 = iHit;
		unsigned char b;
		if (iHit >= 0)
		{
			if (pOwner)
			{
				if (iHit < pOwner->sub_10092c90())
				{
					float bufA[12], bufB[12], mat[12];
					*(unsigned int *)&m_h730 = *pOther->vfunc1();
					((CEntityVSlots *)pOwner)->slot256(m_n734, bufA);
					sub_10138630(bufA, bufB);
					if ((unsigned char)(m_flags268 >> 11) & 1)
						vfunc98();
					sub_10138df0(bufB, m_rgflCoordinateFrame, mat);
					sub_10137ed0(mat, (float *)&m_angAttachAngle);
					sub_10138720(mat, 3, (float *)&m_vecAttachOrigin);
					goto solid;
				}
			}
			else
				goto noowner;
		}
		b = m_b8a4;
		m_b8a4 = 0;
		if (b)
		{
			vfunc267((int)pOther);
			sub_101ee7d0();
			return;
		}
		goto solid;
noowner:
		b = m_b8a4;
		m_b8a4 = 0;
		m_n734 = -1;
		if (b)
		{
			vfunc267((int)pOther);
			sub_101ee7d0();
			return;
		}
solid:
		char bSolid;
		{
			ScopeTrace t("CBaseEntity::IsSolidFlagSet", pOther->m_name26c ? pOther->m_name26c : g_106b8540);
			bSolid = (pOther->m_b2b4 >> 3) & 1;
		}
		if (!bSolid)
			vfunc267((int)pOther);
	}
	if (!(m_iProjectileFlags & 2))
		sub_101ee7d0();
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
