// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
#include "vampire.h"

// FUNCTION: 0x10357350 size=0x7
#include "CNPC_Crow.h"
namespace lifted {
extern float g_1044f00c;
}
float CNPC_Crow::vfunc516()
{
    return lifted::g_1044f00c;
}
// END FUNCTION

// FUNCTION: 0x10357370 size=0x6
#include "CNPC_Crow.h"
namespace lifted {
extern char g_1093a0d0;
}
int CNPC_Crow::vfunc580()
{
    return (int)&lifted::g_1093a0d0;
}
// END FUNCTION

// FUNCTION: 0x10357390 size=0x6
#include "CNPC_Crow.h"
namespace lifted {
extern int g_10628a50;
}
int CNPC_Crow::vfunc451()
{
    return lifted::g_10628a50;
}
// END FUNCTION

// FUNCTION: 0x103573b0 size=0x6
#include "datamap.h"
#include "CNPC_Crow.h"
namespace lifted {
extern char g_10628928;
}
datamap_t *CNPC_Crow::vfunc82()
{
    return (datamap_t *)&lifted::g_10628928;
}
// END FUNCTION

// FUNCTION: 0x103573d0 size=0x5
int sub_10357410(void);
int g_1093a164 = ((int (*)(int))sub_10357410)(0);
// END FUNCTION

// FUNCTION: 0x10357410 size=0x1a
namespace lifted {
extern int g_10628928;
extern int g_1062892c;
extern char g_1062896c;
}
int sub_10357410()
{
    lifted::g_1062892c = 5;
    lifted::g_10628928 = (int)&lifted::g_1062896c;
    return (int)&lifted::g_10628928;
}
// END FUNCTION

// FUNCTION: 0x10357440 size=0x1a6
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_Crow.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "CUnknown1070b244.h"
#include "ScopeTrace.h"
#include "globalvars.h"

struct CCrowTimeView
{
	virtual void v0();
	virtual bool vfunc1();
	char pad[0x24];
	float m_flFrameTime;	// 0x28
};

extern CCrowTimeView *g_1093a08c;
extern CUnknown1070b244 *g_1070b244;

static inline void Crow_SetSolid(CNPC_Crow *pCrow, int solid)
{
	ScopeTrace trace("CBaseEntity::SetSolid", pCrow->m_name26c ? pCrow->m_name26c : g_106b8540);
	((CCollisionProperty *)((char *)pCrow + 0x270))->sub_100dc480(solid);
}

void CNPC_Crow::vfunc103()
{
	CEntityVSlots *pThis = (CEntityVSlots *)this;
	sub_10273200();
	pThis->slot104();
	pThis->slot105("models/crow.mdl");
	m_n210 = (int)(g_1093a08c->vfunc1() ? 0.0f : g_1093a08c->m_flFrameTime);
	m_n1568 = 4;
	m_n156c = 4;
	sub_10273070(0);
	Crow_SetSolid(this, 2);
	pThis->slot93(4, 0);
	m_f1574 = -1.0f;
	Vector vecOffset(6.0f, 0.0f, 11.0f);
	sub_1009f380(&vecOffset);
	m_f5f48 = g_1070b244->vfunc1(0.0f, 5.0f) + gpGlobals->curtime;
	sub_10327960(0xf7);
	m_n5cc0 = 0;
	m_n5f50 = g_1070b244->vfunc2(0, 12);
	sub_100aaa40(0x11);
	sub_1026dc60();
	sub_103580d0((m_flags204 >> 4) & 1);
	sub_10332aa0(0xe, 4, 0);
	pThis->slot420();
}
// END FUNCTION

// FUNCTION: 0x10357660 size=0x6
#include "CNPC_Crow.h"
int CNPC_Crow::vfunc138()
{
    return 0xa;
}
// END FUNCTION

// FUNCTION: 0x10357680 size=0xac
#include "CBaseEntity.h"
#include "CNPC_Crow.h"

#define SV1(n) virtual void n();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)

struct CCrowSlotView
{
	SV100(a) SV100(b) SV10(c0) SV10(c1)
	virtual float *vfunc220();
};

struct CCrowFieldView
{
	char m_pad0000[0x5f4c];
	float m_flEnemyDist;
};

struct CDevFlag
{
	virtual void vfunc0();
	virtual bool vfunc1();
};

extern CDevFlag *g_10924a6c;

void CNPC_Crow::vfunc481(CBaseEntity *pEnemy)
{
	CCrowFieldView *pView = (CCrowFieldView *)this;
	const Vector *pMine = (const Vector *)((CCrowSlotView *)this)->vfunc220();
	const Vector *pOther = (const Vector *)((CCrowSlotView *)pEnemy)->vfunc220();
	Vector vecDelta = *pMine - *pOther;
	pView->m_flEnemyDist = FastSqrt(vecDelta.x * vecDelta.x + (vecDelta.y * vecDelta.y + vecDelta.z * vecDelta.z));
	if (pView->m_flEnemyDist < 256.0f)
	{
		g_10924a6c->vfunc1();
		sub_10269a20(0x78);
	}
	if (pView->m_flEnemyDist < 512.0f)
	{
		g_10924a6c->vfunc1();
		sub_10269a20(0x77);
	}
	sub_10270b20(pEnemy);
}
// END FUNCTION

