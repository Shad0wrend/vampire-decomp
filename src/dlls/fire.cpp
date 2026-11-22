// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 65 blocks
#include "vampire.h"

// FUNCTION: 0x10108d90 size=0x47
#include "CFireSphere.h"

CFireSphere::CFireSphere(int *pList, int nCapacity, char bCheckVisible, const Vector *pCenter, float flRadius)
{
	m_pList = pList;
	m_nListCapacity = nCapacity;
	m_bCheckVisible = bCheckVisible;
	m_nListCount = 0;
	m_vecCenter = *pCenter;
	m_flRadiusSqr = flRadius * flRadius;
}
// END FUNCTION

// FUNCTION: 0x10108e00 size=0x27
#include "CUnknown10108e00.h"

bool CUnknown10108e00::sub_10108e00(int value)
{
	if (m_count >= m_capacity)
		return false;
	m_pData[m_count] = value;
	m_count++;
	return true;
}
// END FUNCTION

// FUNCTION: 0x10108e40 size=0xe0
#include "CBaseEntity.h"
#include "CFireSphere.h"
#include "CUnknown10108e00.h"
#include "CGlobalEntityList.h"
#include <string.h>

extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];

#define EV(n) virtual void ev##n();
#define EV10(p) EV(p##0) EV(p##1) EV(p##2) EV(p##3) EV(p##4) EV(p##5) EV(p##6) EV(p##7) EV(p##8) EV(p##9)

struct FireHandleEnt {
	virtual void ev0();
	virtual unsigned int *GetRefEHandle();
};

struct FireEnt {
	EV10(0) EV10(1) EV10(2) EV10(3) EV10(4) EV10(5) EV10(6) EV10(7) EV10(8) EV10(9)
	EV10(10) EV10(11) EV10(12) EV10(13) EV10(14) EV10(15) EV10(16) EV10(17) EV10(18) EV10(19)
	EV10(20)
	EV(210) EV(211) EV(212) EV(213) EV(214) EV(215) EV(216)
	virtual float *ev217();
	char m_pad[0x11c - 4];
	const char *m_pszClassname;

	bool sub_1010a8d0();
};

