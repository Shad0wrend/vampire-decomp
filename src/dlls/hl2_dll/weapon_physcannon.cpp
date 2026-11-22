// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 86 blocks
#include "vampire.h"

// FUNCTION: 0x1040bed0 size=0x72
#include "CGrabController.h"
extern float g_1070d9d0[3];

CGrabController::CGrabController()
{
    m_f2c = 1.0f;
    m_f30 = 0.0f;
    m_f38 = 0.0f;
    m_f3c = 0.0f;
    m_f24 = 1000.0f;
    m_f1c = 21600.0f;
    m_f28 = 2000.0f;
    m_f20 = 21600.0f;
    m_h14c.m_Index = -1;
    m_v150[0] = g_1070d9d0[0];
    m_v150[1] = g_1070d9d0[1];
    m_v150[2] = g_1070d9d0[2];
    m_b15c = 0;
}
// END FUNCTION

// FUNCTION: 0x1040bf70 size=0xb
namespace lifted {
extern char g_10514edc;
int sub_100143ee();
}
struct CUnknown1040bf70 { int sub_1040bf70(); };
int CUnknown1040bf70::sub_1040bf70()
{
    *(int *)this = (int)&lifted::g_10514edc;
    return lifted::sub_100143ee();
}
// END FUNCTION

// FUNCTION: 0x1040bf90 size=0x13
struct CHolder1040bf90
{
	virtual void v0();
	virtual void v1(void *p);
};

struct CUnit1040bf90
{
	char m_pad0000[0x178];
	CHolder1040bf90 *m_p178;

	void sub_1040bf90();
};

// TARGET: CUnit1040bf90::sub_1040bf90
void CUnit1040bf90::sub_1040bf90()
{
	if (m_p178)
		m_p178->v1(this);
}
// END FUNCTION

// FUNCTION: 0x1040bfc0 size=0x84
#include "CUnknown1040cb60.h"

struct PhysObj { virtual void v0(); virtual void v1(); virtual void slot2(); };
struct EntEntry { void *pEnt; int serial; int pad; };
struct EntTable { int hdr; EntEntry entries[1]; };
struct GlobalVarsFrame { char pad[0x10]; int framecount; };
extern EntTable *g_10566458;
extern GlobalVarsFrame *g_1070b228;

void CUnknown1040cb60::sub_1040bfc0(const float *a, const float *b)
{
	float *p = (float *)this;
	p[1] = a[0];
	p[2] = a[1];
	p[3] = a[2];
	p[4] = b[0];
	p[5] = b[1];
	p[6] = b[2];
	((int *)this)[0xd] = g_1070b228->framecount;
	unsigned int h = m_hEntity;
	if (h != 0xffffffff) {
		EntEntry *e = &g_10566458->entries[h & 0x1fff];
		if ((unsigned int)e->serial == (h >> 13)) {
			char *pEnt = (char *)e->pEnt;
			if (pEnt) {
				PhysObj *obj = *(PhysObj **)(pEnt + 0x36c);
				if (obj)
					obj->slot2();
				else
					sub_1040cb60();
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1040c080 size=0x148
#include "CUnknown1040cb60.h"
#include "CGlobalEntityList.h"

struct PhysObjA { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9();
virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7(); virtual void c8(); virtual void c9();
virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9();
virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4(); virtual void e5(); virtual void e6();
virtual void GetPosition(float *pOut, int n); };

extern CGlobalEntityList *g_10566458;
extern float g_104454c0;
extern float g_104454c4;
extern float g_104bea38;
extern double g_10449270;
extern float (__cdecl *g_10579660)(float);
__declspec(dllimport) void DevMsg(const char *, ...);
void __fastcall sub_100143ee(void *);

float CUnknown1040cb60::sub_1040c080()
{
	if (m_f38 <= g_104454c4)
		return g_104454c4;
	if (m_hEntity != 0xffffffff) {
		CGlobalEntityList_Slot *s = &g_10566458->m_Slots[m_hEntity & 0x1fff];
		if (s->m_Serial == (int)(m_hEntity >> 13) && s->m_pEntity) {
			PhysObjA *phys = *(PhysObjA **)(0x36c + (char *)s->m_pEntity);
			if (phys) {
				float p[3];
				float dx;
				phys->GetPosition(p, 0); dx = m_vPos[0] - p[0];
				float dy; dy = m_vPos[1] - *(p + 1);
				float dz = m_vPos[2] - p[2];
				float dist; float t0 = dz * dz; float t1 = dx * dx; dist = g_10579660(t0 + dy * dy + t1);
				if (m_f38 > g_104454c4) {
					if (m_f38 > g_104454c0)
						m_f38 = 1.0f;
					if (dist / m_f38 > m_f24)
						dist *= g_10449270;
					m_f3c = (g_104454c0 - m_f38) * m_f3c + dist * m_f38;
					m_f38 = 0;
					return m_f3c;
				}
			} else {
				DevMsg("Object attached to Physcannon has no physics object\n");
				sub_100143ee(this);
				return g_104bea38;
			}
		}
	}
	m_f38 = 0;
	return m_f3c;
}
// END FUNCTION

// FUNCTION: 0x1040c230 size=0x126
#include "CEntityVSlots.h"
#include "CGrabController.h"
#include "IPhysicsObject.h"
#include "Vector.h"
struct SGrabGlobal1094accc {
	virtual void vfunc0();
	virtual char vfunc1();
	char m_pad0004[0x28 - 4];
	float m_f28;
};
extern SGrabGlobal1094accc *g_1094accc;
float sub_1040c3b0(CEntityVSlots *pEnt);

// TARGET: CGrabController::sub_1040c230
void CGrabController::sub_1040c230(CEntityVSlots *pObject, IPhysicsObject *pPhysics)
{
	m_f24 = 1000.0f;
	m_f1c = 21600.0f;
	float flMass = sub_1040c3b0(pObject);
	float flMin = g_1094accc->vfunc1() ? 0.0f : g_1094accc->m_f28;
	if (flMass <= flMin)
		return;
	float flClamped = flMass > 500.0f ? 500.0f : flMass;
	float t = (flClamped - flMin) / (500.0f - flMin);
	float flA = 3.0f * t * t;
	float flB = t * t * t;
	float s = flA - (flB + flB);
	float flInvMass = pPhysics->vfunc13();
	Vector vecInertia;
	Vector *pInertia = pPhysics->vfunc15(&vecInertia);
	float flLen = FastSqrt(pInertia->x * pInertia->x + pInertia->y * pInertia->y + pInertia->z * pInertia->z);
	float flScale = 0.025f / flInvMass;
	float flTarget = flScale * flLen;
	flTarget = flTarget * 21600.0f;
	m_f24 = (300.0f - m_f24) * s + m_f24;
	m_f1c = (flTarget - m_f1c) * s + m_f1c;
}
// END FUNCTION

// FUNCTION: 0x1040c3b0 size=0x51
#include "CEntityVSlots.h"
float sub_1040c3b0(CEntityVSlots *pEnt)
{
	CEntityVSlots *list[32];
	float flTotal = 0;
	int n = pEnt->slot233(list, 32);
	for (int i = 0; i < n; i++)
		flTotal += list[i]->slot12();
	return flTotal;
}
// END FUNCTION

// FUNCTION: 0x1040c430 size=0xa0
#include "CUnknown1040cb60.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"

void sub_10139b90(const Vector &angles, float *pMatrix);
void sub_101384e0(Vector *pOut, const Vector *pIn, const float *pMatrix);

static inline bool TestBit(unsigned int value, int bit)
{
	return ((value >> bit) & 1) != 0;
}

Vector *CUnknown1040cb60::sub_1040c430(Vector *pOut, const Vector *pIn, CBaseEntity *pEnt)
{
	if (m_bFlag45) {
		float matrix[12];
		Vector v = *((CEntityVSlots *)pEnt)->slot194();
		v.x = 0;
		sub_10139b90(v, matrix);
		sub_101384e0(pOut, pIn, matrix);
		return pOut;
	}
	if (TestBit(pEnt->m_flags268, 11))
		pEnt->vfunc98();
	sub_101384e0(pOut, pIn, (const float *)((char *)pEnt + 0x130));
	return pOut;
}
// END FUNCTION

// FUNCTION: 0x1040c500 size=0xa0
#include "CGrabController.h"
#include "CEntityVSlots.h"

void __cdecl sub_10012deb(const Vector *pAngles, float *pMatrix);	// AngleMatrix
void __cdecl sub_100103de(Vector *pOut, const Vector *pIn, const float *pMatrix);	// VectorTransform

Vector *CGrabController::sub_1040c500(Vector *pOut, const Vector *pIn, CEntityVSlots *pEnt)
{
	if (m_b45) {
		Vector angles = *pEnt->slot194();
		angles.x = 0;
		float matrix[12];
		sub_10012deb(&angles, matrix);
		sub_100103de(pOut, pIn, matrix);
		return pOut;
	}
	unsigned char nBits = (unsigned char)(*(unsigned int *)((char *)pEnt + 0x268) >> 11);
	if (nBits & 1)
		pEnt->slot98();
	sub_100103de(pOut, pIn, (const float *)((char *)pEnt + 0x130));
	return pOut;
}
// END FUNCTION

// FUNCTION: 0x1040c5d0 size=0x276
#include "CEntityVSlots.h"
#include "IPhysicsObject.h"
#include "CUnknown1040cb60.h"
#include "CBaseEntity.h"
struct PhysV {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(float f); virtual float v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(const Vector *a, const float *b); virtual void v18(const Vector *a, float *b); virtual int v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(int a); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37(Vector *a, Vector *b);
};
struct MotionCtl {
	virtual void v0(); virtual void v1(); virtual void v2(PhysV *p);
};
struct PhysEnv {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual MotionCtl *v39(void *p);
};
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct EntSlots {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j) V10(k)
	V10(l) V10(m) V10(n) V10(o) V10(p) V10(q) V10(r) V10(s) V10(t) V10(u)
	virtual void v210(); virtual void v211(); virtual void v212(); virtual void v213(); virtual void v214();
	virtual int v215();
	virtual void v216(); virtual void v217(); virtual void v218(); virtual void v219();
	V10(w) virtual void v230(); virtual void v231(); virtual void v232();
	virtual int v233(PhysV **pList, int nMax);
};
extern PhysEnv *g_10723940;
void sub_10031990(CBaseEntity *a, void *b, int c, int d, int e, float f);
void sub_10189780(CBaseEntity *a, CBaseEntity *b, void *c, Vector *d);
void sub_10138130(int a, void *b, void *c);
Vector *sub_1040c8f0(Vector *pOut, void *pIn, float f);

static inline bool EFlag(unsigned int flags, int bit) { return ((flags >> bit) & 1) != 0; }
static inline void *EntityToWorldTransform(CBaseEntity *p)
{
	if (EFlag(p->m_flags268, 11))
		p->vfunc98();
	return (char *)p + 0x130;
}

void CUnknown1040cb60::sub_1040c5d0(CBaseEntity *pPlayer, CBaseEntity *pEntity, int nPhysics)
{
	PhysV *pPhys = (PhysV *)nPhysics;
	sub_10031990(pPlayer, pPhys, 6, pPhys->v19(), ((PhysV *)pPlayer->m_obj36c)->v19(), 1.0f);
	Vector position;
	Vector angles;
	pPhys->v37(&position, &angles);
	sub_10189780(pEntity, pPlayer, EntityToWorldTransform(pPlayer), &angles);
	((CGrabController *)this)->sub_1040c230((CEntityVSlots *)pEntity, (IPhysicsObject *)pPhys);
	MotionCtl *pCtl = g_10723940->v39(this);
	m_hEngine = (int)pCtl;
	pCtl->v2(pPhys);
	pPhys->v2();
	sub_1040bfc0(&position.x, &angles.x);
	*(EHANDLE *)&m_hEntity = pEntity;
	PhysV *pList[32];
	int count = ((EntSlots *)pEntity)->v233(pList, 0x20);
	m_f48 = 0;
	float damping = 10.0f;
	float flFactor = count * 0.13333334f;
	if (flFactor < 1.0f)
		flFactor = 1.0f;
	for (int i = 0; i < count; i++) {
		float mass = pList[i]->v12();
		pList[i]->v18(0, &m_a4c[i]);
		m_f48 += mass;
		m_acc[i] = mass;
		pList[i]->v11(0.25f / flFactor);
		pList[i]->v17(0, &damping);
	}
	pPhys->v11(0.25f);
	pPhys->v23(0);
	m_f38 = -1.0f;
	m_f3c = 0;
	Vector vecT;
	m_v160 = *sub_1040c430(&vecT, &angles, pPlayer);
	if (m_f40 != 0) {
		m_v160 = *sub_1040c8f0(&vecT, &m_v160, m_f40);
	}
	if (EFlag(pEntity->m_flags268, 11))
		pEntity->vfunc98();
	int r = ((EntSlots *)pEntity)->v215();
	sub_10138130(r, (char *)pEntity + 0x130, m_v16c);
	m_b15c = 0;
}
// END FUNCTION

// FUNCTION: 0x1040c8f0 size=0xeb
#include <math.h>
extern float g_104454c4;
void sub_10012deb(int, void *);
void sub_10011342(void *, int, float *);
void sub_10011996(float *, int, void *);
void sub_1040ca20(void *, int);
void sub_10012756(void *, void *);

struct V3 { int x, y, z; };

V3 sub_1040c8f0(int p, float tol)
{
    float v[3];
    V3 r;
    int m[12];
    int i, j;
    sub_10012deb(p, m);
    for (i = 2; i >= 0; i--) {
        sub_10011342(m, i, v);
        for (j = 0; j < 3; j++) {
            if (fabs(v[j]) > tol) {
                p = -1;
                if (!(v[j] < g_104454c4)) p = 1;
                v[j] = (float)p;
                v[(j + 1) % 3] = 0;
                v[(j + 2) % 3] = 0;
                sub_10011996(v, i, m);
                sub_1040ca20(m, i);
                break;
            }
        }
    }
    sub_10012756(m, &r);
    return r;
}
// END FUNCTION

// FUNCTION: 0x1040ca20 size=0xfc
#include "matrix3x4_t.h"

void sub_10011342(const matrix3x4_t *pMatrix, int iColumn, Vector *pOut);
void sub_10011996(const Vector *pIn, int iColumn, matrix3x4_t *pMatrix);

inline Vector CrossV(const Vector &a, const Vector &b)
{
	return Vector(a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x);
}

// TARGET: sub_1040ca20
void sub_1040ca20(matrix3x4_t *pMatrix, int axis)
{
	Vector v[3];
	for (int i = 0; i < 3; i++)
		sub_10011342(pMatrix, i, &v[i]);
	int t0 = (int)axis + 1; int j = (t0) % 3;
	int k = (axis + 2) % 3;
	v[k] = CrossV(v[axis], v[j]);
	v[j] = CrossV(v[k], v[axis]);
	VectorNormalize(v[k]);
	VectorNormalize(v[j]);
	sub_10011996(&v[j], j, pMatrix);
	sub_10011996(&v[k], k, pMatrix);
}
// END FUNCTION

// FUNCTION: 0x1040cb60 size=0xc8
#include "CBaseEntity.h"
#include "CUnknown1040cb60.h"

#define D10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct PhysObj {
	virtual void v0(); virtual void v1();
	virtual void Wake();
	virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10();
	virtual void SetMass(float a);
	virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
	virtual void SetDamping(const float *a, const float *p);
	virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22();
	virtual void EnableDrag(bool a);
};
struct EntV {
	D10(a0) D10(a1) D10(a2) D10(a3) D10(a4) D10(a5) D10(a6) D10(a7) D10(a8) D10(a9)
	D10(b0) D10(b1) D10(b2) D10(b3) D10(b4) D10(b5) D10(b6) D10(b7) D10(b8) D10(b9)
	D10(c0) D10(c1) D10(c2)
	virtual void x0(); virtual void x1(); virtual void x2();
	virtual int VPhysicsGetObjectList(PhysObj **pList, int max);
};
struct EngineH {
	D10(a0) D10(a1) D10(a2) D10(a3)
	virtual void DestroyMotionController(void *h);
};
extern EngineH *g_10723940;

struct GrabView {
	char pad[0x4c];
	float m_savedRotDamping[32];
	float m_savedMass[32];
	char pad2[0x14c - 0x14c];
};

void CUnknown1040cb60::sub_1040cb60()
{
	EntV *pEntity = (EntV *)((EHANDLE *)&m_hEntity)->Get();
	if (pEntity) {
		PhysObj *pList[32];
		int count = pEntity->VPhysicsGetObjectList(pList, 32);
		for (int i = 0; i < count; i++) {
			PhysObj *pPhys = pList[i];
			if (!pPhys)
				continue;
			pPhys->EnableDrag(true);
			pPhys->Wake();
			pPhys->SetMass(((GrabView *)this)->m_savedMass[i]);
			pPhys->SetDamping(0, &((GrabView *)this)->m_savedRotDamping[i]);
		}
	}
	*(EHANDLE *)&m_hEntity = (CBaseEntity *)0;
	g_10723940->DestroyMotionController((void *)m_hEngine);
	m_hEngine = 0;
}
// END FUNCTION

// FUNCTION: 0x1040cc70 size=0x4c
#include "CGrabController.h"
#include "IPhysicsObject.h"
// TARGET: CGrabController::vfunc0
int CGrabController::vfunc0(void *pController, int pObject, float flDeltaTime, Vector &pLinear, Vector &pAngular)
{
#define pObject ((IPhysicsObject *)pObject)
#define pLinear ((float *)&pLinear)
#define pAngular ((float *)&pAngular)
	m_f34 = pObject->vfunc53(&m_pad0004, m_f34, flDeltaTime);
	pLinear[0] = 0;
	pLinear[1] = 0;
	pLinear[2] = 0;
	pAngular[0] = 0;
	pAngular[1] = 0;
	pAngular[2] = 0;
	m_f38 = flDeltaTime + m_f38;
	return 1;
#undef pAngular
#undef pLinear
#undef pObject
}
// END FUNCTION

// FUNCTION: 0x1040cce0 size=0x91
#include "CUnknown1040cce0.h"

struct EntSlot {
	void *ent;
	unsigned int serial;
	int pad;
};
extern char *g_10566458;
extern float g_104454c4;

#define V4(x) virtual void x##a(); virtual void x##b(); virtual void x##c(); virtual void x##d();
#define V16(x) V4(x##a) V4(x##b) V4(x##c) V4(x##d)
#define V64(x) V16(x##a) V16(x##b) V16(x##c) V16(x##d)

struct WObj {
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual void v4();
	virtual void v5();
	virtual void *GetOwner();
};

struct EObj {
	V64(a) V64(b) V64(c) V16(d) V16(e) V4(f) V4(g)
	virtual void v232();
	virtual int GetList(void **list, int n);
};

float CUnknown1040cce0::sub_1040cce0(void *pWeapon)
{
	unsigned int h = m_hOwner;
	if (h != 0xffffffff) {
		EntSlot *s = &((EntSlot *)(g_10566458 + 4))[h & 0x1fff];
		if (s->serial == (h >> 13)) {
			EObj *owner = (EObj *)s->ent;
			if (owner) {
				if (((WObj *)pWeapon)->GetOwner() == owner) {
					void *list[32];
					int n = owner->GetList(list, 32);
					for (int i = 0; i < n; i++) {
						if (list[i] == pWeapon)
							return m_fTable[i];
					}
				}
			}
		}
	}
	return g_104454c4;
}
// END FUNCTION

// FUNCTION: 0x1040cdb0 size=0x56
#include "platform.h"
#include "CPlayerPickupController.h"
// TARGET: _player_pickup
DLL_EXPORT CBaseEntity *player_pickup()
{
	CPlayerPickupController *p = new CPlayerPickupController;
	p->vfunc106("player_pickup");
	return p;
}
// END FUNCTION

// FUNCTION: 0x1040ce30 size=0x5
#include "CPlayerPickupController.h"
bool CPlayerPickupController::vfunc157(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1040ce50 size=0x3
#include "CPlayerPickupController.h"

void CPlayerPickupController::vfunc226(int a)
{
}
// END FUNCTION

// FUNCTION: 0x1040ce70 size=0x3
#include "CPlayerPickupController.h"
void CPlayerPickupController::vfunc229(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1040ce90 size=0x6
#include "datamap.h"
#include "CPlayerPickupController.h"
namespace lifted {
extern char g_106839a0;
}
datamap_t * CPlayerPickupController::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_106839a0);
}
// END FUNCTION

// FUNCTION: 0x1040ceb0 size=0x5
int * sub_1040cef0(void);
int * g_1094ad0c = ((int * (*)(int))sub_1040cef0)(0);
// END FUNCTION

// FUNCTION: 0x1040cef0 size=0xb0
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
extern int g_106839a0[2];
extern datamap_t g_106836c4;
ISaveRestoreOps *sub_10001b4f(int type);

int *sub_1040cef0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 9, "m_grabController", {0x450, 0}, 1, 2, 0, 0, 0, &g_106836c4 },
        { 10, "m_grabController.m_controller", {0x5c8, 0}, 1, 2, 0, sub_10001b4f(8), 0 },
        { 11, "m_pPlayer", {0x5cc, 0}, 1, 2, 0, 0, 0 },
    };
    g_106839a0[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_106839a0[0] = (int)&dataDesc[1];
    return g_106839a0;
}
// END FUNCTION