// FUNCTION: 0x10357760 size=0x45
#include "CNPC_Crow.h"

#define HS(n) virtual void n();
#define HS10(p) HS(p##0) HS(p##1) HS(p##2) HS(p##3) HS(p##4) HS(p##5) HS(p##6) HS(p##7) HS(p##8) HS(p##9)

struct CCrowSlots
{
	HS10(a0) HS10(a1) HS10(a2) HS10(a3) HS10(a4) HS10(a5) HS10(a6) HS10(a7) HS10(a8) HS10(a9)
	HS10(b0) HS10(b1) HS10(b2) HS10(b3) HS10(b4) HS10(b5) HS10(b6) HS10(b7) HS10(b8) HS10(b9)
	HS10(c0) HS10(c1)
	virtual float *slot220();
};

Vector CNPC_Crow::vfunc192()
{
	CCrowSlots *p = (CCrowSlots *)this;
	float *py = p->slot220();
	float *px = p->slot220();
	float *pz = p->slot220();
	return Vector(px[0], py[1], pz[2] + 6.0f);
}
// END FUNCTION

// FUNCTION: 0x103577d0 size=0x14
#include "CNPC_Crow.h"
#include "CBaseEntitySlots.h"

int CNPC_Crow::vfunc197(int a, int b, int c, int d)
{
	((CBaseEntitySlots *)this)->slot192((float *)a);
	return a;
}
// END FUNCTION

// FUNCTION: 0x10357800 size=0xb
#include "CNPC_Crow.h"
namespace lifted {
extern char g_10628bb4;
int __stdcall sub_10005f29(int);
}
int CNPC_Crow::vfunc511()
{
    return lifted::sub_10005f29((int)&lifted::g_10628bb4);
}
// END FUNCTION

// FUNCTION: 0x10357820 size=0x263
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CNPC_Crow.h"
#include "Vector.h"
#include "engineiface.h"
#include <math.h>

struct CVar109ef2d4 { virtual void v0(); virtual char v1(); char pad[0x24]; float m_f28; };
extern CVar109ef2d4 *g_109ef2d4;
void __cdecl sub_101cf5c0(void *pEnt, Vector *pOrigin, int a);
struct CHopSoundView { void sub_101b0c10(const char *pszSound); };