int CFireSphere::vfunc0(CBaseEntity *pHandleEntity)
{
	unsigned int h = *((FireHandleEnt *)pHandleEntity)->GetRefEHandle();
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *pSlot = &g_106eb5d8.m_Slots[h & 0x1fff];
		if (pSlot->m_Serial == (int)(h >> 13) && pSlot->m_pEntity) {
			FireEnt *pEnt = (FireEnt *)pSlot->m_pEntity->vfunc4();
			if (pEnt) {
				const char *pszClass = pEnt->m_pszClassname;
				if (!pszClass)
					pszClass = g_106b8540;
				if (_strcmpi(pszClass, "env_fire") == 0) {
					if (m_bCheckVisible && !pEnt->sub_1010a8d0())
						return 0;
					float *pOrigin = pEnt->ev217();
					float dx = m_vecCenter.x - pOrigin[0];
					float dy = m_vecCenter.y - pOrigin[1];
					float dz = m_vecCenter.z - pOrigin[2];
					if ((dx * dx + dz * dz) + dy * dy < m_flRadiusSqr && !((CUnknown10108e00 *)this)->sub_10108e00((int)pEnt))
						return 1;
				}
			}
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10108f60 size=0x49
#include "CFireSphere.h"

struct CFireSpherePartition
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12();
	virtual void vfunc13(int mask, const Vector *pOrigin, float flRadius, int bCoarse, CFireSphere *pIterator, int unused);
};

extern CFireSpherePartition *g_1070b24c;

// TARGET: sub_10108f60
int sub_10108f60(int *pList, int nCapacity, char bCheckVisible, const Vector *pCenter, float flRadius)
{
	CFireSphere sphere(pList, nCapacity, bCheckVisible, pCenter, flRadius);
	g_1070b24c->vfunc13(0x10, pCenter, flRadius, 0, &sphere, 0);
	return sphere.m_nListCount;
}
// END FUNCTION

// FUNCTION: 0x10108fd0 size=0x21
// TARGET: sub_10108fd0
int __cdecl sub_10108f60(int *pA, int b, int c, int d, int e);
bool __cdecl sub_10108fd0(int a1, int a2)
{
    if (sub_10108f60(&a2, 1, 1, a1, a2) <= 0) {
        return true;
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10109010 size=0x174
#include "UTIL_Trace.h"

// TARGET: sub_10109010
bool sub_10109010(const Vector *pStart, void *pIgnore)
{
	if (!pIgnore)
		return false;
	Ray_t ray;
	CGameTrace trace;
	Vector end;
	end = *pStart + Vector(0.0f, 0.0f, 0.1f);
	Vector mins(-20.0f, -20.0f, 0.0f);
	Vector maxs(20.0f, 20.0f, 20.0f);
	ray.Init(*pStart, end, mins, maxs);
	CTraceFilterSimple filter(0, 0);
	g_1070b254->vfunc4(&ray, 0x200400b, (CTraceFilterNoCharacterCollide *)&filter, &trace);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570((const Vector *)&trace.m_startpos, (const Vector *)&trace.m_endpos, 0xff, 0xff, 0, 1, -1.0f);
	if (trace.m_fraction != 1.0 || trace.m_startsolid)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x101091f0 size=0x2a7
#include "CBaseEntity.h"
#include "CGameTrace.h"
#include "CTraceFilterSimple.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738960.h"
#include "Ray_t.h"

bool sub_10108fd0(int a, int b);
void sub_10146570(const Vector *, const Vector *, int, int, int, int, float);
bool sub_10109010(Vector *pPos, int arg3);

bool sub_101091f0(Vector *pPos, int arg2, int arg3, unsigned char flags)
{
	if (!sub_10108fd0((int)pPos, arg2))
		return false; if (!(0x10 & (int)flags))
	{
		Vector vecStart = *pPos;
		Vector vecEnd = *pPos;
		vecStart.z += 1.0f;
		vecEnd.z -= 24.0f;
		Ray_t ray;
		ray.sub_1004f7a0((const float *)&vecStart, (const float *)&vecEnd);
		CTraceFilterSimple filter(0, 0);
		CGameTrace trace;
		g_1070b254->vfunc4(&ray, 0x200400b, (CTraceFilterNoCharacterCollide *)&filter, &trace);
		if (g_10738960.sub_1005f190())
			sub_10146570((Vector *)&trace, (Vector *)trace.m_endpos, 0xff, 0, 0, 1, -1.0f);
		if (trace.m_allsolid || trace.m_startsolid || trace.m_fraction == 1.0f)
			return false;
		int edict = trace.m_pEnt->m_pEdict2e0;
		if (engine->vfunc35(edict))
			return false;
	}
	if (!(!(!(!sub_10109010(pPos, arg3))))) { {
		Vector v = *pPos;
		v.x += 10.0f;
		if (!(sub_10108fd0((int)&v, arg2) && !sub_10109010(&v, arg3))) {
			v.y += 10.0f;
			if (sub_10108fd0((int)&v, arg2) && !sub_10109010(&v, arg3))
			{
				*pPos = v;
				return true;
			} else { v.y -= 20.0f;
			if (sub_10108fd0((int)&v, arg2) && !sub_10109010(&v, arg3))
			{
				*pPos = v;
				return true;
			} v.x -= 20.0f;
			if (!sub_10108fd0((int)&v, arg2) || sub_10109010(&v, arg3))
				return false; }
		} else {
		}
		*pPos = v;
	}
	return true; } return true;
}
// END FUNCTION

// FUNCTION: 0x10109550 size=0x106
#include "CFire.h"
#include "Vector.h"

struct CFireHandleSrc
{
	virtual void vfunc0();
	virtual unsigned int *vfunc1();
};

char sub_101091f0(Vector *pOrigin, float flRadius, int c, unsigned int nFlags);
int sub_10108f60(void *pBuf, int nMax, int a, Vector *pOrigin, float flRadius);
CFire *sub_10136580(const char *pszClass);

// TARGET: sub_10109550
bool sub_10109550(Vector *pOrigin, float flHeat, int a, int b, unsigned int nFlags, CFireHandleSrc *pOwner, int c)
{
	Vector vecPos = *pOrigin;
	if (!sub_101091f0(&vecPos, 16.0f, c, nFlags))
	{
		CFire *fires[16];
		int n = sub_10108f60(fires, 16, 1, pOrigin, 16.0f);
		for (int i = 0; i < n; i++)
			fires[i]->sub_1010b5c0(flHeat, 0);
		return false;
	}
	CFire *pFire = sub_10136580("env_fire");
	if (!pFire)
		return false;
	*(unsigned int *)((char *)pFire + 0x204) |= 0x80;
	pFire->vfunc103();
	pFire->sub_1010a450(&vecPos.x, flHeat, a, b, nFlags, c);
	pFire->sub_1010a7f0();
	if (pOwner)
		*(unsigned int *)((char *)pFire + 0x454) = *pOwner->vfunc1();
	else
		*(unsigned int *)((char *)pFire + 0x454) = 0xffffffff;
	return true;
}
// END FUNCTION

// FUNCTION: 0x101096b0 size=0x84
#include "Vector.h"
#include "CBaseEntity.h"
#include "CFire.h"

struct CFireScaleVar
{
	virtual void a0();
	virtual bool vfunc1();
	char m_pad0004[0x28 - 4];
	float m_flValue;
};
extern CFireScaleVar *g_10709394;
int sub_10108f60(int *pList, int nMax, char bFlag, const Vector *pOrigin, float flRadius);

// TARGET: sub_101096b0
void sub_101096b0(const Vector *pOrigin, float flRadius, float flFraction)
{
	float flScale = g_10709394->vfunc1() ? 0.0f : g_10709394->m_flValue;
	flScale = (1.0f - flFraction) * flScale;
	CFire *apFires[32];
	int n = sub_10108f60((int *)apFires, 0x20, 0, pOrigin, flRadius);
	for (int i = 0; i < n; i++)
		apFires[i]->sub_1010b840(flScale);
}
// END FUNCTION

// FUNCTION: 0x10109770 size=0x4e
#include "CBaseEntity.h"
#include "CFire.h"
int sub_10108f60(CFire **ppFires, int nMax, int a, float *pOrigin, float flRadius);

void sub_10109770(float *pOrigin, float flRadius, float flHeat)
{
	CFire *pFires[32];
	int n = sub_10108f60(pFires, 32, 0, pOrigin, flRadius);
	for (int i = 0; i < n; i++)
		pFires[i]->sub_1010b5c0(flHeat, 0);
}
// END FUNCTION

// FUNCTION: 0x101097e0 size=0x6
#include "CFire.h"
namespace lifted {
extern char g_1056cd58;
}
datamap_t * CFire::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1056cd58);
}
// END FUNCTION

// FUNCTION: 0x10109800 size=0x5
int * sub_10109840(void);
int * g_10709590 = ((int * (*)(int))sub_10109840)(0);
// END FUNCTION

// FUNCTION: 0x10109840 size=0xb0
class ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    ISaveRestoreOps *pSaveRestoreOps;
    void *inputFunc;
    datamap_t *td;
    int fieldSizeInBytes;
    int unk;
};
extern ISaveRestoreOps *g_1055dc70;
extern int g_1056cd58[2];
void sub_1000d33c();
void sub_10013e0d();
void sub_10004368();
void sub_10014f60();
void sub_10012c7e();
void sub_1000fb69();
void sub_1000f2c7();

int *sub_10109840()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 1, "m_flFuel", {0x45c, 0}, 1, 2 },
        { 15, "m_flDamageTime", {0x460, 0}, 1, 2 },
        { 1, "m_flMaxHeat", {0x478, 0}, 1, 2 },
        { 0, "CFireBurnThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000d33c },
        { 0, "CFireGoOutThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_10013e0d },
        { 1, "m_flFireSize", {0x468, 0}, 1, 6, "firesize" },
        { 1, "m_flAttackTime", {0x480, 0}, 1, 6, "fireattack" },
        { 4, "m_nFireType", {0x458, 0}, 1, 6, "firetype" },
        { 1, "m_flHeatLevel", {0x46c, 0}, 1, 6, "ignitionpoint" },
        { 1, "m_flDamageScale", {0x474, 0}, 1, 6, "damagescale" },
        { 4, "m_nCharDamage", {0x488, 0}, 1, 6, "char_damage" },
        { 0, "InputStartFire", {0, 0}, 1, 8, "StartFire", 0, (void *)sub_10004368 },
        { 1, "InputExtinguish", {0, 0}, 1, 8, "Extinguish", 0, (void *)sub_10014f60 },
        { 1, "InputExtinguishTemporary", {0, 0}, 1, 8, "ExtinguishTemporary", 0, (void *)sub_10012c7e },
        { 0, "InputEnable", {0, 0}, 1, 8, "Enable", 0, (void *)sub_1000fb69 },
        { 0, "InputDisable", {0, 0}, 1, 8, "Disable", 0, (void *)sub_1000f2c7 },
        { 10, "m_OnIgnited", {0x494, 0}, 1, 0x16, "OnIgnited", g_1055dc70 },
        { 10, "m_OnExtinguished", {0x4ac, 0}, 1, 0x16, "OnExtinguished", g_1055dc70 },
    };
    g_1056cd58[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1056cd58[0] = (int)&dataDesc[1];
    return g_1056cd58;
}
// END FUNCTION

// FUNCTION: 0x10109920 size=0x43
#include "platform.h"
#include "CFire.h"
void *sub_100aa720(int size);
extern char g_1056d8c8[];

// TARGET: env_fire
DLL_EXPORT CBaseEntity *env_fire()
{
	void *mem = sub_100aa720(0x4c4);
	CFire *p;
	if (mem)
		p = ((CFire *)mem)->sub_10109990();
	else
		p = 0;
	p->vfunc106(g_1056d8c8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10109990 size=0x6a
#include "CFire.h"
extern void *vt_1045d1c4[];
struct CFireSub { void sub_10002ddd(); };
struct CFireUnit : CFire {
    CBaseEntity *sub_100090fc(int a);
    char m_pad0004[0x450 - sizeof(CBaseEntity)];
    int m_f450, m_f454, m_f458, m_f45c, m_f460, m_f464;
    int m_pad468;
    int m_f46c;
    float m_f470;
    char m_pad474[0x480 - 0x474];
    int m_f480;
    char m_pad484[0x494 - 0x484];
    CFireSub m_s494;
    char m_pad495[0x4ac - 0x495];
    CFireSub m_s4ac;
};

CFire *CFire::sub_10109990()
{
    CFireUnit *u = (CFireUnit *)this;
    u->sub_100090fc(0);
    u->m_f450 = -1;
    u->m_f454 = -1;
    u->m_s494.sub_10002ddd();
    u->m_s4ac.sub_10002ddd();
    u->m_f45c = 0;
    u->m_f480 = 0;
    u->m_f460 = 0;
    u->m_f464 = 0;
    u->m_f458 = 0;
    u->m_f46c = 0;
    *(void ***)this = vt_1045d1c4;
    u->m_f470 = 8.0f;
    return this;
}
// END FUNCTION

// FUNCTION: 0x10109a20 size=0x26
#include "CFire.h"



// TARGET: CFire::sub_10109a20
void CFire::sub_10109a20(CBaseEntity *p)
{
    if (*(int *)((char *)p + 0x9c) != 0) {
        *(float *)((char *)this + 0x460) = gpGlobals->curtime;
    }
    CBaseEntity::vfunc174(p);
}
// END FUNCTION

// FUNCTION: 0x10109a60 size=0x149
#include "CBaseEntity.h"
#include "CFire.h"
#include "CCollisionProperty.h"

#define FV(n) virtual void s##n();
#define FV10(p) FV(p##0) FV(p##1) FV(p##2) FV(p##3) FV(p##4) FV(p##5) FV(p##6) FV(p##7) FV(p##8) FV(p##9)
#define FV100(p) FV10(p##0) FV10(p##1) FV10(p##2) FV10(p##3) FV10(p##4) FV10(p##5) FV10(p##6) FV10(p##7) FV10(p##8) FV10(p##9)

struct FireView_t {
	FV100(a) FV100(b)
	FV10(c0)
	FV(c10) FV(c11) FV(c12) FV(c13) FV(c14) FV(c15) FV(c16)
	virtual float *GetAbsOrigin();
	char pad[0x224 - 4];
	int flags224;
	char pad2[0x270 - 0x228];
	ICollideable coll;
	char pad3[0x2e0 - 0x274];
	int edict;
	char pad4[0x464 - 0x2e4];
	float f464;
	char pad5[0x470 - 0x468];
	float f470;
	const float *WorldAlignMins() { return coll.vfunc1(); }
	const float *WorldAlignMaxs() { return coll.vfunc2(); }
};

extern "C" __declspec(dllimport) int Q_snprintf(char *, int, const char *, ...);
void sub_10142aa0(const float *pOrigin, const float *pMins, const float *pMaxs, int r, int g, int b, int a, float duration);
void sub_101434b0(int index, int line, const char *pszText, float duration, int r, int g, int b, int a);

inline void EntityBounds(FireView_t *pEntity, int r, int g, int b, int a, float flDuration)
{
	const float *pMins = pEntity->WorldAlignMins();
	sub_10142aa0(pEntity->GetAbsOrigin(), pMins, pEntity->WorldAlignMaxs(), r, g, b, a, flDuration);
}

void CFire::vfunc123()
{
	FireView_t *p = (FireView_t *)this;
	if (p->flags224 & 4) {
		if (p->f464 > gpGlobals->curtime && p->f470 > 0.0f) {
			EntityBounds(p, 88, 255, 128, 0, 0);
			char tempstr[512];
			Q_snprintf(tempstr, sizeof(tempstr), "Heat: %.1f", p->f470);
			int t0 = p->edict; sub_101434b0(engine->vfunc35(t0), 1, tempstr, 0, 255, 255, 255, 255);
		} else if (!sub_1010a8d0()) {
			EntityBounds(p, 88, 88, 128, 0, 0);
			return;
		}
	}
	sub_100a0130();
}
// END FUNCTION

// FUNCTION: 0x10109c10 size=0x36
#include "CFire.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseEntity *CFire::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x4ac))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x494))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10109c60 size=0x70
#include "CFire.h"
struct S248 {
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6();
	virtual void vfunc7(int h);
};
struct S22c {
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9();
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7(); virtual void c8(); virtual void c9();
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4();
	virtual int vfunc35(int ent, int n, const char *s);
};
extern S248 *g_1070b248;
extern S22c *g_1070b22c;
void CFire::vfunc180()
{
	int ent = *(int *)((char *)this + 0x2e0);
	g_1070b248->vfunc7(g_1070b22c->vfunc35(ent, 2, "environmental/fire/fire_crackeling.wav"));
	int ent2 = *(int *)((char *)this + 0x2e0);
	g_1070b248->vfunc7(g_1070b22c->vfunc35(ent2, 2, "environmental/fire/fire_roaring.wav"));
	sub_1010b3c0();
	CBaseEntity::vfunc180();
}
// END FUNCTION

// FUNCTION: 0x10109cf0 size=0x56
#include "CBaseEntity.h"
#include "CFire.h"
struct CFireFieldView { char m_pad[0x458]; int m_n458; };
void sub_101d0ec0(const char *);
void CFire::vfunc104()
{
	CFireFieldView *f = (CFireFieldView *)this;
	if (f->m_n458 == 0)
		sub_101d0ec0("_firesmoke");
	if (f->m_n458 == 1)
		sub_101d0ec0("_plasma");
	enginesound->vfunc0("environmental/fire/fire_crackeling.wav", 0);
	enginesound->vfunc0("environmental/fire/fire_roaring.wav", 0);
}
// END FUNCTION

// FUNCTION: 0x10109d70 size=0x12
#include "vampire.h"

void __fastcall sub_10109e90(void *pThis);

// TARGET: sub_10109d70
void __fastcall sub_10109d70(void *pThis, int, int)
{
	if (*((char *)pThis + 0x490))
		sub_10109e90(pThis);
}
// END FUNCTION

// FUNCTION: 0x10109da0 size=0xa
void __fastcall sub_10109da0(char *self, int, int)
{
	self[0x490] = 1;
}
// END FUNCTION

// FUNCTION: 0x10109dc0 size=0x1e
// TARGET: CUnk10109dc0::sub_10109dc0
struct CUnk10109dc0
{
    char pad[0x490];
    char m_490;
    char sub_1010a8d0();
    void sub_1010b9d0();
    void sub_10109dc0(int a);
};
void CUnk10109dc0::sub_10109dc0(int a)
{
    m_490 = 0;
    if (sub_1010a8d0())
    {
        sub_1010b9d0();
    }
}
// END FUNCTION

// FUNCTION: 0x10109df0 size=0x3f
#include "vampire.h"

struct CUnknownInput10109df0
{
    char m_pad00[8];
    float m_flValue;
    char m_pad0c[0x18 - 0xc];
    int m_nType;
};

struct CUnknownTimer10109df0
{
    void sub_10109df0(CUnknownInput10109df0 *pInput);
    void sub_100121f2(float fl);
    char m_pad0000[0x204];
    unsigned int m_flags204;
};

// TARGET: CUnknownTimer10109df0::sub_10109df0
void CUnknownTimer10109df0::sub_10109df0(CUnknownInput10109df0 *pInput)
{
    float flValue;
    m_flags204 &= 0xfffffffe;
    if (pInput->m_nType == 1)
    {
        flValue = pInput->m_flValue;
    }
    else
    {
        flValue = 0.0f;
    }
    sub_100121f2(flValue);
}
// END FUNCTION

// FUNCTION: 0x10109e40 size=0x31
struct inputdata_t { char pad[8]; float m_fl; char pad2[0xc]; int m_fieldType; };

struct S10109e40 {
	void sub_100121f2(float f);
	// TARGET: S10109e40::sub_10109e40
	void sub_10109e40(inputdata_t &in);
};

void S10109e40::sub_10109e40(inputdata_t &in)
{
	float f;
	if (in.m_fieldType == 1)
		f = in.m_fl;
	else
		f = 0.0f;
	sub_100121f2(f);
}
// END FUNCTION

// FUNCTION: 0x10109e90 size=0x206
#include "CFire.h"
#include "CTraceFilterSimple.h"
#include "Ray_t.h"
struct FireTrace { float startpos[3]; float endpos[3]; char rest[0x54 - 0x18]; };
struct IFireTrace { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void TraceRay(const Ray_t &ray, unsigned mask, CTraceFilterSimple *filter, FireTrace *tr); };
struct IFireClient { virtual void v0(); virtual bool v1(); char pad[0x28]; void *m2c; };
extern IFireTrace *g_1070b254;
extern IFireClient *g_10738964;
void sub_10146570(void *, void *, int, int, int, int, float);
struct FireView {
	char pad0[0x450];
	EHANDLE m_h450;
	int pad454;
	int m_n458;
	char pad45c[0x468 - 0x45c];
	float m_f468;
	char pad46c[0x480 - 0x46c];
	int m_n480;
};
typedef const Vector *(__fastcall *FireOriginFn)(void *);
#define FIRE_ORIGIN(p) ((*(FireOriginFn **)(p))[217](p))
inline void FireTraceLine(const Vector &start, const Vector &end, unsigned mask, void *pass, int group, FireTrace *tr)
{
	Ray_t ray;
	ray.Init(start, end);
	CTraceFilterSimple filter(pass, group);
	g_1070b254->TraceRay(ray, mask, &filter, tr);
}
void CFire::sub_10109e90()
{
	FireView *v = (FireView *)this;
	if (v->m_h450.Get())
		return;
	Vector vecOrigin;
	if (m_flags204 & 0x10) {
		vecOrigin = *FIRE_ORIGIN(this);
	} else {
		FireTrace tr;
		Vector end;
		const Vector &o = *FIRE_ORIGIN(this);
		end.x = o.x; end.y = o.y; end.z = o.z - 1024.0f;
		FireTraceLine(*FIRE_ORIGIN(this), end, 0x4003, this, 0, &tr);
		if (!g_10738964->v1() && g_10738964->m2c)
			sub_10146570(&tr, tr.endpos, 0xff, 0, 0, 1, -1.0f);
		vecOrigin.x = tr.endpos[0]; vecOrigin.y = tr.endpos[1]; vecOrigin.z = tr.endpos[2];
	}
	m_flags204 |= 4;
	sub_1010a450(&vecOrigin.x, v->m_f468, v->m_n480, 0x41f00000, m_flags204, v->m_n458);
	sub_1010a7f0();
}
// END FUNCTION

// FUNCTION: 0x1010a130 size=0x18b
#include "CBaseEntity.h"
#include "CFire.h"
#include "CEntityVSlots.h"
#include "CUnknown1020a240.h"

struct CFireFields
{
	char m_pad0000[0x19c];
	unsigned int m_nFlags19c;
	char m_pad01a0[0x1fc - 0x1a0];
	int m_n1fc;
	char m_pad0200[4];
	unsigned int m_nSpawnFlags;
	char m_pad0208[0x458 - 0x208];
	int m_n458;
	int m_n45c;
	char m_pad0460[0x468 - 0x460];
	float m_flSize;
	float m_flHeat;
	float m_flHeatLevel;
	char m_pad0474[0x480 - 0x474];
	int m_n480;
	char m_pad0484[0x490 - 0x484];
	unsigned char m_bStartDisabled;
};

struct V3 { float x, y, z; void Init(float a, float b, float c) { x = a; y = b; z = c; } };

CBaseEntity *sub_1020a0a0(const char *pszClass, const float *pOrigin, const float *pAngles);
void sub_10011432(CBaseEntity *pEnt, const float *pMins, const float *pMaxs);
void sub_10014614(CBaseEntity *pEnt);

// TARGET: CFire::vfunc103
void CFire::vfunc103()
{
	CFireFields *f = (CFireFields *)this;
	CBaseEntity::vfunc103();
	vfunc104();
	f->m_n1fc = 0;
	f->m_nFlags19c |= 0x40;
	{
		float maxs[3], mins[3];
		maxs[0] = 8.0f;
		maxs[1] = 8.0f;
		maxs[2] = 8.0f;
		mins[0] = -8.0f;
		mins[1] = -8.0f;
		mins[2] = 0;
		sub_10011432(this, mins, maxs);
	}
	f->m_flHeatLevel = f->m_flHeat * 0.05;
	f->m_flHeat = 0;
	sub_1010a450((const float *)((CEntityVSlots *)this)->slot217(), f->m_flSize, f->m_n480, f->m_n45c, f->m_nSpawnFlags, f->m_n458);
	f->m_bStartDisabled = ~(f->m_nSpawnFlags >> 8) & 1;
	Vector *pAngles = ((CEntityVSlots *)this)->slot219();
	CUnknown1020a240 *pFire = (CUnknown1020a240 *)sub_1020a0a0("env_fire", (const float *)((CEntityVSlots *)this)->slot217(), (const float *)pAngles);
	if (pFire) {
		pFire->sub_1020a240("env_fire entities have been removed from the game.", 255, 0, 0, 255);
		pFire->sub_1020a240("Please use env_particle entities instead.", 255, 0, 0, 255);
		float flHalf = f->m_flSize * 0.5f;
		flHalf = flHalf * 0.5f;
		V3 mins2, maxs2;
		mins2.z = 0;
		maxs2.Init(flHalf, flHalf, f->m_flSize);
		mins2.x = -flHalf;
		mins2.y = -flHalf;
		sub_10011432((CBaseEntity *)pFire, &mins2.x, &maxs2.x);
	}
	sub_10014614(this);
}
// END FUNCTION

// FUNCTION: 0x1010a330 size=0x27
#include "CFire.h"

// TARGET: CFire::vfunc113
void CFire::vfunc113()
{
    CBaseEntity::vfunc113();
    if (*(unsigned char *)((char *)this + 0x204) & 4) {
        *(int *)((char *)this + 0x46c) = *(int *)((char *)this + 0x478);
        sub_10109e90();
    }
}
// END FUNCTION

// FUNCTION: 0x1010a370 size=0xa4
#include "CFire.h"
#include "CBaseFire.h"
#include "CEntityVSlots.h"

struct FireSmokeSlots
{
	EVS(0) virtual unsigned int *slot1(); EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19)
	EVS10(20) EVS10(21) EVS10(22) EVS10(23)
	EVS(240) EVS(241) EVS(242)
	virtual void slot243(int on);
};

struct CFireView : CFire
{
	char m_pad03e0[0x450 - sizeof(CFire)];
	unsigned int m_hSmoke450;
	char m_pad0454[4];
	int m_n458;
};

CBaseFire *sub_10002e32(const char *pszClassname);
void sub_100043cc(CBaseFire *pEnt, Vector *pPosition, int a);

// TARGET: CFire::sub_1010a370
void CFire::sub_1010a370(int a, float b)
{
	CFireView *pThis = (CFireView *)this;
	CBaseFire *pSmoke = sub_10002e32("_firesmoke");
	pSmoke->sub_100575a0((~m_flags204 >> 1) & 1);
	pSmoke->sub_100575e0((~m_flags204 >> 5) & 1);
	pThis->m_n458 = 0;
	m_nTakeDamage = 2;
	sub_100043cc(pSmoke, ((CEntityVSlots *)this)->slot217(), 0);
	((FireSmokeSlots *)pSmoke)->slot103();
	pSmoke->sub_100a0670(this, 0);
	((FireSmokeSlots *)pSmoke)->slot243(m_flags204 & 4);
	pThis->m_hSmoke450 = *((FireSmokeSlots *)pSmoke)->slot1();
}
// END FUNCTION

// FUNCTION: 0x1010a450 size=0x2d5
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CFire.h"
#include "CCollisionProperty.h"
#include "CUnknown101d1460.h"
#include "ScopeTrace.h"
#include "CEHandleGet.h"
#include "Ray_t.h"

void sub_101cf5c0(CBaseEntity *pEnt, const Vector *pVec, char bUpdateTriggers);

inline Vector Fire_WorldToLocal(const CUnknown101d1460 &mat, const Vector &vVec)
{
	Vector tmp = vVec;
	tmp.x -= mat.m_m[3];
	tmp.y -= mat.m_m[7];
	tmp.z -= mat.m_m[11];
	Vector res;
	res.sub_100f2f90(
		mat.m_m[0] * tmp.x + mat.m_m[4] * tmp.y + mat.m_m[8] * tmp.z,
		mat.m_m[1] * tmp.x + mat.m_m[5] * tmp.y + mat.m_m[9] * tmp.z,
		mat.m_m[2] * tmp.x + mat.m_m[6] * tmp.y + mat.m_m[10] * tmp.z);
	return res;
}

// TARGET: CFire::sub_1010a450
void CFire::sub_1010a450(const float *pOrigin, float flSize, int a, int b, unsigned int nFlags, int c)
{
	CFireEntityFields *f = (CFireEntityFields *)this;

	f->m_flScale480 = *(float *)&a;
	m_flags204 = nFlags;
	f->m_nType458 = c;

	if (nFlags & 1)
		*(float *)&b = g_104454c4;
	f->m_flHeat45c = *(float *)&b;
	if (*(float *)&b != g_104454c4)
		m_flags204 = nFlags | 0x80;

	Vector localOrigin = *(const Vector *)pOrigin;
	if (EHandle_Get(m_hMoveParent))
	{
		CUnknown101d1460 parentMatrix;
		parentMatrix.sub_101d1460(((CBaseEntity *)EHandle_Get(m_hMoveParent))->m_pEdict2e0);
		localOrigin = Fire_WorldToLocal(parentMatrix, *(const Vector *)pOrigin);
	}

	sub_101cf5c0(this, &localOrigin, 0);

	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(2);
	}
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->AddSolidFlags(8);
	}

	sub_100b3b00();

	float flHalf = flSize * 0.00390625f;
	flHalf = flHalf * 64.0f;
	f->m_flSize468 = flSize;
	f->m_flFade478 = flHalf;
	if (m_flags204 & 8)
		f->m_flHeat46c = flHalf;
	*(int *)&f->m_flLastFade47c = 0;
}
// END FUNCTION