// FUNCTION: 0x1040cfd0 size=0x9b
#include "CPlayerPickupController.h"
#include "CBaseCombatWeapon.h"

struct CPickupPlayerView
{
	void *sub_1032e7b0();	// CBaseCombatCharacter::GetActiveWeapon (stub 0x10007e19)
};

struct CPickupObjectView
{
	char m_pad0000[0x368];
	int m_n368;	// 0x368: move type
	int m_n36c;	// 0x36c
};

void __cdecl sub_10189660(CBaseEntity *pObject, CBaseCombatCharacter *pPlayer, int a);

void CPlayerPickupController::sub_1040cfd0(CBaseCombatCharacter *pPlayer, CBaseEntity *pObject)
{
	CPickupPlayerView *pView = (CPickupPlayerView *)pPlayer;
	if (pView->sub_1032e7b0() && !((CBaseCombatWeapon *)pView->sub_1032e7b0())->vfunc316(0)) {
		sub_1040d0a0(0);
		return;
	}
	CPickupObjectView *pObjectView = (CPickupObjectView *)pObject;
	if (pObjectView->m_n368 == 1)
		pObject->sub_100aaa40(2);
	sub_100a0670(pPlayer, 0);
	m_Carry.m_bFlag45 = 1;
	m_Carry.m_f40 = 0.8660254f;
	m_pPlayer = pPlayer;
	int nPhysics = pObjectView->m_n36c;
	sub_10189660(pObject, pPlayer, 0);
	m_Carry.sub_1040c5d0(pPlayer, pObject, nPhysics);
}
// END FUNCTION

// FUNCTION: 0x1040d0a0 size=0x91
#include "CPlayerPickupController.h"
#include "CGlobalEntityList.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct CPickupWeapon
{
	S100(a) S100(b) S100(c)
	S10(d0)
	virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24();
	virtual void vfunc315();
};

extern CGlobalEntityList *g_10566458;
void sub_101895d0(CBaseEntity *pEnt, int a, int b);
CPickupWeapon *__fastcall sub_1032e7b0(CBaseCombatCharacter *pPlayer);

void CPlayerPickupController::sub_1040d0a0(char bThrow)
{
	CBaseEntity *pObject;
	unsigned int h = m_Carry.m_hEntity;
	CGlobalEntityList_Slot *pSlot;
	if (h != -1 && (pSlot = &g_10566458->m_Slots[h & 0x1fff], pSlot->m_Serial == (int)(h >> 13)))
		pObject = (CBaseEntity *)pSlot->m_pEntity;
	else
		pObject = 0;
	m_Carry.sub_1040cb60();
	if (pObject)
		sub_101895d0(pObject, (int)m_pPlayer, bThrow != 0);
	if (m_pPlayer) {
		if (sub_1032e7b0(m_pPlayer))
			sub_1032e7b0(m_pPlayer)->vfunc315();
	}
	sub_100ae150();
}
// END FUNCTION

// FUNCTION: 0x1040d170 size=0x23d
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "Ray_t.h"
#include "utlmemory.h"
#include "CPlayerPickupController.h"
#include "IPhysicsObject.h"
#include "CEHandleGet.h"
#include "globalvars.h"
#include <stdlib.h>

struct SConVarX
{
	virtual void vfunc0();
	virtual char IsZero();
	char m_pad0004[0x28 - 4];
	float m_flValue;
};

extern SConVarX *g_1094abac;

