// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
#include "vampire.h"

// FUNCTION: 0x1038b1a0 size=0x16e
// TARGET: ?sub_1038b1a0@CNPC_VManBat@@QAEXM@Z
#include "CNPC_VManBat.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "globalvars.h"

struct CGameChecker
{
	virtual void vfunc0();
	virtual char vfunc1();
	char m_pad[0x28];
	int m_2c;
};

struct CConVarStub
{
	void sub_10246160(int a);
};

struct CMotorStub
{
	void sub_102e1c10(float flYaw, float flArg);
};

extern CGameChecker *g_1093b85c;
extern CConVarStub g_1093b858;

float sub_101d2c70(const Vector *pVec);
float sub_101d2ce0(const Vector *pVec);

void CNPC_VManBat::sub_1038b1a0(float flScale)
{
	if (!g_1093b85c->vfunc1() && g_1093b85c->m_2c) {
		*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VManBat.cpp";
		*(int *)((char *)this + 0x1b34) = 0x1ad;
		sub_102ae750(0x15b, 0);
		g_1093b858.sub_10246160(0);
		return;
	}

	if (flScale > 1.0)
		flScale = 1.0f;

	Vector vecDir;
	Vector vecAngles;
	vecDir = sub_1038b370(flScale);
	((CBaseEntity *)this)->sub_100b2770(vecDir);

	if (m_nState != 0x30 && m_nState != 0xb0 && m_nState != 0x4b && m_nState != 0x1171) {
		CMotorStub *pMotor = *(CMotorStub **)((char *)this + 0x5d44);
		pMotor->sub_102e1c10(sub_101d2c70(&vecDir), -1.0f);

		vecAngles = *((CEntityVSlots *)this)->slot221();
		vecAngles.x = sub_101d2ce0(&vecDir);
		((CEntityVSlots *)this)->slot64((const float *)&vecAngles);

		if (m_f6678 <= gpGlobals->curtime)
			sub_1038e720(vecDir);
	}
}
// END FUNCTION

// FUNCTION: 0x1038b370 size=0x8e2
#include "CHL2_Player.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CNPC_VManBat.h"
#include "CAI_Pathfinder.h"
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
#include "CBaseEntity.h"
#include "CEHandleGet.h"
#include "ConVar.h"
#include "MvsnSec0.h"
#include "engineiface.h"
#include "globalvars.h"
#include "Vector.h"

int sub_10390920(unsigned int x);
int sub_102d1af0(void *pThis, int a, int b, float c, int d, int e);
void sub_101cf5c0(void *pThis, const Vector *pVec, int a);

extern ConVar g_1093b7c8;

struct ManBatPad1 { int x; };
struct ManBatPad2 { int x; };

struct CCollView
{
	virtual void v0();
	virtual const Vector &OBBMins();
	virtual const Vector &OBBMaxs();
};

static inline CCollView *CollOf(void *p) { return (CCollView *)((char *)p + 0x270); }
static inline const Vector &MaxsOf(void *p) { return CollOf(p)->OBBMaxs(); }
static inline const Vector &MinsOf(void *p) { return CollOf(p)->OBBMins(); }

static inline int SecDecode0(unsigned int v)
{
	return sub_10390920((((v & 0x710935) ^ 0x148739) + 0x4094ab & 0x18ef6ca) ^ v ^ 0x412a96ec);
}

static inline bool SecEq0(unsigned int v, unsigned int k)
{
	int b = sub_10390920(k);
	return SecDecode0(v) == b;
}

static inline const Vector &ManBatAbsVelocity(CBaseEntity *p)
{
	if ((unsigned char)(p->m_flags268 >> 12) & 1)
		p->sub_100b1d10();
	return p->m_vecVelocity3bc;
}

struct ManBatNav : CAI_Pathfinder
{
	void SetupFit()
	{
		m_n08 = ((CNPC_VManBat *)m_pOuter)->m_n156c;
		m_n0c = gpGlobals->framecount;
	}
};

Vector CNPC_VManBat::sub_1038b370(float flScale)
{
	static Vector s_vecLast(0.0f, 0.0f, 0.0f);
	static float s_flTime;
	Vector vecVelocity;
	float flSpeed;
	Vector vecOut;

	if (m_pFlyNode == 0 && !SecEq0(m_n6670, 0xfa0b069a) && !SecEq0(m_n6670, 0xfa0b069b))
	{
		vecVelocity = ManBatAbsVelocity((CBaseEntity *)this);
		vecVelocity.z = 10.0f;
		flSpeed = sub_10146150(&vecVelocity);
		Vector vecDir = vecVelocity;
		VectorNormalize(vecDir);
		if (sub_1038bec0(vecDir, flSpeed, vecOut))
			vecVelocity = vecOut * flSpeed;
		return vecVelocity;
	}

	if (m_nState == 0x30 || 0xb0 == m_nState || m_nState == 0x4b || m_nState == 0x1171)
	{
		vecVelocity.Init(0.0f, 0.0f, 0.0);
		return vecVelocity;
	}

	Vector vecOrigin = *((CEntityVSlots *)this)->slot220();
	if (vecOrigin == s_vecLast)
	{
		if (gpGlobals->curtime - s_flTime > 0.5)
		{
			int nOldMode = SecDecode0(m_n6670);
			int nOldN = m_n6674;
			((MvsnSec::CSecureInt0 *)&m_pSecure6668)->Set(2);
			m_n6674 = enginerandom->vfunc2(1, 3);
			CBaseEntity *pNode = (CBaseEntity *)sub_102d1af0(this, 20000, 0, 15000.0f, 0, 0);
			((MvsnSec::CSecureInt0 *)&m_pSecure6668)->Set(nOldMode);
			m_n6674 = nOldN;
			if (pNode)
			{
				Vector vecPos = *((CEntityVSlots *)this)->slot217();
				((CAI_BaseNPCTroika *)this)->sub_102c41b0((int)"sheriff_teleport_emitter", &vecPos, 0, 0);
				vecPos = *((CEntityVSlots *)pNode)->slot217();
				((CAI_BaseNPCTroika *)this)->sub_102c41b0((int)"sheriff_teleport_emitter", &vecPos, 0, 0);
				sub_101cf5c0(this, &vecPos, 0);
			}
			else
			{
				vecVelocity.Init(0.0f, 0.0f, 0.0f);
				return vecVelocity;
			}
		}
	}
	else
	{
		s_vecLast = vecOrigin;
		s_flTime = gpGlobals->curtime;
	}

	Vector vecTarget;
	if (SecEq0(m_n6670, 0xfa0b069a))
	{
		CBaseEntity *pTarget = (CBaseEntity *)g_10566458->sub_100290c0((const unsigned int *)&m_h628c);
		const Vector &v = *((CEntityVSlots *)pTarget)->slot220();
		vecTarget.x = v.x;
		vecTarget.y = v.y;
		vecTarget.z = v.z + 150.0;
	}
	else if (SecEq0(m_n6670, 0xfa0b069b))
	{
		if (!g_10566458->sub_100290c0((const unsigned int *)&m_hFlyByTarget) || !((CEntityVSlots *)g_10566458->sub_100290c0((const unsigned int *)&m_hFlyByTarget))->slot158())
			return ManBatAbsVelocity((CBaseEntity *)this);
		vecTarget = *((CEntityVSlots *)g_10566458->sub_100290c0((const unsigned int *)&m_hFlyByTarget))->slot220();
		vecTarget.z = MaxsOf(g_10566458->sub_100290c0((const unsigned int *)&m_hFlyByTarget)).z - MinsOf(g_10566458->sub_100290c0((const unsigned int *)&m_hFlyByTarget)).z + vecTarget.z + 1.0;
		((ManBatNav *)((CAI_PathfinderOuter *)this)->m_pPathfinder)->SetupFit();
		if (!((CAI_PathfinderOuter *)this)->m_pPathfinder->sub_102f1a20(&vecTarget.x, 0x2400b))
		{
			((CEntityVSlots *)this)->slot448(0x1a);
			return ManBatAbsVelocity((CBaseEntity *)this);
		}
	}
	else
	{
		vecTarget = *((CEntityVSlots *)m_pFlyNode)->slot220();
	}

	vecVelocity = vecTarget - vecOrigin;
	float flLen = vecVelocity.Length();
	flSpeed = 700.0f;
	if (!(vecVelocity.z < -30.0f))
		flSpeed = 500.0f;
	VectorNormalize(vecVelocity);
	if (sub_1038bec0(vecVelocity, flSpeed, vecOut))
	{
		vecVelocity = vecOut * flSpeed;
	}
	else
	{
		vecVelocity *= flSpeed;
		Vector vecCur = *((CEntityVSlots *)this)->slot198();
		Vector vecDiff = vecVelocity - vecCur;
		flSpeed = g_1093b7c8.GetFloat() * flScale;
		vecDiff.x = vecDiff.x > flSpeed ? flSpeed : vecDiff.x;
		float flNeg = -flSpeed;
		vecDiff.x = vecDiff.x < flNeg ? flNeg : vecDiff.x;
		if (vecDiff.y > flSpeed) vecDiff.y = flSpeed;
		if (vecDiff.y < flNeg) vecDiff.y = flNeg;
		if (vecDiff.z > flSpeed) vecDiff.z = flSpeed;
		if (vecDiff.z < -(flSpeed * 3.0)) vecDiff.z = -(flSpeed * 3.0);
		vecVelocity = vecCur + vecDiff;
	}

	if (flScale > 0.0)
	{
		double t = vecVelocity.Length() * 0.2;
		if (flLen < t)
			m_bReachedMoveGoal = true;
	}
	return vecVelocity;
}
// END FUNCTION

// FUNCTION: 0x1038bec0 size=0x218
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
// TARGET: CNPC_VManBat::sub_1038bec0
#include "CNPC_VManBat.h"
#include "CCollisionProperty.h"
#include "CTraceFilterSimpleTwoEnt.h"
#include "CEntityVSlots.h"
#include "UTIL_Trace.h"
#include "ScopeTrace.h"
#include "globalvars.h"

extern Vector g_1070d1b0;

CBaseEntity *__fastcall sub_1008bf00(void *pEntity);

inline void UTIL_TraceHullScoped(const Vector &start, const Vector &end, const Vector &mins, const Vector &maxs, unsigned int mask, void *pFilter, CGameTrace *pTrace)
{
	ScopeTrace scope("UTIL_TraceHull", g_106b8540);
	UTIL_TraceHull_DebugCall(start, end, mins, maxs, mask, pFilter, pTrace, 1, 0);
}

bool CNPC_VManBat::sub_1038bec0(const Vector &vecDir, float flDist, Vector &vecNormal)
{
	int collisionGroup = *(int *)((char *)this + 0x368);
	CTraceFilterSimpleTwoEnt filter(this, sub_1008bf00(this), collisionGroup);

	CCollisionProperty *pProp = (CCollisionProperty *)((char *)this + 0x270);
	const Vector &vecMins = *(const Vector *)pProp->vfunc1();
	Vector vecEnd = vecDir * flDist * 0.1f + *((CEntityVSlots *)this)->slot217();
	const Vector &vecMaxs = *(const Vector *)pProp->vfunc2();

	CGameTrace trace;
	UTIL_TraceHullScoped(*((CEntityVSlots *)this)->slot217(), vecEnd, vecMins, vecMaxs, 0x202400b, &filter, &trace);

	if (trace.m_fraction < 1.0f)
	{
		vecNormal.Init(0.0f, 0.0f, 1.0f);
		if (m_nState != 0x22)
			m_f6678 = gpGlobals->curtime;
		return true;
	}
	vecNormal = g_1070d1b0;
	return false;
}
// END FUNCTION

