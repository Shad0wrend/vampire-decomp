// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 20 blocks
#include "vampire.h"

// FUNCTION: 0x1003dc70 size=0x478
#include "CBaseEntity.h"
#include "CUnknown100290c0.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "Pool.h"
#include "ScopeTrace.h"
struct CTouchLink { unsigned int m_h; int m_n4; CTouchLink *m_pNext; CTouchLink *m_pPrev; unsigned int m_flags; };
extern CUnknown100290c0 *g_10566458;
extern Pool g_106bd904;
extern int g_106bd9b8;
extern void (*g_109f366c)(const char *);

struct ST3 {
	void sub_10037300(const char *, const char *, const char *);
	~ST3() { (*g_109f3680)--; }
};

struct CBaseEntityTouch : CBaseEntity {
	CTouchLink *sub_1003cd50(int);
	CTouchLink *sub_1003cf50(int);
	CTouchLink *sub_1003dc70(CBaseEntity *pOther);
	bool IsSolidX()
	{
		ST3 t; t.sub_10037300("CBaseEntity::IsSolid", m_name26c ? m_name26c : g_106b8540, g_106b8540);
		return m_n2b0 && !(m_b2b4 & 4);
	}
};

inline bool IsSolidFlagSetX(CBaseEntity *p, int bit)
{
	ST3 t; t.sub_10037300("CBaseEntity::IsSolidFlagSet", p ? (p->m_name26c ? p->m_name26c : g_106b8540) : g_105387dc, g_106b8540);
	return (p->m_b2b4 >> bit) & 1;
}