// TARGET: CPlayerPickupController::vfunc173
void CPlayerPickupController::vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, int flUseValue)
{
	CBaseEntity *pPlayer = pActivator;
	if (pPlayer)
		pPlayer = (CBaseEntity *)pPlayer->m_pA8;
	if (pPlayer != (CBaseEntity *)m_pPlayer)
		return;

	CBaseEntity *pObject = (CBaseEntity *)g_10566458->sub_100290c0(&m_Carry.m_hEntity);
	if (!pObject || !useType || (*(unsigned int *)((char *)m_pPlayer + 0x2088) & 0x800) || m_Carry.sub_1040c080() > 12.0f)
	{
		sub_1040d0a0(0);
	}
	else if (*(unsigned char *)((char *)m_pPlayer + 0x2088) & 1)
	{
		sub_1040d0a0(1);

		Vector vecPos;
		((CBaseCombatCharacter *)m_pPlayer)->sub_100b7fa0(vecPos.Base(), 0, 0);

		float flMass = (float)((((IPhysicsObject *)pObject->m_obj36c)->vfunc12() > 15.0f) ? 15.0 : ((((IPhysicsObject *)pObject->m_obj36c)->vfunc12() < 0.5) ? 0.5 : ((IPhysicsObject *)pObject->m_obj36c)->vfunc12()));
		float flFactor = (flMass - 0.5f) * 0.2413793f + 0.5f;
		float flScale = (g_1094abac->IsZero() ? 0.0f : g_1094abac->m_flValue) * flFactor;

		vecPos.x *= flScale;
		vecPos.y *= flScale;
		vecPos.z *= flScale;
		((IPhysicsObject *)pObject->m_obj36c)->vfunc30(&vecPos);

		Vector vecRand;
		vecRand.x = rand() * 0.0006103702f - 10.0f;
		vecRand.y = rand() * 0.0006103702f - 10.0f;
		vecRand.z = rand() * 0.0006103702f - 10.0f;
		Vector vecVel = vecRand * flFactor;
		((IPhysicsObject *)pObject->m_obj36c)->vfunc34(&vecVel);
	}
	else if (useType == 2)
		m_Carry.sub_1040f940(m_pPlayer, 12.0f);
}
// END FUNCTION

// FUNCTION: 0x1040d440 size=0x4b
#include "CPlayerPickupController.h"
#include "CEHandleGet.h"

// TARGET: CPlayerPickupController::sub_1040d440
bool CPlayerPickupController::sub_1040d440(void *pEntity)
{
	return EHandle_Get(m_Carry.m_hEntity) == pEntity;
}
// END FUNCTION

// FUNCTION: 0x1040d4b0 size=0x42
#include "CPlayerPickupController.h"
#include "CEntitySoundOriginView.h"
extern const float g_1070d9d0[3];
CBaseEntity *sub_100a99d0(const char *, const float *, const float *, CBaseEntity *);
// TARGET: sub_1040d4b0
void sub_1040d4b0(CBaseCombatCharacter *pPlayer, CBaseEntity *pEnt)
{
	if (pEnt->m_obj36c)
	{
		CPlayerPickupController *pPickup = (CPlayerPickupController *)sub_100a99d0("player_pickup", ((CEntitySoundOriginView *)pEnt)->GetAbsOrigin(), g_1070d9d0, (CBaseEntity *)pPlayer);
		if (pPickup)
			pPickup->sub_1040cfd0(pPlayer, pEnt);
	}
}
// END FUNCTION

// FUNCTION: 0x1040d520 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_1094aea8;
extern char g_10683a68[];
ServerClassReg g_1094aa5c("CWeaponPhysCannon", &g_1094aea8, g_10683a68);
// END FUNCTION

// FUNCTION: 0x1040d590 size=0x6
#include "CWeaponPhysCannon.h"

extern char g_1094aa5c;

void *CWeaponPhysCannon::sub_1040d590()
{
	return &g_1094aa5c;
}
// END FUNCTION

// FUNCTION: 0x1040d5b0 size=0x3
#include "CWeaponPhysCannon.h"