// FUNCTION: 0x1038c170 size=0xa5
#include "CNPC_VManBat.h"
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"

struct CManBatX {
    void sub_1027d9b0(int nState);
    void sub_1026dc30(int a);
    void sub_1026dc00(int a);
};

void CNPC_VManBat::sub_1038c170(int nMode)
{
    CBaseEntity *pEnt = (CBaseEntity *)this;
    CManBatX *pBat = (CManBatX *)this;
    if (nMode == 1) {
        ((CAI_BaseNPC *)this)->vfunc208(0);
        pEnt->sub_100b3580(0x400);
        pBat->sub_1027d9b0(2);
        pBat->sub_1026dc30(1);
        pBat->sub_1026dc00(4);
        pEnt->vfunc93(4, 0);
    } else if (nMode == 0) {
        pEnt->sub_100b3640(0x400);
        pBat->sub_1027d9b0(0);
        pBat->sub_1026dc30(4);
        pBat->sub_1026dc00(1);
        pEnt->vfunc93(4, 0);
    } else {
        pEnt->sub_100b3640(0x400);
        pBat->sub_1027d9b0(0);
        pBat->sub_1026dc30(4);
        pBat->sub_1026dc00(1);
        pEnt->vfunc93(4, 0);
    }
}
// END FUNCTION

// FUNCTION: 0x1038c250 size=0xfb
#include "CBaseEntity.h"
#include "CNPC_VManBat.h"
#include "CEntityVSlots.h"

void CNPC_VManBat::sub_1038c250(CBaseEntity *pTarget)
{
	if (pTarget)
	{
		CEntityVSlots *pSelf = (CEntityVSlots *)this;
		sub_1038c170(1);
		Vector vecAngles = *pSelf->slot221();
		vecAngles.x = 0;
		pSelf->slot64(&vecAngles.x);
		Vector *pTargetPos = ((CEntityVSlots *)pTarget)->slot220();
		Vector *pMyPos = pSelf->slot220();
		Vector vecDir = *pTargetPos - *pMyPos;
		VectorNormalize(vecDir);
		Vector vecVel = vecDir * 200.0f;
		((CBaseEntity *)this)->sub_100b2770(vecVel);
	}
}
// END FUNCTION

// FUNCTION: 0x1038c390 size=0xae0
#include "CAI_Motor.h"
#include "CNPC_VManBat.h"
#include "CNPC_VHuman.h"
#include "CEHandleGet.h"

extern "C" double cos(double);
extern "C" double sin(double);

struct CSecureCoderBasic0
{
	char a, b;
	int v;
	int sub_103908c0(int x);
};

#define SEC(x) { CSecureCoderBasic0 t; int v = t.sub_103908c0(x); char a = ((CSecureCoderBasic0 &)t).a; m_n6670 = v; char b = ((CSecureCoderBasic0 &)t).b; m_bSecure666c = a; m_bSecure666d = b; }
#define SEC(x) { CSecureCoderBasic0 t; int v = t.sub_103908c0(x); char a = ((CSecureCoderBasic0 &)t).a; m_n6670 = v; char b = ((CSecureCoderBasic0 &)t).b; m_bSecure666d = b; m_bSecure666c = a; }
#define SEC(x) { CSecureCoderBasic0 t; int v = t.sub_103908c0(x); char b = ((CSecureCoderBasic0 &)t).b; char a = ((CSecureCoderBasic0 &)t).a; m_n6670 = v; m_bSecure666d = b; m_bSecure666c = a; }
struct SecV
{
	char a, b;
	unsigned int v;
	unsigned int sub_103908c0(unsigned int x);
	void Copy(const SecV *p) { v = p->v; b = ((volatile SecV *)p)->b; a = ((SecV *)p)->a; }
};
#define SEC(x) { SecV t; t.v = t.sub_103908c0(x); ((SecV *)&m_bSecure666c)->Copy(&t); }
#define SEC2(x) { SecV t; unsigned int r = t.sub_103908c0(x); t.v = r; ((SecV *)&m_bSecure666c)->Copy(&t); }
#define SCRAMBLE0(x) ((((((x) & 0x710935) ^ 0x34871d) + 0x4094ab) & 0x18ef6ca) ^ (x) ^ 0x412a96ec)
#define SECURE_SETI(x) { SecV t; unsigned int v = x; t.v = SCRAMBLE0(v); ((SecV *)&m_bSecure666c)->Copy(&t); }

struct CEntityFinder
{
	CBaseEntity *sub_100f7b20(const char *pszName, const Vector *pPos, float flRadius, CBaseEntity *pA, CBaseEntity *pB);
};
extern CEntityFinder g_106eb5d8;

CBaseEntity *sub_102d1af0(void *pThis, int a, int b, float c, int d, int e);
void sub_101cf5c0(void *pObj, const Vector *pVec, int a);
int sub_1042fb50(int x);
int sub_10390900(int x);
float sub_101d2c70(const Vector *pDir);

extern const char *g_10640ce0[];
extern const char *g_10640cf0[];
extern const char *g_10640cfc[];
extern int g_104bbaa4[];

struct CManBatV : CNPC_VManBat
{
	void sub_1038c390(int *pEvent);
	void sub_10390040();
};

// TARGET: CManBatV::sub_1038c390
void CManBatV::sub_1038c390(int *pEvent)
{
	switch (pEvent[0])
	{
	case 330:
		sub_102e0b40((float *)*(void **)((char *)this + 0x5d44));
		((CAI_BaseNPC *)this)->sub_10272650(0x28);
		if (m_pFlyNode)
			sub_1038c250(m_pFlyNode);
		return;
	case 331:
	{
		sub_1038e640();
		Vector vecDir = sub_1038b370(0.0f);
		sub_1038e720(vecDir);
		return;
	}
	case 332:
	{
		sub_1038f660();
		sub_1038c170(2);
		SEC(sub_10390900(5));
		((CAI_BaseNPC *)this)->sub_10272650(0x2f);
		Vector vec = *((CEntityVSlots *)this)->slot198();
		sub_102c4cc0(&vec, ((CEntityVSlots *)this)->slot217(), ((CEntityVSlots *)m_pFlyNode)->slot217());
		((CBaseEntity *)this)->sub_100b2770(vec);
		return;
	}
	case 335:
		if (m_pFlyNode == 0)
		{
			SEC(sub_10390900(0));
			m_pFlyNode = sub_102d1af0(this, 20000, 0, 5000.0f, 0, 0);
			if (m_pFlyNode == 0)
			{
				m_n6674 = 1;
				m_pFlyNode = sub_102d1af0(this, 20000, 0, 5000.0f, 0, 0);
			}
		}
		if (m_pFlyNode != 0)
		{
			m_n6674++;
			m_bReachedMoveGoal = false;
			((CAI_BaseNPC *)this)->sub_10273e80(0);
		}
		else
		{
			((CEntityVSlots *)this)->slot448(4);
		}
		break;
	case 334:
		SEC(sub_10390900(1));
		m_pFlyNode = sub_102d1af0(this, 20000, 2, 5000.0f, 0, 0);
		if (m_pFlyNode != 0)
		{
			m_bReachedMoveGoal = false;
			((CAI_BaseNPC *)this)->sub_10273e80(0);
			return;
		}
		((CEntityVSlots *)this)->slot448(4);
		return;
	case 337:
		SEC(sub_10390900(2));
		m_n6674 = enginerandom->vfunc2(1, 3);
		m_pFlyNode = sub_102d1af0(this, 20000, 0, 5000.0f, 0, 0);
		if (m_pFlyNode != 0)
		{
			m_bReachedMoveGoal = false;
			((CAI_BaseNPC *)this)->sub_10273e80(0);
			return;
		}
		((CEntityVSlots *)this)->slot448(4);
		return;
	case 338:
		SEC(sub_10390900(3));
		m_pFlyNode = sub_102d1af0(this, 20000, 0, 5000.0f, 0, 0);
		if (m_pFlyNode != 0)
		{
			m_bReachedMoveGoal = false;
			Vector vecDir = sub_1038b370(0.0f);
			sub_1038e720(vecDir);
			return;
		}
		((CEntityVSlots *)this)->slot448(4);
		return;
	case 341:
		SEC(sub_10390900(4));
		m_pFlyNode = sub_102d1af0(this, 20000, 0, 5000.0f, 0, 0);
		if (m_pFlyNode != 0)
		{
			m_bReachedMoveGoal = false;
			((CAI_BaseNPC *)this)->sub_10272650(0x116f);
			return;
		}
		((CEntityVSlots *)this)->slot448(4);
		return;
	case 333:
	{
		sub_102e0b40((float *)*(void **)((char *)this + 0x5d44));
		int nAngle = enginerandom->vfunc2(-180, 180);
		nAngle = (int)(nAngle * 182.04445f);
		nAngle &= 0xffff;
		float flAngle = nAngle * 0.005493164f;
		float flExtra = enginerandom->vfunc1(0.1f, 0.5f);
		float rad = flAngle * 0.017453292f;
		Vector vec(cos(rad), sin(rad), flExtra);
		vec *= 500.0f;
		((CBaseEntity *)this)->sub_100b2770(vec);
		sub_1038e720(vec);
		return;
	}
	case 336:
	{
		((CAI_BaseNPC *)this)->sub_10272650(0x30);
		Vector vec(0.0f, 0.0f, 0.0f);
		((CBaseEntity *)this)->sub_100b2770(vec);
		return;
	}
	case 340:
	{
		int n;
		do
		{
			n = enginerandom->vfunc2(1, 3);
		} while (n == m_n6674);
		m_n6674 = n;
		m_pFlyNode = sub_102d1af0(this, 20000, 0, 5000.0f, 0, 0);
		if (m_pFlyNode != 0)
		{
			sub_101cf5c0(this, ((CEntityVSlots *)m_pFlyNode)->slot217(), 0);
			m_pFlyNode = 0;
			((CAI_BaseNPC *)this)->sub_10273e80(0);
		}
		else
		{
			((CEntityVSlots *)this)->slot448(4);
		}
		break;
	}
	case 339:
	{
		int n = enginerandom->vfunc2(1, 4);
		const char *pszName = g_10640cfc[n];
		int nArg = g_104bbaa4[n];
		n--;
		if (sub_1038f2c0(g_10640ce0[n], (int)g_10640cf0[n], nArg, pszName))
		{
			((CAI_BaseNPC *)this)->sub_10273e80(0);
			return;
		}
		((CEntityVSlots *)this)->slot448(1);
		return;
	}
	case 342:
	{
		CBaseEntity *pTarget = (CBaseEntity *)EHandle_Get(m_h628c);
		Vector diff;
		diff = *((CEntityVSlots *)pTarget)->slot217() - *((CEntityVSlots *)this)->slot217();
		QAngle angles = *(QAngle *)((CEntityVSlots *)this)->slot221();
		angles.y = sub_101d2c70(&diff);
		angles.x = 0.0f;
		((CEntityVSlots *)this)->slot64((const float *)&angles);
		((CAI_BaseNPC *)this)->sub_10272650(0xb0);
		return;
	}
	case 343:
		SECURE_SETI(sub_10390900(6));
		m_pFlyNode = 0;
		m_bReachedMoveGoal = false;
		return;
	case 344:
		((CAI_BaseNPC *)this)->sub_10272650(0x1170);
		sub_1038e9c0((CBaseEntity *)EHandle_Get(m_h628c));
		return;
	case 345:
	case 354:
		SECURE_SETI(sub_10390900(7));
		m_hFlyByTarget.m_Index = m_h628c;
		m_pFlyNode = 0;
		m_bReachedMoveGoal = false;
		return;
	case 347:
		((CAI_BaseNPC *)this)->sub_10272650(0x1054);
		return;
	case 348:
		SECURE_SETI(sub_10390900(8));
		m_n6674 = 1;
		m_pFlyNode = sub_102d1af0(this, 20000, 0, 5000.0f, 0, 0);
		if (m_pFlyNode)
		{
			m_bReachedMoveGoal = false;
			Vector vecDir = sub_1038b370(0.0f);
			sub_1038e720(vecDir);
		}
		else
			((CEntityVSlots *)this)->slot448(4);
	case 349:
	{
		const Vector &o = *((CEntityVSlots *)this)->slot217();
		Vector origin;
		origin.x = o.x;
		origin.y = o.y;
		origin.z = o.z + 10.0f;
		((CEntityVSlots *)this)->slot216(&origin);
		sub_1038e640();
		((CAI_BaseNPC *)this)->sub_10273e80(0);
		return;
	}
	case 350:
		sub_1038fc80();
		((CAI_BaseNPC *)this)->sub_10273e80(0);
		return;
	case 351:
		sub_1038fd40();
		((CAI_BaseNPC *)this)->sub_10273e80(0);
		return;
	case 352:
	{
		m_hFlyByTarget = g_106eb5d8.sub_100f7b20("Cop", ((CEntityVSlots *)this)->slot220(), 0.0f, 0, 0);
		if (EHandle_Get(m_hFlyByTarget.m_Index) == 0)
		{
			((CEntityVSlots *)this)->slot448(1);
			return;
		}
		SEC(sub_1042fb50(7));
		m_pFlyNode = 0;
		m_bReachedMoveGoal = false;
		return;
	}
	case 346:
	case 353:
		((CAI_BaseNPC *)this)->sub_10272650(0x4b);
		return;
	case 355:
		SECURE_SETI(sub_1042fb50(9));
		m_pFlyNode = 0;
		m_bReachedMoveGoal = false;
		m_flCoastTimer = gpGlobals->curtime + 1.0;
		return;
	case 356:
		sub_10390040();
		((CAI_BaseNPC *)this)->sub_10273e80(0);
		return;
	default:
		((CNPC_VHuman *)this)->vfunc442(pEvent);
		return;
	}
}
// END FUNCTION