// TARGET: CNPC_Crow::vfunc259
void CNPC_Crow::vfunc259(int *pTask)
{
	switch ( pTask[0] )
	{
	case 2:
		sub_103581b0(m_pTarget5ddc);
		break;

	case 4:
	{
		((CBaseEntity *)this)->sub_100b3640(1);

		Vector *pOrg = ((CEntityVSlots *)this)->slot220();
		Vector vecOrigin;
		vecOrigin.x = pOrg->x;
		vecOrigin.y = pOrg->y;
		vecOrigin.z = pOrg->z + 1.0f;
		Vector vecSet = vecOrigin;
		sub_101cf5c0(this, &vecSet, 0);

		float flHopDistance = (m_vec5dd0 - *((CEntityVSlots *)this)->slot220()).Length();
		float gravity;
		if ( g_109ef2d4->v1() || (gravity = g_109ef2d4->m_f28) <= 1.0f )
			gravity = 1.0f;

		float height = 0.25 * flHopDistance;
		float speed = (float)sqrt( 2 * gravity * height );
		float time = speed / gravity;

		Vector vecJumpDir = m_vec5dd0 - *((CEntityVSlots *)this)->slot220();
		vecJumpDir = vecJumpDir / time;
		vecJumpDir.z = speed;

		float distance = vecJumpDir.Length();
		if ( distance > 650.0f )
			vecJumpDir = vecJumpDir * ( 650.0 / distance );

		m_n5f50 -= enginerandom->vfunc2( 1, 6 );
		if ( m_n5f50 <= 0 )
			m_n5f50 = 0;

		((CHopSoundView *)this)->sub_101b0c10( "NPC_Crow.Hop" );
		((CBaseEntity *)this)->sub_100b2770( vecJumpDir );
		break;
	}

	case 3:
		((CEntityVSlots *)this)->slot310( 0x22 );
		break;

	default:
		sub_10274e30( pTask );
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x10357b30 size=0x28
#include "CNPC_Crow.h"
#include "CUnknown1070b244.h"

extern CUnknown1070b244 *g_1070b244;

// TARGET: CNPC_Crow::vfunc465
void CNPC_Crow::vfunc465(int nEvent)
{
    if (nEvent == 0x22)
    {
        m_fl6f8 = g_1070b244->vfunc1(0.0f, 0.75f);
    }
}
// END FUNCTION

// FUNCTION: 0x10357b70 size=0x1b
// TARGET: sub_10357b70
struct S10924a6c { virtual void a(); virtual void b(); };
extern S10924a6c *g_10924a6c;
struct CUnk10357b70 {
    void sub_10269a20(int condition);
    void sub_10357b70(int a);
};
void CUnk10357b70::sub_10357b70(int a)
{
    g_10924a6c->b();
    sub_10269a20(0x79);
}
// END FUNCTION

// FUNCTION: 0x10357ba0 size=0x25
#include "CNPC_Crow.h"

// TARGET: vfunc525
bool CNPC_Crow::vfunc525(int a)
{
    if (sub_1027d990() == 2) {
        sub_1000b61d(a);
        return true;
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10357be0 size=0x1e1
#include "CEntityVSlots.h"
#include "CAI_Motor.h"
#include "CNPC_Crow.h"

float sub_101d2c70(const Vector &v);
float sub_101d2ce0(const Vector &v);
extern Vector g_1070d1b0;

void CNPC_Crow::sub_10357be0(float flSpeed)
{
	if (flSpeed > 1.0)
		flSpeed = 1.0f;
	if (m_pTarget5ddc) {
		Vector vecTarget = *((CEntityVSlots *)m_pTarget5ddc)->slot220();
		Vector dir = vecTarget - *((CEntityVSlots *)this)->slot220();
		if (FastSqrt(dir.x * dir.x + (dir.y * dir.y + dir.z * dir.z)) < flSpeed * 170.0f)
			m_b5f54 = 1;
		VectorNormalize(dir);
		Vector out;
		if (sub_10357e50(dir, 170.0f, &out))
			dir = out;
		sub_100b2770(dir * 170.0f);
		CAI_Motor *pMotor = m_pMotor5d44;
		pMotor->sub_102e1c10(sub_101d2c70(dir), -2.0f);
		Vector ang = *((CEntityVSlots *)this)->slot221();
		ang.x = sub_101d2ce0(dir);
		((CEntityVSlots *)this)->slot64(&ang.x);
	} else {
		((CEntityVSlots *)this)->slot220();
		sub_100b2770(g_1070d1b0);
	}
}
// END FUNCTION

// FUNCTION: 0x10357e50 size=0x1f9
#include "CNPC_Crow.h"
#include "Vector.h"
#include "CEntityVSlots.h"
#include "UTIL_Trace.h"

extern Vector g_1070d1b0;
char *sub_102d6100(int idx);
char *sub_102d6120(int idx);

inline void CrossProductF(const float *v1, const float *v2, float *cross)
{
	cross[0] = v1[1] * v2[2] - v1[2] * v2[1];
	cross[1] = v1[2] * v2[0] - v1[0] * v2[2];
	cross[2] = v1[0] * v2[1] - v1[1] * v2[0];
}

// TARGET: CNPC_Crow::sub_10357e50
bool CNPC_Crow::sub_10357e50(const Vector &vecDir, float flLength, Vector *pOut)
{
	Vector vecHalf = vecDir * flLength * 0.5f;
	Vector vecEnd = *((CEntityVSlots *)this)->slot217() + vecHalf;
	Vector *pMaxs = (Vector *)sub_102d6120(m_n1568);
	Vector *pMins = (Vector *)sub_102d6100(m_n1568);
	CGameTrace trace;
	UTIL_TraceHull_DebugCall(*((CEntityVSlots *)this)->slot217(), vecEnd, *pMins, *pMaxs, 0x202400b, this, 0x11, &trace, 1, 0);

	if (trace.m_fraction < 1.0f)
	{
		float side[3];
		CrossProductF(&vecDir.x, trace.m_planeNormal, side);
		CrossProductF(trace.m_planeNormal, side, &pOut->x);
		VectorNormalize(*pOut);
		return true;
	}
	*pOut = g_1070d1b0;
	return false;
}
// END FUNCTION

// FUNCTION: 0x103580d0 size=0xaf
#include "CBaseEntity.h"
#include "CNPC_Crow.h"

void CNPC_Crow::sub_103580d0(int mode)
{
	CBaseEntity *pEnt = (CBaseEntity *)this;
	if (mode == 1) {
		pEnt->sub_100b3640(1);
		pEnt->sub_100b3580(0x400);
		sub_1027d9b0(2);
		sub_1026dc30(1);
		sub_1026dc00(4);
		pEnt->vfunc93(4, 0);
		pEnt->sub_100b3b00();
	} else if (mode == 0) {
		pEnt->sub_100b3640(0x400);
		sub_1027d9b0(0);
		sub_1026dc30(4);
		sub_1026dc00(1);
		pEnt->vfunc93(4, 0);
		pEnt->sub_100b3b00();
	} else {
		pEnt->sub_100b3640(0x400);
		sub_1027d9b0(0);
		sub_1026dc30(4);
		sub_1026dc00(1);
		pEnt->vfunc93(4, 0);
		pEnt->sub_100b3b00();
	}
}
// END FUNCTION

// FUNCTION: 0x103581b0 size=0x10e
#include "CBaseEntity.h"
#include "CNPC_Crow.h"

#define SV1(n) virtual void n();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)

struct CCrowSlotView
{
	SV100(a) SV100(b) SV10(c0) SV10(c1)
	virtual float *vfunc220();
};

void sub_101cf5c0(CNPC_Crow *pEnt, const Vector *pOrigin, int a);

inline void UTIL_SetOrigin(CNPC_Crow *pEnt, const Vector &vecOrigin, int a)
{
	Vector vecCopy = vecOrigin;
	sub_101cf5c0(pEnt, &vecCopy, a);
}

void CNPC_Crow::sub_103581b0(CBaseEntity *pTarget)
{
	if (pTarget)
	{
		sub_103580d0(1);
		UTIL_SetOrigin(this, *(Vector *)((CCrowSlotView *)this)->vfunc220() + Vector(0, 0, 1), 0);
		const Vector *pTargetPos = (const Vector *)((CCrowSlotView *)pTarget)->vfunc220();
		const Vector *pMyPos = (const Vector *)((CCrowSlotView *)this)->vfunc220();
		Vector vecDir = *pTargetPos - *pMyPos;
		VectorNormalize(vecDir);
		sub_100b2770(vecDir * 170.0f);
	}
}
// END FUNCTION

// FUNCTION: 0x10358310 size=0x1
#include "CNPC_Crow.h"
void CNPC_Crow::vfunc434()
{
}
// END FUNCTION

// FUNCTION: 0x10358330 size=0x382
#include "CEntityVSlots.h"
#include "CNPC_Crow.h"
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include "CAI_Motor.h"
#include "engineiface.h"
#include <math.h>

extern int g_1093a118;
CBaseEntity *sub_102d1af0(CBaseEntity *pNpc, int nType, int nCount, float flRadius, int a, int b);

#define DEG2RAD(x) ((float)(x) * 0.017453292f)

// TARGET: CNPC_Crow::vfunc442
void CNPC_Crow::vfunc442(int *pTask)
{
	CEntityVSlots *pSlots = (CEntityVSlots *)this;
	switch (pTask[0]) {
	case 0x14b:
		if (enginerandom->vfunc2(1, 4) == 1)
			pSlots->slot489();
		sub_10358f70();
		((CAI_BaseNPC *)this)->sub_10272650(g_1093a118);
		break;
	case 0x40:
		if (!m_pTarget5ddc)
			m_pTarget5ddc = sub_102d1af0((CBaseEntity *)this, 0x2bc, 3, 5000.0f, 0, 0);
		if (m_pTarget5ddc) {
			m_b5f54 = 0;
			((CAI_BaseNPC *)this)->sub_10273e80(0);
			break;
		}
		m_n1b48 = 0x2d2;
		m_psz1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\npc_crow.cpp";
		pSlots->slot448(4);
		break;
	case 0x14c:
		{
			int nAngle = enginerandom->vfunc2(-180, 180);
			float flYaw = (360.0f / 65536.0f) * ((int)((float)nAngle * (65536.0f / 360.0f)) & 0xffff);
			Vector vecNewVelocity(cos(DEG2RAD(flYaw)), sin(DEG2RAD(flYaw)), enginerandom->vfunc1(0.1f, 0.5f));
			vecNewVelocity *= 170.0f;
			((CBaseEntity *)this)->sub_100b2770(vecNewVelocity);
			((CAI_BaseNPC *)this)->sub_10272650(0x22);
		}
		break;
	case 0x14d:
		break;
	case 0x14e:
		{
			Vector vecOffset(enginerandom->vfunc1(-48.0f, 48.0f), enginerandom->vfunc1(-48.0f, 48.0f), 0);
			m_vec5dd0 = *pSlots->slot220() + vecOffset;
			((CAI_BaseNPC *)this)->sub_10273e80(0);
		}
		break;
	case 0x14f:
		{
			CEntityVSlots *pEnemy = (CEntityVSlots *)pSlots->slot167();
			if (pEnemy) {
				Vector vecEnemyOrigin = *((CEntityVSlots *)pSlots->slot167())->slot220();
				vecEnemyOrigin.z = pSlots->slot220()->z;
				m_vec5dd0 = *pSlots->slot220() - vecEnemyOrigin;
				VectorNormalize(m_vec5dd0);
				m_vec5dd0 = *pSlots->slot220() + m_vec5dd0 * (float)(32 + enginerandom->vfunc2(0, 32));
				m_pMotor5d44->sub_102e2020(&m_vec5dd0.x, 0);
				((CAI_BaseNPC *)this)->sub_10273e80(0);
			} else {
				m_n1b48 = 0x2b8;
				m_psz1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\npc_crow.cpp";
				pSlots->slot448((int)"No enemy");
			}
		}
		break;
	case 0x150:
		((CAI_BaseNPC *)this)->sub_10272650(0x28);
		m_f5f58 = pSlots->slot220()->z;
		break;
	case 0x151:
		sub_103580d0(2);
		break;
	default:
		sub_102827f0(pTask);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x103587b0 size=0x394
#include "CNPC_Crow.h"
#include "CEntityVSlots.h"
#include "CAI_BaseNPC.h"
#include "CAI_Motor.h"
#include "CBaseEntity.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738960.h"
#include "Ray_t.h"
#include "CGameTrace.h"
#include "UTIL_Trace.h"

static inline Vector BelowBy32(const Vector *p)
{
	Vector v;
	v.z = p->z - 32.0f;
	v.x = p->x;
	v.y = p->y;
	return v;
}

static inline bool Bit12(const unsigned int &f)
{
	return ((f >> 12) & 1) != 0;
}

static inline void MotorGoal(CAI_Motor *pMotor, const Vector &v, float f)
{
	pMotor->sub_102e20b0((float *)&v.x, f);
}

void CNPC_Crow::vfunc444(void *pTask)
{
	switch (*(int *)pTask)
	{
	case 0x14b:
		if (m_pTarget5ddc)
		{
			Vector *pOrg = ((CEntityVSlots *)this)->slot217();
			Vector *pTgtOrg = ((CEntityVSlots *)m_pTarget5ddc)->slot217();
			MotorGoal(m_pMotor5d44, *pTgtOrg + *pOrg, -2.0f);
		}
		if (((CEntityVSlots *)this)->slot251())
		{
			((CAI_BaseNPC *)this)->sub_10273e80(0);
			((CAI_BaseNPC *)this)->sub_10272650(0x22);
			return;
		}
		break;
	case 0x14d:
		if (m_b5f54)
		{
			m_pTarget5ddc = 0;
			((CAI_BaseNPC *)this)->sub_10273e80(0);
			return;
		}
		break;
	case 0x150:
		if (((CEntityVSlots *)this)->slot251())
		{
			((CAI_BaseNPC *)this)->sub_10273e80(0);
			((CAI_BaseNPC *)this)->sub_10272650(1);
		}
		if (((CEntityVSlots *)this)->slot217()->z < m_f5f58 && !(sub_100b3700() & 1))
		{
			Vector *pOrg1 = ((CEntityVSlots *)this)->slot217();
			CGameTrace tr;
			UTIL_TraceLine_DebugCall(*((CEntityVSlots *)this)->slot217(), BelowBy32(pOrg1), 0x200400b, this, 0x11, &tr);
			if (tr.m_fraction == 1.0f)
			{
				((CAI_BaseNPC *)this)->sub_10273e80(0);
				return;
			}
			m_f5f58 = ((CEntityVSlots *)this)->slot217()->z - tr.m_fraction * 32.0f;
		}
		break;
	case 0x14c:
		if (Bit12(m_flags268))
			((CBaseEntity *)this)->sub_100b1d10();
		MotorGoal(m_pMotor5d44, *((CEntityVSlots *)this)->slot217() + m_vec3bc, -2.0f);
		return;
	case 0x151:
		if (sub_100b3700() & 1)
		{
			sub_103580d0(0);
			((CAI_BaseNPC *)this)->sub_10273e80(0);
			return;
		}
		break;
	default:
		sub_10288780(pTask);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x10358c40 size=0xd
#include "CNPC_Crow.h"
namespace lifted {
extern char g_10628c14;
int __stdcall sub_10005c59(int);
}
bool CNPC_Crow::vfunc394()
{
    lifted::sub_10005c59((int)&lifted::g_10628c14);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10358c60 size=0x16
#include "CBaseEntity.h"
#include "CNPC_Crow.h"

bool CNPC_Crow::vfunc566(CBaseEntity *pHint)
{
	return *(int *)((char *)pHint + 0x5dc) == 0x2bc;
}
// END FUNCTION

// FUNCTION: 0x10358c90 size=0x1b
#include "CNPC_Crow.h"

// TARGET: CNPC_Crow::vfunc567
int CNPC_Crow::vfunc567(short nHintType)
{
	if (nHintType == 0x2bc)
		return 0x22;
	return sub_1026a8f0(nHintType);
}
// END FUNCTION

// FUNCTION: 0x10358cc0 size=0x5
#include "CTakeDamageInfo.h"
#include "CNPC_Crow.h"
#include "CAI_BaseNPC.h"

// TARGET: CNPC_Crow::vfunc390
// the game's 0x10358cc0: a tail call (jmp) of CAI_BaseNPC::vfunc390
int CNPC_Crow::vfunc390(CTakeDamageInfo *a0)
{
	return ((CAI_BaseNPC *)this)->CAI_BaseNPC::vfunc390(a0);
}
// END FUNCTION

// FUNCTION: 0x10358ce0 size=0x17a
#include "CNPC_Crow.h"
#include "CUnknown1070b244.h"
extern CUnknown1070b244 *g_1070b244;

// TARGET: CNPC_Crow::vfunc438
int CNPC_Crow::vfunc438()
{
	if (sub_1027d990() == 2)
		return 0x45;
	if (sub_10269aa0(0x79)) {
		sub_10269b50(0x79);
		return 0x49;
	}
	if (!(sub_100b3700() & 1) && gpGlobals->curtime > 2.0)
		return 0x49;
	if (sub_10269aa0(0x6a)) return 0x49;
	if (sub_10269aa0(0x6d)) return 0x49;
	if (sub_10269aa0(0x4c)) return 0x49;
	if (sub_10269aa0(0x4d)) return 0x49;
	if (sub_10269aa0(0x78)) {
		sub_10269b50(0x78);
		*(int *)((char *)this + 0x5f50) = 0;
		return 0x49;
	}
	if (sub_10269aa0(0x77)) {
		sub_10269b50(0x77);
		if (*(float *)((char *)this + 0x5f4c) > 400.0f)
			return 0x46;
		if (*(float *)((char *)this + 0x5f4c) > 300.0f) {
			*(int *)((char *)this + 0x5f50) -= 1;
			return 0x47;
		}
		*(int *)((char *)this + 0x5f50) -= 2;
		return 0x48;
	}
	int state = *(int *)((char *)this + 0x5cc0);
	if (state > 0 && state <= 3 && sub_1027d990() != 2) {
		if (gpGlobals->curtime > *(float *)((char *)this + 0x5f48))
			*(float *)((char *)this + 0x5f48) = g_1070b244->vfunc1(10.0f, 20.0f) + gpGlobals->curtime;
		return 0x44;
	}
	return sub_1028a380();
}
// END FUNCTION

// FUNCTION: 0x10358ec0 size=0x18
#include "CNPC_Crow.h"
#include "engineserver.h"

void CNPC_Crow::vfunc104()
{
	sub_1027bb50();
	EngineGlobals::g_1070b22c->vfunc13("models/crow.mdl", 0);
}
// END FUNCTION

// FUNCTION: 0x10358ef0 size=0xb
#include "CNPC_Crow.h"
namespace lifted {
extern char g_10628c24;
int __stdcall sub_10005c59(int);
}
int CNPC_Crow::vfunc490()
{
    return lifted::sub_10005c59((int)&lifted::g_10628c24);
}
// END FUNCTION

// FUNCTION: 0x10358f10 size=0xb
#include "CNPC_Crow.h"
namespace lifted {
extern char g_10628c34;
int __stdcall sub_10005c59(int);
}
int CNPC_Crow::vfunc489()
{
    return lifted::sub_10005c59((int)&lifted::g_10628c34);
}
// END FUNCTION

// FUNCTION: 0x10358f30 size=0xb
#include "CNPC_Crow.h"
namespace lifted {
extern char g_10628c48;
int __stdcall sub_10005c59(int);
}
int CNPC_Crow::vfunc491()
{
    return lifted::sub_10005c59((int)&lifted::g_10628c48);
}
// END FUNCTION

// FUNCTION: 0x10358f50 size=0xb
#include "CNPC_Crow.h"
namespace lifted {
extern char g_10628c58;
int __stdcall sub_10005c59(int);
}
int CNPC_Crow::vfunc488()
{
    return lifted::sub_10005c59((int)&lifted::g_10628c58);
}
// END FUNCTION

// FUNCTION: 0x10358f70 size=0xb
namespace lifted {
extern char g_10628bb4;
int __stdcall sub_10005c59(int);
}
int sub_10358f70()
{
    return lifted::sub_10005c59((int)&lifted::g_10628bb4);
}
// END FUNCTION

// FUNCTION: 0x10358f90 size=0x103
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include "CNPC_Crow.h"
extern "C" __declspec(dllimport) int __cdecl Q_snprintf(char *, int, const char *, ...);
extern char g_10628c84[];
extern char g_10628c68[];
void sub_101434b0(int index, int line, const char *text, int duration, int r, int g, int b, int a);
int CNPC_Crow::vfunc124()
{
	char buf[512];
	int line = sub_102767d0();
	if (*(unsigned char *)((char *)this + 0x224) & 1) {
		Q_snprintf(buf, 512, g_10628c84, *(int *)((char *)this + 0x5f50));
		int edict = *(int *)((char *)this + 0x2e0);
		sub_101434b0(engine->vfunc35(edict), line, buf, 0, 255, 255, 255, 255);
		line++;
		if (((CAI_BaseNPC *)this)->vfunc167()) {
			Q_snprintf(buf, 512, g_10628c68, ((CBaseEntity *)((CAI_BaseNPC *)this)->vfunc167())->sub_1009f200(), (double)*(float *)((char *)this + 0x5f4c));
			int edict2 = *(int *)((char *)this + 0x2e0);
			sub_101434b0(engine->vfunc35(edict2), line, buf, 0, 255, 255, 255, 255);
			line++;
		}
	}
	return line;
}
// END FUNCTION

// FUNCTION: 0x103590f0 size=0x6
#include "CNPC_Crow.h"
int CNPC_Crow::vfunc473()
{
    return 0xf;
}
// END FUNCTION

// FUNCTION: 0x10359110 size=0x5
#include "CAI_ClassScheduleIdSpace.h"
CAI_ClassScheduleIdSpace g_1093a0d0(false);
// END FUNCTION

// FUNCTION: 0x10359170 size=0xc
void __fastcall sub_10359190(void *pThis);
void * __fastcall sub_10359170(void *pThis)
{
    sub_10359190(pThis);
    return pThis;
}
// END FUNCTION

// FUNCTION: 0x10359190 size=0x33
void sub_1000b15e();
void sub_1000215d();
extern int g_10628a4c;
extern char g_10628a48;
extern int g_10936b68;

char sub_10359190()
{
    sub_1000b15e();
    if (g_10628a4c != g_10936b68) {
        sub_1000215d();
        g_10628a48 = 1;
        g_10628a4c = g_10936b68;
        return 1;
    }
    return g_10628a48;
}
// END FUNCTION

// FUNCTION: 0x103591e0 size=0x6
extern char g_10628a48;
// TARGET: sub_103591e0
char sub_103591e0() { return g_10628a48; }
// END FUNCTION

// FUNCTION: 0x10359200 size=0x5
#include "CAI_LocalIdSpace.h"
CAI_LocalIdSpace g_1093a070(false);
// END FUNCTION

// FUNCTION: 0x10359240 size=0x1d
#include "CNPC_Crow.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093a070;
extern B g_10936c74;
int CNPC_Crow::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093a070.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10359270 size=0x722
#include "UtlMem.h"
#include "UtlVec8.h"
#include "CUtlVector4.h"
#include "CUtlVector16.h"
#include "CUnknown10359c50.h"

extern "C" void __cdecl qsort(void *, unsigned int, unsigned int, int (__cdecl *)(const void *, const void *));
extern "C" int __cdecl sub_102bec60(const void *, const void *);
extern int sub_104124b0(const char *);
extern void sub_1025d700(const char *, int);
extern char g_109203cc[], g_109203d4[], g_109203dc[], g_10936c74[];
extern char g_1090ff08[], g_1090ff20[], g_1090ff38[], g_10920484[];
extern char g_106298ac[], g_10629894[], g_10629884[], g_10629868[], g_10629848[], g_10629838[], g_10629818[], g_106297f8[], g_106297d0[];
extern char g_106297bc[];
extern char g_1062979c[], g_10629778[], g_1062975c[];
extern char g_10629740[], g_1062954c[], g_10629364[], g_10629180[], g_10628fe8[], g_10628f50[], g_10628e24[], g_10628d40[];
extern char g_10629568[], g_10629380[], g_10629198[], g_10629000[], g_10628f68[], g_10628e38[], g_10628d58[], g_10628ca0[];
extern bool g_10628a48;
extern const char *g_10628a50;
extern const char g_10594488[], g_10600e78[], g_10577ca0[], g_10628c94[], g_10628b40[];
extern int g_1093a118;
extern CUnknown10359c50 g_1093a0d0, g_1093a0e8, g_1093a100, g_1093a070;

struct VecU {
	UtlMem mem;
	int size;
	int *elems;
};

struct Frame {
	UtlVec8Elem e;
	VecU a;
	UtlVec8 task;
	UtlVec8 sched;
	VecU b;
	UtlVec8 cond;
	UtlVec8 squad;
	const char *s0;
	const char *s1;
	const char *s2;
	const char *s3;
	const char *s4;
	const char *s5;
	const char *s6;
	const char *s7;
};

class CUnknown10936b68 { public: bool sub_1030d850(const char *cls, int name, CUnknown10359c50 *reg); };
extern CUnknown10936b68 g_10936b68;

struct Elem { const char *name; int id; };

#define TASK(str, id) f.e.a = (int)str; f.e.b = id; f.task.sub_102c6a50(f.task.m_Size, &f.e);
#define SCHED(str, id) f.e.a = (int)str; f.e.b = id; f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
#define COND(str, id) f.e.a = (int)str; f.e.b = id; f.cond.sub_102c6a50(f.cond.m_Size, &f.e);
#define TEXT(var, str) f.var = str; ((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (const int *)&f.var);
#define VERIFY(vec, reg, kind) \
	for (i = 0; i < f.vec.m_Size; i++) { \
		Elem *p = (Elem *)f.vec.m_pMemory; \
		const char *cn = g_10628a50; \
		int id = p[i].id; \
		const char *nm = p[i].name; \
		if (!reg.sub_102ea130(nm, id, kind, cn)) \
			goto fail; \
	}

// TARGET: sub_10359270
void sub_10359270()
{
	int i;
	Frame f;

	f.a.mem.sub_102c6a00(0, 0);
	f.a.size = 0;
	f.a.elems = f.a.mem.m_pMemory;
	f.b.mem.sub_102c6b80(0, 0);
	f.b.size = 0;
	f.b.elems = f.b.mem.m_pMemory;
	f.sched.sub_102c66f0(0, 0);
	f.task.sub_102c66f0(0, 0);
	f.cond.sub_102c66f0(0, 0);
	f.squad.sub_102c66f0(0, 0);

	TASK(g_106298ac, 0x14a)
	TASK(g_10629894, 0x14b)
	TASK(g_10629884, 0x14c)
	TASK(g_10629868, 0x14d)
	TASK(g_10629848, 0x14e)
	TASK(g_10629838, 0x150)
	TASK(g_10629818, 0x14f)
	TASK(g_106297f8, 0x151)
	TASK(g_106297d0, 0x152)

	g_1093a118 = sub_104124b0(g_106297bc);
	sub_1025d700(g_106297bc, g_1093a118);

	COND(g_1062979c, 0x77)
	COND(g_10629778, 0x78)
	COND(g_1062975c, 0x79)

	SCHED(g_10629740, 0x44)
	TEXT(s7, g_10629568)
	SCHED(g_1062954c, 0x46)
	TEXT(s2, g_10629380)
	SCHED(g_10629364, 0x47)
	TEXT(s6, g_10629198)
	SCHED(g_10629180, 0x48)
	TEXT(s4, g_10629000)
	SCHED(g_10628fe8, 0x45)
	TEXT(s1, g_10628f68)
	SCHED(g_10628f50, 0x49)
	TEXT(s3, g_10628e38)
	SCHED(g_10628e24, 0x4a)
	TEXT(s5, g_10628d58)
	SCHED(g_10628d40, 0x4b)
	TEXT(s0, g_10628ca0)

	if (g_1093a0d0.sub_1001153b(g_109203cc, g_1090ff08)) {
		if (g_1093a0e8.sub_1001153b(g_109203d4, g_1090ff20))
			g_1093a100.sub_1001153b(g_109203dc, g_1090ff38);
	}
	g_1093a070.sub_1001153b(g_10936c74, g_10920484);

	if (f.sched.m_Size)
		qsort(f.sched.m_pMemory, f.sched.m_Size, 8, sub_102bec60);
	if (f.task.m_Size)
		qsort(f.task.m_pMemory, f.task.m_Size, 8, sub_102bec60);
	if (f.cond.m_Size)
		qsort(f.cond.m_pMemory, f.cond.m_Size, 8, sub_102bec60);
	if (f.squad.m_Size)
		qsort(f.squad.m_pMemory, f.squad.m_Size, 8, sub_102bec60);

	VERIFY(sched, g_1093a0d0, g_10594488)
	VERIFY(task, g_1093a0e8, g_10600e78)
	VERIFY(cond, g_1093a100, g_10577ca0)
	for (i = 0; i < f.squad.m_Size; i++) {
		if (!g_1093a070.sub_102ea130(((Elem *)f.squad.m_pMemory)[i].name, ((Elem *)f.squad.m_pMemory)[i].id, g_10628c94, g_10628a50))
			goto fail;
	}

	for (i = 0; i < f.b.size; i++)
		((void (**)())f.b.mem.m_pMemory)[i]();
	for (i = 0; i < f.a.size; i++) {
		if (!g_10628a48)
			break;
		g_10628a48 = g_10936b68.sub_1030d850(g_10628b40, f.a.mem.m_pMemory[i], &g_1093a0d0);
	}
	((CUtlVector16 *)&f.squad)->sub_102c8b60();
	((UtlMem *)&f.squad)->sub_102c8c00();
	((CUtlVector16 *)&f.cond)->sub_102c8b60();
	((UtlMem *)&f.cond)->sub_102c8c00();
	((CUtlVector16 *)&f.task)->sub_102c8b60();
	((UtlMem *)&f.task)->sub_102c8c00();
	((CUtlVector16 *)&f.sched)->sub_102c8b60();
	((UtlMem *)&f.sched)->sub_102c8c00();
	((CUtlVector16 *)&f.b)->sub_10359ba0();
	f.b.mem.sub_102c8c40();
	f.b.elems = f.b.mem.m_pMemory;
done:
	f.b.mem.sub_102c8c40();
	((CUtlVector16 *)&f.a)->sub_102c8b10();
	f.a.mem.sub_1021e540();
	return;
fail:
	f.squad.sub_102c8a90();
	f.cond.sub_102c8a90();
	f.task.sub_102c8a90();
	f.sched.sub_102c8a90();
	((CUtlVector16 *)&f.b)->sub_102c8bb0();
	goto done;
}
// END FUNCTION

// FUNCTION: 0x10359b70 size=0x1e
#include "CNPC_Crow.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_Crow::vfunc5
CNPC_Crow *CNPC_Crow::vfunc5(unsigned int flags)
{
	sub_1000c9cd();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