int CWeaponPhysCannon::vfunc81()
{
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1040d5d0 size=0xa
#include "SendTable.h"
SendTable g_1094aea8;
// END FUNCTION

// FUNCTION: 0x1040d650 size=0x5
int sub_1040d690(void);
int g_1094aea4 = ((int (*)(int))sub_1040d690)(0);
// END FUNCTION

// FUNCTION: 0x1040d690 size=0x93
#include "SendTable.h"

SendProp sub_10246af0(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, int extra, void *proxy);
SendProp sub_10246dc0(const char *pVarName, int offset, int pTable, void *proxy);
void sub_10009539();
extern int g_105c5bc0;
extern const char *g_10683a74;
extern SendTable g_1094aea8;

int sub_1040d690()
{
	static SendProp s_Props[] = {
		sub_10246af0("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_10246dc0("baseclass", 0, g_105c5bc0, (void *)sub_10009539),
		sub_10246af0("m_bActive", 0x911, 1, 1, 1, 0, 0),
	};
	g_1094aea8.sub_10247240(&s_Props[1], 2, g_10683a74);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1040d790 size=0x43
#include "platform.h"
#include "CWeaponPhysCannon.h"

void *sub_100aa720(int size);
extern char g_1055ef2c[];

#define VD10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CWepVt
{
	VD10(a) VD10(b) VD10(c) VD10(d) VD10(e) VD10(f) VD10(g) VD10(h) VD10(i) VD10(j)
	virtual void s100(); virtual void s101(); virtual void s102(); virtual void s103(); virtual void s104(); virtual void s105();
	virtual void vfunc106(const char *pszName);
};

struct CWepCtor
{
	CWeaponPhysCannon *sub_1040d9e0();
};

// TARGET: weapon_physcannon
DLL_EXPORT CWeaponPhysCannon *weapon_physcannon()
{
	void *mem = sub_100aa720(0xae8);
	CWeaponPhysCannon *p;
	if (mem)
		p = ((CWepCtor *)mem)->sub_1040d9e0();
	else
		p = 0;
	((CWepVt *)p)->vfunc106(g_1055ef2c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1040d800 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_1094ad54(&CPrecacheRegister::PrecacheFn_Other, "weapon_physcannon");
// END FUNCTION

// FUNCTION: 0x1040d850 size=0x6
#include "CWeaponPhysCannon.h"

extern char g_10683a78;

datamap_t *CWeaponPhysCannon::sub_1040d850()
{
	return (datamap_t *)&g_10683a78;
}
// END FUNCTION

// FUNCTION: 0x1040d870 size=0x5
int * sub_1040d8b0(void);
int * g_1094ab9c = ((int * (*)(int))sub_1040d8b0)(0);
// END FUNCTION

// FUNCTION: 0x1040d8b0 size=0x58
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
extern int g_10683a78[2];
extern int g_106836c4[2];
ISaveRestoreOps *sub_10045d90(int);

int *sub_1040d8b0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 5, "m_bOpen", {0x910, 0}, 1, 2 },
        { 5, "m_bActive", {0x911, 0}, 1, 2 },
        { 4, "m_nChangeState", {0x914, 0}, 1, 2 },
        { 15, "m_flCheckSuppressTime", {0x918, 0}, 1, 2 },
        { 15, "m_flElementDebounce", {0x924, 0}, 1, 2 },
        { 1, "m_flElementPosition", {0x928, 0}, 1, 2 },
        { 1, "m_flElementDestination", {0x92c, 0}, 1, 2 },
        { 4, "m_nAttack2Debounce", {0x91c, 0}, 1, 2 },
        { 5, "m_bIsCurrentlyUpgrading", {0x920, 0}, 1, 2 },
        { 12, "m_hBeams", {0x930, 0}, 4, 2 },
        { 12, "m_hGlowSprites", {0x940, 0}, 6, 2 },
        { 12, "m_hEndSprites", {0x958, 0}, 2, 2 },
        { 12, "m_hCenterSprite", {0x960, 0}, 1, 2 },
        { 12, "m_hBlastSprite", {0x964, 0}, 1, 2 },
        { 9, "m_grabController", {0x96c, 0}, 1, 2, 0, 0, 0, (datamap_t *)g_106836c4 },
        { 10, "m_grabController.m_controller", {0xae4, 0}, 1, 2, 0, sub_10045d90(8), (void *)0 },
    };
    g_10683a78[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_10683a78[0] = (int)&dataDesc[1];
    return g_10683a78;
}
// END FUNCTION

// FUNCTION: 0x1040d930 size=0x3
char sub_1040d930()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040d950 size=0x1
void sub_1040d950()
{
}
// END FUNCTION

// FUNCTION: 0x1040d970 size=0x1e
#include "CUnkCombatChar.h"
#define P10(x) virtual void x##0(); virtual void x##1(); virtual void x##2(); virtual void x##3(); virtual void x##4(); virtual void x##5(); virtual void x##6(); virtual void x##7(); virtual void x##8(); virtual void x##9();

// Local view of the vtable: slot 327 is the virtual call; the other slots are placeholders.
struct CUnkVT327 {
	P10(p0) P10(p1) P10(p2) P10(p3) P10(p4) P10(p5) P10(p6) P10(p7) P10(p8) P10(p9)
	P10(p10) P10(p11) P10(p12) P10(p13) P10(p14) P10(p15) P10(p16) P10(p17) P10(p18) P10(p19)
	P10(p20) P10(p21) P10(p22) P10(p23) P10(p24) P10(p25) P10(p26) P10(p27) P10(p28) P10(p29)
	P10(p30) P10(p31)
	virtual void p320(); virtual void p321(); virtual void p322(); virtual void p323(); virtual void p324();
	virtual void p325(); virtual void p326();
	virtual void vfunc327();
};

struct CUnkCombatChar {
	CUnkVT327 *sub_10335950(void *p);
};

void *sub_102587f0();

// TARGET: sub_1040d970
void sub_1040d970(CUnkCombatChar *pThis)
{
	CUnkVT327 *p = pThis->sub_10335950(sub_102587f0());
	if (p)
	{
		p->vfunc327();
	}
}
// END FUNCTION

// FUNCTION: 0x1040d9a0 size=0x2a
#include "CBaseCombatCharacter.h"
class CBaseCombatCharacter;
int sub_102587f0();
void __fastcall sub_1040dbb0(void *p);
typedef void (__fastcall *VirtFn)(CBaseCombatCharacter *p);

// TARGET: sub_1040d9a0
void sub_1040d9a0(CBaseCombatCharacter *pChar)
{
    void *pEnt = pChar->sub_10335950((const char *)sub_102587f0());
    if (pEnt) {
        sub_1040dbb0(pEnt);
        ((VirtFn)(*(void ***)pChar)[456])(pChar);
    }
}
// END FUNCTION

// FUNCTION: 0x1040d9e0 size=0x7d
#include "CWeaponPhysCannon.h"

// TARGET: CWeaponPhysCannon::CWeaponPhysCannon
CWeaponPhysCannon::CWeaponPhysCannon()
{
	m_flGlow928 = 0;
	m_flGlowTarget92c = 0;
	m_b910 = 0;
	m_n918 = 0;
}
// END FUNCTION

// FUNCTION: 0x1040da80 size=0x3
#include "CWeaponPhysCannon.h"
char CWeaponPhysCannon::vfunc312()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1040daa0 size=0x2b
#include "CWeaponPhysCannon.h"

struct CGargoyleMemberUnit {
	void sub_10011a77();
};

struct CGargoyleBaseUnit {
	void sub_10013a57();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CWeaponPhysCannon::vfunc5
CBaseEntity  *CWeaponPhysCannon::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x96c))->sub_10011a77();
	((CGargoyleBaseUnit *)this)->sub_10013a57();
	if (flags & 1)
		sub_10009fc5(this);
	return (CBaseEntity  *)(this);
}
// END FUNCTION

// FUNCTION: 0x1040dae0 size=0x5
#include "CWeaponPhysCannon.h"
#include "CBaseCombatWeapon.h"

// TARGET: CWeaponPhysCannon::vfunc104
// the game's 0x1040dae0: a tail call (jmp) of CBaseCombatWeapon::vfunc104
void CWeaponPhysCannon::vfunc104()
{
	CBaseCombatWeapon::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1040db00 size=0x19
#include "CWeaponPhysCannon.h"

struct CPhysCannonGrabPlaceholder {
	void sub_100dc8d0(int a, int b);
};

void CWeaponPhysCannon::vfunc103()
{
	CBaseCombatWeapon::vfunc103();
	((CPhysCannonGrabPlaceholder *)((char *)this + 0x270))->sub_100dc8d0(0, 0);
}
// END FUNCTION

// FUNCTION: 0x1040db30 size=0x1c
#include "CWeaponPhysCannon.h"

struct CUnit1040bf90
{
	void sub_1040bf90();
};

// TARGET: CWeaponPhysCannon::vfunc130
void CWeaponPhysCannon::vfunc130(int pArg)
{
	CBaseCombatWeapon::vfunc130(pArg);
	((CUnit1040bf90 *)((char *)this + 0x96c))->sub_1040bf90();
}
// END FUNCTION

// FUNCTION: 0x1040db60 size=0x13
#include "CBaseEntity.h"
#include "CWeaponPhysCannon.h"

#define VT(n) virtual void vt##n();
#define VT10(p) VT(p##0) VT(p##1) VT(p##2) VT(p##3) VT(p##4) VT(p##5) VT(p##6) VT(p##7) VT(p##8) VT(p##9)

struct CWeaponPhysCannonVtbl
{
	VT10(0) VT10(1) VT10(2) VT10(3) VT10(4) VT10(5) VT10(6) VT10(7) VT10(8) VT10(9)
	VT10(10) VT10(11) VT10(12) VT10(13) VT10(14) VT10(15) VT10(16) VT10(17) VT10(18) VT10(19)
	VT10(20) VT10(21) VT10(22) VT10(23) VT10(24) VT10(25) VT10(26) VT10(27) VT10(28) VT10(29)
	VT10(30) VT10(31) VT10(32) VT10(33) VT10(34) VT10(35) VT10(36)
	VT(370) VT(371)
	virtual void vt372();
};

void CWeaponPhysCannon::vfunc180()
{
	((CWeaponPhysCannonVtbl *)this)->vt372();
	((CBaseEntity *)this)->CBaseEntity::vfunc180();
}
// END FUNCTION

// FUNCTION: 0x1040db90 size=0x5
#include "CWeaponPhysCannon.h"
#include "CBaseCombatWeapon.h"

// TARGET: CWeaponPhysCannon::vfunc315
// the game's 0x1040db90: a tail call (jmp) of CBaseCombatWeapon::vfunc315
bool CWeaponPhysCannon::vfunc315()
{
	return CBaseCombatWeapon::vfunc315();
}
// END FUNCTION

// FUNCTION: 0x1040dbb0 size=0xa
namespace lifted {
int __stdcall sub_10005092(int, int);
}
int sub_1040dbb0()
{
    return lifted::sub_10005092(1, 0);
}
// END FUNCTION

// FUNCTION: 0x1040dbd0 size=0x4f
#include "CBaseEntity.h"
#include "CWeaponPhysCannon.h"
#include "CEHandleGet.h"

// TARGET: CWeaponPhysCannon::sub_1040dbd0
bool CWeaponPhysCannon::sub_1040dbd0(CBaseEntity *pEnt)
{
	if (!pEnt)
		return false;
	CBaseEntity *pGrabbed = (CBaseEntity *)EHandle_Get(m_grab.m_hEntity);
	if (pGrabbed && pGrabbed == pEnt)
	{
		sub_1040dbb0();
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x1040dc40 size=0x18
#include "CWeaponPhysCannon.h"

// TARGET: CWeaponPhysCannon::vfunc299
void CWeaponPhysCannon::vfunc299(const float *pVelocity)
{
	sub_1040dbb0();
	sub_1001089d(pVelocity);
}
// END FUNCTION

// FUNCTION: 0x1040dc70 size=0xc
char __fastcall sub_1040dc70(char *self)
{
	return self[0x911] == 0;
}
// END FUNCTION

// FUNCTION: 0x1040dc90 size=0x2a
#include "CWeaponPhysCannon.h"

// TARGET: CWeaponPhysCannon::vfunc316
char CWeaponPhysCannon::vfunc316(int a)
{
	if (m_bGrab911)
		return 0;
	sub_1040dbb0();
	return CBaseCombatWeapon::vfunc316(a);
}
// END FUNCTION

// FUNCTION: 0x1040dcd0 size=0xe
#include "CWeaponPhysCannon.h"
// TARGET: CWeaponPhysCannon::vfunc291
void CWeaponPhysCannon::vfunc291()
{
	vfunc307(0xbc);
}
// END FUNCTION

// FUNCTION: 0x1040dcf0 size=0xb3
#include "CBaseEntity.h"
#include "CBaseCombatWeapon.h"

struct DmgInfoRaw
{
	int w[19];
};

extern void __fastcall sub_101c2690(DmgInfoRaw *);
extern void sub_101c2c60();

void CBaseCombatWeapon::sub_1040dcf0(CBaseEntity *pVictim, const float *pDir, void *pTrace)
{
	DmgInfoRaw info;
	sub_101c2690(&info);
	info.w[11] = (int)sub_102521f0();
	info.w[10] = (int)this;
	*(float *)&info.w[12] = 1.0f;
	info.w[4] = ((const int *)pDir)[0];
	info.w[5] = ((const int *)pDir)[1];
	info.w[6] = ((const int *)pDir)[2];
	info.w[7] = ((const int *)pTrace)[3];
	info.w[8] = ((const int *)pTrace)[4];
	info.w[14] = 0x20000001;
	info.w[9] = ((const int *)pTrace)[5];
	pVictim->sub_100a7d00((int)&info, (int)pDir, (int)pTrace);
	sub_101c2c60();
	vfunc307(0xc0);
	*(float *)((char *)this + 0x924) = gpGlobals->curtime + 0.5f;
	*(float *)((char *)this + 0x918) = gpGlobals->curtime + 0.25f;
}
// END FUNCTION

// FUNCTION: 0x1040dde0 size=0x2e
#include "CBaseEntity.h"
// TARGET: sub_1040dde0
void sub_10189660(CBaseEntity *pEnt, int a, int b);

void __stdcall sub_1040dde0(CBaseEntity *pEnt, int a, int b)
{
    if (pEnt->m_field368 == 1)
    {
        pEnt->sub_100aaa40(2);
    }
    sub_10189660(pEnt, a, b);
}
// END FUNCTION

// FUNCTION: 0x1040de20 size=0x2de
#include "CWeaponPhysCannon.h"
#include "CBaseEntity.h"
#include "engineiface.h"
#include "CEntityVSlots.h"
#include "IPhysicsObject.h"
#include "QAngle.h"

struct DmgInfoRaw
{
	int w[19];
};

struct CPhysCannonOwner
{
	char m_pad0000[0xa8];
	CBaseEntity *m_pPlayer;
};

struct CPCEntSlots
{
	EVS(0) EVS(1) EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3)
	EVS(40) virtual void slot41(const Vector *pVec, int a); EVS(42) EVS(43) EVS(44) EVS(45) EVS(46) EVS(47) EVS(48) EVS(49)
	EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9) EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15)
	EVS(160) EVS(161) EVS(162) EVS(163) EVS(164) EVS(165) EVS(166) EVS(167) EVS(168)
	virtual void slot169(const QAngle &angPunch);
};

struct ConVarView9d4 { virtual void v0(); virtual bool vfunc1(); char m_pad[0x24]; float m_fValue; };
extern ConVarView9d4 *g_1094a9d4;

extern void __fastcall sub_101c2690(DmgInfoRaw *);
extern void sub_101c2c60();
extern char sub_101896f0(CBaseEntity *pEnt, void *pPlayer, int a);
extern char sub_10189a10(CBaseEntity *pEnt);

#pragma auto_inline(off)
namespace block_1040de20 {
char sub_1040d930()
{
	return 0;
}
}
#pragma auto_inline(on)
using namespace block_1040de20;

void CWeaponPhysCannon::sub_1040de20(CBaseEntity *pEnt, const float *pDir, void *pTrace)
{
	DmgInfoRaw info;
	sub_101c2690(&info);
	Vector vecDir = *(const Vector *)pDir;
	info.w[11] = (int)sub_102521f0();
	info.w[10] = (int)this;
	*(float *)&info.w[12] = 0.0f;
	info.w[14] = 0x20000000;
	pEnt->sub_100a7d00((int)&info, (int)&vecDir, (int)pTrace);
	sub_101c2c60();
	CPhysCannonOwner *pOwner = (CPhysCannonOwner *)sub_102521f0();
	CPCEntSlots *pPlayer;
	if (!pOwner)
		pPlayer = 0;
	else
		pPlayer = (CPCEntSlots *)pOwner->m_pPlayer;
	if (sub_101896f0(pEnt, pPlayer, 1))
	{
		sub_1040dde0(pEnt, pPlayer, 1);
		IPhysicsObject *pPhys = (IPhysicsObject *)pEnt->m_obj36c;
		if (!pPhys)
		{
			vfunc291();
			return;
		}
		if (vecDir.z < 0.0f)
			vecDir.z *= -0.65f;
		if (!sub_1040d930() && !sub_10189a10(pEnt))
		{
			{
				Vector vImp = vecDir * 15000.0f;
				pPhys->vfunc30(&vImp);
			}
			float mass = pPhys->vfunc12();
			if (!(mass < 250.0f))
				mass = 250.0f;
			{
				Vector vForce = vecDir * mass * 600.0f;
				pPhys->vfunc31(&vForce, (const Vector *)((char *)pTrace + 0xc));
			}
		}
		else
		{
			float flScale = g_1094a9d4->vfunc1() ? 0.0f : g_1094a9d4->m_fValue;
			sub_1040e1c0(pEnt, (const Vector *)pDir, flScale);
		}
	}
	QAngle recoil = QAngle(enginerandom->vfunc1(1.0f, 2.0f), enginerandom->vfunc1(-1.0f, 1.0f), 0);
	pPlayer->slot169(recoil);
	vfunc307(0xc0);
	m_flElementDebounce = gpGlobals->curtime + 0.5f;
	*(float *)&m_n918 = gpGlobals->curtime + 0.25f;
	m_flTimes730[1] = m_flTimes730[0] = gpGlobals->curtime + 0.5f;
	(void)pPlayer;
}
// END FUNCTION

// FUNCTION: 0x1040e1c0 size=0xd5
#include "CBaseEntity.h"
#include "IPhysicsObject.h"
Vector sub_101898f0(CBaseEntity *pEnt);
extern "C" void *__RTDynamicCast(void *pObj, long vfDelta, void *pSrcType, void *pTargetType, int isReference);
extern char g_10538764[];
extern char g_1057c684[];
struct SRagdollPartView { IPhysicsObject *m_pObject; char m_pad[0x14]; };
struct SRagdollView { char m_pad[0x730]; int m_nParts; char m_pad2[0x744 - 0x734]; SRagdollPartView m_Parts[1]; };
void __stdcall sub_1040e1c0(CBaseEntity *pEnt, const Vector *pDir, float flScale)
{
    IPhysicsObject *pPhys = (IPhysicsObject *)pEnt->m_obj36c;
    if (!pPhys)
        return;
    Vector impulse = *pDir * flScale;
    Vector angular = sub_101898f0(pEnt);
    SRagdollView *pRagdoll = (SRagdollView *)__RTDynamicCast(pEnt, 0, g_10538764, g_1057c684, 0);
    if (!pRagdoll)
    {
        pPhys->vfunc41(&impulse, &angular);
        return;
    }
    for (int i = 0; i < pRagdoll->m_nParts; i++)
        pRagdoll->m_Parts[i].m_pObject->vfunc41(&impulse, &angular);
}
// END FUNCTION

// FUNCTION: 0x1040e2e0 size=0x231
#include "CWeaponPhysCannon.h"
#include "CBaseEntity.h"
#include "engineiface.h"
#include "CEntityVSlots.h"
#include "QAngle.h"

struct DmgInfoRaw
{
	int w[19];
};

struct CPhysCannonOwner
{
	char m_pad0000[0xa8];
	CBaseEntity *m_pPlayer;
};

struct CPCEntSlots
{
	EVS(0) EVS(1) EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3)
	EVS(40) virtual void slot41(const Vector *pVec, int a); EVS(42) EVS(43) EVS(44) EVS(45) EVS(46) EVS(47) EVS(48) EVS(49)
	EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9) EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15)
	EVS(160) EVS(161) EVS(162) EVS(163) EVS(164) EVS(165) EVS(166) EVS(167) EVS(168)
	virtual void slot169(const QAngle &angPunch);
};

struct CRagEntry
{
	CPCEntSlots *m_pEnt;
	char m_pad04[0x14];
};

struct CRagList
{
	int m_nEntries;
	char m_pad04[0x10];
	CRagEntry m_aEntries[1];
};

struct CRagView
{
	char m_pad0000[0x730];
	CRagList m_list;
};

extern void __fastcall sub_101c2690(DmgInfoRaw *);
extern void sub_101c2c60();
extern void sub_101895d0(CBaseEntity *pEnt, void *pPlayer, int a);
extern char sub_101896f0(CBaseEntity *pEnt, void *pPlayer, int a);
extern void sub_101898f0(float *pOut, CBaseEntity *pEnt);
extern "C" void *__cdecl __RTDynamicCast(void *pObj, long nVfDelta, void *pSrcType, void *pTargetType, int bReference);
extern char g_10538764[];
extern char g_1057c684[];