// FUNCTION: 0x1038d130 size=0xbca
#define vfunc580() vfunc580(); void vfunc444(int *pTask)
#include "CNPC_VManBat.h"
#undef vfunc580
#include "CBaseEntity.h"
#include "CBaseAnimating.h"
#include "CBaseTrigger.h"
#include "CAI_BaseNPC.h"
#include "CAI_Motor.h"
#include "CEntityVSlots.h"
#include "CPASAttenuationFilter.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"
#include "CUnknown1020e060.h"
#include "inputdata_t.h"
#include "ehandle.h"
#include "globalvars.h"
#include "Vector.h"

extern "C" int __cdecl sprintf(char *, const char *, ...);
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl _strnicmp(const char *, const char *, unsigned int);
extern "C" unsigned int __cdecl strlen(const char *);
#pragma intrinsic(strlen)
extern char g_106b8540[];

int sub_10390920(unsigned int x);
void sub_101cf5c0(CBaseEntity *pThis, const Vector *pVec, int a);
CBaseEntity *sub_102d1af0(CBaseEntity *pThis, int a, unsigned int b, float c, Vector *d, float *e);
CBaseEntity *__fastcall sub_1032e7b0(CBaseEntity *p);
struct CBaseNPCV { void sub_10288780(int *pTask); };

#define MB_V(n) virtual void v##n();
#define MB_V10(p) MB_V(p##0) MB_V(p##1) MB_V(p##2) MB_V(p##3) MB_V(p##4) MB_V(p##5) MB_V(p##6) MB_V(p##7) MB_V(p##8) MB_V(p##9)
#define MB_V100(p) MB_V10(p##0) MB_V10(p##1) MB_V10(p##2) MB_V10(p##3) MB_V10(p##4) MB_V10(p##5) MB_V10(p##6) MB_V10(p##7) MB_V10(p##8) MB_V10(p##9)

struct CManBatView
{
	MB_V10(0) MB_V10(1) MB_V10(2) MB_V10(3) MB_V10(4) MB_V10(5) MB_V10(6) MB_V10(7) MB_V10(8) MB_V10(9)
	MB_V10(10) MB_V10(11) MB_V10(12) MB_V10(13) MB_V10(14) MB_V10(15) MB_V10(16) MB_V10(17) MB_V10(18) MB_V10(19)
	MB_V10(20)
	MB_V(210) MB_V(211) MB_V(212) MB_V(213) MB_V(214) MB_V(215) MB_V(216) MB_V(217) MB_V(218) MB_V(219) MB_V(220) MB_V(221)
	virtual Vector GetSoundEmissionOrigin();	// slot 222
	char m_pad04[0x2e0 - 0x4];
	int m_pEdict2e0;
};

struct CSlot596V
{
	MB_V100(0) MB_V100(1) MB_V100(2) MB_V100(3) MB_V100(4)
	MB_V10(50) MB_V10(51) MB_V10(52) MB_V10(53) MB_V10(54) MB_V10(55) MB_V10(56) MB_V10(57) MB_V10(58)
	MB_V(590) MB_V(591) MB_V(592) MB_V(593) MB_V(594) MB_V(595)
	virtual void slot596(CBaseEntity *pEnt);
};

struct CBatFields
{
	char m_pad0[0x1b44];
	const char *m_pszFile1b44;
	int m_nLine1b48;
	char m_pad1b4c[0x5d44 - 0x1b4c];
	CAI_Motor *m_pMotor5d44;
	char m_pad5d48[0x5d9c - 0x5d48];
	float m_flTime5d9c;
};

struct CEntListV
{
	CBaseEntity *sub_100f7b20(const char *pszName, const Vector *pPos, float flRadius, CBaseEntity *a, CBaseEntity *b);
};
extern CEntListV g_106eb5d8;
extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;

struct CCollView
{
	virtual void v0();
	virtual const Vector &OBBMins();
	virtual const Vector &OBBMaxs();
};

static inline CCollView *CollOf(void *p) { return (CCollView *)((char *)p + 0x270); }

static inline int SecDecode0(unsigned int v)
{
	return sub_10390920((((v & 0x710935) ^ 0x148739) + 0x4094ab & 0x18ef6ca) ^ v ^ 0x412a96ec);
}

static inline bool SecEq0(unsigned int v, unsigned int k)
{
	int b = sub_10390920(k);
	return SecDecode0(v) == b;
}

static inline void MotorGoal(CAI_Motor *pMotor, const Vector &v, float f)
{
	pMotor->sub_102e20b0((float *)&v.x, f);
}

static inline bool Bit12(const unsigned int &f)
{
	return ((f >> 12) & 1) != 0;
}

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

inline bool NamesMatch(const char *pszName, const char *const &nameToMatch)
{
	int len = strlen(pszName);
	int r;
	if (len == 0)
		r = (int)nameToMatch;
	else if (pszName[len - 1] != '*')
		r = _strcmpi(STRINGR(nameToMatch), pszName);
	else
		r = _strnicmp(STRINGR(nameToMatch), pszName, len - 1);
	return r == 0;
}

struct NamedEnt
{
	char m_pad0000[0x26c];
	const char *m_iName;
};

inline bool NameMatches(CBaseEntity *pEntity, const char *pszName)
{
	NamedEnt *pEnt = (NamedEnt *)pEntity;
	if (pEnt->m_iName && pEnt->m_iName == pszName)
		return true;
	return NamesMatch(pszName, pEnt->m_iName);
}

#define ME ((CEntityVSlots *)this)
#define NPC ((CAI_BaseNPC *)this)
#define FB ((CEntityVSlots *)m_hFlyByTarget.Get())

