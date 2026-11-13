// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1004ca80 size=0x6
#include "datamap.h"
#include "CPhysicsSpring.h"
namespace lifted {
extern char g_1053cca0;
}
datamap_t *CPhysicsSpring::vfunc82()
{
    return (datamap_t *)&lifted::g_1053cca0;
}
// END FUNCTION

// FUNCTION: 0x1004d0d0 size=0x1e
#include "CPhysicsSpring.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysicsSpring::vfunc5
CPhysicsSpring *CPhysicsSpring::vfunc5(unsigned int flags)
{
	sub_10013840();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1004d290 size=0x13d
#include "CPhysicsSpring.h"

extern "C" __declspec(dllimport) int Q_snprintf(char *, int, const char *, ...);
void sub_101434b0(int a, int b, const char *c, int d, int e, int f, int g, int h);

int CPhysicsSpring::vfunc124()
{
	int line = sub_100018cf();
	if (m_fTextOverlayFlags & 1) {
		char text[512];
		Q_snprintf(text, sizeof(text), "Constant: %3.2f", m_flSpringConstant);
		int ed = m_pEdict;
		sub_101434b0(engine->vfunc35(ed), line, text, 0, 255, 255, 255, 255);
		line++;
		Q_snprintf(text, sizeof(text), "Length: %3.2f", m_flLength);
		ed = m_pEdict;
		sub_101434b0(engine->vfunc35(ed), line, text, 0, 255, 255, 255, 255);
		line++;
		Q_snprintf(text, sizeof(text), "Damping: %3.2f", m_flDamping);
		ed = m_pEdict;
		sub_101434b0(engine->vfunc35(ed), line, text, 0, 255, 255, 255, 255);
		line++;
	}
	return line;
}
// END FUNCTION

// FUNCTION: 0x1004d420 size=0x111
#include "CPhysicsSpring.h"
#include "Vector.h"
void sub_10007de2(const Vector &v1, const Vector &v2, int r, int g, int b, bool noDepth, float duration);

void CPhysicsSpring::vfunc123()
{
	if (m_fTextOverlayFlags & 4) {
		Vector start, end;
		m_pSpring->GetEndPoints(&start, &end);
		Vector dir = end - start;
		VectorNormalize(dir);
		Vector p = start + dir * m_flLength;
		sub_10007de2(start, p, 0, 0, 255, false, 0);
		sub_10007de2(p, end, 255, 0, 0, false, 0);
	}
	sub_10005880();
}
// END FUNCTION

// FUNCTION: 0x1004d780 size=0x1a8
#include "CPhysicsSpring.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

extern "C" void *__cdecl memset(void *, int, unsigned int);

#define PV(n) virtual void pv##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)

struct EntSlot37 {
	PV10(0) PV10(1)
	PV(20) PV(21) PV(22) PV(23) PV(24) PV(25) PV(26)
	virtual void pv27(Vector *pOut, Vector *pIn);
};

struct SpringParams {
	float constant;
	float naturalLength;
	float damping;
	float relativeDamping;
	Vector startPosition;
	Vector endPosition;
	bool useLocalPositions;
};

struct PhysEnvStub {
	PV10(0)
	PV(10)
	virtual void *CreateSpring(EntSlot37 *pObject1, EntSlot37 *pObject2, SpringParams *pParams);
};

extern PhysEnvStub *g_10723940;
extern void (*g_109f3630)(const char *, ...);
char sub_1004d590(EntSlot37 *pObject, const Vector &a, const Vector &b);
void sub_101cd940(CPhysicsSpring *pEntity);

void CPhysicsSpring::vfunc113()
{
	sub_10001226();
	EntSlot37 *pStart, *pEnd; EntSlot37 *pE;
	sub_1004d6a0(m_pszStartName, m_pszEndName, (void **)&pStart, (void **)&pEnd);
	if ((!pStart && !pEnd) || pStart == pEnd) {
		g_109f3630("ERROR: Can't init spring %s from \"%s\" to \"%s\"\n", sub_100ab4f0(),
			STRINGR_F(m_pszStartName), STRINGR_F(m_pszEndName));
		sub_101cd940(this);
		return;
	}
	pE = pEnd;
	if (!m_bStartEndFixed) {
		m_bStartEndFixed = 1;
		Vector &vecStart = m_vecStart;
		Vector &vecEnd = m_vecEnd;
		if (!sub_1004d590(pEnd, vecEnd, vecStart)) {
			Vector vecTemp = vecStart;
			vecStart = vecEnd;
			vecEnd = vecTemp;
		}
		pStart->pv27(&vecStart, &vecStart);
		pE = *(EntSlot37 *volatile *)&pEnd; pE->pv27(&vecEnd, &vecEnd);
	}
	SpringParams params;
	memset(&params, 0, sizeof(params));
	params.constant = m_flSpringConstant;
	params.damping = m_flDamping;
	params.naturalLength = m_flLength;
	params.relativeDamping = m_flRelativeDamping;
	params.startPosition = m_vecStart;
	params.endPosition = m_vecEnd;
	params.useLocalPositions = true;
	m_pSpring = (IPhysicsSpringStub *)g_10723940->CreateSpring(pStart, pE, &params);
}
// END FUNCTION

// FUNCTION: 0x1004d9a0 size=0x107
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPhysicsSpring.h"
#include "CCollisionProperty.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

extern float g_104454c4;

// TARGET: CPhysicsSpring::vfunc103
void CPhysicsSpring::vfunc103()
{
	{
		ScopeTrace trace("CBaseEntity::SetSolid", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	m_vecStart = *((CEntityVSlots *)this)->slot220();
	if (m_flLength <= g_104454c4)
		m_flLength = (m_vecEnd - m_vecStart).Length();
}
// END FUNCTION

// FUNCTION: 0x1004db00 size=0x54
#include "QAngle.h"
#include "CPhysicsSpring.h"
extern int g_1070ba38;

struct EntView;
struct PhysObjView;
class QAngle;

void sub_1002a210(EntView *pEnt, PhysObjView *pObj1, PhysObjView *pObj2, const QAngle *pAngles, const Vector *pPos, int bFlag);

struct CSpringSlotView
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4();
	virtual PhysObjView *vfunc5();
	virtual PhysObjView *vfunc6();
};

// TARGET: CPhysicsSpring::vfunc182
void CPhysicsSpring::vfunc182(int a, int b, int c, int d)
{
	if (g_1070ba38 != m_nLastFrame488) {
		m_nLastFrame488 = g_1070ba38;
		sub_1002a210((EntView *)a, ((CSpringSlotView *)m_pSpring)->vfunc5(), ((CSpringSlotView *)m_pSpring)->vfunc6(), (const QAngle *)b, (const Vector *)c, d);
	}
}
// END FUNCTION
