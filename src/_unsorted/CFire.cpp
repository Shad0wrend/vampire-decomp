// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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

// FUNCTION: 0x1010b5a0 size=0x5
#include "CFire.h"
int CFire::vfunc142(struct CTakeDamageInfo *a0)
{
    return 0;
}
// END FUNCTION