void CNPC_VManBat::vfunc444(int *pTask)
{
	CBatFields *f = (CBatFields *)this;
	switch (*pTask)
	{
	case 0x14a:
		if (m_pFlyNode)
		{
			Vector *pOrg = ME->slot217();
			Vector *pNodeOrg = ((CEntityVSlots *)m_pFlyNode)->slot217();
			MotorGoal(f->m_pMotor5d44, *pNodeOrg + *pOrg, -2.0f);
		}
		if (ME->slot251())
		{
			NPC->sub_10273e80(0);
			sub_1038e640();
		}
		break;
	case 0x14b:
		if (m_bReachedMoveGoal)
		{
			if (SecEq0(m_n6670, 0xfa0b0695))
				sub_101cf5c0((CBaseEntity *)this, ((CEntityVSlots *)m_pFlyNode)->slot217(), 0);
			m_pFlyNode = 0;
			NPC->sub_10273e80(0);
		}
		break;
	case 0x152:
	case 0x155:
		if (m_bReachedMoveGoal)
		{
			Vector vecZero(0, 0, 0);
			((CBaseEntity *)this)->sub_100b2770(vecZero);
			m_pFlyNode = 0;
			NPC->sub_10273e80(0);
		}
		break;
	case 0x14d:
		if (Bit12(((CBaseEntity *)this)->m_flags268))
			((CBaseEntity *)this)->sub_100b1d10();
		MotorGoal(f->m_pMotor5d44, *ME->slot217() + ((CBaseEntity *)this)->m_vecVelocity3bc, -2.0f);
		return;
	case 0x14c:
		if (((CBaseEntity *)this)->sub_100b3700() & 1)
		{
			Vector vecZero(0, 0, 0);
			((CBaseEntity *)this)->sub_100b2770(vecZero);
			sub_1038c170(0);
			m_pFlyNode = 0;
			NPC->sub_10273e80(0);
			NPC->sub_10272650(0x1171);
			CManBatView *p = (CManBatView *)this;
			CPASAttenuationFilter filter(p);
			filter.MakeReliable();
			int edict = p->m_pEdict2e0;
			g_1070b248->vfunc3(&filter, engine->vfunc35(edict), 4, "character/male/sheriff_manbat/fall.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		}
		break;
	case 0x150:
		if (ME->slot251())
		{
			sub_1038c170(0);
			NPC->sub_10273e80(0);
			NPC->sub_10272650(1);
		}
		break;
	case 0x156:
		if (ME->slot251())
		{
			sub_1038f790();
			NPC->sub_10273e80(0);
			sub_1038e640();
		}
		break;
	case 0x159:
	case 0x160:
		if (m_hFlyByTarget.Get() && FB->slot158())
		{
			if (*(int *)((char *)m_hFlyByTarget.Get() + 0xa8))
				sub_1038fe30();
			if (m_bReachedMoveGoal)
			{
				Vector vecTarget = *FB->slot217();
				Vector *pOrg = ME->slot217();
				Vector vecDir;
				vecDir = *pOrg - vecTarget;
				vecDir.z = 0;
				VectorNormalize(vecDir);
				vecTarget.x += vecDir.x * 10.0f;
				vecTarget.y += vecDir.y * 10.0f;
				CCollView *pColl = CollOf(m_hFlyByTarget.Get());
				vecTarget.z = (pColl->OBBMaxs() - CollOf(m_hFlyByTarget.Get())->OBBMins()).z + vecTarget.z + 1.0;
				ME->slot216(&vecTarget);
				NPC->sub_10272650(0x4b);
				((CSlot596V *)this)->slot596((CBaseEntity *)m_hFlyByTarget.Get());
				NPC->sub_10273e80(0);
			}
		}
		else
			ME->slot448(1);
		break;
	case 0x162:
		if (m_hFlyByTarget.Get() && FB->slot158())
		{
			sub_1038fe30();
			if (m_bReachedMoveGoal)
				NPC->sub_10273e80(0);
		}
		else
			ME->slot448(1);
		break;
	case 0x157:
		if (m_bReachedMoveGoal)
			NPC->sub_10273e80(0);
		break;
	case 0x15a:
		if (ME->slot251())
		{
			CEntityVSlots *pWeapon = (CEntityVSlots *)sub_1032e7b0((CBaseEntity *)this);
			if (pWeapon && (pWeapon->slot360() & 0x18000))
			{
				f->m_flTime5d9c = gpGlobals->curtime;
				pWeapon->slot326();
				NPC->sub_10273e80(0);
			}
			else
			{
				f->m_pszFile1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VManBat.cpp";
				f->m_nLine1b48 = 0x4e1;
				ME->slot448(0x1f);
			}
		}
		break;
	case 0x158:
		if (ME->slot251())
		{
			NPC->sub_10273e80(0);
			sub_1038e640();
		}
		break;
	case 0x15b:
		if (ME->slot251())
		{
			CBaseEntity *pSpot = g_106eb5d8.sub_100f7b20("Spotlight *", ME->slot220(), 0, 0, 0);
			if (pSpot)
			{
				int n;
				if (NameMatches(pSpot, "Spotlight 1"))
					n = 1;
				else if (NameMatches(pSpot, "Spotlight 2"))
					n = 2;
				else
					goto done;
				{
					inputdata_t data;
					data.value.iValue = 0;
					data.value.eVal = 0xffffffff;
					data.value.fieldType = 0;
					((CBaseAnimating *)pSpot)->sub_1008d5f0(0);
					((CBaseAnimating *)pSpot)->sub_1008d6d0(2);
					((CUnknown1020e060 *)pSpot)->sub_1020e060((int)&data);
					char szName[80];
					sprintf(szName, "Spotlightbeam %d", n);
					CBaseEntity *pBeam = g_106eb5d8.sub_100f7b20(szName, ((CEntityVSlots *)pSpot)->slot220(), 0, 0, 0);
					if (pBeam)
						((CBaseTrigger *)pBeam)->sub_101c4dd0();
				}
			}
		done:
			NPC->sub_10273e80(0);
		}
		break;
	case 0x15c:
		if (m_bReachedMoveGoal)
		{
			if (++m_n6674 > m_n6698)
			{
				NPC->sub_10273e80(0);
				return;
			}
			m_pFlyNode = sub_102d1af0((CBaseEntity *)this, 0x4e20, 0, 5000.0f, 0, 0);
			if (m_pFlyNode)
			{
				m_bReachedMoveGoal = 0;
				Vector vecDir = sub_1038b370(0);
				sub_1038e720(vecDir);
			}
			else
				ME->slot448(4);
		}
		break;
	case 0x161:
		if (m_hFlyByTarget.Get() && FB->slot158())
		{
			if (ME->slot251())
			{
				int tmp;
				if (sub_1038f2c0(STRINGR(*FB->slot9(&tmp)), (int)"Bip01 R Neck", 0x41a00000, 0))
				{
					FB->slot119();
					m_n6674 = g_1070b244->vfunc2(1, 3);
					NPC->sub_10273e80(0);
				}
				else
					ME->slot448(1);
				sub_1038e640();
			}
		}
		else
		{
			ME->slot448(1);
			sub_1038e640();
		}
		break;
	case 0x163:
		if (gpGlobals->curtime >= m_flCoastTimer)
			NPC->sub_10273e80(0);
		break;
	default:
		((CBaseNPCV *)this)->sub_10288780(pTask);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x1038e000 size=0x281
#include "CNPC_VManBat.h"
#include "CPASAttenuationFilter.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

#define MB_V(n) virtual void v##n();
#define MB_V10(p) MB_V(p##0) MB_V(p##1) MB_V(p##2) MB_V(p##3) MB_V(p##4) MB_V(p##5) MB_V(p##6) MB_V(p##7) MB_V(p##8) MB_V(p##9)

struct CManBatView
{
	MB_V10(0) MB_V10(1) MB_V10(2) MB_V10(3) MB_V10(4) MB_V10(5) MB_V10(6) MB_V10(7) MB_V10(8) MB_V10(9)
	MB_V10(10) MB_V10(11) MB_V10(12) MB_V10(13) MB_V10(14) MB_V10(15) MB_V10(16) MB_V10(17) MB_V10(18) MB_V10(19)
	MB_V10(20)
	MB_V(210) MB_V(211) MB_V(212) MB_V(213) MB_V(214) MB_V(215) MB_V(216) MB_V(217) MB_V(218) MB_V(219) MB_V(220) MB_V(221)
	virtual Vector GetSoundEmissionOrigin();	// slot 222
	char m_pad04[0x2e0 - 0x4];
	int m_pEdict2e0;
	int edict() { return m_pEdict2e0; }
};

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_10640d10[];
extern const char *g_10640d1c[];

void CNPC_VManBat::vfunc259(int *pEvent)
{
	CManBatView *p = (CManBatView *)this;
	switch (*pEvent)
	{
	case 1:
	{
		CPASAttenuationFilter filter(p);
		filter.MakeReliable();
		int index = engine->vfunc35(p->edict());
		g_1070b248->vfunc3(&filter, index, 4, g_10640d10[g_1070b244->vfunc2(0, 2)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		break;
	}
	case 2:
	{
		CPASAttenuationFilter filter(p);
		filter.MakeReliable();
		g_1070b248->vfunc3(&filter, engine->vfunc35(p->edict()), 4, "character/male/sheriff_manbat/screech.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		break;
	}
	case 3:
	{
		CPASAttenuationFilter filter(p);
		filter.MakeReliable();
		int index = engine->vfunc35(p->edict());
		g_1070b248->vfunc3(&filter, index, 4, g_10640d1c[g_1070b244->vfunc2(0, 2)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		return;
	}
	default:
		sub_100076bc(pEvent);
		return;
	}
}
// END FUNCTION

// FUNCTION: 0x1038e340 size=0xf8
#include "CVTraitEffect_t.h"
#include "CNPC_VManBat.h"

struct DebugCvarMB
{
	virtual void v0();
	virtual char vfunc1();
	int m_n04; int m_n08; int m_n0c; int m_n10; int m_n14; int m_n18; int m_n1c; int m_n20; int m_n24; int m_n28;
	int m_nValue;	// 0x2c
};
extern DebugCvarMB *g_1093b814;
int sub_1042fbf0(int v);

#define HASH(n) (((((n) & 0x710935) ^ 0x148739) + 0x4094ab) & 0x18ef6ca) ^ (n) ^ 0x412a96ec

int CNPC_VManBat::vfunc438()
{
	int iDecoded;
	if (sub_1027d990() == 2)
	{
		int v = HASH(m_n6670);
		iDecoded = sub_1042fbf0(v);
		int k = sub_1042fbf0(0xfa0b0694);
		if (iDecoded != k && (iDecoded != k || iDecoded == -1))
		{
			m_n6674 = 1;
			return 0x159;
		}
		if (sub_10269d30(0x4d))
			return 0x15f;
		if (!g_1093b814->vfunc1() && g_1093b814->m_nValue)
			return 0x15d;
		switch (enginerandom->vfunc2(1, 10))
		{
		case 1:
			return 0x15c;
		case 2:
			return 0x15d;
		case 3:
			return 0x161;
		case 4:
		case 5:
		case 6:
			return 0x163;
		default:
			return 0x159;
		}
	}
	m_n6674 = 1;
	return 0x158;
}
// END FUNCTION

// FUNCTION: 0x1038e480 size=0x160
#include "CBaseEntity.h"
#include "CNPC_VManBat.h"

extern "C" int __cdecl sprintf(char *, const char *, ...);
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl _strnicmp(const char *, const char *, unsigned int);
extern "C" unsigned int __cdecl strlen(const char *);
extern "C" char *__cdecl strcpy(char *, const char *);
#pragma intrinsic(strlen, strcpy)
extern char g_106b8540[];
int sub_1042fbf0(int);

struct NamedEnt {
    char m_pad0000[0x26c];
    const char *m_iName;
    char m_pad0270[0x5dc - 0x270];
    int m_nType;
};

#define HASH(x) ((((((x) & 0x710935) ^ 0x148739) + 0x4094ab) & 0x18ef6ca) ^ (x) ^ 0x412a96ec)

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

inline bool NamesMatch(const char *pszName, const char *const &nameToMatch)
{
    int len = strlen(pszName);
    int r;
    if (len == 0)
        r = (int)nameToMatch;
    else if (pszName[len - 1] != '*')
        r = _strcmpi(STRINGR(nameToMatch), pszName);
    else
        r = _strnicmp(STRINGR(nameToMatch), pszName, len - 1);
    return r == 0;
}

inline bool NameMatches(NamedEnt *pEnt, const char *pszName)
{
    if (pEnt->m_iName && pEnt->m_iName == pszName)
        return true;
    return NamesMatch(pszName, pEnt->m_iName);
}

// TARGET: CNPC_VManBat::vfunc566
bool CNPC_VManBat::vfunc566(CBaseEntity *pEntity)
{
    char name[80];
    NamedEnt *pEnt = (NamedEnt *)pEntity;
    if (pEnt->m_nType != 20000)
        return false;
    int v = HASH(m_n6670);
    switch (sub_1042fbf0(v)) {
    case 2:
    case 4:
        sprintf(name, "ManBat Divepoint %d", m_n6674);
        break;
    case 3:
        sprintf(name, "ManBat Divepoint %d Bottom", m_n6674);
        break;
    case 1:
        strcpy(name, "ManBat Landpoint");
        break;
    case 8:
        sprintf(name, "ManBat Script Node %d", m_n6674);
        break;
    default:
        sprintf(name, "ManBat %d", m_n6674);
        break;
    }
    if (NameMatches(pEnt, name))
        return true;
    return false;
}
// END FUNCTION

// FUNCTION: 0x1038e640 size=0x20
#include "CNPC_VManBat.h"

void __stdcall sub_10272650(int a);

void CNPC_VManBat::sub_1038e640()
{
	sub_10272650(0x22);
	m_f6678 = gpGlobals->curtime + 2.3;
}
// END FUNCTION

// FUNCTION: 0x1038e670 size=0x20
#include "CNPC_VManBat.h"

void __stdcall sub_10272650(int a);

void CNPC_VManBat::sub_1038e670()
{
	sub_10272650(0x24);
	m_f6678 = gpGlobals->curtime + 4.0;
}
// END FUNCTION

// FUNCTION: 0x1038e6a0 size=0x23
#include "CNPC_VManBat.h"

void __stdcall sub_10272650(int a);

void CNPC_VManBat::sub_1038e6a0()
{
	sub_10272650(0x116d);
	m_f6678 = gpGlobals->curtime + 0.2;
}
// END FUNCTION

// FUNCTION: 0x1038e6e0 size=0x23
#include "CNPC_VManBat.h"

void __stdcall sub_10272650(int a);

void CNPC_VManBat::sub_1038e6e0()
{
	sub_10272650(0x116e);
	m_f6678 = gpGlobals->curtime + 0.2;
}
// END FUNCTION

// FUNCTION: 0x1038e720 size=0x108
#include "CNPC_VManBat.h"

#define MBV(n) virtual void v##n();
#define MBV10(p) MBV(p##0) MBV(p##1) MBV(p##2) MBV(p##3) MBV(p##4) MBV(p##5) MBV(p##6) MBV(p##7) MBV(p##8) MBV(p##9)
struct CManBatVView
{
	MBV(0) MBV(1) MBV(2) MBV(3) MBV(4) MBV(5) MBV(6) MBV(7) MBV(8) MBV(9)
	MBV10(1) MBV10(2) MBV10(3) MBV10(4) MBV10(5) MBV10(6) MBV10(7) MBV10(8) MBV10(9)
	MBV10(10) MBV10(11) MBV10(12) MBV10(13) MBV10(14) MBV10(15) MBV10(16) MBV10(17) MBV10(18) MBV10(19)
	MBV10(20) MBV10(21) MBV(220)
	virtual Vector *vfunc221();
};

float sub_101d2c70(const Vector &vec);

// TARGET: CNPC_VManBat::sub_1038e720
void CNPC_VManBat::sub_1038e720(Vector vecDir)
{
	int nState = m_nState;
	if (nState == 0x28 || nState == 0x30 || nState == 0xb0 || nState == 0x4b || nState == 0x1171)
		return;
	if (vecDir.z >= 30.0f)
	{
		sub_1038e640();
		return;
	}
	Vector vecAngles = *((CManBatVView *)this)->vfunc221();
	double flDiff = sub_101d2c70(vecDir) - vecAngles.y;
	if (flDiff < 0.0)
		flDiff += 360.0;
	if (!(flDiff < 30.0) && !(flDiff > 330.0))
	{
		if (flDiff < 180.0)
			sub_1038e6a0();
		else
			sub_1038e6e0();
		return;
	}
	if (nState == 0x24)
		sub_1038e640();
	else
		sub_1038e670();
}
// END FUNCTION

// FUNCTION: 0x1038e880 size=0x2f
#include "CNPC_VManBat.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VManBat::vfunc390
int CNPC_VManBat::vfunc390(void *info)
{
	if (*(int *)((char *)this + 0x210) < 0x19) {
		if (*(int *)(*(int *)((char *)info + 0x2c) + 0xa8) == 0) {
			return 1;
		}
	}
	return ((CNPC_VHuman *)this)->sub_10001b45(info);
}
// END FUNCTION

// FUNCTION: 0x1038e8c0 size=0x9f
#include "CNPC_VManBat.h"
#include "CEHandleGet.h"

void sub_101cd940(CGlobalEntityList_Ent *pEnt);

// TARGET: CNPC_VManBat::vfunc144
void CNPC_VManBat::vfunc144(int arg)
{
	sub_1038f020(1);
	sub_1038c170(2);
	sub_1038f660();
	sub_1038fd40();
	if (EHandle_Get(m_h66a4)) {
		sub_101cd940(EHandle_Get(m_h66a4));
		m_h66a4 = 0xffffffff;
	}
	sub_103c4f40(arg);
}
// END FUNCTION

// FUNCTION: 0x1038e990 size=0x1a
#include "CNPC_VManBat.h"

// TARGET: CNPC_VManBat::vfunc432
void CNPC_VManBat::vfunc432(int a)
{
	sub_1038f020(0);
	sub_10385a10(a);
}
// END FUNCTION

// FUNCTION: 0x1038e9c0 size=0x503
#include "CHL2_Player.h"
#include "CAI_Pathfinder.h"
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
#include "ehandle.h"
#include "ConVar.h"
#include "MvsnSec0.h"
#include "Vector.h"
#include "CEHandleGet.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown100290c0.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
// TARGET: CNPC_VManBat::sub_1038e9c0
#include "CNPC_VManBat.h"
#include "CBaseEntity.h"
#include "CBaseCombatCharacter.h"
#include "CBasePlayer.h"
#include "CEnvParticle.h"
#include "engineiface.h"
#include "globalvars.h"

extern Vector g_1070d1b0;
extern Vector g_1070d9d0;
extern char g_106b8540[];
CBaseEntity *sub_100fbc90(const char *pszName, const Vector *pOrigin, const Vector *pAngles, float flDuration);
void sub_101cd940(CBaseEntity *pEnt);
void sub_101cdba0(const Vector *pOrigin, float a, float b, float c, float d, int e, bool f);

#define EVS(n) virtual void s##n();
#define EVS10(p) EVS(p##0) EVS(p##1) EVS(p##2) EVS(p##3) EVS(p##4) EVS(p##5) EVS(p##6) EVS(p##7) EVS(p##8) EVS(p##9)
class CManbatEnt
{
public:
	EVS10(0) EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19)
	EVS10(20) EVS(210) EVS(211) EVS(212) EVS(213) EVS(214) EVS(215) EVS(216)
	virtual Vector *GetAbsOrigin217();
	EVS(218) EVS(219)
	virtual Vector *slot220();
	EVS(221) EVS(222) EVS(223) EVS(224) EVS(225) EVS(226) EVS(227) EVS(228) EVS(229)
	EVS10(23) EVS(240)
	virtual void slot241();
	EVS(242)
	virtual void slot243(CBaseEntity *pEnt, int nType, const char *pszName);
};
#define ME(p) ((CManbatEnt *)(p))

int sub_10390920(unsigned int x);
int sub_102d1af0(void *pThis, int a, int b, float c, int d, int e);
void sub_101cf5c0(void *pThis, const Vector *pVec, int a);

extern ConVar g_1093b7c8;

namespace block_1038e9c0 {
struct ManBatPad1 { int x; };
struct ManBatPad2 { int x; };

struct CCollView
{
	virtual void v0();
	virtual const Vector &OBBMins();
	virtual const Vector &OBBMaxs();
};

static inline CCollView *CollOf(void *p) { return (CCollView *)((char *)p + 0x270); }
static inline const Vector &MaxsOf(void *p) { return CollOf(p)->OBBMaxs(); }
static inline const Vector &MinsOf(void *p) { return CollOf(p)->OBBMins(); }

static inline int SecDecode0(unsigned int v)
{
	return sub_10390920((((v & 0x710935) ^ 0x148739) + 0x4094ab & 0x18ef6ca) ^ v ^ 0x412a96ec);
}

static inline bool SecEq0(unsigned int v, unsigned int k)
{
	int b = sub_10390920(k);
	return SecDecode0(v) == b;
}

static inline const Vector &ManBatAbsVelocity(CBaseEntity *p)
{
	if ((unsigned char)(p->m_flags268 >> 12) & 1)
		p->sub_100b1d10();
	return p->m_vecVelocity3bc;
}

struct ManBatPathOuter : CAI_PathfinderOuter
{
	CAI_Pathfinder *GetPathfinder() { return m_pPathfinder; }
};

struct ManBatNav : CAI_Pathfinder
{
	void SetupFit()
	{
		m_n08 = ((CNPC_VManBat *)m_pOuter)->m_n156c;
		m_n0c = gpGlobals->framecount;
	}
};

// 0x1038b370, the unit's first function that declines the header inline LookupEntity (all six lookups),
// so the COMDAT is compiled before the target
struct ManBatDive : CNPC_VManBat
{
	CBaseEntity *GetFlyNode() { return m_pFlyNode; }
	Vector sub_1038b370(float flScale);
};

Vector ManBatDive::sub_1038b370(float flScale)
{
	static Vector s_vecLast(0.0f, 0.0f, 0.0f);
	static float s_flTime;
	Vector vecVelocity;
	float flSpeed;
	Vector vecOut;

	if (GetFlyNode() == 0 && !SecEq0(m_n6670, 0xfa0b069a) && !SecEq0(m_n6670, 0xfa0b069b))
	{
		vecVelocity = ManBatAbsVelocity((CBaseEntity *)this);
		vecVelocity.z = 10.0f;
		flSpeed = sub_10146150(&vecVelocity);
		Vector vecDir = vecVelocity;
		VectorNormalize(vecDir);
		if (sub_1038bec0(vecDir, flSpeed, vecOut))
			vecVelocity = vecOut * flSpeed;
		return vecVelocity;
	}

	if (m_nState == 0x30 || 0xb0 == m_nState || m_nState == 0x4b || m_nState == 0x1171)
	{
		vecVelocity.Init(0.0f, 0.0f, 0.0);
		return vecVelocity;
	}

	Vector vecOrigin = *((CEntityVSlots *)this)->slot220();
	if (vecOrigin == s_vecLast)
	{
		if (gpGlobals->curtime - s_flTime > 0.5)
		{
			int nOldMode = SecDecode0(m_n6670);
			int nOldN = m_n6674;
			((MvsnSec::CSecureInt0 *)&m_pSecure6668)->Set(2);
			m_n6674 = enginerandom->vfunc2(1, 3);
			CBaseEntity *pNode = (CBaseEntity *)sub_102d1af0(this, 20000, 0, 15000.0f, 0, 0);
			((MvsnSec::CSecureInt0 *)&m_pSecure6668)->Set(nOldMode);
			m_n6674 = nOldN;
			if (pNode)
			{
				Vector vecPos = *((CEntityVSlots *)this)->slot217();
				((CAI_BaseNPCTroika *)this)->sub_102c41b0((int)"sheriff_teleport_emitter", &vecPos, 0, 0);
				vecPos = *((CEntityVSlots *)pNode)->slot217();
				((CAI_BaseNPCTroika *)this)->sub_102c41b0((int)"sheriff_teleport_emitter", &vecPos, 0, 0);
				sub_101cf5c0(this, &vecPos, 0);
			}
			else
			{
				vecVelocity.Init(0.0f, 0.0f, 0.0f);
				return vecVelocity;
			}
		}
	}
	else
	{
		s_vecLast = vecOrigin;
		s_flTime = gpGlobals->curtime;
	}

	Vector vecTarget;
	if (SecEq0(m_n6670, 0xfa0b069a))
	{
		CBaseEntity *pTarget = (CBaseEntity *)((const CBaseHandle *)&m_h628c)->Get();
		const Vector &v = *((CEntityVSlots *)pTarget)->slot220();
		vecTarget.x = v.x;
		vecTarget.y = v.y;
		vecTarget.z = v.z + 150.0;
	}
	else if (SecEq0(m_n6670, 0xfa0b069b))
	{
		if (!m_hFlyByTarget.Get() || !((CEntityVSlots *)m_hFlyByTarget.Get())->slot158())
			return ManBatAbsVelocity((CBaseEntity *)this);
		vecTarget = *((CEntityVSlots *)m_hFlyByTarget.Get())->slot220();
		vecTarget.z = MaxsOf(m_hFlyByTarget.Get()).z - MinsOf(m_hFlyByTarget.Get()).z + vecTarget.z + 1.0;
		((ManBatNav *)((ManBatPathOuter *)this)->GetPathfinder())->SetupFit();
		if (!((ManBatPathOuter *)this)->GetPathfinder()->sub_102f1a20(&vecTarget.x, 0x2400b))
		{
			((CEntityVSlots *)this)->slot448(0x1a);
			return ManBatAbsVelocity((CBaseEntity *)this);
		}
	}
	else
	{
		vecTarget = *((CEntityVSlots *)GetFlyNode())->slot220();
	}

	vecVelocity = vecTarget - vecOrigin;
	float flLen = vecVelocity.Length();
	flSpeed = 700.0f;
	if (!(vecVelocity.z < -30.0f))
		flSpeed = 500.0f;
	VectorNormalize(vecVelocity);
	if (sub_1038bec0(vecVelocity, flSpeed, vecOut))
	{
		vecVelocity = vecOut * flSpeed;
	}
	else
	{
		vecVelocity *= flSpeed;
		Vector vecCur = *((CEntityVSlots *)this)->slot198();
		Vector vecDiff = vecVelocity - vecCur;
		flSpeed = g_1093b7c8.GetFloat() * flScale;
		vecDiff.x = vecDiff.x > flSpeed ? flSpeed : vecDiff.x;
		float flNeg = -flSpeed;
		vecDiff.x = vecDiff.x < flNeg ? flNeg : vecDiff.x;
		if (vecDiff.y > flSpeed) vecDiff.y = flSpeed;
		if (vecDiff.y < flNeg) vecDiff.y = flNeg;
		if (vecDiff.z > flSpeed) vecDiff.z = flSpeed;
		if (vecDiff.z < -(flSpeed * 3.0)) vecDiff.z = -(flSpeed * 3.0);
		vecVelocity = vecCur + vecDiff;
	}

	if (flScale > 0.0)
	{
		double t = vecVelocity.Length() * 0.2;
		if (flLen < t)
			m_bReachedMoveGoal = true;
	}
	return vecVelocity;
}
}

void CNPC_VManBat::sub_1038e9c0(CBaseEntity *pTarget)
{
	CBaseHandle &hCone = *(CBaseHandle *)&m_h66a4;
	if (((EHANDLE &)m_h66a4).Get())
	{
		sub_101cd940(((EHANDLE &)m_h66a4).Get());
		hCone = (IHandleEntity *)0;
	}
	hCone = (IHandleEntity *)sub_100fbc90("Manbat_screechcone_emitter", ME(this)->GetAbsOrigin217(), &g_1070d9d0, -1.0f);
	if (((EHANDLE &)m_h66a4).Get())
	{
		ME(((EHANDLE &)m_h66a4).Get())->slot243((CBaseEntity *)this, 1, "Bip01 Jaw");
		ME(((EHANDLE &)m_h66a4).Get())->slot241();
	}

	if (pTarget && pTarget->m_pA8)
	{
		sub_101cdba0(ME(this)->slot220(), 2.5f, 0.2f, 3.0f, 0.0f, 0, false);
		CBaseCombatCharacter *pChar = (CBaseCombatCharacter *)pTarget->m_p9c;
		if (pChar)
		{
			Vector vecDelta;
			vecDelta = *ME(pTarget)->GetAbsOrigin217() - *ME(this)->GetAbsOrigin217();
			pChar->sub_10344f80(&vecDelta, 2, 0);
			if (m_f6684 == 0.0)
				pChar->sub_103326b0(500.0f);
			m_f6684 = enginerandom->vfunc1(15.0f, 25.0f) + gpGlobals->curtime;
			m_h6680 = (CBaseEntity *)pChar;

			if (!m_h669c.Get())
			{
				m_h669c = sub_100fbc90("Manbat_player_emitter", ME(pTarget)->GetAbsOrigin217(), &g_1070d9d0, -1.0f);
				if (m_h669c.Get())
				{
					ME(m_h669c.Get())->slot243(pTarget, 1, "Bip01 Spine");
					ME(m_h669c.Get())->slot241();
				}
			}
			if (!m_h66a8)
			{
				m_h66a8 = sub_100fbc90("Manbat_blast_player", ME(pTarget)->GetAbsOrigin217(), &g_1070d9d0, -1.0f);
				if (m_h66a8)
				{
					ME(m_h66a8.Get())->slot243(pTarget, 1, "Bip01 Spine");
					ME(m_h66a8.Get())->slot241();
				}
			}
			CBasePlayer *pPlayer = (CBasePlayer *)pTarget->m_pA8;
			if (pPlayer)
			{
				CBaseEntity *pView = pPlayer->sub_1015d680(0);
				if (pView && !m_h66a0)
				{
					m_h66a0 = sub_100fbc90("HUD_Manbat_emitter", &g_1070d1b0, &g_1070d9d0, -1.0f);
					if (m_h66a0)
					{
						ME(m_h66a0.Get())->slot243(pView, 0xe, g_106b8540);
						ME(m_h66a0.Get())->slot241();
						((CEnvParticle *)m_h66a0.Get())->m_b4a1 = 1;
					}
				}
				*(int *)((char *)pPlayer + 0x2454) |= 1;
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1038f020 size=0x1ed
#include "CHL2_Player.h"
#include "CAI_Pathfinder.h"
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
#include "CBaseEntity.h"
#include "ehandle.h"
#include "ConVar.h"
#include "MvsnSec0.h"
#include "engineiface.h"
#include "globalvars.h"
#include "Vector.h"
#include "CEHandleGet.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CNPC_VManBat.h"
#include "CBaseCombatCharacter.h"

int sub_10390920(unsigned int x);
int sub_102d1af0(void *pThis, int a, int b, float c, int d, int e);
void sub_101cf5c0(void *pThis, const Vector *pVec, int a);

extern ConVar g_1093b7c8;

namespace block_1038f020 {
struct ManBatPad1 { int x; };
struct ManBatPad2 { int x; };

struct CCollView
{
	virtual void v0();
	virtual const Vector &OBBMins();
	virtual const Vector &OBBMaxs();
};

static inline CCollView *CollOf(void *p) { return (CCollView *)((char *)p + 0x270); }
static inline const Vector &MaxsOf(void *p) { return CollOf(p)->OBBMaxs(); }
static inline const Vector &MinsOf(void *p) { return CollOf(p)->OBBMins(); }

static inline int SecDecode0(unsigned int v)
{
	return sub_10390920((((v & 0x710935) ^ 0x148739) + 0x4094ab & 0x18ef6ca) ^ v ^ 0x412a96ec);
}

static inline bool SecEq0(unsigned int v, unsigned int k)
{
	int b = sub_10390920(k);
	return SecDecode0(v) == b;
}

static inline const Vector &ManBatAbsVelocity(CBaseEntity *p)
{
	if ((unsigned char)(p->m_flags268 >> 12) & 1)
		p->sub_100b1d10();
	return p->m_vecVelocity3bc;
}

struct ManBatPathOuter : CAI_PathfinderOuter
{
	CAI_Pathfinder *GetPathfinder() { return m_pPathfinder; }
};

struct ManBatNav : CAI_Pathfinder
{
	void SetupFit()
	{
		m_n08 = ((CNPC_VManBat *)m_pOuter)->m_n156c;
		m_n0c = gpGlobals->framecount;
	}
};

// 0x1038b370, the unit's first function that declines the header inline LookupEntity (all six lookups),
// so the COMDAT is compiled before the target
struct ManBatDive : CNPC_VManBat
{
	CBaseEntity *GetFlyNode() { return m_pFlyNode; }
	Vector sub_1038b370(float flScale);
};

Vector ManBatDive::sub_1038b370(float flScale)
{
	static Vector s_vecLast(0.0f, 0.0f, 0.0f);
	static float s_flTime;
	Vector vecVelocity;
	float flSpeed;
	Vector vecOut;

	if (GetFlyNode() == 0 && !SecEq0(m_n6670, 0xfa0b069a) && !SecEq0(m_n6670, 0xfa0b069b))
	{
		vecVelocity = ManBatAbsVelocity((CBaseEntity *)this);
		vecVelocity.z = 10.0f;
		flSpeed = sub_10146150(&vecVelocity);
		Vector vecDir = vecVelocity;
		VectorNormalize(vecDir);
		if (sub_1038bec0(vecDir, flSpeed, vecOut))
			vecVelocity = vecOut * flSpeed;
		return vecVelocity;
	}

	if (m_nState == 0x30 || 0xb0 == m_nState || m_nState == 0x4b || m_nState == 0x1171)
	{
		vecVelocity.Init(0.0f, 0.0f, 0.0);
		return vecVelocity;
	}

	Vector vecOrigin = *((CEntityVSlots *)this)->slot220();
	if (vecOrigin == s_vecLast)
	{
		if (gpGlobals->curtime - s_flTime > 0.5)
		{
			int nOldMode = SecDecode0(m_n6670);
			int nOldN = m_n6674;
			((MvsnSec::CSecureInt0 *)&m_pSecure6668)->Set(2);
			m_n6674 = enginerandom->vfunc2(1, 3);
			CBaseEntity *pNode = (CBaseEntity *)sub_102d1af0(this, 20000, 0, 15000.0f, 0, 0);
			((MvsnSec::CSecureInt0 *)&m_pSecure6668)->Set(nOldMode);
			m_n6674 = nOldN;
			if (pNode)
			{
				Vector vecPos = *((CEntityVSlots *)this)->slot217();
				((CAI_BaseNPCTroika *)this)->sub_102c41b0((int)"sheriff_teleport_emitter", &vecPos, 0, 0);
				vecPos = *((CEntityVSlots *)pNode)->slot217();
				((CAI_BaseNPCTroika *)this)->sub_102c41b0((int)"sheriff_teleport_emitter", &vecPos, 0, 0);
				sub_101cf5c0(this, &vecPos, 0);
			}
			else
			{
				vecVelocity.Init(0.0f, 0.0f, 0.0f);
				return vecVelocity;
			}
		}
	}
	else
	{
		s_vecLast = vecOrigin;
		s_flTime = gpGlobals->curtime;
	}

	Vector vecTarget;
	if (SecEq0(m_n6670, 0xfa0b069a))
	{
		CBaseEntity *pTarget = (CBaseEntity *)((const CBaseHandle *)&m_h628c)->Get();
		const Vector &v = *((CEntityVSlots *)pTarget)->slot220();
		vecTarget.x = v.x;
		vecTarget.y = v.y;
		vecTarget.z = v.z + 150.0;
	}
	else if (SecEq0(m_n6670, 0xfa0b069b))
	{
		if (!m_hFlyByTarget.Get() || !((CEntityVSlots *)m_hFlyByTarget.Get())->slot158())
			return ManBatAbsVelocity((CBaseEntity *)this);
		vecTarget = *((CEntityVSlots *)m_hFlyByTarget.Get())->slot220();
		vecTarget.z = MaxsOf(m_hFlyByTarget.Get()).z - MinsOf(m_hFlyByTarget.Get()).z + vecTarget.z + 1.0;
		((ManBatNav *)((ManBatPathOuter *)this)->GetPathfinder())->SetupFit();
		if (!((ManBatPathOuter *)this)->GetPathfinder()->sub_102f1a20(&vecTarget.x, 0x2400b))
		{
			((CEntityVSlots *)this)->slot448(0x1a);
			return ManBatAbsVelocity((CBaseEntity *)this);
		}
	}
	else
	{
		vecTarget = *((CEntityVSlots *)GetFlyNode())->slot220();
	}

	vecVelocity = vecTarget - vecOrigin;
	float flLen = vecVelocity.Length();
	flSpeed = 700.0f;
	if (!(vecVelocity.z < -30.0f))
		flSpeed = 500.0f;
	VectorNormalize(vecVelocity);
	if (sub_1038bec0(vecVelocity, flSpeed, vecOut))
	{
		vecVelocity = vecOut * flSpeed;
	}
	else
	{
		vecVelocity *= flSpeed;
		Vector vecCur = *((CEntityVSlots *)this)->slot198();
		Vector vecDiff = vecVelocity - vecCur;
		flSpeed = g_1093b7c8.GetFloat() * flScale;
		vecDiff.x = vecDiff.x > flSpeed ? flSpeed : vecDiff.x;
		float flNeg = -flSpeed;
		vecDiff.x = vecDiff.x < flNeg ? flNeg : vecDiff.x;
		if (vecDiff.y > flSpeed) vecDiff.y = flSpeed;
		if (vecDiff.y < flNeg) vecDiff.y = flNeg;
		if (vecDiff.z > flSpeed) vecDiff.z = flSpeed;
		if (vecDiff.z < -(flSpeed * 3.0)) vecDiff.z = -(flSpeed * 3.0);
		vecVelocity = vecCur + vecDiff;
	}

	if (flScale > 0.0)
	{
		double t = vecVelocity.Length() * 0.2;
		if (flLen < t)
			m_bReachedMoveGoal = true;
	}
	return vecVelocity;
}
}

struct CManBatHeldOwner
{
	char m_pad[0x2454];
	unsigned int m_nFlags2454;
};

struct CManBatEnt
{
	char m_pad0000[0x9c];
	CBaseCombatCharacter *m_p9c;	// 0x9c
	char m_pad00a0[0xa8 - 0xa0];
	CManBatHeldOwner *m_pA8;	// 0xa8
	CManBatHeldOwner *MyPlayer() { return m_pA8; }
};

void sub_101cd940(CBaseEntity *pEnt);

void CNPC_VManBat::sub_1038f020(char bForce)
{
	if (sub_1038f290())
	{
		if (bForce || gpGlobals->curtime >= m_f6684)
		{
			m_f6684 = 0;

			CManBatEnt *pEnt = (CManBatEnt *)m_h6680.Get();
			if (pEnt && pEnt->m_p9c)
				pEnt->m_p9c->sub_103327f0(500.0f);

			if (m_h669c)
			{
				sub_101cd940(m_h669c);
				m_h669c = (CBaseEntity *)0;
			}

			if (m_h66a8)
			{
				sub_101cd940(m_h66a8);
				m_h66a8 = (CBaseEntity *)0;
			}

			if (m_h66a0)
			{
				sub_101cd940(m_h66a0);
				m_h66a0 = (CBaseEntity *)0;
			}

			pEnt = (CManBatEnt *)(CBaseEntity *)m_h6680;
			if (pEnt)
			{
				CManBatHeldOwner *pPlayer = pEnt->MyPlayer();
				if (pPlayer)
					pPlayer->m_nFlags2454 &= ~1;
			}
			m_h6680 = (CBaseEntity *)0;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1038f290 size=0x1e
#include "CNPC_VManBat.h"
bool CNPC_VManBat::sub_1038f290()
{
	return m_f6684 > 0.0;
}
// END FUNCTION

// FUNCTION: 0x1038f2c0 size=0x11d
#include "CNPC_VManBat.h"
#include "CBaseAnimating.h"
#include "CUnknown101c26d0.h"
#include "CUnknown101578b0.h"
#include "CUnknown101578d0.h"
#include "CEntityVSlots.h"
#include "globalvars.h"
#include "Tier1.h"

extern int g_1070d9d0;
CBaseAnimating *sub_100a9ab0(const char *pszClass, Vector *pOrigin, void *pAngles, void *pOwner);
CBaseAnimating *sub_10157da0(CBaseAnimating *pProp, int nBone, CUnknown101c26d0 *pInfo, int nFlags);
void sub_101cd940(CBaseAnimating *pEnt);
void sub_102695d0();

struct ManBat_string_t
{
	const char *pszValue;
};
struct ManBat_castable_string_t : public ManBat_string_t
{
	ManBat_castable_string_t(const char *pszFrom) { pszValue = (pszFrom && *pszFrom) ? pszFrom : 0; }
};
struct CManBatNameView
{
	void SetName(ManBat_string_t s) { ((CUnknown101578b0 *)this)->sub_10157910((int)s.pszValue); }
};

// TARGET: CNPC_VManBat::sub_1038f2c0
bool CNPC_VManBat::sub_1038f2c0(const char *pszModel, int nBone, int nArg, const char *pszName)
{
	CBaseAnimating *pProp = sub_100a9ab0("prop_physics", ((CEntityVSlots *)this)->slot217(), &g_1070d9d0, 0);
	if (pProp) {
		g_109f3630("ManBat is throwing model %s\n", pszModel);
		pProp->vfunc105(pszModel);
		pProp->vfunc103();
		int bone = pProp->sub_10092550(nBone);
		CUnknown101c26d0 info;
		info.sub_101c26d0(pProp, pProp, 0, 0, 0, 0, -1);
		CBaseAnimating *pNew = sub_10157da0(pProp, bone, &info, 2);
		sub_101cd940(pProp);
		if (pNew) {
			((CEntityVSlots *)pNew)->slot191(nArg);
			pNew->sub_100ac4e0((int)sub_102695d0, 0, 0);
			pNew->m_flNextThink = gpGlobals->curtime + 20.0f;
			if (pszName) {
				((CUnknown101578d0 *)pNew)->sub_101578d0(1);
				((CManBatNameView *)pNew)->SetName(ManBat_castable_string_t(pszName));
			}
			sub_1038f430(pNew, nBone);
			m_h668c = *((CEntityVSlots *)pNew)->slot1();
			return true;
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x1038f430 size=0x169
#include "CNPC_VManBat.h"
#include "CPhysicsAnimlink.h"
#include "CBaseAnimating.h"
#include "CEntityVSlots.h"
#include "CUnknown101578b0.h"
#include "CUnknown101578d0.h"
#include "StudioHdr.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
CBaseEntity *sub_100a9ab0(const char *pszClass, void *pOrigin, void *pAngles, void *pOwner);
extern int g_1070d1b0, g_1070d9d0;

inline const char *ManBat_BoneName(StudioBone *pBone) { return (char *)pBone + *(int *)pBone; }

bool CNPC_VManBat::sub_1038f430(CBaseAnimating *pProp, int nArg)
{
	if (!pProp)
		return false;
	CPhysicsAnimlink *pLink = (CPhysicsAnimlink *)sub_100a9ab0("phys_animlink", &g_1070d1b0, &g_1070d9d0, 0);
	if (!pLink)
		return false;
	StudioHdr *pHdr = (StudioHdr *)((CBaseAnimating *)this)->sub_100952d0(-1);
	int iBone;
	for (int i = 0; i < pHdr->m_nBones; i++)
	{
		const char *pszName = ManBat_BoneName(pHdr->Bone(i));
		if (!_strcmpi("Bip01 R Foot", pszName))
		{
			iBone = i;
			break;
		}
	}
	if (iBone < 0)
		return false;
	if (!((CBaseEntity *)pProp)->m_obj36c)
		return false;
	void *pPhys = ((CEntityVSlots *)pProp)->slot265(nArg);
	if (!pPhys)
		return false;
	Vector vecOffset(0, 0, 0);
	QAngle angles(0, 0, 0);
	pLink->sub_1014f210((CBaseAnimating *)this, iBone, pPhys, (int)&vecOffset, (int)&angles);
	m_h6690 = *(unsigned int *)pLink->vfunc1();
	sub_1038f600(1);
	m_b6694 = ((CUnknown101578b0 *)pProp)->sub_101578b0();
	((CUnknown101578d0 *)pProp)->sub_101578d0(0);
	return true;
}
// END FUNCTION

// FUNCTION: 0x1038f600 size=0x24
class CUnknown1038f600
{
public:
	char pad0[0x14b8];
	unsigned int m_flags14b8;

	void sub_1038f600(char on);
};

// TARGET: CUnknown1038f600::sub_1038f600
void CUnknown1038f600::sub_1038f600(char on)
{
	if (on)
		m_flags14b8 |= 32;
	else
		m_flags14b8 &= ~32;
}
// END FUNCTION

// FUNCTION: 0x1038f640 size=0xc
unsigned char __fastcall sub_1038f640(char *self)
{
	unsigned char v = (unsigned char)(*(unsigned int *)(self + 0x14b8) >> 5);
	v &= 1;
	return v;
}
// END FUNCTION

// FUNCTION: 0x1038f660 size=0xe9
#include "CNPC_VManBat.h"
#include "CRagdollPropSpecial.h"
#include "CEHandleGet.h"

extern "C" void *__RTDynamicCast(void *pObject, long lVfDelta, void *pSrcType, void *pDestType, int isReference);
extern char g_10538764[];	// type descriptor of CBaseEntity
extern char g_1057fff0[];	// type descriptor of CRagdollPropSpecial
char __fastcall sub_1038f640(char *pNPC);
void sub_101cd970(CBaseEntity *pEnt);

void CNPC_VManBat::sub_1038f660()
{
	if (sub_1038f640((char *)this)) {
		CRagdollPropSpecial *pRagdoll = (CRagdollPropSpecial *)__RTDynamicCast(EHandle_Get(m_h668c), 0, g_10538764, g_1057fff0, 0);
		if (pRagdoll)
			pRagdoll->sub_101578d0(m_b6694);
		m_h668c = 0xffffffff;
		if (EHandle_Get(m_h6690))
			sub_101cd970((CBaseEntity *)EHandle_Get(m_h6690));
		m_h6690 = 0xffffffff;
		sub_1038f600(0);
	}
}
// END FUNCTION

// FUNCTION: 0x1038f790 size=0x22a
#include "CHL2_Player.h"
#include "CAI_Pathfinder.h"
#include "CAI_BaseNPCTroika.h"
#include "ehandle.h"
#include "ConVar.h"
#include "MvsnSec0.h"
#include "engineiface.h"
#include "globalvars.h"
#include "Vector.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CNPC_VManBat.h"
#include "CEHandleGet.h"
#include "CEntRemoveView.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CUnknown100290c0.h"
#include "CRagdollPropSpecial.h"
#define V(n) virtual void v##n();
#define V10(p) V(p##0) V(p##1) V(p##2) V(p##3) V(p##4) V(p##5) V(p##6) V(p##7) V(p##8) V(p##9)
struct PhysView {
    V10(0) V10(1) V10(2) V(30) V(31) V(32) V(33) V(34) V(35) V(36) V(37) V(38)
    virtual void s39(const Vector *a, const Vector *b);
};
struct RagView {
    V10(0) V10(1) V10(2) V10(3) V10(4) V10(5) V10(6) V10(7) V10(8) V10(9)
    V10(10) V10(11) V10(12) V10(13) V10(14) V10(15) V10(16) V10(17) V10(18) V10(19)
    V10(20) V10(21) V10(22) V10(23) V10(24) V10(25)
    V(260) V(261) V(262) V(263) V(264) V(265)
    virtual void s266(const Vector *a, const Vector *b);
};
extern "C" void *__cdecl __RTDynamicCast(void *, long, void *, void *, int);
extern char g_10538764[];
extern char g_1057fff0[];

int sub_10390920(unsigned int x);
int sub_102d1af0(void *pThis, int a, int b, float c, int d, int e);
void sub_101cf5c0(void *pThis, const Vector *pVec, int a);

extern ConVar g_1093b7c8;

namespace block_1038f790 {
struct ManBatPad1 { int x; };
struct ManBatPad2 { int x; };

struct CCollView
{
	virtual void v0();
	virtual const Vector &OBBMins();
	virtual const Vector &OBBMaxs();
};

static inline CCollView *CollOf(void *p) { return (CCollView *)((char *)p + 0x270); }
static inline const Vector &MaxsOf(void *p) { return CollOf(p)->OBBMaxs(); }
static inline const Vector &MinsOf(void *p) { return CollOf(p)->OBBMins(); }

static inline int SecDecode0(unsigned int v)
{
	return sub_10390920((((v & 0x710935) ^ 0x148739) + 0x4094ab & 0x18ef6ca) ^ v ^ 0x412a96ec);
}

static inline bool SecEq0(unsigned int v, unsigned int k)
{
	int b = sub_10390920(k);
	return SecDecode0(v) == b;
}

static inline const Vector &ManBatAbsVelocity(CBaseEntity *p)
{
	if ((unsigned char)(p->m_flags268 >> 12) & 1)
		p->sub_100b1d10();
	return p->m_vecVelocity3bc;
}

struct ManBatPathOuter : CAI_PathfinderOuter
{
	CAI_Pathfinder *GetPathfinder() { return m_pPathfinder; }
};

struct ManBatNav : CAI_Pathfinder
{
	void SetupFit()
	{
		m_n08 = ((CNPC_VManBat *)m_pOuter)->m_n156c;
		m_n0c = gpGlobals->framecount;
	}
};

// 0x1038b370, the unit's first function that declines the header inline LookupEntity (all six lookups),
// so the COMDAT is compiled before the target
struct ManBatDive : CNPC_VManBat
{
	CBaseEntity *GetFlyNode() { return m_pFlyNode; }
	Vector sub_1038b370(float flScale);
};

Vector ManBatDive::sub_1038b370(float flScale)
{
	static Vector s_vecLast(0.0f, 0.0f, 0.0f);
	static float s_flTime;
	Vector vecVelocity;
	float flSpeed;
	Vector vecOut;

	if (GetFlyNode() == 0 && !SecEq0(m_n6670, 0xfa0b069a) && !SecEq0(m_n6670, 0xfa0b069b))
	{
		vecVelocity = ManBatAbsVelocity((CBaseEntity *)this);
		vecVelocity.z = 10.0f;
		flSpeed = sub_10146150(&vecVelocity);
		Vector vecDir = vecVelocity;
		VectorNormalize(vecDir);
		if (sub_1038bec0(vecDir, flSpeed, vecOut))
			vecVelocity = vecOut * flSpeed;
		return vecVelocity;
	}

	if (m_nState == 0x30 || 0xb0 == m_nState || m_nState == 0x4b || m_nState == 0x1171)
	{
		vecVelocity.Init(0.0f, 0.0f, 0.0);
		return vecVelocity;
	}

	Vector vecOrigin = *((CEntityVSlots *)this)->slot220();
	if (vecOrigin == s_vecLast)
	{
		if (gpGlobals->curtime - s_flTime > 0.5)
		{
			int nOldMode = SecDecode0(m_n6670);
			int nOldN = m_n6674;
			((MvsnSec::CSecureInt0 *)&m_pSecure6668)->Set(2);
			m_n6674 = enginerandom->vfunc2(1, 3);
			CBaseEntity *pNode = (CBaseEntity *)sub_102d1af0(this, 20000, 0, 15000.0f, 0, 0);
			((MvsnSec::CSecureInt0 *)&m_pSecure6668)->Set(nOldMode);
			m_n6674 = nOldN;
			if (pNode)
			{
				Vector vecPos = *((CEntityVSlots *)this)->slot217();
				((CAI_BaseNPCTroika *)this)->sub_102c41b0((int)"sheriff_teleport_emitter", &vecPos, 0, 0);
				vecPos = *((CEntityVSlots *)pNode)->slot217();
				((CAI_BaseNPCTroika *)this)->sub_102c41b0((int)"sheriff_teleport_emitter", &vecPos, 0, 0);
				sub_101cf5c0(this, &vecPos, 0);
			}
			else
			{
				vecVelocity.Init(0.0f, 0.0f, 0.0f);
				return vecVelocity;
			}
		}
	}
	else
	{
		s_vecLast = vecOrigin;
		s_flTime = gpGlobals->curtime;
	}

	Vector vecTarget;
	if (SecEq0(m_n6670, 0xfa0b069a))
	{
		CBaseEntity *pTarget = (CBaseEntity *)((EHANDLE &)m_h628c).Get();
		const Vector &v = *((CEntityVSlots *)pTarget)->slot220();
		vecTarget.x = v.x;
		vecTarget.y = v.y;
		vecTarget.z = v.z + 150.0;
	}
	else if (SecEq0(m_n6670, 0xfa0b069b))
	{
		if (!m_hFlyByTarget.Get() || !((CEntityVSlots *)m_hFlyByTarget.Get())->slot158())
			return ManBatAbsVelocity((CBaseEntity *)this);
		vecTarget = *((CEntityVSlots *)m_hFlyByTarget.Get())->slot220();
		vecTarget.z = MaxsOf(m_hFlyByTarget.Get()).z - MinsOf(m_hFlyByTarget.Get()).z + vecTarget.z + 1.0;
		((ManBatNav *)((ManBatPathOuter *)this)->GetPathfinder())->SetupFit();
		if (!((ManBatPathOuter *)this)->GetPathfinder()->sub_102f1a20(&vecTarget.x, 0x2400b))
		{
			((CEntityVSlots *)this)->slot448(0x1a);
			return ManBatAbsVelocity((CBaseEntity *)this);
		}
	}
	else
	{
		vecTarget = *((CEntityVSlots *)GetFlyNode())->slot220();
	}

	vecVelocity = vecTarget - vecOrigin;
	float flLen = vecVelocity.Length();
	flSpeed = 700.0f;
	if (!(vecVelocity.z < -30.0f))
		flSpeed = 500.0f;
	VectorNormalize(vecVelocity);
	if (sub_1038bec0(vecVelocity, flSpeed, vecOut))
	{
		vecVelocity = vecOut * flSpeed;
	}
	else
	{
		vecVelocity *= flSpeed;
		Vector vecCur = *((CEntityVSlots *)this)->slot198();
		Vector vecDiff = vecVelocity - vecCur;
		flSpeed = g_1093b7c8.GetFloat() * flScale;
		vecDiff.x = vecDiff.x > flSpeed ? flSpeed : vecDiff.x;
		float flNeg = -flSpeed;
		vecDiff.x = vecDiff.x < flNeg ? flNeg : vecDiff.x;
		if (vecDiff.y > flSpeed) vecDiff.y = flSpeed;
		if (vecDiff.y < flNeg) vecDiff.y = flNeg;
		if (vecDiff.z > flSpeed) vecDiff.z = flSpeed;
		if (vecDiff.z < -(flSpeed * 3.0)) vecDiff.z = -(flSpeed * 3.0);
		vecVelocity = vecCur + vecDiff;
	}

	if (flScale > 0.0)
	{
		double t = vecVelocity.Length() * 0.2;
		if (flLen < t)
			m_bReachedMoveGoal = true;
	}
	return vecVelocity;
}
}

struct CManBatPhysEnt : CBaseEntity
{
    PhysView *VPhysicsGetObject() { return *(PhysView **)((char *)this + 0x36c); }
};

void CNPC_VManBat::sub_1038f790()
{
    if ((EHANDLE &)m_h6690)
        sub_101cd970((CEntRemoveView *)((EHANDLE &)m_h6690).Get());
    (EHANDLE &)m_h6690 = (CBaseEntity *)0;
    CEntityVSlots *target = (CEntityVSlots *)((EHANDLE &)m_h628c).Get();
    if (target && ((EHANDLE &)m_h668c).Get()) {
        Vector zero(0, 0, 0);
        Vector vec;
        const Vector *p = target->slot217();
        vec.x = p->x;
        vec.y = p->y;
        vec.z = p->z + 48.0f;
        sub_102c4cc0(&zero, ((CEntityVSlots *)((EHANDLE &)m_h668c).Get())->slot217(), &vec);
        CRagdollPropSpecial *r = (CRagdollPropSpecial *)__RTDynamicCast(((EHANDLE &)m_h668c).Get(), 0, g_10538764, g_1057fff0, 0);
        if (r) {
            Vector z2(0, 0, 0);
            ((RagView *)r)->s266(&zero, &z2);
            r->sub_101578d0(m_b6694);
        } else {
            PhysView *phys = ((CManBatPhysEnt *)((EHANDLE &)m_h668c).Get())->VPhysicsGetObject();
            if (phys) {
                Vector z2(0, 0, 0);
                phys->s39(&zero, &z2);
            }
        }
    }
    sub_102c4380((CBaseEntity *)((EHANDLE &)m_h668c).Get());
    sub_102c43b0(2.0f);
    (EHANDLE &)m_h668c = (CBaseEntity *)0;
    sub_1038f600(0);
}
// END FUNCTION

// FUNCTION: 0x1038fa50 size=0x23
#include "CAI_BaseNPCTroika.h"

extern char g_10642bcc[];

struct CUnknown1038fa50 {
	char m_pad0000[0x1b30];
	char *m_pszSourceFile;
	int m_nSourceLine;
	void sub_1038fa50(int unused);
};

// TARGET: CUnknown1038fa50::sub_1038fa50
void CUnknown1038fa50::sub_1038fa50(int unused)
{
	m_pszSourceFile = g_10642bcc;
	m_nSourceLine = 0x7d8;
	((CAI_BaseNPCTroika *)this)->sub_102ae750(0x15b, 0);
}
// END FUNCTION

// FUNCTION: 0x1038fa90 size=0x49
#include "CNPC_VManBat.h"
#include "inputdata_t.h"
void CNPC_VManBat::sub_1038fa90(inputdata_t *pInput)
{
	m_n6698 = pInput->value.fieldType == 4 ? pInput->value.iValue : 0;
	*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VManBat.cpp";
	*(int *)((char *)this + 0x1b34) = 0x7e4;
	sub_1038c170(1);
	sub_102ae750(0x160, 0);
}
// END FUNCTION