void CWeaponPhysCannon::sub_1040e2e0(CBaseEntity *pEnt, const float *pDir, void *pTrace)
{
	CPhysCannonOwner *pOwner = (CPhysCannonOwner *)sub_102521f0();
	CPCEntSlots *pPlayer;
	if (!pOwner)
		pPlayer = 0;
	else
		pPlayer = (CPCEntSlots *)pOwner->m_pPlayer;
	sub_101895d0(pEnt, pPlayer, 3);
	DmgInfoRaw info;
	sub_101c2690(&info);
	Vector vecDir = *(const Vector *)pDir;
	info.w[11] = (int)sub_102521f0();
	info.w[10] = (int)this;
	info.w[12] = 0;
	info.w[14] = 0x20000000;
	pEnt->sub_100a7d00((int)&info, (int)&vecDir, (int)pTrace);
	sub_101c2c60();
	if (sub_101896f0(pEnt, pPlayer, 1)) {
		sub_1040dde0(pEnt, pPlayer, 1);
		if (vecDir.z < 0.0f)
			vecDir.z = vecDir.z * -0.65f;
		Vector vecImpulse = vecDir * 1500.0f;
		float flScratch[3];
		sub_101898f0(flScratch, pEnt);
		CRagView *pRag = (CRagView *)__RTDynamicCast(pEnt, 0, g_10538764, g_1057c684, 0);
		CRagList *pList = &pRag->m_list;
		for (int i = 0; i < pList->m_nEntries; i++)
			pList->m_aEntries[i].m_pEnt->slot41(&vecImpulse, 0);
	}
	QAngle angPunch(enginerandom->vfunc1(1.0f, 2.0f), enginerandom->vfunc1(-1.0f, 1.0f), 0);
	pPlayer->slot169(angPunch);
	vfunc307(0xc0);
	m_flElementDebounce = gpGlobals->curtime + 0.5f;
	*(float *)((char *)this + 0x918) = gpGlobals->curtime + 0.25f;
	float t = gpGlobals->curtime + 0.5f;
	*(float *)((char *)this + 0x734) = *(float *)((char *)this + 0x730) = t;
}
// END FUNCTION

// FUNCTION: 0x1040e5b0 size=0x48
struct CEntA { virtual bool vfunc0(); virtual bool vfunc1(); char m_pad[0x24]; float m_f28; };
struct CEntB { virtual bool vfunc0(); virtual bool vfunc1(); char m_pad[0x24]; float m_f28; };
extern CEntA *g_1094ac3c;
extern CEntB *g_1094ad14;
char sub_1040d930();
float sub_1040e5b0()
{
    if (!sub_1040d930()) {
        if (g_1094ad14->vfunc1())
            return 0.0f;
        return g_1094ad14->m_f28;
    }
    if (g_1094ac3c->vfunc1())
        return 0.0f;
    return g_1094ac3c->m_f28;
}
// END FUNCTION

// FUNCTION: 0x1040e620 size=0x7b
#include "CWeaponPhysCannon.h"
#include "CUnknown10739d08.h"

extern CUnknown10739d08 g_10739d08;

struct CPhysCannonView
{
	char m_pad0000[0x730];
	float m_flNextTime;
	char m_pad0734[0x911 - 0x734];
	char m_bActive;
};

struct CPhysCannonOwner
{
	char m_pad0000[0xa8];
	void *m_pCharacter;
};

struct CPhysCannonCharacter
{
	void sub_100b7fa0(Vector *pOut, int a, int b);	// stub 0x1000cb8f
};

// TARGET: CWeaponPhysCannon::vfunc326
void CWeaponPhysCannon::vfunc326()
{
	CPhysCannonView *v = (CPhysCannonView *)this;
	if (v->m_flNextTime > gpGlobals->curtime)
		return;
	CPhysCannonOwner *pOwner = (CPhysCannonOwner *)sub_102521f0();
	if (!pOwner)
		return;
	CPhysCannonCharacter *pChar = (CPhysCannonCharacter *)pOwner->m_pCharacter;
	if (!pChar || !v->m_bActive)
		return;
	Vector vecPos;
	pChar->sub_100b7fa0(&vecPos, 0, 0);
	sub_10410bf0(&vecPos, g_10739d08.sub_101e8640(pChar));
	vfunc307(0xc0);
}
// END FUNCTION

// FUNCTION: 0x1040e6c0 size=0x113
#include "CWeaponPhysCannon.h"


struct CannonView1040e6c0 {
	char pad0[0x730];
	float m_f730;
	float m_f734;
	char pad1[0x91c - 0x738];
	unsigned int m_n91c;
};
struct CharView1040e6c0 {
	char pad[0xa8];
	struct PlayerView1040e6c0 *m_pPlayer;
};
struct PlayerView1040e6c0 {
	char pad[0x2088];
	unsigned int m_n2088;
	unsigned int m_n208c;
};

void CWeaponPhysCannon::vfunc327()
{
	CannonView1040e6c0 *c = (CannonView1040e6c0 *)this;
	if (!(c->m_f734 > gpGlobals->curtime)) {
		CharView1040e6c0 *pOwner = (CharView1040e6c0 *)sub_102521f0();
		if (pOwner) {
			PlayerView1040e6c0 *pPlayer = pOwner->m_pPlayer;
			if (pPlayer) {
				if (m_bGrab911 && (pPlayer->m_n208c & 0x800)) {
					c->m_f730 = gpGlobals->curtime + 0.5;
					c->m_f734 = gpGlobals->curtime + 0.5;
					sub_104106a0(1, 0);
					vfunc307(0xbc);
					return;
				}
				switch (sub_1040e9c0()) {
				case 0:
					vfunc307(0xbc);
					c->m_f734 = gpGlobals->curtime + 0.5f;
					c->m_n91c |= pPlayer->m_n2088;
					break;
				case 1:
					c->m_f734 = gpGlobals->curtime + 0.1f;
					break;
				case 2:
					c->m_f734 = gpGlobals->curtime + 0.01f;
					break;
				}
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1040e830 size=0x39
#include "CWeaponPhysCannon.h"

// TARGET: CWeaponPhysCannon::vfunc321
void CWeaponPhysCannon::vfunc321()
{
    if (vfunc309()) {
        if (m_bGrab911 != 0) {
            vfunc307(0xc2);
            return;
        }
        vfunc307(0xb6);
    }
}
// END FUNCTION

// FUNCTION: 0x1040e880 size=0xfe
#include "CWeaponPhysCannon.h"
#include "CWeaponMelee.h"
#include "CBasePlayer.h"
#include "CBaseCombatCharacter.h"
#include "CUnknown101e8480.h"
#include "CUnknown100a8340.h"

struct CPhysObjMass
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual float GetMass();
};
struct COwnerView
{
	char m_pad[0xa8];
	CBasePlayer *m_pPlayer;
};

extern CUnknown101e8480 g_10739d08;
void sub_101cebc0(CBasePlayer *p, int a, int b);
typedef float (CUnknown101e8480::*PFN_FLOAT)(CBaseCombatCharacter *);

bool CWeaponPhysCannon::sub_1040e880(CBaseEntity *pEnt)
{
	if (m_bGrab911)
		return false;
	CPhysObjMass *pPhys = (CPhysObjMass *)pEnt->m_obj36c;
	float flMass = pPhys ? pPhys->GetMass() : 0.0f;
	COwnerView *pOwner = (COwnerView *)sub_102521f0();
	CBasePlayer *pPlayer = (pOwner == 0) ? 0 : pOwner->m_pPlayer;
	PFN_FLOAT pfn = (PFN_FLOAT)&CUnknown101e8480::sub_101e8480;
	if ((g_10739d08.*pfn)((CBaseCombatCharacter *)pPlayer) < flMass)
	{
		sub_101cebc0(pPlayer, 0x2f, 0);
		pPlayer->vfunc456();
		return false;
	}
	if (!((CWeaponMelee *)this)->sub_10411160(pEnt, 0))
		return false;
	m_grab.m_bFlag45 = 0;
	m_grab.m_f40 = 0;
	m_bGrab911 = 1;
	if (pPlayer)
	{
		sub_1040dde0(pEnt, pPlayer, 0);
		((CUnknown100a8340 *)pEnt)->sub_100a8340(0, 0);
	}
	m_grab.sub_1040c5d0((CBaseEntity *)pPlayer, pEnt, (int)pPhys);
	*(float *)((char *)this + 0x734) = gpGlobals->curtime + 0.4f;
	return true;
}
// END FUNCTION

// FUNCTION: 0x1040e9c0 size=0x53c
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CWeaponPhysCannon.h"
#include "CWeaponMelee.h"
#include "CBasePlayer.h"
#include "CUnknown101e8480.h"
#include "ScopeTrace.h"
#include "UTIL_Trace.h"
#include "ConVar.h"

struct PhysCannonObj
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual float vfunc12();	// GetMass
	virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
	virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void vfunc30(const Vector *pForce);	// ApplyForceCenter
};
#define V1(n) virtual void p##n();
#define V10(a) V1(a##0) V1(a##1) V1(a##2) V1(a##3) V1(a##4) V1(a##5) V1(a##6) V1(a##7) V1(a##8) V1(a##9)
#define V100(a) V10(a##0) V10(a##1) V10(a##2) V10(a##3) V10(a##4) V10(a##5) V10(a##6) V10(a##7) V10(a##8) V10(a##9)
struct CPhysCannonTarget
{
	V100(0) V100(1) V10(20)
	V1(210) V1(211) V1(212) V1(213) V1(214)
	virtual const Vector &vfunc215();	// WorldSpaceCenter
};

struct CUnknown1004f860 { void *sub_1004f860(); };
struct PhysCannonRay : Ray_t
{
	PhysCannonRay() { ((CUnknown1004f860 *)this)->sub_1004f860(); }
};

extern CUnknown101e8480 g_10739d08;
struct CMeleeStatView { float sub_101e8480(CBaseCombatCharacter *pChar); };
struct CEyeVecView : CBasePlayer { void sub_100b7fa0(Vector *pOut, int a, int b); };
extern ConVar g_1094a988;	// physcannon_cone (m_pParent at 0x1094a98c)
extern ConVar g_1094abf0;	// pull force (m_pParent at 0x1094abf4)
extern ConVar g_1094ad60;	// pull force (m_pParent at 0x1094ad64)
float __fastcall sub_1040e5b0(CWeaponPhysCannon *pThis);	// TraceLength
char sub_1040d930();
float sub_1040c3b0(CBaseEntity *pEnt);	// PhysGetEntityMass
char sub_101896f0(CBaseEntity *pEnt, CBasePlayer *pPlayer, int a);
void sub_101cebc0(CBasePlayer *pPlayer, int a, int b);

inline float PhysCannonCvarFloat(ConVar &cv) { return cv.m_pParent->vfunc1() ? g_104454c4 : cv.m_pParent->m_fValue; }
struct EntW : CBaseEntity { int edict() { return m_pEdict2e0; } int entindex() { return engine->vfunc35(edict()); } bool IsWorld() { return entindex() == 0; } };
inline bool PhysCannonIsWorld(CBaseEntity *pEnt) { return ((EntW *)pEnt)->IsWorld(); }
inline CBasePlayer *PhysCannonOwnerPlayer(CPhysCannonOwner *pOwner)
{
	if (!pOwner)
		return 0;
	return *(CBasePlayer **)((char *)pOwner + 0xa8);
}

inline void PhysCannon_TraceLine(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, void *pFilter, CGameTrace *ptr)
{
	PhysCannonRay ray;
	ray.sub_1004f7a0(&vecAbsStart.x, &vecAbsEnd.x);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)pFilter, ptr);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

inline void PhysCannon_TraceHull(const Vector &vecAbsStart, const Vector &vecAbsEnd, const Vector &hullMin,
	const Vector &hullMax, unsigned int mask, void *pFilter, CGameTrace *ptr)
{
	ScopeTrace scope("UTIL_TraceHull", g_106b8540, g_106b8540);
	PhysCannonRay ray;
	ray.sub_1006dec0(vecAbsStart, &vecAbsEnd.x, &hullMin.x, &hullMax.x, 0, 0);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)pFilter, ptr);
	if (g_10738960.sub_1005f190())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0xff, 0, 1, -1.0f);
}