CTouchLink *CBaseEntityTouch::sub_1003dc70(CBaseEntity *pOther)
{
	ScopeTrace t("CBaseEntity::PhysicsMarkEntityAsTouched", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (this != pOther
		&& g_10566458->sub_100290c0(&m_hMoveParent) != (unsigned int)pOther
		&& (unsigned int)this != g_10566458->sub_100290c0((unsigned int *)((char *)pOther + 0x25c))
		&& !((pOther->sub_100b3700() | sub_100b3700()) & 0x400000)
		&& !(IsSolidFlagSetX(this, 3) && IsSolidFlagSetX(pOther, 3) && !IsSolidX() && !((CBaseEntityTouch *)pOther)->IsSolidX()))
	{
		CTouchLink *root = sub_1003cd50(1);
		if (root) {
			for (CTouchLink *link = root->m_pNext; link != root; link = link->m_pNext) {
				if (g_10566458->sub_100290c0(&link->m_h) == (unsigned int)pOther) {
					link->m_n4 = *(int *)((char *)this + 0x1ac);
					sub_1003daa0(pOther);
					return link;
				}
			}
		} else {
			root = sub_1003cf50(1);
			root->m_pPrev = root;
			root->m_pNext = root;
		}
		CTouchLink *link;
		{
			ScopeTrace t2("AllocTouchLink", g_106b8540);
			link = (CTouchLink *)g_106bd904.sub_1013dc60(0x14);
			if (link) {
				++g_106bd9b8;
			} else {
				if (g_106bd9b8 == 0x200)
					g_109f366c("AllocTouchLink:  MAX_TOUCHLINKS limit reached!! Too many touching/colliding entities!!!!\n");
				else
					g_109f366c("AllocTouchLink:  Progamming error, failed to allocate touchlink_t.  Touchlinks not being freed correctly!!!\n");
			}
		}
		if (link) {
			link->m_n4 = *(int *)((char *)this + 0x1ac);
			if (pOther)
				link->m_h = *pOther->vfunc1();
			else
				link->m_h = (unsigned int)-1;
			link->m_flags = 0;
			link->m_pNext = root->m_pNext;
			link->m_pPrev = root;
			root->m_pNext = link;
			link->m_pNext->m_pPrev = link;
			if ((IsSolidX() && !IsSolidFlagSetX(this, 5)) || IsSolidFlagSetX(this, 3)) {
				if (!IsSolidFlagSetX(pOther, 3)) {
					link->m_flags |= 1;
					sub_1003db80(pOther);
				}
			}
			return link;
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1003e210 size=0x5
// an empty inline constructor: the game's construct is a bare `ret`, no code names the global
struct CEmpty1003e210
{
	CEmpty1003e210() {}
};
CEmpty1003e210 g_empty_1003e210;
// END FUNCTION

// FUNCTION: 0x1003e250 size=0x6d
struct TraceEnt { const char *a; void *b; void *c; };
struct trace21 { int d[21]; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1053be28[];
extern char g_106b8540[];
extern trace21 g_106bd8b0;
trace21 *sub_1003e250(trace21 *out)
{
    g_109f3620[*g_109f3680].a = g_1053be28;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    *out = g_106bd8b0;
    --*g_109f3680;
    return out;
}
// END FUNCTION

// FUNCTION: 0x1003e2e0 size=0x16a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CBaseEntity.h"
#include "Vector.h"

struct PhysEventSubX {
	Vector v;
	int i0;
	char b0, b1;
	char a[2];
};
struct PhysEventX {
	int i0, i4, i8, ic, i10, i14;
	PhysEventSubX sub;	// 0x18
	int i2c, i30;
	short s34;
	char b36, b37;
	int i38, i3c, i40, i44;
	short s48;
	int i4c, i50;
};
extern PhysEventX g_106bd8b0;
struct MarkX { void sub_1003dc70(CBaseEntity *p); };

void CBaseEntity::sub_1003e2e0(CBaseEntity *pOther, void *pTrace)
{
	ScopeTrace trace("CBaseEntity::PhysicsMarkEntitiesAsTouching", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	const PhysEventX *e = (const PhysEventX *)pTrace;
	const PhysEventSubX &s = e->sub;
	g_106bd8b0.i0 = e->i0;
	g_106bd8b0.i4 = e->i4;
	g_106bd8b0.i8 = e->i8;
	g_106bd8b0.ic = e->ic;
	g_106bd8b0.i10 = e->i10;
	g_106bd8b0.i14 = e->i14;
	g_106bd8b0.sub.v.sub_1003e4b0(s.v);
	g_106bd8b0.sub.i0 = s.i0;
	g_106bd8b0.sub.b0 = s.b0;
	g_106bd8b0.sub.b1 = s.b1;
	for (unsigned int k = 0; k < 2; k++)
		g_106bd8b0.sub.a[k] = s.a[k];
	g_106bd8b0.i2c = e->i2c;
	g_106bd8b0.i30 = e->i30;
	g_106bd8b0.s34 = e->s34;
	g_106bd8b0.b36 = e->b36;
	g_106bd8b0.b37 = e->b37;
	g_106bd8b0.i38 = e->i38;
	g_106bd8b0.i3c = e->i3c;
	g_106bd8b0.i40 = e->i40;
	g_106bd8b0.i44 = e->i44;
	g_106bd8b0.s48 = e->s48;
	g_106bd8b0.i4c = e->i4c;
	g_106bd8b0.i50 = e->i50;
	((MarkX *)this)->sub_1003dc70(pOther);
	((MarkX *)pOther)->sub_1003dc70(this);
}
// END FUNCTION

// FUNCTION: 0x1003e4b0 size=0x19
#include "Vector.h"
Vector &Vector::sub_1003e4b0(const Vector &v)
{
	x = v.x;
	y = v.y;
	z = v.z;
	return *this;
}
// END FUNCTION

// FUNCTION: 0x1003e4e0 size=0x17b
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CBaseEntity.h"
#include "Vector.h"

struct PhysEventSubX {
	Vector v;
	int i0;
	char b0, b1;
	char a[2];
};
struct PhysEventX {
	int i0, i4, i8, ic, i10, i14;
	PhysEventSubX sub;	// 0x18
	int i2c, i30;
	short s34;
	char b36, b37;
	int i38, i3c, i40, i44;
	short s48;
	int i4c, i50;
};
extern PhysEventX g_106bd8b0;
struct TouchLinkX { int pad; int m_nFlags; };
struct MarkX { TouchLinkX *sub_1003dc70(CBaseEntity *p); };

struct CUnknown1003e4e0 : CBaseEntity {
	void sub_1003e4e0(CBaseEntity *pOther, void *pTrace);
};

void CUnknown1003e4e0::sub_1003e4e0(CBaseEntity *pOther, void *pTrace)
{
	ScopeTrace trace("CBaseEntity::PhysicsMarkEntitiesAsTouchingEventDriven", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	const PhysEventX *e = (const PhysEventX *)pTrace;
	const PhysEventSubX &s = e->sub;
	g_106bd8b0.i0 = e->i0;
	g_106bd8b0.i4 = e->i4;
	g_106bd8b0.i8 = e->i8;
	g_106bd8b0.ic = e->ic;
	g_106bd8b0.i10 = e->i10;
	g_106bd8b0.i14 = e->i14;
	g_106bd8b0.sub.v.sub_1003e4b0(s.v);
	g_106bd8b0.sub.i0 = s.i0;
	g_106bd8b0.sub.b0 = s.b0;
	g_106bd8b0.sub.b1 = s.b1;
	for (unsigned int k = 0; k < 2; k++)
		g_106bd8b0.sub.a[k] = s.a[k];
	g_106bd8b0.i2c = e->i2c;
	g_106bd8b0.i30 = e->i30;
	g_106bd8b0.s34 = e->s34;
	g_106bd8b0.b36 = e->b36;
	g_106bd8b0.b37 = e->b37;
	g_106bd8b0.i38 = e->i38;
	g_106bd8b0.i3c = e->i3c;
	g_106bd8b0.i40 = e->i40;
	g_106bd8b0.i44 = e->i44;
	g_106bd8b0.s48 = e->s48;
	g_106bd8b0.i4c = e->i4c;
	g_106bd8b0.i50 = e->i50;
	TouchLinkX *p = ((MarkX *)this)->sub_1003dc70(pOther);
	if (p)
		p->m_nFlags = -1;
	TouchLinkX *q = ((MarkX *)pOther)->sub_1003dc70(this);
	if (q)
		q->m_nFlags = -1;
}
// END FUNCTION

// FUNCTION: 0x1003e6c0 size=0xa8
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseEntity::sub_1003e6c0(CBaseEntity *pOther, void *pTrace)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::PhysicsImpact";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    if (pOther) {
        if (!((pOther->sub_100b3700() | sub_100b3700()) & 0x4000000))
            sub_1003e2e0(pOther, pTrace);
    }
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1003e7a0 size=0xa9
#include "CBaseEntity.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int CBaseEntity::vfunc237()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::PhysicsSolidMaskForEntity";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (sub_100b3700() & 0x2000) {
		(*g_109f3680)--;
		return 0x202400b;
	}
	if (*(int *)((char *)this + 0xa8)) {
		(*g_109f3680)--;
		return 0x201400b;
	}
	(*g_109f3680)--;
	return 0x200400b;
}
// END FUNCTION

// FUNCTION: 0x1003e880 size=0x231
#include "ScopeTrace.h"
#include "CUnknown101d7520.h"
#include "CCollisionProperty.h"
#include "CUnknown1070b254.h"
extern char g_106b8540[];

void sub_10139500(const float *start, float scale, const float *direction, float *dest);
struct CBaseEntityWater { char pad[0x3e0]; int m_nWaterLevel; int m_nWaterType; };
inline int UTIL_PointContents(const Vector &v) { return g_1070b254->vfunc0((const float *)&v, 0); }

bool CBaseEntity::PhysicsCheckWater()
{
	ScopeTrace scope("CBaseEntity::PhysicsCheckWater", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CBaseEntityWater *pWater = (CBaseEntityWater *)this;
	Vector vecMins, vecMaxs;
	((CCollisionProperty *)((char *)this + 0x270))->vfunc15(&vecMins, &vecMaxs);
	Vector point;
	point[0] = (vecMaxs.x + vecMins.x) * 0.5;
	point[1] = (vecMaxs.y + vecMins.y) * 0.5;
	point[2] = vecMins.z + 1.0f;
	pWater->m_nWaterLevel = 0; pWater->m_nWaterType = 0;
	int cont = UTIL_PointContents(point);
	if (cont & 0x4030) {
		pWater->m_nWaterType = cont; pWater->m_nWaterLevel = 1;
		if (vecMins.z == vecMaxs.z) pWater->m_nWaterLevel = 3;
		else {
			point[2] = (vecMins.z + vecMaxs.z) * 0.5;
			if (UTIL_PointContents(point) & 0x4030) {
				pWater->m_nWaterLevel = 2;
				point[2] += m_vecViewOffset[2];
				if (UTIL_PointContents(point) & 0x4030) pWater->m_nWaterLevel = 3;
			}
		}
		if (cont & 0x7c0000) {
			Vector vecCurrent(0.0f, 0.0f, 0.0f);
			if (cont & 0x40000) vecCurrent.x = 1.0f;
			if (cont & 0x80000) vecCurrent.y = 1.0f;
			if (cont & 0x100000) vecCurrent.x -= 1.0f;
			if (cont & 0x200000) vecCurrent.y -= 1.0f;
			if (cont & 0x400000) vecCurrent.z = 1.0f;
			sub_10139500((const float *)&m_vecBaseVelocity, pWater->m_nWaterLevel * 50.0, (const float *)&vecCurrent, (float *)&m_vecBaseVelocity);
		}
	}
	return pWater->m_nWaterLevel > 1;
}
// END FUNCTION

// FUNCTION: 0x1003eb50 size=0x1b3
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
struct MaxVel { virtual void v0(); virtual bool v1(); char pad[0x24]; float val; };

#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct VtOrigin
{
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j) V10(k)
	V10(l) V10(m) V10(n) V10(o) V10(p) V10(q) V10(r) V10(s) V10(t) V10(u) V10(w)
	virtual float *GetOrigin();
};
struct VtSet
{
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f)
	virtual void s60(); virtual void s61();
	virtual void SetOrigin(float *v);
};

extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern void (*g_109f3628)(const char *fmt, const char *arg);
extern MaxVel *g_109eeee4;
extern unsigned int g_1046a420;
extern float g_104454c4;
extern char g_105387dc[];
extern char g_106b8540[];
extern char g_1053bf70[];
extern char g_1053bf50[];
extern char g_1053bf34[];

#define MAXV (g_109eeee4->v1() ? g_104454c4 : g_109eeee4->val)

// TARGET: CBaseEntity::sub_1003eb50
void CBaseEntity::sub_1003eb50()
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : g_106b8540;
	else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = g_1053bf70;
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;

	unsigned int org[3];
	unsigned int *p = (unsigned int *)((VtOrigin *)this)->GetOrigin();
	org[0] = p[0];
	org[1] = p[1];
	org[2] = p[2];

	void (*msg)(const char *, const char *) = g_109f3628;
	int i;
	float *pv;
	for (i = 0, pv = m_vel3d4; i < 3; i++, pv++)
	{
		if ((*(unsigned int *)pv & g_1046a420) == g_1046a420)
		{
			msg(g_1053bf50, sub_1000ea11());
			*pv = 0;
		}
		if ((org[i] & g_1046a420) == g_1046a420)
		{
			msg(g_1053bf34, sub_1000ea11());
			org[i] = 0;
			((VtSet *)this)->SetOrigin((float *)org);
		}
		if (*pv > MAXV)
			*pv = MAXV;
		else if (*pv < -MAXV)
			*pv = -MAXV;
	}
	*g_109f3680 = *g_109f3680 - 1;
}
// END FUNCTION

// FUNCTION: 0x1003ed80 size=0x126
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "Vector.h"
#include "ScopeTrace.h"
#include "ConVar.h"

extern ConVar *g_109ef2d4;
extern float g_104454c4;

void CBaseEntity::sub_1003ed80(Vector &move)
{
	ScopeTrace trace("CBaseEntity::PhysicsAddGravityMove", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	float ent_gravity;
	float flGravity = *(float *)((char *)this + 0x3ec);
	if (flGravity != g_104454c4)
		ent_gravity = *(float *)((char *)this + 0x3ec);
	else
		ent_gravity = 1.0f;
	float t0 = ent_gravity * (g_109ef2d4->vfunc1() ? g_104454c4 : g_109ef2d4->m_fValue); float newZVelocity = m_vel3d4[2] - t0 * gpGlobals->frametime;
	Vector *pBase = (Vector *)((char *)this + 0x3b0);
	move.x = (m_vel3d4[0] + pBase->x) * gpGlobals->frametime;
	move.y = (m_vel3d4[1] + pBase->y) * gpGlobals->frametime;
	move.z = ((m_vel3d4[2] + newZVelocity) * 0.5 + pBase->z) * gpGlobals->frametime;
	m_vel3d4[2] = newZVelocity;
	sub_1003eb50();
}
// END FUNCTION

// FUNCTION: 0x1003ef00 size=0x118
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "Vector.h"
#include "ScopeTrace.h"
int __fastcall sub_1003ef00(CBaseEntity *self, int unused, const Vector &in, const Vector &normal, Vector &out, float overbounce)
{
    ScopeTrace trace("CBaseEntity::PhysicsClipVelocity", self ? (self->m_name26c ? self->m_name26c : g_106b8540) : g_105387dc);
    int blocked = 0;
    float nz = normal.z;
    if (nz > 0.0f)
        blocked |= 1;
    if (nz == 0.0f)
        blocked |= 2;
    float backoff = DotProduct(in, normal) * overbounce;
    for (int i = 0; i < 3; i++) {
        float change = normal[i] * backoff;
        out[i] = in[i] - change;
        if (out[i] > -0.1 && out[i] < 0.1)
            out[i] = 0.0f;
    }
    return blocked;
}
// END FUNCTION

// FUNCTION: 0x1003f070 size=0x37c
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CBaseEntity_ext.h"
#include "CEntityVSlots.h"
#include "CGameTrace.h"
#include "ScopeTrace.h"
#include "ConVar.h"
#include "globalvars.h"

extern Vector g_1070d1b0;	// vec3_origin
extern float g_1070d9d0[];	// vec3_angle

void sub_10139500(const Vector &start, float scale, const Vector &direction, Vector &dest);	// VectorMA (out of line)

#define FV10(a) virtual void v##a##0(); virtual void v##a##1(); virtual void v##a##2(); virtual void v##a##3(); virtual void v##a##4(); \
	virtual void v##a##5(); virtual void v##a##6(); virtual void v##a##7(); virtual void v##a##8(); virtual void v##a##9();
struct FlyGroundView1003f070 {
	FV10(0) FV10(1) FV10(2) FV10(3) FV10(4) FV10(5) FV10(6) FV10(7) FV10(8) FV10(9)
	FV10(10) FV10(11) FV10(12) FV10(13) FV10(14) FV10(15) FV10(16) FV10(17) FV10(18) FV10(19)
	virtual void w0(); virtual void w1(); virtual void w2(); virtual void w3();
	virtual void w4(); virtual void w5(); virtual void w6(); virtual void w7();
	virtual void SetGroundEntity(void *pGround);	// slot 208
};

struct TraceNormal1003f070 : Vector
{
	TraceNormal1003f070 &operator=(const TraceNormal1003f070 &o) { sub_1003e4b0(o); return *this; }
};
struct TracePlane1003f070
{
	TraceNormal1003f070 normal;
	float dist;
	unsigned char type;
	unsigned char signbits;
	unsigned char pad[2];
};
struct TraceSurface1003f070
{
	const char *name;
	short surfaceProps;
	unsigned short flags;
};
struct Trace1003f070
{
	Vector startpos;
	Vector endpos;
	TracePlane1003f070 plane;
	float fraction;
	int contents;
	unsigned short dispFlags;
	bool allsolid;
	bool startsolid;
	float fractionleftsolid;
	TraceSurface1003f070 surface;
	int hitgroup;
	short physicsbone;
	CBaseEntity *m_pEnt;
	int hitbox;
};

static inline float GetCurrentGravity1003f070()
{
	return g_109ef2d4->vfunc1() ? 0.0f : g_109ef2d4->m_fValue;
}

void CBaseEntity::sub_1003f070(CGameTrace *pTrace, Vector *pMove)
{
	ScopeTrace scope("CBaseEntity::PerformFlyCollisionResolution", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc, g_106b8540);
	Trace1003f070 &trace = *(Trace1003f070 *)pTrace;
	Vector &move = *pMove;

	int mc = vfunc95();
	if (mc >= 0 && mc <= 1)
	{
		float backoff;
		if (vfunc95() == 1)
			backoff = 2.0 - *(float *)((char *)this + 0x3f0);
		else
			backoff = 1;
		sub_1003ef00((Vector *)m_vel3d4, &trace.plane.normal, (Vector *)m_vel3d4, backoff);
	}

	if (trace.plane.normal[2] > 0.7)
	{
		VectorAdd(*(Vector *)m_vel3d4, m_vecBaseVelocity, move);
		float t0 = move.x * move.x + move.y * move.y; float flSpeedSqr = (t0) + move.z * move.z;
		CBaseEntity *pEntity = trace.m_pEnt;

		if (move.z < GetCurrentGravity1003f070() * gpGlobals->frametime)
		{
			if (!(pEntity->sub_100b3700() & 0x8002080))
			{
				sub_100b3580(1);
				((FlyGroundView1003f070 *)this)->SetGroundEntity(pEntity);
			}
			m_vel3d4[2] = 0.0f;
		}

		if (flSpeedSqr < (30 * 30) || vfunc95() != 1)
		{
			if (!(pEntity->sub_100b3700() & 0x8002080))
			{
				sub_100b3580(1);
				((FlyGroundView1003f070 *)this)->SetGroundEntity(pEntity);
			}
			if (vfunc95() != 2)
			{
				*(Vector *)m_vel3d4 = g_1070d1b0;
				*(Vector *)m_angVel3c8 = *(Vector *)g_1070d9d0;
			}
		}
		else
		{
			VectorScale(*(Vector *)m_vel3d4, (1.0 - trace.fraction) * gpGlobals->frametime * 0.9, move);
			sub_10139500(move, gpGlobals->frametime * (1.0 - trace.fraction) * 0.9, m_vecBaseVelocity, move);
			Trace1003f070 tmp;
			trace = *(Trace1003f070 *)((CEntityVSlots *)this)->slot234(&tmp, &move);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1003f4d0 size=0x28d
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "CUnknown1070b254.h"
#include "CEntitySoundOriginView.h"
#include "CPASAttenuationFilter.h"
#include "ScopeTrace.h"
#include "engineiface.h"
#include "engineserver.h"

struct CWaterView
{
	char m_pad0000[0x184];
	Vector m_vecViewOffset;
	char m_pad0190[0x3e0 - 0x190];
	int m_nWaterLevel;
	int m_nWaterType;
	int GetWaterType() const { return m_nWaterType; }
};

#define CONTENTS_WATERMASK 0x4030

void CBaseEntity::sub_1003f4d0()
{
	ScopeTrace trace("CBaseEntity::PhysicsCheckWaterTransition", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CWaterView *pView = (CWaterView *)this;
	Vector point;
	Vector vecMins, vecMaxs;
	((CCollisionProperty *)((char *)this + 0x270))->vfunc15(&vecMins, &vecMaxs);
	point[0] = (vecMins[0] + vecMaxs[0]) * 0.5;
	point[1] = (vecMaxs[1] + vecMins[1]) * 0.5;
	point[2] = vecMins[2] + 1.0f;
	int cont = g_1070b254->vfunc0(&point.x, 0);
	if (pView->GetWaterType() == 0) {
		pView->m_nWaterType = cont;
		pView->m_nWaterLevel = 0;
		return;
	} else if (cont & CONTENTS_WATERMASK) {
		pView->m_nWaterType = cont;
		pView->m_nWaterLevel = 1;
		if (vecMins[2] == vecMaxs[2]) {
			pView->m_nWaterLevel = 3;
			return;
		}
		point[2] = (vecMaxs[2] + vecMins[2]) * 0.5;
		cont = g_1070b254->vfunc0(&point.x, 0);
		if (cont & CONTENTS_WATERMASK) {
			pView->m_nWaterLevel = 2;
			point[2] += pView->m_vecViewOffset[2];
			cont = g_1070b254->vfunc0(&point.x, 0);
			if (cont & CONTENTS_WATERMASK) {
				pView->m_nWaterLevel = 3;
				return;
			}
		}
		return;
	} else {
		{
			CPASAttenuationFilter filter((CEntitySoundOriginView *)this, 1.0f);
			int edict = m_pEdict2e0;
			enginesound->vfunc3(&filter, engine->vfunc35(edict), 0, "player/pl_wade2.wav", 1.0f, 1.0f, 0, 100, 0, 0, 1, 0);
		}
		pView->m_nWaterType = 0;
	}
	pView->m_nWaterLevel = 0;
}
// END FUNCTION

// FUNCTION: 0x1003f810 size=0xc6
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"

#define S_V1(p) virtual void p();
#define S_V10(p) S_V1(p##0) S_V1(p##1) S_V1(p##2) S_V1(p##3) S_V1(p##4) S_V1(p##5) S_V1(p##6) S_V1(p##7) S_V1(p##8) S_V1(p##9)
#define S_V100(p) S_V10(p##0) S_V10(p##1) S_V10(p##2) S_V10(p##3) S_V10(p##4) S_V10(p##5) S_V10(p##6) S_V10(p##7) S_V10(p##8) S_V10(p##9)

struct S1003f810Slots	// the entity's vtable up to slot 221 (GetAngles)
{
	S_V100(sa) S_V100(sb) S_V10(sc) S_V10(sd)
	S_V1(se)
	virtual float *GetAngles();
};

void CBaseEntity::sub_1003f810(float flFrameTime)
{
	ScopeTrace trace("CBaseEntity::SimulateAngles", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	const float *pAngles = ((S1003f810Slots *)this)->GetAngles();
	Vector vecNew;
	vecNew.x = flFrameTime * m_angVel3c8[0] + pAngles[0];
	vecNew.y = flFrameTime * m_angVel3c8[1] + pAngles[1];
	vecNew.z = flFrameTime * m_angVel3c8[2] + pAngles[2];
	vfunc64(&vecNew.x);
}
// END FUNCTION

// FUNCTION: 0x1003f920 size=0x50a
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CWeaponThrown_Grenade_Frag.h"
#include "ScopeTrace.h"
#include "CVProfile.h"
#include "CUnknown1003ff80.h"
#include "CUnknown100353c0.h"
#include "CGameTrace.h"
#include "CEntityVSlots.h"

extern Vector g_1070d1b0;
extern float g_104454c4;

struct PhysObjView
{
	EVS(0) EVS(1) EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3)
	EVS(40) EVS(41) EVS(42) EVS(43) EVS(44) EVS(45)
	virtual void slot46(Vector *pOrigin, Vector *pAngles, int a, int b);
};

struct TossTrace : CUnknown100353c0
{
	float m_f38;
	const char *m_p3c;
	int m_d40;
	int m_d44;
	short m_w48;
	int m_p4c;
	int m_d50;

	TossTrace() { ((CUnknown1003ff80 *)this)->sub_1003ff80(); }
	TossTrace &operator=(const TossTrace &o)
	{
		sub_100353c0(&o);
		m_f38 = o.m_f38;
		m_p3c = o.m_p3c;
		m_d40 = o.m_d40;
		m_d44 = o.m_d44;
		m_w48 = o.m_w48;
		m_p4c = o.m_p4c;
		m_d50 = o.m_d50;
		return *this;
	}
};

inline void TossAddYZ(const Vector &a, const Vector &b, Vector &c)
{
	c.y = a.y + b.y;
	c.z = a.z + b.z;
}

// TARGET: CBaseEntity::sub_1003f920
void CBaseEntity::sub_1003f920()
{
	ScopeTrace trace0("CBaseEntity::PhysicsToss", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	g_109f3648->EnterScope("CBaseEntity_PhysicsToss", 0, "Unaccounted", false);
	TossTrace trace;
	Vector move;
	PhysicsCheckWater();
	if (!sub_10033f60(0)) {
		g_109f3648->ExitScopeCall();
		return;
	}
	if (m_vel3d4[2] > g_104454c4 || !((CEntityVSlots *)this)->slot209() || (((CBaseEntity *)((CEntityVSlots *)this)->slot209())->sub_100b3700() & 0x8002080))
		sub_100b3640(1);
	if ((sub_100b3700() & 1) && ((Vector *)m_vel3d4)->sub_1003b850(g_1070d1b0)) {
		((int *)m_angVel3c8)[0] = ((int *)g_1070d9d0)[0];
		((int *)m_angVel3c8)[1] = ((int *)g_1070d9d0)[1];
		((int *)m_angVel3c8)[2] = ((int *)g_1070d9d0)[2];
		if (m_vecBaseVelocity.sub_1003b850(g_1070d1b0)) {
			g_109f3648->ExitScopeCall();
			return;
		}
	}
	sub_1003eb50();
	if (((CEntityVSlots *)this)->slot94() == 6 && !(sub_100b3700() & 0x400)) {
		sub_1003ed80(move);
	} else {
		m_vel3d4[0] += m_vecBaseVelocity.x;
		TossAddYZ(m_vecBaseVelocity, *(Vector *)m_vel3d4, *(Vector *)m_vel3d4);
		VectorScale(*(Vector *)m_vel3d4, gpGlobals->frametime, move);
		VectorSubtract(*(Vector *)m_vel3d4, m_vecBaseVelocity, *(Vector *)m_vel3d4);
		sub_1003eb50();
	}
	sub_1003f810(gpGlobals->frametime);
	char tmp[0x54];
	trace = *(TossTrace *)((CEntityVSlots *)this)->slot234(tmp, &move);
	PhysObjView *pPhys = (PhysObjView *)m_obj36c;
	if (pPhys)
		pPhys->slot46(((CEntityVSlots *)this)->slot217(), (Vector *)g_1070d9d0, 1, 0);
	sub_1003eb50();
	if (((CGameTrace *)&trace)->m_allsolid) {
		((int *)m_vel3d4)[0] = ((int *)&g_1070d1b0)[0];
		((int *)m_vel3d4)[1] = ((int *)&g_1070d1b0)[1];
		((int *)m_vel3d4)[2] = ((int *)&g_1070d1b0)[2];
		((int *)m_angVel3c8)[0] = ((int *)g_1070d9d0)[0];
		((int *)m_angVel3c8)[1] = ((int *)g_1070d9d0)[1];
		((int *)m_angVel3c8)[2] = ((int *)g_1070d9d0)[2];
		g_109f3648->ExitScope();
		return;
	}
	if (*(char *)(m_pEdict2e0 + 0x4c)) {
		g_109f3648->ExitScopeInlined();
		return;
	}
	if (((CGameTrace *)&trace)->m_fraction != 1.0f)
		sub_1003f070((CGameTrace *)&trace, &move);
	sub_1003f4d0();
	g_109f3648->ExitScopeInlined();
}
// END FUNCTION

// FUNCTION: 0x1003ff80 size=0x3
struct CUnknown1003ff80 { void * sub_1003ff80(); };
void * CUnknown1003ff80::sub_1003ff80()
{
    return this;
}
// END FUNCTION

// FUNCTION: 0x1003ffa0 size=0x1f1
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CVProfile.h"
#include "ScopeTrace.h"

struct CCycleSample
{
	unsigned __int64 m_Int64;

	void Sample()
	{
		unsigned int *pSample = (unsigned int *)&m_Int64;
		__asm {
			mov ecx, pSample
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
};

void CBaseEntity::sub_1003ffa0()
{
	ScopeTrace trace("CBaseEntity::PhysicsSimulateChildren", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CVProfile *pProfile = g_109f3648;
	if (pProfile->m_enabled || !pProfile->m_bAtRoot) {
		if (pProfile->m_pCurNode->m_pszName != "CBaseEntity_PhysicsSimulateChildren")
			pProfile->m_pCurNode = pProfile->m_pCurNode->GetSubNode("CBaseEntity_PhysicsSimulateChildren", 0, "Unaccounted");
		CVProfNode *pNode = pProfile->m_pCurNode;
		pNode->m_nCurFrameCalls++;
		if (pNode->m_nRecursions++ == 0) {
			((CCycleSample *)&pNode->m_CurFrameTime)->Sample();
			g_109f3648->PushGroup(pNode->m_nBudgetGroupID);
		}
		pProfile->m_bAtRoot = false;
	}
	CBaseEntity *pChild = m_hMoveChild260.Get();
	while (pChild) {
		pChild->sub_10040390();
		pChild = pChild->m_hMovePeer264.Get();
	}
	g_109f3648->ExitScopeInlined();
}
// END FUNCTION

// FUNCTION: 0x10040220 size=0x114
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CEntityVSlots.h"

void CBaseEntity::sub_10040220()
{
	ScopeTrace trace("CBaseEntity::UpdateBaseVelocity", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (sub_100b3700() & 1) {
		CBaseEntity *pGround = (CBaseEntity *)((CEntityVSlots *)this)->slot209();
		if (pGround && (pGround->sub_100b3700() & 0x1000)) {
			Vector vecBaseVelocity;
			((CEntityVSlots *)pGround)->slot210(&vecBaseVelocity);
			Vector *pBaseVel = (Vector *)((char *)this + 0x3b0);
			if (sub_100b3700() & 0x800000)
				vecBaseVelocity += *pBaseVel;
			sub_100b3580(0x800000);
			*pBaseVel = vecBaseVelocity;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10040390 size=0x3ec
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
#include "CBaseEntity.h"
#include "CBaseEntitySlots.h"
#include "CUnknown100290c0.h"
#include "ScopeTrace.h"
#include "Vector.h"
#include "CEHandleGet.h"
extern Vector g_1070d1b0;
void sub_10139500(const float *pStart, float flScale, const float *pDir, float *pDest);
__declspec(dllimport) void Warning(const char *pMsg, ...);

static inline bool FlagBit12(unsigned int f)
{
	return ((f >> 12) & 1) != 0;
}

class CCycleCount
{
public:
	CCycleCount &operator+=(CCycleCount const &other) { m_Int64 += other.m_Int64; return *this; }
	__int64 m_Int64;
};

class CFastTimer
{
public:
	void sub_100335e0();	// End (out of line: rdtsc asm)
	void End() { sub_100335e0(); }
	const CCycleCount &GetDuration() const { return m_Duration; }
	CCycleCount m_Duration;
};

class CVProfile;
extern CVProfile *g_109f3648;

class __declspec(dllimport) CVProfNode
{
public:
	bool ExitScope();
	void EnterScope();
	CVProfNode *GetSubNode(const char *pszName, int detailLevel, const char *pBudgetGroupName);
	const char *GetName() { return m_pszName; }
	CVProfNode *GetParent() { return m_pParent; }

	const char *m_pszName;	// 0x00
	CFastTimer m_Timer;	// 0x08
	int m_nRecursions;	// 0x10
	unsigned m_nCurFrameCalls;	// 0x14
	CCycleCount m_CurFrameTime;	// 0x18
	unsigned m_nPrevFrameCalls;
	CCycleCount m_PrevFrameTime;
	unsigned m_nTotalCalls;
	CCycleCount m_TotalTime;
	CCycleCount m_PeakTime;
	CVProfNode *m_pParent;	// 0x48
	CVProfNode *m_pChild;
	CVProfNode *m_pSibling;
	int m_BudgetGroupID;	// 0x54
};

class __declspec(dllimport) CVProfile
{
public:
	void EnterScope(const char *pszName, int detailLevel, const char *pBudgetGroupName, bool bAssertAccounted);
	void ExitScope();
	void PopGroup();

	char m_bVTuneGroupsEnabled;	// 0x0000
	char m_pad0001[3];
	int m_nVTuneGroupID;	// 0x0004
	int m_GroupIDStack[1024];	// 0x0008
	int m_nGroupStackDepth;	// 0x1008
	int m_enabled;	// 0x100c
	bool m_fAtRoot;	// 0x1010
	char m_pad1011[3];
	CVProfNode *m_pCurNode;	// 0x1014
	CVProfNode *m_pRoot;	// 0x1018 (stand-in for &m_Root)
};

inline bool CVProfNode::ExitScope()
{
	if (--m_nRecursions == 0 && m_nCurFrameCalls != 0)
	{
		CFastTimer *t = &m_Timer;
		if ((char)(int)t == -1) t->End(); else t->End();
		m_CurFrameTime += t->GetDuration();
		g_109f3648->PopGroup();
	}
	return (m_nRecursions == 0);
}

inline void CVProfile::EnterScope(const char *pszName, int detailLevel, const char *pBudgetGroupName, bool bAssertAccounted)
{
	if (m_enabled != 0 || !m_fAtRoot)
	{
		if (pszName != m_pCurNode->GetName())
		{
			m_pCurNode = m_pCurNode->GetSubNode(pszName, detailLevel, pBudgetGroupName);
		}
		m_pCurNode->EnterScope();
		m_fAtRoot = false;
	}
}

inline void CVProfile::ExitScope()
{
	if (!m_fAtRoot || m_enabled != 0)
	{
		if (m_pCurNode->ExitScope())
		{
			m_pCurNode = m_pCurNode->GetParent();
		}
		m_fAtRoot = (m_pCurNode == m_pRoot);
	}
}

class CVProfScope
{
public:
	CVProfScope(const char *pszName, int detailLevel, const char *pBudgetGroupName, bool bAssertAccounted)
	{
		g_109f3648->EnterScope(pszName, detailLevel, pBudgetGroupName, bAssertAccounted);
	}
	~CVProfScope()
	{
		g_109f3648->ExitScope();
	}
};

inline void VProfExitPlain(CVProfile *p)
{
	if (!p->m_fAtRoot || p->m_enabled != 0)
	{
		CVProfNode *n = p->m_pCurNode;
		if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0)
		{
			n->m_Timer.End();
			n->m_CurFrameTime += n->m_Timer.GetDuration();
			g_109f3648->PopGroup();
		}
		if (n->m_nRecursions == 0)
		{
			p->m_pCurNode = p->m_pCurNode->GetParent();
		}
		p->m_fAtRoot = (p->m_pCurNode == p->m_pRoot);
	}
}
class CVProfScopeI
{
public:
	CVProfScopeI(const char *pszName, int detailLevel, const char *pBudgetGroupName, bool bAssertAccounted)
	{
		g_109f3648->EnterScope(pszName, detailLevel, pBudgetGroupName, bAssertAccounted);
	}
	~CVProfScopeI()
	{
		VProfExitPlain(g_109f3648);
	}
};
#define VPROF(name) CVProfScope VProf_(name, 0, "Unaccounted", false)

struct CBaseEntitySlotsV : CBaseEntitySlots
{
	virtual void slot194(); virtual void slot195(); virtual void slot196(); virtual void slot197(); virtual void slot198(); virtual void slot199();
	virtual void slot200(); virtual void slot201(); virtual void slot202(); virtual void slot203(); virtual void slot204(); virtual void slot205(); virtual void slot206(); virtual void slot207(); virtual void slot208();
	virtual int slot209();
};
struct CBaseEntityV : CBaseEntity
{
	void sub_1003aca0();
	const Vector &GetBaseVelocity() const { return m_vecBaseVelocity; }
	const Vector &GetAbsVelocity() const { return m_vecVelocity3bc; }
	void SetBaseVelocity(const Vector &v) { m_vecBaseVelocity = v; }
	CBaseEntity *GetMoveParent() { return (CBaseEntity *)((CUnknown100290c0 *)g_10566458)->sub_100290c0(&m_hMoveParent); }
};
#define V ((CBaseEntityV *)this)

void CBaseEntity::sub_10040390()
{
	ScopeTrace scope("CBaseEntity::PhysicsSimulate", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	VPROF("CBaseEntity_PhysicsSimulate");

	if (m_pA8)
	{
		sub_1003ffa0();
		return;
	}

	CBaseEntity *pMoveParent = (CBaseEntity *)((CUnknown100290c0 *)g_10566458)->sub_100290c0(&m_hMoveParent);

	if ((vfunc94() == 0 && !pMoveParent) || vfunc94() == 7)
	{
		sub_100391f0();
		return;
	}

	if (!((CBaseEntitySlotsV *)this)->slot209())
		sub_100b3640(1);

	{
		CVProfScopeI VProfI_("CBaseEntity::PhysicsSimulate-BaseVelocity", 0, "Unaccounted", false);

		sub_10040220();

		if (((sub_100b3700() & 0x800000) == 0) && V->GetBaseVelocity() != g_1070d1b0)
		{
			if (FlagBit12(m_flags268))
				sub_100b1d10();
			Vector vecAbsVelocity;
			sub_10139500(&V->GetAbsVelocity().x, (float)(1.0 + gpGlobals->frametime * 0.5), &V->GetBaseVelocity().x, &vecAbsVelocity.x);
			sub_100b2770(vecAbsVelocity);
			V->SetBaseVelocity(g_1070d1b0);
		}
		sub_100b3640(0x800000);
	}

	int moveType = vfunc94();
	switch (moveType)
	{
	case 8:
		sub_10038cb0();
		break;
	case 0:
	case 7:
		sub_100391f0();
		break;
	case 11:
		sub_10039470();
		break;
	case 12:
		sub_100332c0();
		break;
	case 9:
		sub_100397c0();
		break;
	case 1:
		sub_10039ac0();
		break;
	case 4:
		((CBaseEntityV *)this)->sub_1003aca0();
		break;
	case 5:
	case 6:
		sub_1003f920();
		break;
	case 13:
		sub_1003a090();
		break;
	default:
		Warning("PhysicsSimulate: %s bad movetype %d", sub_1009f200(), vfunc94());
		break;
	}

	sub_1003ffa0();
}
// END FUNCTION