// FUNCTION: 0x1010a7f0 size=0xa1
#include "CBaseEntity.h"
#include "CFire.h"
#include "CSceneEntity.h"

struct FireStartView_t {
	char pad[0x458];
	int n458;
	char pad45c[0x460 - 0x45c];
	int n460;
	char pad464[0x468 - 0x464];
	float flSize;
	char pad46c[0x494 - 0x46c];
	CSceneOutputList output494;
};

void sub_101cf390(CBaseEntity *pEnt, const float *pMins, const float *pMaxs);

void CFire::sub_1010a7f0()
{
	FireStartView_t *pView = (FireStartView_t *)this;
	float flHalf = pView->flSize * 0.5f;
	float flQuarter = flHalf * 0.5f;
	Vector vecMaxs(flQuarter, flQuarter, pView->flSize);
	Vector vecMins(-flQuarter, -flQuarter, 0.0f);
	sub_101cf390(this, &vecMins.x, &vecMaxs.x);
	sub_1010a370(pView->n458, pView->flSize * 0.00390625f);
	pView->output494.sub_100cd660(this, this, 0);
	void (CFire::*pfnThink)() = &CFire::sub_1010b430;
	sub_100ac4e0(*(int *)&pfnThink, 0, 0);
	pView->n460 = 0;
	sub_1010b430();
}
// END FUNCTION

