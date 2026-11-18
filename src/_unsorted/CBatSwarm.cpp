// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100b8320 size=0x6
#include "datamap.h"
#include "CBatSwarm.h"
namespace lifted {
extern char g_1055a430;
}
datamap_t * CBatSwarm::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1055a430);
}
// END FUNCTION

// FUNCTION: 0x100b8420 size=0x6
#include "CBatSwarm.h"
namespace lifted {
extern char g_106d091c;
}
int CBatSwarm::vfunc80()
{
    return (int)&lifted::g_106d091c;
}
// END FUNCTION

// FUNCTION: 0x100b8440 size=0x3
#include "CBatSwarm.h"
int CBatSwarm::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100b8770 size=0x1e
#include "CBatSwarm.h"

void sub_100aa7b0(void *p);

// TARGET: CBatSwarm::vfunc5
CBaseEntity *CBatSwarm::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100b87a0 size=0x2b1
#include "CBatSwarm.h"
#include "engineserver.h"
#include "ScopeTrace.h"
#include "CUnknown100dd990.h"
#include "CCollisionProperty.h"
#include "CEntityVSlots.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

// TARGET: CBatSwarm::vfunc103
extern char g_1055a770[];
extern "C" int __cdecl rand(void);
void sub_10006dbb();

struct CBatModelName
{
	const char *pszValue;
};
inline CBatModelName MAKE_MODELNAME(const char *psz)
{
	CBatModelName s;
	s.pszValue = (psz && *psz) ? psz : 0;
	return s;
}
struct CBatModelSlots
{
	EVS10(0) EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19)
	EVS10(20) EVS(210) EVS(211)
	virtual void slot212(CBatModelName s);
};