int CWeaponPhysCannon::sub_1040e9c0()
{
	CPhysCannonOwner *pOwner = sub_102521f0();
	if (!pOwner)
		return 1;
	CBasePlayer *pPlayer = *(CBasePlayer **)((char *)pOwner + 0xa8);
	if (!pPlayer)
		return 1;

	Vector forward;
	((CEyeVecView *)pPlayer)->sub_100b7fa0(&forward, 0, 0);

	Vector start = pPlayer->vfunc389(*(Vector *)pPlayer->vfunc220());
	float testLength = sub_1040e5b0(this);
	Vector end = start + forward * testLength;

	CGameTrace tr;
	CTraceFilterNoOwnerTest filter(pPlayer);
	PhysCannon_TraceLine(start, end, 0x46004003, &filter, &tr);

	if (tr.m_fraction == 1.0 || tr.m_pEnt == 0 || PhysCannonIsWorld(tr.m_pEnt))
	{
		PhysCannon_TraceHull(start, end, -Vector(4, 4, 4), Vector(4, 4, 4), 0x46004003, &filter, &tr);
	}

	CBaseEntity *pEntity = tr.m_pEnt;
	bool bAttach = false;
	bool bPull = false;

	if (tr.m_fraction != 1.0f && tr.m_pEnt && !PhysCannonIsWorld(tr.m_pEnt))
	{
		bAttach = true;
	}

	CBaseEntity *pConeEntity = 0;
	if (!bAttach && !bPull)
	{
		pConeEntity = sub_1040f550(&start, &forward, g_1094a988.GetFloat());
	}

	if (pConeEntity)
	{
		pEntity = pConeEntity;
		if ((((CPhysCannonTarget *)pEntity)->vfunc215() - start).LengthSqr() <= testLength * testLength)
			bAttach = true;
		else
			bPull = true;
	}

	if (!((CWeaponMelee *)this)->sub_10411160(pEntity, 0))
	{
		if (!pEntity)
			return 1;
		PhysCannonObj *pObj = *(PhysCannonObj **)((char *)pEntity + 0x36c);
		float flMass = pObj ? pObj->vfunc12() : 0.0f;
		if (((CMeleeStatView *)&g_10739d08)->sub_101e8480((CBaseCombatCharacter *)pPlayer) < flMass)
		{
			sub_101cebc0(pPlayer, 0x2f, 0);
			pPlayer->vfunc456();
			pPlayer->sub_10167fd0();
		}
		return 1;
	}

	if (!sub_101896f0(pEntity, PhysCannonOwnerPlayer(sub_102521f0()), 0))
		return 2;

	if (bAttach)
		return sub_1040e880(pEntity) ? 0 : 1;

	if (!bPull)
		return 1;

	PhysCannonObj *pObj = *(PhysCannonObj **)((char *)pEntity + 0x36c);
	if (!pObj)
		return 1;

	Vector pullDir = start - ((CPhysCannonTarget *)pEntity)->vfunc215();
	VectorNormalize(pullDir);
	pullDir *= sub_1040d930() ? PhysCannonCvarFloat(g_1094abf0) : PhysCannonCvarFloat(g_1094ad60);
	float mass = sub_1040c3b0(pEntity);
	if (mass < 50.0f)
		pullDir *= (mass + 0.5) * 0.02;
	pObj->vfunc30(&pullDir);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1040f050 size=0x19
#include "CTraceFilterSimple.h"

// TARGET: CTraceFilterNoOwnerTest::vfunc0
bool CTraceFilterNoOwnerTest::vfunc0(void *pHandleEntity, int contentsMask)
{
	if (pHandleEntity != m_pOwner)
		return sub_101d31c0(pHandleEntity, contentsMask);
	return false;
}
// END FUNCTION

// FUNCTION: 0x1040f080 size=0x3cd
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CGameTrace.h"
#include "CTraceFilterSimple.h"
#include "CWeaponMelee.h"
#include "UTIL_Trace.h"
#include "Vector.h"
#include <string.h>
int sub_101cca80(CBaseEntity **pList, int nMax, const Vector *pMins, const Vector *pMaxs, int a, int b);
extern char g_106b8540[];

CBaseEntity *CWeaponMelee::sub_1040f080(const Vector *pCenter, const Vector *pForward, float flMin, float flMax, char bFlag)
{
	float flRadius = sub_1040e5b0() + 1.0;
	bool bPrev = bFlag != 0;
	float flBest = flRadius;
	CBaseEntity *pBest = 0;
	CBaseEntity *pList[256];
	Vector mins = *pCenter - Vector(flRadius, flRadius, flRadius);
	Vector maxs = Vector(flRadius, flRadius, flRadius) + *pCenter;
	int nCount = sub_101cca80(pList, 0x100, &mins, &maxs, 0, 1);
	for (int i = 0; i < nCount; i++) {
		if (pList[i]->m_obj36c) {
			const char *pName = pList[i]->m_classname11c;
			bool bBall = _strcmpi(pName ? pName : g_106b8540, "prop_combine_ball") == 0;
			if (bBall || !bPrev) {
				Vector vecDelta;
				VectorSubtract(*((CEntityVSlots *)pList[i])->slot215(), *pCenter, vecDelta);
				float flLen = VectorNormalize(vecDelta);
				if (bBall && !bPrev) {
					if (!(flLen >= flRadius)) {
						float flDot = DotProduct(vecDelta, *pForward);
						if (!(flDot <= flMin)) {
							if (!(flLen > flBest))
								goto hit;
							if (!(flDot <= flMax))
								goto hit;
						}
					}
				} else {
					if (!(flLen >= flBest) && !(DotProduct(vecDelta, *pForward) <= flMin))
						goto hit;
				}
				continue;
hit:
				{
					CBaseEntity *pOwner = (CBaseEntity *)sub_102521f0();
					CGameTrace trace;
					UTIL_TraceLine(*pCenter, *((CEntityVSlots *)pList[i])->slot215(), 0x46004003, pOwner, 0, &trace);
					if (trace.m_pEnt == pList[i]) {
						pBest = pList[i];
						flBest = flLen;
						bPrev = bBall;
					}
				}
			}
		}
	}
	return pBest;
}
// END FUNCTION

// FUNCTION: 0x1040f550 size=0x31e
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CGameTrace.h"
#include "CTraceFilterSimple.h"
#include "CWeaponMelee.h"
#include "UTIL_Trace.h"
#include "Vector.h"
float sub_1040e5b0();
int sub_101cca80(CBaseEntity **pList, int nMax, const Vector *pMins, const Vector *pMaxs, int a, int b);

CBaseEntity *CWeaponMelee::sub_1040f550(const Vector *pOrigin, const Vector *pDir, float flMinDot)
{
	float flRadius = sub_1040e5b0() + 1.0;
	CBaseEntity *pBest = 0;
	CBaseEntity *pList[256];
	Vector mins = *pOrigin - Vector(flRadius, flRadius, flRadius);
	Vector maxs = Vector(flRadius, flRadius, flRadius) + *pOrigin;
	int nCount = sub_101cca80(pList, 0x100, &mins, &maxs, 0, 1);
	for (int i = 0; i < nCount; i++) {
		if (pList[i]->m_obj36c) {
			Vector vecDelta = *((CEntityVSlots *)pList[i])->slot215() - *pOrigin;
			float flLen = VectorNormalize(vecDelta);
			if (!(flLen >= flRadius) && !(DotProduct(vecDelta, *pDir) <= flMinDot)) {
				CTraceFilterNoOwnerTest filter(sub_102521f0());
				CGameTrace trace;
				UTIL_TraceLine(*pOrigin, *((CEntityVSlots *)pList[i])->slot215(), 0x46004003, &filter, &trace);
				if (trace.m_pEnt == pList[i]) {
					pBest = pList[i];
					flRadius = flLen;
				}
			}
		}
	}
	return pBest;
}
// END FUNCTION

// FUNCTION: 0x1040f940 size=0x816
class Vector;
__forceinline void VectorSubtract(const Vector &a, const Vector &b, Vector &c);
#include "Vector.h"
#include "CEntityVSlots.h"
#include "CGrabController.h"
#include "CUnknown1040cb60.h"
#include "Vector.h"
#include "Ray_t.h"
#include "CTraceFilterSimpleTwoEnt.h"
#include "CCollisionProperty.h"
#include "CUnknown10738960.h"
#include "CUnknown1003ff80.h"
#include <math.h>

// mathlib.h matrix3x4_t with the SDK's empty inline constructor (one free inline site per local, lever 51).
struct matrix3x4_t
{
	matrix3x4_t() {}
	float m_flMatVal[3][4];
};

float sub_1013d600(float next, float cur);
void sub_10139610(const Vector *ang, Vector *fwd, Vector *right, Vector *up);
void sub_10139b90(const Vector &angles, matrix3x4_t &matrix);	// AngleMatrix
void sub_101381b0(const Vector &in, const matrix3x4_t &matrix, Vector &out);	// VectorRotate
void sub_10410500(CEntityVSlots *pPlayer, matrix3x4_t &matrix);	// ComputePlayerMatrix
bool sub_10410490(CEntityVSlots *pEntity, CEntityVSlots *pPlayer);
Vector sub_10138580(const Vector &angles, const matrix3x4_t &matrix);	// TransformAnglesToWorldSpace (QAngle by value)
Vector &sub_1032b960();
void sub_10410370(const Vector &a, const Vector &b, float t, Vector &out);
void sub_1013ca00(const Vector &P, const Vector &A, const Vector &B, Vector &nearest, float *t);
void sub_10142aa0(const Vector &origin, const Vector &mins, const Vector &maxs, int r, int g, int b, int a, float flDuration);

#define V1(a) virtual void a();
#define V10(p) V1(p##0) V1(p##1) V1(p##2) V1(p##3) V1(p##4) V1(p##5) V1(p##6) V1(p##7) V1(p##8) V1(p##9)
struct PhysObjV { V10(a) V10(b) V10(c) V10(d) V1(e0) V1(e1) V1(e2) V1(e3) V1(e4) V1(e5) V1(e6) V1(e7) V1(e8) virtual const void *GetCollide(); };
struct PhysCollideV { V10(a) V1(b0) V1(b1) V1(b2) V1(b3) V1(b4) V1(b5) V1(b6) virtual Vector CollideGetExtent(const void *pCollide, const Vector &collideOrigin, const Vector &collideAngles, const Vector &direction); };
extern PhysCollideV *g_1072393c;
struct EngineTraceV { V1(a0) V1(a1) V1(a2) V1(a3) virtual void TraceRay(const Ray_t &ray, unsigned int fMask, void *pTraceFilter, void *pTrace); };
extern EngineTraceV *g_1070b254;
// g_debug_physcannon: convar.h's inline ConVar::GetBool() { return !!GetInt(); }; GetInt is the out-of-line
// copy 0x1005f190 here (VC6 declined it).
struct ConVarV : CFoo1005f190 { bool GetBool() { return !!sub_1005f190(); } };
extern ConVarV g_1094aac0;
extern Vector g_1070d1b0;
extern float g_1070d9d0[];
struct EntListV { CEntityVSlots *sub_100290c0(const void *h); };
extern EntListV *g_10566458;

struct CollPropV
{
	virtual void v0();
	virtual const Vector *OBBMins();
	virtual const Vector *OBBMaxs();
	Vector m_vecMins;
	Vector m_vecMaxs;
	void sub_100dcd90(const Vector &mins, const Vector &maxs, Vector *pOutMins, Vector *pOutMaxs);
	void sub_104103c0(const Vector &in, Vector *pOut);
	void WorldSpaceAABB(Vector *pWorldMins, Vector *pWorldMaxs) { sub_100dcd90(m_vecMins, m_vecMaxs, pWorldMins, pWorldMaxs); }
	__forceinline const Vector &OBBCenter()
	{
		Vector &vecResult = sub_1032b960();
		sub_10410370(m_vecMins, m_vecMaxs, 0.5f, vecResult);
		return vecResult;
	}
	__forceinline const Vector &WorldSpaceCenter()
	{
		Vector &vecResult = sub_1032b960();
		sub_104103c0(OBBCenter(), &vecResult);
		return vecResult;
	}
};

struct TraceV { char m_pad[0x2c]; float fraction; char m_pad2[0x54 - 0x30]; };

struct CGrabV : CGrabController
{
	CEntityVSlots *GetAttached() { return g_10566458->sub_100290c0(&m_h14c); }
	float ComputeError() { return ((CUnknown1040cb60 *)this)->sub_1040c080(); }
	void SetTargetPosition(const Vector &target, const Vector &targetOrientation) { ((CUnknown1040cb60 *)this)->sub_1040bfc0(&target.x, &targetOrientation.x); }
};

// baseentity.h inline accessors (m_pPhysicsObject at +0x36c, m_Collision at +0x270).
struct CEntV : CEntityVSlots
{
	PhysObjV *VPhysicsGetObject() const { return *(PhysObjV **)((char *)this + 0x36c); }
	CollPropV *CollisionProp() { return (CollPropV *)((char *)this + 0x270); }
};
#define ENT(e) ((CEntV *)(e))
#define clamp(val, min, max) (((val) > (max)) ? (max) : (((val) < (min)) ? (min) : (val)))

// TARGET: CGrabController::sub_1040f940
bool CGrabController::sub_1040f940(CEntityVSlots *pPlayer, float flError)
{
	CEntityVSlots *pEntity = ((CGrabV *)this)->GetAttached();
	if (!pEntity || ((CGrabV *)this)->ComputeError() > flError || pPlayer->slot209() == pEntity || !ENT(pEntity)->VPhysicsGetObject())
	{
		return false;
	}

	Vector forward, right, up;
	Vector playerAngles = *pPlayer->slot194();
	float pitch = sub_1013d600(playerAngles.x, 0);
	playerAngles.x = clamp(pitch, -75, 75);
	sub_10139610(&playerAngles, &forward, &right, &up);

	Vector radial = g_1072393c->CollideGetExtent(ENT(pEntity)->VPhysicsGetObject()->GetCollide(), g_1070d1b0, *pEntity->slot219(), -forward);
	Vector player2d = *ENT(pPlayer)->CollisionProp()->OBBMaxs();
	float playerRadius = player2d.Length2D();
	float radius = playerRadius + fabs(DotProduct(forward, radial));

	float distance = 24 + (radius * 2.0f);

	Vector start = pPlayer->slot389(*pPlayer->slot220());
	Vector end = start + (forward * distance);

	TraceV tr;
	((CUnknown1003ff80 *)&tr)->sub_1003ff80();
	CTraceFilterSimpleTwoEnt traceFilter(pPlayer, pEntity, 0);
	Ray_t ray;
	ray.Init(start, end);
	g_1070b254->TraceRay(ray, 0x400b, &traceFilter, &tr);

	if (tr.fraction < 0.5)
	{
		end = start + forward * (radius * 0.5f);
	}
	else if (tr.fraction <= 1.0f)
	{
		end = start + forward * (distance - radius);
	}
	Vector playerMins, playerMaxs, nearest;
	ENT(pPlayer)->CollisionProp()->WorldSpaceAABB(&playerMins, &playerMaxs);
	Vector playerLine = ENT(pPlayer)->CollisionProp()->WorldSpaceCenter();
	sub_1013ca00(end, playerLine + Vector(0, 0, playerMins.z), playerLine + Vector(0, 0, playerMaxs.z), nearest, 0);

	Vector delta = end - nearest;
	float len = VectorNormalize(delta);
	if (len < radius)
	{
		end = nearest + radius * delta;
	}

	if (g_1094aac0.GetBool())
	{
		sub_10142aa0(end, -Vector(2, 2, 2), Vector(2, 2, 2), 0, 255, 0, true, 0);

		sub_10142aa0(*((CGrabV *)this)->GetAttached()->slot215(),
			-Vector(radius, radius, radius),
			Vector(radius, radius, radius),
			255, 0, 0,
			true,
			0.0f);
	}

	Vector angles;
	sub_1040c500(&angles, (const Vector *)m_v160, pPlayer);

	if (sub_10410490(pEntity, pPlayer))
	{
		matrix3x4_t tmp;
		sub_10410500(pPlayer, tmp);
		angles = sub_10138580(*(const Vector *)g_1070d9d0, tmp);
	}

	if (m_b15c)
	{
		matrix3x4_t tmp;
		sub_10410500(pPlayer, tmp);
		angles = sub_10138580(*(const Vector *)m_v150, tmp);
	}

	matrix3x4_t attachedToWorld;
	Vector offset;
	sub_10139b90(angles, attachedToWorld);
	sub_101381b0(*(const Vector *)m_v16c, attachedToWorld, offset);

	((CGrabV *)this)->SetTargetPosition(end - offset, angles);

	return true;
}
// END FUNCTION

// FUNCTION: 0x10410370 size=0x39
// TARGET: sub_10410370
void sub_10410370(const float *a, const float *b, float t, float *out)
{
    out[0] = (b[0] - a[0]) * t + a[0];
    out[1] = (b[1] - a[1]) * t + a[1];
    out[2] = (b[2] - a[2]) * t + a[2];
}
// END FUNCTION

// FUNCTION: 0x104103c0 size=0x9b
#include "CCollisionProperty.h"
#include "matrix3x4_t.h"

#define CV(n) virtual void s##n();
struct CollView {
	CV(0) CV(1) CV(2) CV(3) CV(4) CV(5) CV(6) CV(7)
	virtual Vector *s8();
	virtual Vector *s9(int a);
	virtual matrix3x4_t *s10();
};

extern Vector g_1070d9d0;
void sub_100087ba(const float *in1, const matrix3x4_t *in2, float *out);

inline void VectorTransform(const Vector &in1, const matrix3x4_t &in2, Vector &out)
{
	sub_100087ba(&in1.x, &in2, &out.x);
}

Vector *CCollisionProperty::sub_104103c0(const Vector &in, Vector *pResult)
{
	CollView *pView = (CollView *)this;
	if (!(m_usSolidFlags & 0x80) && m_nSolidType != 2 && m_nSolidType != 0 && *pView->s9(0) != g_1070d9d0)
	{
		VectorTransform(in, *pView->s10(), *pResult);
		return pResult;
	}
	const Vector &origin = *pView->s8();
	VectorAdd(origin, in, *pResult);
	return pResult;
}
// END FUNCTION

// FUNCTION: 0x10410490 size=0x4d
#define V1(a) virtual void a();
#define V10(p) V1(p##0) V1(p##1) V1(p##2) V1(p##3) V1(p##4) V1(p##5) V1(p##6) V1(p##7) V1(p##8) V1(p##9)
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)
struct SOwner2 {
    V100(a) V100(b) V100(c) V100(d)
    V1(e0) V1(e1) V1(e2) V1(e3)
    virtual int v404(int);
};
struct SEnt {
    char pad0[0x94];
    SOwner2 *m_p94;
    char pad98[0x11c - 0x98];
    const char *m_psz11c;
};
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern char g_106b8540[];
bool sub_10410490(SEnt *pEnt, int a)
{
    if (!pEnt->m_p94)
        return false;
    if (pEnt->m_p94->v404(a) == 1)
        return false;
    const char *s = pEnt->m_psz11c;
    if (!s)
        s = g_106b8540;
    return _strcmpi(s, "npc_turret_floor") == 0;
}
// END FUNCTION

