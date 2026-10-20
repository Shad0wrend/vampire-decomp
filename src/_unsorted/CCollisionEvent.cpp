// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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

// FUNCTION: 0x100316f0 size=0xd9
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