void CBatSwarm::vfunc103()
{
	((CBatModelSlots *)this)->slot212(MAKE_MODELNAME(g_1055a770));
	vfunc104();
	engine->vfunc17("Impact_Flesh_Emitter", 0);

	const char *pszModel;
	{
		int local;
		pszModel = *vfunc9(&local);
	}
	if (pszModel == 0)
		pszModel = g_106b8540;
	vfunc105(pszModel);

	m_mask730 = 0xffffffff;
	m_mask734 = 0xffffffff;

	{ int i = 0; while (32 > i) { Vector vecOffset;
		vecOffset.x = (float)rand() * 0.00024414808f - 4.0f;
		vecOffset.y = (float)rand() * 0.00024414808f - 4.0f;
		vecOffset.z = (float)rand() * 0.00024414808f - 4.0f;
		*(m_vecPos + i) = vecOffset + *((CEntityVSlots *)this)->slot217();

		m_vecBatVelocity[i].x = (float)rand() * 6.103702e-5f - 1.0f;
		m_vecBatVelocity[i].y = (float)rand() * 6.103702e-5f - 1.0f;
		m_vecBatVelocity[i].z = (float)rand() * 6.103702e-5f - 1.0f;

		m_vecBatVelocity[i] *= m_flSpeed738 / VectorLength(m_vecBatVelocity[i]);
		m_bBatHittingPlayer[i] = false; i++; } }

	vfunc93(0, 0);
	m_nTakeDamage = 0;
	m_flNextThink = 0;
	*(float *)((char *)this + 0x174) = gpGlobals->curtime;
	*(float *)((char *)this + 0x6f4) = 1.0f;
	*(float *)((char *)this + 0x6f8) = 0.0f;
	*(int *)((char *)this + 0x6f0) = sub_1008dc40(1, -1);

	CUnknown100dd990 *pCollision = (CUnknown100dd990 *)((char *)this + 0x270);
	pCollision->sub_100dd990(4, 0, 0);

	{
		ScopeTrace trace("CBaseEntity::SetSolid", STRINGR_F(m_name26c));
		((CCollisionProperty *)pCollision)->sub_100dc480(5);
	}

	sub_100b3580(0x20000000);
	sub_100b3b00();
	sub_100ac4e0((int)sub_10006dbb, 0, 0);
	m_flNextThink = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x100b8b10 size=0x26
#include "CBatSwarm.h"
#include "CBaseEntity.h"
#include "IVEngineServerFull.h"

extern char g_106b8540[];

void CBatSwarm::vfunc104()
{
	int unused;
	const char *name = *((CBaseEntity *)this)->vfunc9(&unused);
	if (!name)
		name = g_106b8540;
	engine->vfunc13(name, 0);
}
// END FUNCTION

// FUNCTION: 0x100b9a40 size=0x178
#include "CBatSwarm.h"

#define V4(p) virtual void p##a(); virtual void p##b(); virtual void p##c(); virtual void p##d();
#define V16(p) V4(p##0) V4(p##1) V4(p##2) V4(p##3)
struct CSlot217
{
	V16(a) V16(b) V16(c) V16(d) V16(e) V16(f) V16(g) V16(h) V16(i) V16(j) V16(k) V16(l) V16(m)
	V4(n) V4(o) virtual void q();
	virtual float *GetAbsOrigin();
};

void CBatSwarm::vfunc101(Vector *pMins, Vector *pMaxs)
{
	bool bFirst = false;
	for (int i = 0; i < 32; i++) {
		if (m_mask734 & (1 << i) & m_mask730) {
			const Vector &p = m_vecPos[i];
			if (bFirst) {
				pMins->x = pMins->x < p.x ? pMins->x : p.x;
				pMins->y = pMins->y < p.y ? pMins->y : p.y;
				pMins->z = pMins->z < p.z ? pMins->z : p.z;
				pMaxs->x = pMaxs->x > p.x ? pMaxs->x : p.x;
				pMaxs->y = pMaxs->y > p.y ? pMaxs->y : p.y;
				pMaxs->z = pMaxs->z > p.z ? pMaxs->z : p.z;
			} else {
				bFirst = true;
				pMaxs->x = p.x;
				pMaxs->y = p.y;
				pMaxs->z = p.z;
				pMins->x = pMaxs->x;
				pMins->y = pMaxs->y;
				pMins->z = pMaxs->z;
			}
		}
	}
	if (bFirst) {
		pMins->x -= 16.0f;
		pMins->y -= 16.0f;
		pMins->z -= 16.0f;
		pMaxs->x += 16.0f;
		pMaxs->y += 16.0f;
		pMaxs->z += 16.0f;
	} else {
		float *o = ((CSlot217 *)this)->GetAbsOrigin();
		pMaxs->x = o[0];
		pMaxs->y = o[1];
		pMaxs->z = o[2];
		pMins->x = pMaxs->x;
		pMins->y = pMaxs->y;
		pMins->z = pMaxs->z;
	}
}
// END FUNCTION

// FUNCTION: 0x100b9c20 size=0x222
#include "CBatSwarm.h"
#include "CGameTrace.h"
#include "Ray_t.h"

struct CPlaneView
{
	Vector normal;
	float dist;
	unsigned char type;
	unsigned char signbits;
	unsigned char pad[2];
};

struct SPhysTrace
{
	Vector startpos;
	Vector endpos;
	CPlaneView plane;
	float fraction;
	int contents;
	short dispFlags;
	bool allsolid;
	bool startsolid;
};

void sub_1023f3d0(const float *pStart, const float *pDelta, CGameTrace *pTrace);
bool sub_10240fd0(const Ray_t *pRay, const Vector *pMins, const Vector *pMaxs, int nFlags, SPhysTrace *pTrace);

// TARGET: CBatSwarm::vfunc99
bool CBatSwarm::vfunc99(const Ray_t *pRay, unsigned int mask, CGameTrace *pTrace)
{
	sub_1023f3d0(pRay->m_Start, pRay->m_Delta, pTrace);
	pTrace->m_hitbox = -1;

	if (mask & 0x2000001)
	{
		int hit = -1;
		Ray_t ray = *pRay;
		for (int i = 0; i < 32; i++)
		{
			unsigned int bit = 1 << i;
			if ((m_mask734 & bit & m_mask730) == 0)
				continue;

			Vector mins = m_vecPos[i] - Vector(16.0f, 16.0f, 16.0f);
			Vector maxs = m_vecPos[i] + Vector(16.0f, 16.0f, 16.0f);
			SPhysTrace tr;
			if (!sub_10240fd0(&ray, &mins, &maxs, 0, &tr))
				continue;

			*(Vector *)pTrace->m_startpos = tr.startpos;
			*(Vector *)pTrace->m_endpos = tr.endpos;
			*(CPlaneView *)pTrace->m_planeNormal = tr.plane;
			pTrace->m_fraction *= tr.fraction;
			pTrace->m_startsolid = tr.startsolid;
			pTrace->m_allsolid = tr.allsolid;
			ray.m_Delta[0] *= tr.fraction;
			ray.m_Delta[1] *= tr.fraction;
			ray.m_Delta[2] *= tr.fraction;
			hit = i;
			if (pTrace->m_startsolid)
				break;
		}
		if (hit >= 0)
		{
			pTrace->m_hitgroup = 0;
			pTrace->m_hitbox = hit;
			pTrace->m_contents = 0x42000001;
			pTrace->m_physicsbone = 0xffff;
			return true;
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x100b9ee0 size=0x75
#include "CBatSwarm.h"
#define V10(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4(); virtual void a##5(); virtual void a##6(); virtual void a##7(); virtual void a##8(); virtual void a##9();
#define V100(a) V10(a##0) V10(a##1) V10(a##2) V10(a##3) V10(a##4) V10(a##5) V10(a##6) V10(a##7) V10(a##8) V10(a##9)
struct Slot265 {
    V100(a) V100(b)
    V10(c) V10(d) V10(e) V10(f) V10(g) V10(h)
    virtual void i0(); virtual void i1(); virtual void i2(); virtual void i3(); virtual void i4();
    virtual void v265(int idx);
};
struct HitInfo {
    char pad0[0x2c];
    float m_f2c;
    char pad1[6];
    char m_b36;
    char m_b37;
    char pad2[0x50 - 0x38];
    int m_idx;
};
struct CountRef { int pad; int m_n; };
extern float g_104454c0;
extern float g_104454c4;
void CBatSwarm::vfunc141(int *pRef, int unused, void *pInfo)
{
    HitInfo *h = (HitInfo *)pInfo;
    if ((h->m_f2c < g_104454c0 || h->m_b36 || h->m_b37) && h->m_idx >= 0 && h->m_idx < 32) {
        int idx = h->m_idx;
        if (((1 << idx) & m_mask730 & m_mask734) != 0) {
            CountRef *r = (CountRef *)*pRef;
            if (r != 0 && g_104454c4 < (float)r->m_n)
                ((Slot265 *)this)->v265(idx);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x100b9f80 size=0x52
#include "CBatSwarm.h"
#include "CEntityVSlots.h"
extern float g_1070d9d0[3];
CEntityVSlots *sub_100fbc90(const char *name, const float *org, const float *ang, float life);
void CBatSwarm::vfunc265(int iBat)
{
	unsigned int mask = ~(1 << iBat);
	m_mask730 &= mask;
	m_mask734 &= mask;
	sub_100fbc90("Impact_Flesh_Emitter", &m_vecPos[iBat].x, g_1070d9d0, 2.0f);
}
// END FUNCTION

// FUNCTION: 0x100ba000 size=0x1a
#include "CBatSwarm.h"
#include "CEntityVSlots.h"

CBaseEntity *sub_101cda50();

// TARGET: CBatSwarm::vfunc266
void CBatSwarm::vfunc266(int a)
{
	CEntityVSlots *p = (CEntityVSlots *)sub_101cda50();
	if (p)
		p->slot320(0, 0x76);
}
// END FUNCTION

// FUNCTION: 0x100ba0c0 size=0x1c
#include "CBatSwarm.h"

struct S100ba0c0 { char pad[0xa8]; int m_field; };

bool CBatSwarm::sub_100ba0c0(void *pEntity)
{
	S100ba0c0 *p = (S100ba0c0 *)pEntity;
	if (p && p->m_field)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x100ba0f0 size=0x1c
#include "CBatSwarm.h"

struct S100ba0f0 { char pad[0xa8]; int m_field; };

bool CBatSwarm::vfunc69(void *pEntity)
{
	S100ba0f0 *p = (S100ba0f0 *)pEntity;
	if (p && p->m_field)
		return true;
	return false;
}
// END FUNCTION
