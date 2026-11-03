// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002eef0 size=0x11c
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CCollisionEvent.h"
#include "ScopeTrace.h"

CCollisionEvent::CCollisionEvent()
{
	ScopeTrace trace("CCollisionEvent::CCollisionEvent", g_106b8540);
}
// END FUNCTION

// FUNCTION: 0x10030050 size=0xb4
#include "CCollisionEvent.h"
#include "CBaseEntity.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern float g_104454d0;
void sub_10151150(void *pFluid, void *pObject, CBaseEntity *pEntity);

struct IPhysObjectStub {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual CBaseEntity *vfunc6();
};

void CCollisionEvent::vfunc6(void *pObject, void *pFluid)
{
	g_109f3620[*g_109f3680].a = "CCollisionEvent::FluidEndTouch";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (pObject && pFluid) {
		CBaseEntity *pEntity = ((IPhysObjectStub *)pObject)->vfunc6();
		if (pEntity) {
			pEntity->m_flags268 &= 0xfff7ffff;
			if (!(sub_100309a0((int)pEntity) < g_104454d0))
				sub_10151150(pFluid, pObject, pEntity);
		}
	}
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10030140 size=0x99
#include "CCollisionEvent.h"

#define V4(x) virtual void x##a(); virtual void x##b(); virtual void x##c(); virtual void x##d();
#define V16(x) V4(x##a) V4(x##b) V4(x##c) V4(x##d)

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct PhysObj {
	V16(a) V16(b) V4(c) V4(d)
	virtual void v40(void *a, void *b);
};

struct PreEvent {
	PhysObj *pObjects[2];
	int m_rest[6];
};

void CCollisionEvent::vfunc0(void *pEventArg)
{
	PreEvent *pEvent = (PreEvent *)pEventArg;
	g_109f3620[*g_109f3680].a = "CCollisionEvent::PreCollision";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	*(PreEvent *)((char *)this + 0x68) = *pEvent;
	int i = 0;
	char *rec = (char *)this + 0x88;
	do {
		if (pEvent->pObjects[i])
			pEvent->pObjects[i]->v40(rec, rec + 0x30);
		i++;
		rec += 12;
	} while (i < 2);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10030210 size=0x257
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CCollisionEvent.h"
#include "ScopeTrace.h"
#include "CEntityVSlots.h"
#include "gamevcollisionevent_t.h"
#include "CUnknown10074f70.h"

extern CUnknown10074f70_Global *g_107238f4;
void sub_10158550(IPhysicsObject *pObject, float flTime);

struct CColEntView
{
	char m_pad0000[0x94];
	int m_n94;
	char m_pad0098[0xa8 - 0x98];
	int m_nA8;

	bool HasPhysicsParent()
	{
		if (m_n94 || m_nA8)
			return true;
		return false;
	}
};

void CCollisionEvent::vfunc1(void *pEventArg)
{
	gamevcollisionevent_t *pEvent = (gamevcollisionevent_t *)pEventArg;
	ScopeTrace trace("CCollisionEvent::PostCollision", g_106b8540, g_106b8540);
	char bHasFlags[2] = { 0, 0 };
	char bFlag10[2] = { 0, 0 };
	for (int i = 0; i < 2; i++) {
		IPhysicsObject *pObject = pEvent->pObjects[i];
		if (pObject) {
			m_pEntities[i] = (CBaseEntity *)pObject->vfunc6();
			if (m_pEntities[i]) {
				bHasFlags[i] = ((CColEntView *)m_pEntities[i])->HasPhysicsParent();
				int flags = (unsigned short)pObject->vfunc10();
				pObject->vfunc40((float *)m_postVelocity[i], 0);
				if (flags & 0x10)
					bFlag10[i] = 1;
				if (pEvent->deltaCollisionTime < 1.0) {
					if (!g_107238f4->vfunc1() && g_107238f4->m_n2c)
						sub_10158550(pObject, pEvent->deltaCollisionTime);
				}
			}
		}
	}
	if (m_pEntities[0] && m_pEntities[1] && !((CEntityVSlots *)m_pEntities[0])->slot68((CEntityVSlots *)m_pEntities[1]) && !((CEntityVSlots *)m_pEntities[1])->slot68((CEntityVSlots *)m_pEntities[0])) {
		m_flSpeed80 = pEvent->collisionSpeed;
		m_pInternalData84 = (int)pEvent->pInternalData;
		if (m_pEntities[0] == m_pEntities[1]) {
			if (pEvent->isCollision && m_pEntities[0]) {
				m_pEntities[1] = 0;
				((CEntityVSlots *)m_pEntities[0])->slot230(0, m_event68);
				return;
			}
		} else if (!bHasFlags[0] || !bHasFlags[1]) {
			for (int i = 0; i < 2; i++) {
				if (pEvent->isCollision)
					((CEntityVSlots *)m_pEntities[i])->slot230(i, m_event68);
				if (pEvent->isShadowCollision && bFlag10[i])
					((CEntityVSlots *)m_pEntities[i])->slot228(i, m_event68);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10030510 size=0x19a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CCollisionEvent.h"
#include "Vector.h"
#include "ScopeTrace.h"

#define FR_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CFrContactData {
	virtual void v0();
	virtual void GetContactPoint(Vector &out);
};

struct CFrEntity {
	FR_SLOTS10(a0) FR_SLOTS10(a1) FR_SLOTS10(a2) FR_SLOTS10(a3) FR_SLOTS10(a4) FR_SLOTS10(a5) FR_SLOTS10(a6) FR_SLOTS10(a7) FR_SLOTS10(a8) FR_SLOTS10(a9)
	FR_SLOTS10(b0) FR_SLOTS10(b1) FR_SLOTS10(b2) FR_SLOTS10(b3) FR_SLOTS10(b4) FR_SLOTS10(b5) FR_SLOTS10(b6) FR_SLOTS10(b7) FR_SLOTS10(b8) FR_SLOTS10(b9)
	FR_SLOTS10(c0) FR_SLOTS10(c1) FR_SLOTS10(c2)
	virtual void slot230(); 
	virtual void slot231(void *pObject, float energy, int surfaceProps, int surfacePropsHit);
};

struct CFrObject {
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5();
	virtual CFrEntity *GetGameData();
	FR_SLOTS10(b0) FR_SLOTS10(b1) FR_SLOTS10(b2)
	virtual void b37(); virtual void b38(); virtual void b39(); virtual void b40(); virtual void b41();
	virtual void GetVelocityAtPoint(const Vector &point, Vector *pVelocity);
};

struct CFrSurface {
	char m_pad0000[0x70];
	unsigned short m_nGameMaterial;
};

struct CFrSurfaceProps {
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
	virtual CFrSurface *GetSurfaceData(int index);
};

struct CFrEffects {
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3();
	virtual void slot4(const Vector &pos, const Vector &vel, float flScale, float flRadius);
	virtual void a5();
	virtual void slot6(const Vector &pos, const Vector &vel);
};

extern CFrSurfaceProps *g_10723944;
extern CFrEffects *g_10566258;

void CCollisionEvent::vfunc2(void *pObjectIn, float energy, int surfaceProps, int surfacePropsHit, void *pDataIn)
{
	ScopeTrace trace("CCollisionEvent::Friction", g_106b8540);
	CFrObject *pObject = (CFrObject *)pObjectIn;
	CFrContactData *pData = (CFrContactData *)pDataIn;
	CFrSurface *pSurf = g_10723944->GetSurfaceData(surfaceProps);
	CFrSurface *pHit = g_10723944->GetSurfaceData(surfacePropsHit);
	Vector vecPos;
	Vector vecVel;
	pData->GetContactPoint(vecPos);
	pObject->GetVelocityAtPoint(vecPos, &vecVel);
	vecVel = -vecVel;
	VectorNormalize(vecVel);
	switch (pHit->m_nGameMaterial) {
	case 'C':
		if (!(energy < 7840.0f))
			g_10566258->slot4(vecPos, vecVel, 1.0f, 16.0f);
		break;
	case 'D':
		if (!(energy < 2250.0f))
			g_10566258->slot4(vecPos, vecVel, 1.0f, 16.0f);
		break;
	}
	if (energy > 12250.0f && (pSurf->m_nGameMaterial == 'M' || pSurf->m_nGameMaterial == 'G')) {
		switch (pHit->m_nGameMaterial) {
		case 'C':
		case 'M':
			g_10566258->slot6(vecPos, vecVel);
			break;
		}
	}
	CFrEntity *pEntity = pObject->GetGameData();
	if (pEntity)
		pEntity->slot231(pObject, energy, surfaceProps, surfacePropsHit);
}
// END FUNCTION

// FUNCTION: 0x10030890 size=0x5a
#include "CCollisionEvent.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"

void sub_10030e40();

// TARGET: CCollisionEvent::vfunc7
void CCollisionEvent::vfunc7()
{
	g_109f3620[*g_109f3680].name = "CCollisionEvent::PostSimulationFrame";
	g_109f3620[*g_109f3680].file = g_106b8540;
	g_109f3620[*g_109f3680].line = g_106b8540;
	(*g_109f3680)++;
	sub_10030e40();
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100315c0 size=0xe5
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CCollisionEvent.h"
#include "ScopeTrace.h"

struct CVec3 { float x, y, z; };

struct IPhysObjUnit
{
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5();
    virtual void *GetGameData();
};

struct IPhysCollisionDataUnit
{
    virtual void GetSurfaceNormal(CVec3 &v);
    virtual void GetContactPoint(CVec3 &v);
};

void CCollisionEvent::vfunc3(void *pObject1, void *pObject2, void *pData)
{
    ScopeTrace trace("CCollisionEvent::StartTouch", g_106b8540);
    void *pEntity1 = ((IPhysObjUnit *)pObject1)->GetGameData();
    void *pEntity2 = ((IPhysObjUnit *)pObject2)->GetGameData();
    if (pEntity1 && pEntity2) {
        CVec3 vecA, vecB;
        ((IPhysCollisionDataUnit *)pData)->GetContactPoint(vecB);
        ((IPhysCollisionDataUnit *)pData)->GetSurfaceNormal(vecA);
        if (!*((char *)this + 0x13c)) {
            sub_10030ba0(pEntity1, pEntity2, &vecB, &vecA);
            return;
        }
        sub_10030f30(pEntity1, pEntity2, 0, &vecB, &vecA);
    }
}
// END FUNCTION

// FUNCTION: 0x100316f0 size=0xd9
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CCollisionEvent.h"
#include "ScopeTrace.h"

class CBaseEntity;

struct CPhysObjSlots
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5();
	virtual CBaseEntity *GetGameData();
};

struct CPhysDataSlots
{
	virtual void GetContactPoint(float *pOut);
	virtual void GetSurfaceNormal(float *pOut);
};

extern char g_1070d1b0[];

void CCollisionEvent::vfunc4(void *pObject1, void *pObject2, void *pData)
{
	ScopeTrace t("CCollisionEvent::EndTouch", g_106b8540);
	CBaseEntity *pEnt1 = ((CPhysObjSlots *)pObject1)->GetGameData();
	CBaseEntity *pEnt2 = ((CPhysObjSlots *)pObject2)->GetGameData();
	if (pEnt1 && pEnt2) {
		float normal[3];
		float point[3];
		((CPhysDataSlots *)pData)->GetSurfaceNormal(normal);
		((CPhysDataSlots *)pData)->GetContactPoint(point);
		if (*((char *)this + 0x13c) == 0) {
			sub_10030cb0(pEnt1, pEnt2);
			return;
		}
		sub_10030f30(pEnt1, pEnt2, 1, g_1070d1b0, g_1070d1b0);
	}
}
// END FUNCTION

// FUNCTION: 0x10031810 size=0x81
#include "CCollisionEvent.h"
#define V10(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4(); virtual void a##5(); virtual void a##6(); virtual void a##7(); virtual void a##8(); virtual void a##9();
#define V100(a) V10(a##0) V10(a##1) V10(a##2) V10(a##3) V10(a##4) V10(a##5) V10(a##6) V10(a##7) V10(a##8) V10(a##9)
struct EntX {
    V100(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h)
    virtual void j0(); virtual void j1(); virtual void j2(); virtual void j3();
    virtual void v174(EntX *other);
};
struct PhysObj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual EntX *v6();
};
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1053a320[];
extern char g_106b8540[];
void CCollisionEvent::vfunc8(void *pObject1, void *pObject2)
{
    g_109f3620[*g_109f3680].a = g_1053a320;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    EntX *e1 = ((PhysObj *)pObject1)->v6();
    EntX *e2 = ((PhysObj *)pObject2)->v6();
    if (e1 && e2)
        e1->v174(e2);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100318d0 size=0x81
#include "CCollisionEvent.h"
#define V10(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4(); virtual void a##5(); virtual void a##6(); virtual void a##7(); virtual void a##8(); virtual void a##9();
#define V100(a) V10(a##0) V10(a##1) V10(a##2) V10(a##3) V10(a##4) V10(a##5) V10(a##6) V10(a##7) V10(a##8) V10(a##9)
struct EntX {
    V100(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h)
    virtual void j0(); virtual void j1(); virtual void j2(); virtual void j3(); virtual void j4(); virtual void j5();
    virtual void v176(EntX *other);
};
struct PhysObj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual EntX *v6();
};
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1053a34c[];
extern char g_106b8540[];
void CCollisionEvent::vfunc9(void *pObject1, void *pObject2)
{
    g_109f3620[*g_109f3680].a = g_1053a34c;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    EntX *e1 = ((PhysObj *)pObject1)->v6();
    EntX *e2 = ((PhysObj *)pObject2)->v6();
    if (e1 && e2)
        e1->v176(e2);
    --*g_109f3680;
}
// END FUNCTION