// FUNCTION: 0x10410500 size=0xd9
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "Vector.h"
void sub_10139b50(int *a, int *b, int *c);

typedef Vector *(CBaseEntity::*P194)();
typedef void (CBaseEntity::*P193)(Vector *pOut);
typedef float *(CBaseEntity::*P217)();

void sub_10410500(CBaseEntity *pEnt, int *pOut)
{
    if (!pEnt)
        return;

    Vector ang = *(pEnt->*(*(P194 *)((char *)*(void ***)pEnt + 0x308)))();
    Vector eye;
    (pEnt->*(*(P193 *)((char *)*(void ***)pEnt + 0x304)))(&eye);
    ang.x = 0.0f;

    const Vector &mins = *(Vector *)((CCollisionProperty *)((char *)pEnt + 0x270))->vfunc1();
    float flFeet = (pEnt->*(*(P217 *)((char *)*(void ***)pEnt + 0x364)))()[2] + mins.z;
    eye.z += (ang.x < 0.0f) ? -8.0f - ang.x * 1.0666667f
                            : ((flFeet - eye.z + 2.0f) - -8.0f) * ang.x * 0.033333335f - 8.0f;

    ang.x = 0.0f;
    sub_10139b50((int *)&ang, (int *)&eye, pOut);
}
// END FUNCTION

// FUNCTION: 0x10410620 size=0x59
#include "CWeaponPhysCannon.h"

struct CPhysCannonPlayer
{
	char m_pad0000[0x3e0];
	int m_n3e0;
};

struct CPhysCannonOwner
{
	char m_pad0000[0xa8];
	CPhysCannonPlayer *m_pPlayer;
};

namespace block_10410620
{
char sub_1040d930() { return 0; }
}
using namespace block_10410620;

// TARGET: CWeaponPhysCannon::sub_10410620
void CWeaponPhysCannon::sub_10410620()
{
	CPhysCannonOwner *pOwner = sub_102521f0();
	CPhysCannonPlayer *pPlayer = !pOwner ? 0 : pOwner->m_pPlayer;
	if (pPlayer->m_n3e0 >= 2)
	{
		sub_104106a0(1, 0);
		return;
	}
	if (!m_grab.sub_1040f940(pPlayer, (float)((sub_1040d930() ? 6 : 0) + 12)))
		sub_104106a0(1, 0);
}
// END FUNCTION

// FUNCTION: 0x104106a0 size=0x95
#include "CBaseEntity.h"
#include "CWeaponPhysCannon.h"
#include "CGlobalEntityList.h"

struct COwnerView
{
	char m_pad0000[0xa8];
	CBaseEntity *m_pEntity;	// 0xa8
};

struct CEntityView
{
	void sub_100a8340(CBaseEntity *pOwner, float flTime);
};

extern CGlobalEntityList *g_10566458;
void __cdecl sub_101895d0(CBaseEntity *pEntity, int a, int b);