// FUNCTION: 0x1010a8d0 size=0x1b
// TARGET: sub_1010a8d0
struct CUnk1010a8d0 {
    char pad[0x46c];
    float m_fl46c;
    char sub_1010a8d0();
};
char CUnk1010a8d0::sub_1010a8d0()
{
    if (m_fl46c > 0.0f) {
        return 1;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1010a900 size=0x1f8
#include "CFire.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "engineiface.h"
#include "engineserver.h"

void CFire::sub_1010a900(float flFade)
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);

	float flVolume = flFade * ((CFireEntityFields *)this)->m_flSize468;

	float flClamped = flVolume * 0.015625f;
	if (flClamped > 1.0f)
		flFade = 1.0f;
	else if (flClamped < 0.0f)
		flFade = 0.0f;
	else
		flFade = flClamped;

	int pitch = enginerandom->vfunc2(0x63, 0x69);
	int edict = m_pEdict2e0;
	enginesound->vfunc2(&filter, engine->vfunc35(edict), 2,
		"environmental/fire/fire_crackeling.wav", flFade, 0x69, 3, pitch, 0, 0, 1, 0);

	flClamped = (flVolume - 48.0f) * 0.008928572f;
	if (flClamped > 1.0f)
		flFade = 1.0f;
	else if (flClamped < 0.0f)
		flFade = 0.0f;
	else
		flFade = flClamped;

	pitch = enginerandom->vfunc2(0x60, 0x65);
	edict = m_pEdict2e0;
	enginesound->vfunc2(&filter, engine->vfunc35(edict), 1,
		"environmental/fire/fire_roaring.wav", flFade, 0x69, 3, pitch, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x1010ab80 size=0x685
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CBaseEntity.h"
#include "CFire.h"
#include "ConVar.h"
#include "ehandle.h"
#include "globalvars.h"
#include "UTIL_Trace.h"
#include "CUnknown10738964.h"
#include "CVDmg_t.h"
#include "CUnknown101c26d0.h"
#include "CUnknown101f4c80.h"

#define FV(n) virtual void s##n();
#define FV10(p) FV(p##0) FV(p##1) FV(p##2) FV(p##3) FV(p##4) FV(p##5) FV(p##6) FV(p##7) FV(p##8) FV(p##9)
#define FV100(p) FV10(p##0) FV10(p##1) FV10(p##2) FV10(p##3) FV10(p##4) FV10(p##5) FV10(p##6) FV10(p##7) FV10(p##8) FV10(p##9)

struct FireColl_t {
	virtual void c0();
	virtual float *OBBMins();
	virtual float *OBBMaxs();
};

struct FCvar_t {
	virtual void v0();
	virtual char vfunc1();
	char pad[0x28 - 4];
	float val;
};

struct FireV_t {
	FV100(a)
	FV10(b0) FV10(b1) FV10(b2) FV10(b3) FV10(b4) FV10(b5) FV10(b6) FV10(b7) FV10(b8)
	FV(b90) FV(b91)
	virtual float *Center(float *out);	// slot 192
	FV(c3) FV(c4) FV(c5) FV(c6) FV(c7) FV(c8) FV(c9)
	FV10(d0) FV(d10) FV(d11) FV(d12) FV(d13) FV(d14) FV(d15) FV(d16)
	virtual float *GetAbsOrigin();	// 217
	FV10(f0) FV10(f1) FV(f20) FV(f21) FV(f22) FV(f23)
	virtual void Fade(float a, float b);	// 242
	char pad[0x11c - 4];
	const char *classname;
	char pad2[0x1fc - 0x120];
	int takedamage;
	char pad3[0x270 - 0x200];
	FireColl_t coll;
	char pad4[0x450 - 0x274];
	EHANDLE h450;
	char pad5[0x45c - 0x454];
	float f45c;
	float f460;
	float f464;
	float f468;
	float f46c;
	float f470;
	float f474;
	float f478;
	float f47c;
	float f480;
	char pad6[4];
	int dmg488;
};

extern float g_104454c4;
extern float g_104454d0;
extern double g_1044fab0;
#define FG(g) (((FCvar_t *)g)->vfunc1() ? g_104454c4 : ((FCvar_t *)g)->val)
#define FGS(g) (((FCvar_t *)g)->vfunc1() ? 0.0f : ((FCvar_t *)g)->val)
void sub_10142aa0(const float *pOrigin, const float *pMins, const float *pMaxs, int r, int g, int b, int a, float duration);
int sub_101cca80(FireV_t **list, int n, const float *mins, const float *maxs, int a, int b);
extern "C" int _strcmpi(const char *, const char *);

void CFire::vfunc241(float flDelay)
{
	FireV_t *p = (FireV_t *)this;
	FireV_t *list[256];
	FireV_t *neighbors[16];
	if (p->f45c != g_104454c4) {
		p->f45c -= flDelay;
		if (p->f45c <= g_104454c4) {
			sub_1010b530(1.0f);
			return;
		}
	}
	float size = p->f46c * 0.015625f;
	int nDamage;
	int nNeighbors;
	bool bDamage;
	if (p->f46c != p->f47c) {
		p->f47c = p->f46c;
		((FireV_t *)p->h450.Get())->Fade(size, 0.5f);
		sub_1010a900(p->f46c / p->f478);
	}
	float ratio;
	if (p->f480 > g_104454c4)
		ratio = p->f478 / p->f480;
	else
		ratio = p->f478;
	sub_1010b5c0(FG(g_1070934c) * ratio * flDelay, 1);
	size = size * p->f46c;
	double frac = p->f46c / p->f478;
	if (frac > 1.0)
		frac = 1.0;
	else if (frac < g_1044fab0)
		frac = g_1044fab0;
	float half = g_104454d0 * (frac * p->f468) * 0.5;
	if (half < 16.0f)
		half = 16.0f;
	float maxs[3];
	float mins[3];
	mins[0] = -half;
	mins[1] = -half;
	maxs[0] = half;
	maxs[1] = half;
	maxs[2] = frac * p->f468;
	mins[2] = 0;
	((CBaseEntity *)this)->sub_100adf10(mins, maxs);
	if (!g_10709504->vfunc1() && g_10709504->m_n2c) {
		float dur = FGS(g_10709304);
		float *pMins = p->coll.OBBMins();
		sub_10142aa0(p->GetAbsOrigin(), pMins, p->coll.OBBMaxs(), 0xff, 100, 100, 0, dur);
	}
	float *o = p->GetAbsOrigin();
	mins[0] += o[0];
	mins[1] += o[1];
	mins[2] += o[2];
	o = p->GetAbsOrigin();
	maxs[0] += o[0];
	maxs[1] += o[1];
	maxs[2] += o[2];
	int count = sub_101cca80(list, 0x100, mins, maxs, 0, 0);
	nNeighbors = 0;
	bDamage = false;
	nDamage = 0;
	if (p->f460 <= gpGlobals->curtime) {
		p->f460 = FG(g_10709304) + gpGlobals->curtime;
		float a = FGS(g_107092bc);
		float b = FGS(g_107093e4);
		nDamage = (int)((b * p->f474 * size + a) * FG(g_10709304));
		if (nDamage != 0)
			bDamage = true;
	}
	for (int i = 0; i < count; i++) {
		FireV_t *e = list[i];
		if (e == p || _strcmpi(e->classname ? e->classname : g_106b8540, "env_fire") != 0) {
			if (e->takedamage == 0) {
				list[i] = 0;
			} else if (bDamage) {
				float t1[3], t2[3];
				float *a = e->Center(t1);
				float *b = p->Center(t2);
				CGameTrace tr;
				UTIL_TraceLine(*(Vector *)b, *(Vector *)a, 0x4003, e, 0, &tr);
				if (tr.m_fraction == 1.0 && !tr.m_startsolid) {
					CVDmg_t info;
					info.sub_101fa8d0(2, 8, p->dmg488);
					CUnknown101c26d0 d;
					d.sub_101c26d0(this, this, (float)nDamage, 8, 0, (int)&info, -1);
					((CBaseEntity *)e)->sub_100a1250(&d);
					info.sub_101fa680();
				}
			}
		} else if ((unsigned)nNeighbors < 16) {
			neighbors[nNeighbors++] = e;
		}
	}
	float x = FG(g_1070959c);
	if (nNeighbors > 0) {
		size = x * size * flDelay / nNeighbors;
		for (int j = 0; j < nNeighbors; j++)
			((CFire *)neighbors[j])->sub_1010b5c0(size, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x1010b3c0 size=0x45
#include "CBaseEntity.h"
#include "CFire.h"

#define HS(n) virtual void n();
#define HS10(p) HS(p##0) HS(p##1) HS(p##2) HS(p##3) HS(p##4) HS(p##5) HS(p##6) HS(p##7) HS(p##8) HS(p##9)

struct CFireEntitySlots
{
	HS10(a0) HS10(a1) HS10(a2) HS10(a3) HS10(a4) HS10(a5) HS10(a6) HS10(a7) HS10(a8) HS10(a9)
	HS10(b0) HS10(b1) HS10(b2) HS10(b3) HS10(b4) HS10(b5) HS10(b6) HS10(b7) HS10(b8) HS10(b9)
	HS10(c0) HS10(c1) HS10(c2) HS10(c3)
	HS(i0) HS(i1) HS(i2)
	virtual void slot243(int a);
};

struct CFireSmokeView
{
	char m_pad[0x450];
	EHANDLE m_hSmoke;
};

void sub_101cd940(CBaseEntity *pEnt);

void CFire::sub_1010b3c0()
{
	CFireEntitySlots *pSmoke = (CFireEntitySlots *)((CFireSmokeView *)this)->m_hSmoke.Get();
	if (pSmoke) {
		pSmoke->slot243(0);
		sub_101cd940((CBaseEntity *)pSmoke);
	}
}
// END FUNCTION

// FUNCTION: 0x1010b430 size=0x22
#include "CFire.h"
#include "globalvars.h"

// TARGET: CFire::sub_1010b430
void CFire::sub_1010b430()
{
	m_flNextThink = gpGlobals->curtime + 0.1;
	vfunc241(0.1f);
}
// END FUNCTION

// FUNCTION: 0x1010b470 size=0x82
#include "CBaseEntity.h"
#include "CFire.h"
#include "CEHandleGet.h"


struct FireView_t {
	char pad[0x450];
	unsigned int hSmoke;
	char pad2[0x48c - 0x454];
	float flBurnOutTime;
};

struct SmokeView_t {
	char pad[0x458];
	float flLifetime;
};


void CFire::sub_1010b470()
{
	FireView_t *pFire = (FireView_t *)this;
	if (pFire->flBurnOutTime < gpGlobals->curtime) {
		sub_1010b9d0();
	} else {
		SmokeView_t *pSmoke = (SmokeView_t *)EHandle_Get(pFire->hSmoke);
		if (pSmoke)
			sub_1010a900((pFire->flBurnOutTime - gpGlobals->curtime) / pSmoke->flLifetime);
	}
	m_flNextThink = gpGlobals->curtime + 0.1;
}
// END FUNCTION

// FUNCTION: 0x1010b530 size=0x4b
#include "CFire.h"
void CFire::sub_1010b530(float flTime)
{
	void (CFire::*pfn)() = &CFire::sub_1010b470;
	sub_1010b7d0(0, *(int *)&flTime);
	sub_100ac4e0(*(int *)&pfn, 0, 0);
	*(float *)((char *)this + 0x48c) = flTime + gpGlobals->curtime;
	m_flNextThink = gpGlobals->curtime + 0.1;
}
// END FUNCTION

// FUNCTION: 0x1010b5a0 size=0x5
#include "CFire.h"
int CFire::vfunc142(struct CTakeDamageInfo *a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1010b5c0 size=0x193
#include "CBaseEntity.h"
#include "CFire.h"
#include "ehandle.h"

struct CFireConVar {
	virtual void vfunc0();
	virtual char vfunc1();
	char m_pad0004[0x24];
	float m_f28;
};

struct CFireGlobals {
	float m_f00, m_f04, m_f08;
	float m_curtime;	// 0x0c
};

struct CFireHeatView {
	char m_pad0000[0x450];
	EHANDLE m_h450;
	char m_pad0454[0x464 - 0x454];
	float m_f464;
	char m_pad0468[0x46c - 0x468];
	float m_f46c;
	float m_f470;
	char m_pad0474[0x478 - 0x474];
	float m_f478;
	char m_pad047c[0x490 - 0x47c];
	char m_b490;
};

extern CFireConVar *g_1070942c;
extern CFireConVar *g_107094bc;
extern CFireGlobals *g_1070b228;
extern const float g_104454c4;

void CFire::sub_1010b5c0(float flHeat, char bInstant)
{
	CFireHeatView *v = (CFireHeatView *)this;
	if (v->m_b490) {
		if (!bInstant && sub_1010a8d0()) {
			flHeat = (g_1070942c->vfunc1() ? g_104454c4 : g_1070942c->m_f28) * flHeat;
		}
		v->m_f464 = g_1070b228->m_curtime + 0.5;
		bool bWasOut = v->m_f46c <= g_104454c4;
		if (v->m_f470 > g_104454c4) {
			float flAmount = (g_107094bc->vfunc1() ? g_104454c4 : g_107094bc->m_f28) * flHeat;
			if (flAmount > v->m_f470) {
				float flRate = g_107094bc->vfunc1() ? g_104454c4 : g_107094bc->m_f28;
				float flLeft = v->m_f470 / flRate;
				v->m_f470 = 0;
				flHeat = flHeat - flLeft;
			} else {
				v->m_f470 -= flAmount;
				flHeat = g_104454c4;
			}
		}
		flHeat = flHeat + v->m_f46c;
		v->m_f46c = flHeat;
		if (bWasOut && flHeat > g_104454c4 && !v->m_h450.Get())
			sub_10109e90();
		if (v->m_f46c > v->m_f478)
			v->m_f46c = v->m_f478;
	}
}
// END FUNCTION

// FUNCTION: 0x1010b7d0 size=0x4a
#include "ehandle.h"
#include "CBaseEntity.h"
#include "CFire.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##a) S10(p##b) S10(p##c) S10(p##d) S10(p##e) S10(p##f) S10(p##g) S10(p##h) S10(p##i) S10(p##j)

struct CSmokeSlotView
{
	S100(qa) S100(qb)
	S10(qc) S10(qd) S10(qe) S10(qf)
	virtual void s240(); virtual void s241();
	virtual void vfunc242(float flSize, float flTime);
};

struct CFireSmokeView
{
	char m_pad0000[0x450];
	CHandle<CSmokeSlotView> m_hSmoke;
};

// TARGET: CFire::sub_1010b7d0
void CFire::sub_1010b7d0(float flSize, float flTime)
{
	CSmokeSlotView *pSmoke = ((CFireSmokeView *)this)->m_hSmoke.Get();
	if (pSmoke)
		pSmoke->vfunc242(flSize, flTime);
}
// END FUNCTION

// FUNCTION: 0x1010b840 size=0x133
#include "CBaseEntity.h"
#include "CFire.h"
#include "ConVar.h"


struct CFireBurnView
{
	char m_pad0000[0x464];
	float m_flBurnOut;
	char m_pad0468[4];
	float m_flHeat;
	float m_flLevel;
	char m_pad0474[4];
	float m_flRate;
	char m_pad047c[4];
	float m_flFade;
	char m_pad0484[0x490 - 0x484];
	char m_bBurning;
};

extern ConVar *g_1070954c;
extern ConVar *g_10709474;
extern float g_104454c4;
float sub_1013d400(float a, float b, float c);

void CFire::sub_1010b840(float flTime)
{
	CFireBurnView *pView = (CFireBurnView *)this;
	if (!pView->m_bBurning)
		return;
	pView->m_flBurnOut = gpGlobals->curtime + 0.5;
	bool bWasBurning = pView->m_flHeat > g_104454c4;
	pView->m_flHeat -= flTime;
	pView->m_flLevel += (g_1070954c->vfunc1() ? g_104454c4 : g_1070954c->m_fValue) * flTime;
	if ((g_10709474->vfunc1() ? g_104454c4 : g_10709474->m_fValue) < pView->m_flLevel)
		pView->m_flLevel = g_10709474->vfunc1() ? g_104454c4 : g_10709474->m_fValue;
	float flTarget = pView->m_flRate * 0.3125f;
	pView->m_flFade = sub_1013d400(flTarget, pView->m_flFade, gpGlobals->frametime + gpGlobals->frametime);
	if (pView->m_flHeat <= g_104454c4)
	{
		pView->m_flHeat = 0;
		if (bWasBurning)
			sub_1010b9d0();
	}
}
// END FUNCTION

// FUNCTION: 0x1010b9d0 size=0x122
#include "CBaseEntity.h"
#include "CFire.h"
#include "COutputEvent.h"
#include "IVEngineServer.h"

struct CFireView
{
	char m_pad0000[0x46c];
	float m_flHeat46c;
	char m_pad0470[0x47c - 0x470];
	float m_flHeat47c;
	char m_pad0480[0x4ac - 0x480];
	COutputEvent m_OnExtinguished;
};
struct EngineSoundView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6();
	virtual void StopSound(int nEntIndex, int nChannel, const char *pszSample);
};
extern IVEngineServer *g_1070b22c;
extern EngineSoundView *g_1070b248;
void sub_101cd940(CBaseEntity *pEntity);
void sub_101cf390(CBaseEntity *pEntity, const Vector *pMins, const Vector *pMaxs);

// TARGET: CFire::sub_1010b9d0
bool CFire::sub_1010b9d0()
{
	CFireView *pView = (CFireView *)this;
	int nZero = 0;
	pView->m_OnExtinguished.sub_100cd660(this, this, nZero);
	sub_1010b3c0();
	pView->m_flHeat46c -= 20.0f;
	if (pView->m_flHeat46c > 0)
		*(int *)&pView->m_flHeat46c = nZero;
	pView->m_flHeat47c = pView->m_flHeat46c;
	sub_100ac4e0(nZero, nZero, (const char *)nZero);
	*(int *)&m_flNextThink = nZero;
	if (m_flags204 & 0x80) {
		sub_101cd940(this);
		return true;
	}
	Vector maxs(8.0f, 8.0f, 8.0f);
	Vector mins(-8.0f, -8.0f, 0.0f);
	sub_101cf390(this, &mins, &maxs);
	int nEdict = m_pEdict2e0;
	g_1070b248->StopSound(g_1070b22c->vfunc35(nEdict), 2, "environmental/fire/fire_crackeling.wav");
	int nEdict2 = m_pEdict2e0;
	g_1070b248->StopSound(g_1070b22c->vfunc35(nEdict2), 2, "environmental/fire/fire_roaring.wav");
	return false;
}
// END FUNCTION

// FUNCTION: 0x1010bb50 size=0x6
#include "datamap.h"
#include "CEnvFireSource.h"
namespace lifted {
extern char g_1056d0b4;
}
datamap_t *CEnvFireSource::vfunc82()
{
    return (datamap_t *)&lifted::g_1056d0b4;
}
// END FUNCTION

// FUNCTION: 0x1010bb70 size=0x5
int sub_1010bbb0(void);
int g_107093d4 = ((int (*)(int))sub_1010bbb0)(0);
// END FUNCTION

// FUNCTION: 0x1010bbb0 size=0x1a
namespace lifted {
extern int g_1056d0b4;
extern int g_1056d0b8;
extern char g_1056d0fc;
}
int sub_1010bbb0()
{
    lifted::g_1056d0b8 = 4;
    lifted::g_1056d0b4 = (int)&lifted::g_1056d0fc;
    return (int)&lifted::g_1056d0b4;
}
// END FUNCTION

// FUNCTION: 0x1010bbe0 size=0x4b
#include "platform.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_1045d66c[];	// CEnvFireSource vftable
extern const char g_1056da24[];

// TARGET: env_firesource
DLL_EXPORT CBaseEntity *env_firesource()
{
	void *mem = sub_100aa720(0x45c);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_1045d66c;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_1056da24);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1010bc50 size=0x13
#include "CEnvFireSource.h"

struct CEnvFireSourceStubs {
    void sub_10003e9f();
    void sub_10009a02();
};

// TARGET: CEnvFireSource::vfunc103
void CEnvFireSource::vfunc103()
{
    if (m_flags204 & 1) {
        ((CEnvFireSourceStubs *)this)->sub_10003e9f();
    } else {
        ((CEnvFireSourceStubs *)this)->sub_10009a02();
    }
}
// END FUNCTION

// FUNCTION: 0x1010bc80 size=0x81
#include "CEnvFireSource.h"
#include "CFire.h"
// The entity's virtual table up to slot 217 (GetAbsOrigin).
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CEnvFireSourceView
{
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j) V10(k) V10(l) V10(m) V10(n) V10(o) V10(p) V10(q) V10(r) V10(s) V10(t) V10(u)
	virtual void v210(); virtual void v211(); virtual void v212(); virtual void v213(); virtual void v214(); virtual void v215(); virtual void v216();
	virtual float *vfunc217();
};
int sub_100095ca(CFire **pOut, int nMax, int a, float *pCenter, float flRadius);
void CEnvFireSource::vfunc134()
{
	CFire *pFires[128];
	if (m_bEnabled) {
		m_flNextThink = gpGlobals->curtime + 0.25;
		int n = sub_100095ca(pFires, 0x80, 0, ((CEnvFireSourceView *)this)->vfunc217(), m_flRadius);
		for (int i = 0; i < n; i++)
			pFires[i]->sub_1010b5c0(m_flDamage * 0.25, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x1010bd40 size=0x20
#include "vampire.h"
struct CUnk1010bd40
{
    char m_pad0000[0x17c];
    int m_n17c;  // 0x17c
    char m_pad0180[0x450 - 0x180];
    char m_b450;  // 0x450
    void sub_1010bd40();
};
// TARGET: CUnk1010bd40::sub_1010bd40
void CUnk1010bd40::sub_1010bd40()
{
    if (m_b450 == 0) {
        m_b450 = 1;
        m_n17c = *(int *)&gpGlobals->curtime;
    }
}
// END FUNCTION

// FUNCTION: 0x1010bd70 size=0x19
#include "CEnvFireSource.h"

// TARGET: CEnvFireSource::sub_1010bd70
void CEnvFireSource::sub_1010bd70()
{
	if (m_bEnabled)
	{
		m_bEnabled = 0;
		m_flNextThink = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1010bda0 size=0x8
namespace lifted {
int sub_10003e9f();
}
int __stdcall sub_1010bda0(int a0)
{
    return lifted::sub_10003e9f();
}
// END FUNCTION

// FUNCTION: 0x1010bdc0 size=0x8
namespace lifted {
int sub_10009a02();
}
int __stdcall sub_1010bdc0(int a0)
{
    return lifted::sub_10009a02();
}
// END FUNCTION

// FUNCTION: 0x1010bde0 size=0x6
#include "datamap.h"
#include "CEnvFireSensor.h"
namespace lifted {
extern char g_1056d1ac;
}
datamap_t *CEnvFireSensor::vfunc82()
{
    return (datamap_t *)&lifted::g_1056d1ac;
}
// END FUNCTION

// FUNCTION: 0x1010be00 size=0x5
int * sub_1010be40(void);
int * g_1070938c = ((int * (*)(int))sub_1010be40)(0);
// END FUNCTION

// FUNCTION: 0x1010be40 size=0xaf
class ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    ISaveRestoreOps *pSaveRestoreOps;
    void *inputFunc;
    datamap_t *td;
    int fieldSizeInBytes;
    int unk;
};
extern ISaveRestoreOps *g_1055dc70;
extern int g_1056d1ac[2];
void sub_1001207b();
void sub_1000f038();

int *sub_1010be40()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 1, "m_radius", {0x454, 0}, 1, 6, "fireradius" },
        { 1, "m_targetLevel", {0x458, 0}, 1, 6, "heatlevel" },
        { 1, "m_targetTime", {0x45c, 0}, 1, 6, "heattime" },
        { 5, "m_bEnabled", {0x450, 0}, 1, 2 },
        { 5, "m_bHeatAtLevel", {0x451, 0}, 1, 2 },
        { 1, "m_levelTime", {0x460, 0}, 1, 2 },
        { 0, "InputEnable", {0, 0}, 1, 8, "Enable", 0, (void *)sub_1001207b },
        { 0, "InputDisable", {0, 0}, 1, 8, "Disable", 0, (void *)sub_1000f038 },
        { 10, "m_OnHeatLevelStart", {0x464, 0}, 1, 0x16, "OnHeatLevelStart", g_1055dc70 },
        { 10, "m_OnHeatLevelEnd", {0x47c, 0}, 1, 0x16, "OnHeatLevelEnd", g_1055dc70 },
    };
    g_1056d1ac[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1056d1ac[0] = (int)&dataDesc[1];
    return g_1056d1ac;
}
// END FUNCTION

// FUNCTION: 0x1010bf20 size=0x61
#include "platform.h"
void *sub_1000db89(int);
void __fastcall sub_10002ddd(void *);
extern int vt_1045dafc;
extern char g_1056da84[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
	void sub_100090fc(char b);
};
// TARGET: env_firesensor
DLL_EXPORT GP *env_firesensor()
{
	GP *p = (GP *)sub_1000db89(0x494);
	if (p) {
		p->sub_100090fc(0);
		sub_10002ddd((char *)p + 0x464);
		sub_10002ddd((char *)p + 0x47c);
		*(int **)p = &vt_1045dafc;
	} else {
		p = 0;
	}
	p->name(g_1056da84);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1010bfb0 size=0x13
#include "CEnvFireSensor.h"

struct CEnvFireSensorView
{
	void sub_1010c190();
};

void CEnvFireSensor::vfunc103()
{
	if (*(unsigned int *)((char *)this + 0x204) & 1)
		sub_1010c150();
	else
		((CEnvFireSensorView *)this)->sub_1010c190();
}
// END FUNCTION

// FUNCTION: 0x1010bfe0 size=0x11d
#include "vampire_all.h"
#include "CEnvFireSensor.h"
#include "CEntityVSlots.h"
#include "COutputEvent.h"


struct CFireHeatView {
	char m_pad0000[0x46c];
	float m_flHeat;
};

int sub_10108f60(CFireHeatView **pList, int nMax, int flag, const Vector *pOrigin, float flRadius);

struct CEnvFireSensorView : CEntityVSlots {
	char m_pad0004[0x17c - 4];
	float m_flNextThink;	// 0x17c
	char m_pad0180[0x450 - 0x180];
	char m_bEnabled;	// 0x450
	char m_bTriggered;	// 0x451
	char m_pad0452[2];
	float m_flRadius;	// 0x454
	float m_flLevel;	// 0x458
	float m_flTime;	// 0x45c
	float m_flAccum;	// 0x460
	COutputEvent m_OnStart;	// 0x464
	COutputEvent m_OnEnd;	// 0x47c
};

// TARGET: CEnvFireSensor::vfunc134
void CEnvFireSensor::vfunc134()
{
	CEnvFireSensorView *p = (CEnvFireSensorView *)this;
	if (p->m_bEnabled) {
		float flInterval = p->m_flTime * 0.25;
		if (flInterval < 0.1)
			flInterval = 0.1f;
		p->m_flNextThink = flInterval + gpGlobals->curtime;

		CFireHeatView *pFires[128];
		float flHeat = 0.0f;
		int nFires = sub_10108f60(pFires, 128, 1, p->slot217(), p->m_flRadius);
		for (int i = 0; i < nFires; i++)
			flHeat += pFires[i]->m_flHeat;

		if (flHeat >= p->m_flLevel) {
			p->m_flAccum = flInterval + p->m_flAccum;
			if (p->m_flAccum >= p->m_flTime && !p->m_bTriggered) {
				p->m_bTriggered = 1;
				p->m_OnStart.sub_100cd660(p, p, 0.0f);
			}
		} else {
			p->m_flAccum = 0.0f;
			if (p->m_bTriggered) {
				p->m_bTriggered = 0;
				p->m_OnEnd.sub_100cd660(p, p, 0.0f);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1010c150 size=0x2f
#include "CEnvFireSensor.h"
// TARGET: sub_1010c150
extern int *g_1070b228;

void CEnvFireSensor::sub_1010c150()
{
    if (m_bEnabled450 == 0)
    {
        m_bEnabled450 = 1;
        m_field17c = g_1070b228[3];
        m_b451 = 0;
        m_field460 = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x1010c190 size=0x37
#include "COutputEvent.h"

struct CUnknown1010c190
{
	char m_pad0000[0x17c];
	int m_n17c;
	char m_pad0180[0x450 - 0x180];
	char m_b450;
	char m_b451;
	char m_pad0452[0x47c - 0x452];
	COutputEvent m_Out47c;

	void sub_1010c190();
};

// TARGET: CUnknown1010c190::sub_1010c190
void CUnknown1010c190::sub_1010c190()
{
	if (m_b450 != 0)
	{
		m_b450 = 0;
		m_n17c = 0;
		if (m_b451 != 0)
		{
			m_b451 = 0;
			m_Out47c.sub_100cd660(this, this, 0.0f);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1010c1e0 size=0x8
namespace lifted {
int sub_1000472d();
}
int __stdcall sub_1010c1e0(int a0)
{
    return lifted::sub_1000472d();
}
// END FUNCTION

// FUNCTION: 0x1010c200 size=0x8
namespace lifted {
int sub_10012dfa();
}
int __stdcall sub_1010c200(int a0)
{
    return lifted::sub_10012dfa();
}
// END FUNCTION

// FUNCTION: 0x1010c220 size=0x1e
#include "CEnvFireSource.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvFireSource::vfunc5
CEnvFireSource *CEnvFireSource::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1010c250 size=0x36
#include "CEnvFireSensor.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CEnvFireSensor *CEnvFireSensor::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x47c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x464))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