// TARGET: CWeaponPhysCannon::sub_104106a0
void CWeaponPhysCannon::sub_104106a0(int unused, char bFlag)
{
	if (m_bGrab911) {
		COwnerView *pOwner = (COwnerView *)sub_102521f0();
		CBaseEntity *pPlayer = pOwner == 0 ? 0 : pOwner->m_pEntity;
		CBaseEntity *pEntity;
		unsigned int h = m_grab.m_hEntity;
		if (h != (unsigned int)-1) {
			CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
			if (pSlot->m_Serial == (int)(h >> 13))
				pEntity = (CBaseEntity *)pSlot->m_pEntity;
			else
				pEntity = 0;
		} else
			pEntity = 0;
		m_grab.sub_1040cb60();
		if (pEntity) {
			((CEntityView *)pEntity)->sub_100a8340(pPlayer, 10.0f);
			sub_101895d0(pEntity, (int)pPlayer, (bFlag != 0) + 2);
		}
		m_bGrab911 = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10410770 size=0x88
#include "CWeaponPhysCannon.h"
#include "CEntityVSlots.h"

float sub_1013d400(float flTarget, float flValue, float flStep);

struct CPhysCannonPlayerView
{
	CEntityVSlots *sub_1015d680(int index);	// the view model `index` (stub 0x10013d09)
};

struct CPhysCannonOwnerView
{
	char m_pad0000[0xa8];
	CPhysCannonPlayerView *m_pPlayer;	// 0xa8
};

// TARGET: CWeaponPhysCannon::vfunc318
void CWeaponPhysCannon::vfunc318()
{
	CPhysCannonOwnerView *pOwner = (CPhysCannonOwnerView *)sub_102521f0();
	if (pOwner) {
		CPhysCannonPlayerView *pPlayer = pOwner->m_pPlayer;
		if (pPlayer) {
			float flCurrent = m_flGlow928;
			float flTarget = m_flGlowTarget92c;
			m_flGlow928 = sub_1013d400(flTarget, flCurrent, 0.1f);
			CEntityVSlots *pViewModel = pPlayer->sub_1015d680(0);
			if (pViewModel)
				pViewModel->slot261("active", m_flGlow928);
			if (m_bGrab911)
				sub_10410620();
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10410830 size=0x21b
#include "UTIL_Trace.h"
#include "CBaseEntity.h"
#include "CWeaponMelee.h"
#include "CBaseCombatWeapon.h"
#include "CEntityVSlots.h"
#include "globalvars.h"

char sub_10189870(CBaseEntity *pEnt, int a);
void sub_10139500(Vector *pStart, float flScale, Vector *pDir, Vector *pOut);

struct CTargMemberView
{
	void sub_100b7fa0(Vector *pOut, int a, int b);
};

inline bool IsFlagBitSet(unsigned int flags, int bit)
{
	return ((flags >> bit) & 1) != 0;
}

inline void UTIL_TraceHull_Inline(const Vector &vecAbsStart, const Vector &vecAbsEnd, const Vector &hullMin,
	const Vector &hullMax, unsigned int mask, const void *ignore, int collisionGroup, CGameTrace *ptr)
{
	Ray_t ray;
	ray.Init(vecAbsStart, vecAbsEnd, hullMin, hullMax);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0xff, 0, 1, -1.0f);
}

void CWeaponMelee::sub_10410830()
{
	if (*(float *)((char *)this + 0x918) > gpGlobals->curtime)
		return;
	if (IsFlagBitSet(m_nEffectFlags, 6))
		return;
	CBaseEntity *pOwner = (CBaseEntity *)((CBaseCombatWeapon *)this)->sub_102521f0();
	if (!pOwner)
		return;
	CBaseEntity *pTarg = *(CBaseEntity **)((char *)pOwner + 0xa8);
	if (!pTarg)
		return;
	if (*(char *)((char *)this + 0x911))
		return;

	Vector vecForward;
	((CTargMemberView *)pTarg)->sub_100b7fa0(&vecForward, 0, 0);

	CEntityVSlots *pTargSlots = (CEntityVSlots *)pTarg;
	Vector vecStart = pTargSlots->slot389(*(const Vector *)pTargSlots->slot220());

	Vector vecEnd;
	sub_10139500(&vecStart, sub_1040e5b0(), &vecForward, &vecEnd);

	CGameTrace tr;
	UTIL_TraceHull_Inline(vecStart, vecEnd, Vector(-4.0f, -4.0f, -4.0f), Vector(4.0f, 4.0f, 4.0f), 0x46004003, pTarg, 0, &tr);

	if (tr.m_fraction != 1.0f && tr.m_pEnt != 0 && !sub_10411160(tr.m_pEnt, 0))
		sub_10189870(tr.m_pEnt, (int)pTarg);
}
// END FUNCTION

// FUNCTION: 0x10410ae0 size=0xd0
#include "CWeaponPhysCannon.h"
#include "CBaseCombatCharacter.h"
#include "CGlobalEntityList.h"
#define PV(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define PV100(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
struct PlayerSlots
{
    PV100(a0) PV100(a1) PV100(a2) PV100(a3) PV(a40) PV(a41) PV(a42) PV(a43) PV(a44)
    virtual void a450(); virtual void a451(); virtual void a452(); virtual void a453(); virtual void a454(); virtual void a455();
    virtual void vfunc456();
};
extern CGlobalEntityList *g_10566458;
extern char g_1055f6bc[];
void CWeaponPhysCannon::vfunc319()
{
    char *pOwner = (char *)sub_102521f0();
    char *pPlayer = pOwner ? *(char **)(pOwner + 0xa8) : 0;
    if (!pPlayer) {
        *(int *)((char *)this + 0x91c) = 0;
        return;
    }
    if (*(char *)(pPlayer + 0x2088) & 1)
        vfunc326();
    else
        vfunc321();
    unsigned int h = *(unsigned int *)((char *)this + 0xab8);
    if (h != -1) {
        CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
        if (s->m_Serial == (h >> 13) && s->m_pEntity)
            return;
    }
    bool valid = false;
    if (*(unsigned int *)(pPlayer + 0xea4) != -1) {
        unsigned int h2 = *(unsigned int *)(pPlayer + 0xea4);
        CGlobalEntityList_Slot *s2 = &g_10566458->m_Slots[h2 & 0x1fff];
        valid = s2->m_Serial == (h2 >> 13) && s2->m_pEntity;
    }
    if (!valid) {
        CBaseEntity *pWeapon = (CBaseEntity *)((CBaseCombatCharacter *)pPlayer)->sub_10335950(g_1055f6bc);
        if (pWeapon)
            *(unsigned int *)(pPlayer + 0xea4) = *pWeapon->vfunc1();
        else
            *(unsigned int *)(pPlayer + 0xea4) = -1;
    }
    ((PlayerSlots *)pPlayer)->vfunc456();
}
// END FUNCTION

// FUNCTION: 0x10410bf0 size=0x3d3
#include "CNPC_VTzimisce.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "ConVar.h"
#include "CWeaponPhysCannon.h"
#include "CSoundEnt.h"
#include "CEHandleGet.h"
#include "CGlobalEntityList.h"
#include "CEntityVSlots.h"
#include "CTraceFilterSimple.h"
#include "CGameTrace.h"
#include "Ray_t.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738960.h"
#include "AITrace.h"
#include "globalvars.h"
#include "CSoundControllerImp.h"
#include "CBasePlayer.h"
#include "UTIL_Trace.h"
struct CPod3 { int a, b, c; };

class CPlayerUnit
{
public:
	void sub_10167fd0();
};

CSoundControllerImp *__cdecl sub_101bdb50();

class CPhysCannonPhysObj
{
public:
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5();
	virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11();
	virtual float GetMass();
};

void CWeaponPhysCannon::sub_10410bf0(Vector *pPos, float flValue)
{
	flValue = (g_1094a944->vfunc1() ? g_104454c4 : g_1094a944->m_fValue) * flValue;
	const unsigned int *pHandle = &m_grab.m_hEntity;
	EHandleDetail::EntityList *pList = EHandleDetail::g_10566458;
	if (((CGlobalEntityList *)pList)->sub_100290c0(pHandle)) {
		CBaseEntity *pHeld = (CBaseEntity *)((CGlobalEntityList *)pList)->sub_100290c0(pHandle);
		sub_104106a0(0, 1);
		CPhysCannonPhysObj *pPhysObj = *(CPhysCannonPhysObj **)((char *)pHeld + 0x36c);
		float flObjMass;
		if (pPhysObj)
			flObjMass = pPhysObj->GetMass();
		else
			flObjMass = 0;
		if (flObjMass <= (g_1094aa7c->vfunc1() ? g_104454c4 : g_1094aa7c->m_fValue)) {
			if (g_1094ab14->vfunc1())
				flValue = 0;
			else
				flValue = g_1094ab14->m_fValue;
		}
		const Vector &forward = *pPos;
		Vector start; { const CPod3 *pc = (const CPod3 *)(((CEntityVSlots *)pHeld)->slot217()); int a = pc->a; int b = pc->b; CPod3 *pd = (CPod3 *)&start; pd->b = b; pd->a = a; pd->c = pc->c; }
		CGameTrace tr;
		UTIL_TraceLine_Calls(start, start + forward * flValue, 0x46004003, pHeld, 0, &tr);
		int nLen = (int)(*(Vector *)tr.m_startpos - *(Vector *)tr.m_endpos).Length();
		Vector cur;
		cur = start + forward * 128.0f;
		for (int i = 0x80; i < nLen; i += 0x80) {
			CSoundEnt::sub_101bac90(0x400, &cur, 0x80, 0.5f, 0, pHeld);
			cur = cur + forward * 128.0f;
		}
		sub_1040e1c0(pHeld, pPos, flValue);
		m_flTimes730[1] = m_flTimes730[0] = gpGlobals->curtime + 0.2;
		((CEntityVSlots *)pHeld)->slot215();
	}
	if (sub_104112d0()) {
		sub_101bdb50()->vfunc11((int)sub_104112d0(), 0x3dcccccd, 0x3f800000);
		sub_101bdb50()->vfunc10((int)sub_104112d0(), 0x42480000, 0x3f800000);
	}
	m_flElementDebounce = gpGlobals->curtime + 0.1f;
	*(float *)&m_n918 = gpGlobals->curtime + 0.25f;
	char *pOwner = (char *)sub_102521f0();
	if (pOwner && *(CBasePlayer **)(pOwner + 0xa8)) {
		CBasePlayer *pPlayer = *(CBasePlayer **)(pOwner + 0xa8);
		((CPlayerUnit *)pPlayer)->sub_10167fd0();
		float *pTimes = (float *)pPlayer->sub_1032e7b0();
		if (pTimes)
			pTimes[0x730 / 4] = gpGlobals->curtime + 0.5;
	}
}
// END FUNCTION

// FUNCTION: 0x104110d0 size=0x6d
#define V10(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4(); virtual void a##5(); virtual void a##6(); virtual void a##7(); virtual void a##8(); virtual void a##9();
#define V100(a) V10(a##0) V10(a##1) V10(a##2) V10(a##3) V10(a##4) V10(a##5) V10(a##6) V10(a##7) V10(a##8) V10(a##9)
struct Info { char pad[0x70]; short m_type; };
struct IReg { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual Info *v5(int id); };
struct Item { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual int v19(); };
struct Holder {
    V100(a) V100(b)
    V10(c) V10(d) V10(e)
    virtual void m0(); virtual void m1(); virtual void m2();
    virtual int v233(Item **out, int max);
};
extern IReg *g_10723944;
bool __stdcall sub_104110d0(Holder *h)
{
    Item *items[64];
    int n = h->v233(items, 64);
    int i = 0;
    while (i < n) {
        int id = items[i]->v19();
        short t = g_10723944->v5(id)->m_type;
        if (t == 0x46 || t == 0x42 || t == 0x48)
            return true;
        i++;
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10411160 size=0xb8
#include "CBaseEntity.h"
#include "CWeaponMelee.h"

#define AD_V(n) virtual void v##n();
#define AD_V10(p) AD_V(p##0) AD_V(p##1) AD_V(p##2) AD_V(p##3) AD_V(p##4) AD_V(p##5) AD_V(p##6) AD_V(p##7) AD_V(p##8) AD_V(p##9)

struct CWeaponMindX	// the owner's object at +0xa8
{
	AD_V10(0) AD_V10(1) AD_V10(2) AD_V10(3) AD_V10(4) AD_V10(5) AD_V10(6) AD_V10(7) AD_V10(8) AD_V10(9)
	AD_V10(10) AD_V10(11) AD_V10(12) AD_V10(13) AD_V10(14) AD_V10(15) AD_V10(16) AD_V10(17) AD_V10(18) AD_V10(19)
	AD_V(200) AD_V(201) AD_V(202) AD_V(203) AD_V(204) AD_V(205) AD_V(206) AD_V(207) AD_V(208)
	virtual CBaseEntity *vfunc209();	// the target the object holds
};

struct CWeaponTuningX
{
	float sub_101e8480(CWeaponMindX *pMind);	// stub 0x10011fc2
};
extern CWeaponTuningX g_10739d08;

int __fastcall sub_100b39c0(char *pEntity);	// CBaseEntity::GetFlags2
char sub_1040d930();
char sub_1016a660(CBaseEntity *pTarget, float flScale, float flExtra);

char CWeaponMelee::sub_10411160(CBaseEntity *pTarget, char bFlag)
{
	if (!pTarget)
		return 0;
	if (!(sub_100b39c0((char *)pTarget) & 2))
		return 0;
	CWeaponMindX *pMind;
	void *pOwner = sub_102521f0();
	if (!pOwner) {
		pMind = 0;
	} else {
		pMind = *(CWeaponMindX **)((char *)pOwner + 0xa8);
		if (pMind && pMind->vfunc209() == pTarget)
			return 0;
	}
	if (!sub_1040d930()) {
		int n = 0;
		if (!bFlag)
			n = (int)g_10739d08.sub_101e8480(pMind);
		return sub_1016a660(pTarget, (float)n, 0);
	}
	if (pTarget->m_field368 == 9)
		return 0;
	return sub_1016a660(pTarget, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x10411250 size=0x5e
struct CGlobal1094accc {
	virtual void v0();
	virtual char v1();
	char pad[0x28 - 4];
	float m_f28;
};
extern CGlobal1094accc *g_1094accc;
struct CObj10411250 {
	char pad[0x9b4];
	float m_f9b4;
};
float __fastcall sub_10411250(CObj10411250 *p)
{
	float v = p->m_f9b4;
	float d = g_1094accc->v1() ? 0.0f : g_1094accc->m_f28;
	float r = v / d;
	if (r > 1.0f)
		return 1.0f;
	if (r < 0.0f)
		return 0.0f;
	return r;
}
// END FUNCTION

// FUNCTION: 0x104112d0 size=0x11d
#include "CBaseEntity.h"
#include "CUnknown101bc140.h"
#include "CWeaponPhysCannon.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CSoundControllerImp.h"

CSoundControllerImp *sub_10004746();

CUnknown101bc140 *CWeaponPhysCannon::sub_104112d0()
{
	if (!m_pHoldSound) {
		CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
		int edict = ((CBaseEntity *)this)->m_pEdict2e0;
		m_pHoldSound = sub_10004746()->vfunc7(&filter, engine->vfunc35(edict), 6, "Weapon_PhysCannon.HoldSound", 0.8f);
	}
	return m_pHoldSound;
}
// END FUNCTION

// FUNCTION: 0x10411440 size=0x2c
struct CSlotObj10411440 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void vfunc9(int a);
};
struct CPhysCannonUnit10411440 {
    char pad[0x968];
    int m_i968;
    CSlotObj10411440 *sub_10004746();
    void sub_10411440();
};

// TARGET: sub_10411440
void CPhysCannonUnit10411440::sub_10411440()
{
    if (m_i968 != 0) {
        CSlotObj10411440 *pObj = sub_10004746();
        pObj->vfunc9(m_i968);
        m_i968 = 0;
    }
}
// END FUNCTION
