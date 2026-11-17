// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1011e0d0 size=0xa4
#include "CGameMovement.h"
#include "CUnknown10739d08.h"

extern CUnknown10739d08 g_10739d08;

inline void SetVec(Vector &v, float x, float y, float z)
{
	v.x = x;
	v.y = y;
	v.z = z;
}

CGameMovement::CGameMovement()
{
	m_field0c = 0;
	m_field10 = 0;
	m_pPlayer = 0;
	SetVec(m_vecHullMin, -16.0f, -16.0f, 0.0f);
	SetVec(m_vecHullMax, 16.0f, 16.0f, 72.0f);
	SetVec(m_vecDuckHullMin, -16.0f, -16.0f, 0.0f);
	SetVec(m_vecDuckHullMax, 16.0f, 16.0f, 36.0f);
	SetVec(m_vecView, 0.0f, 0.0f, 64.0f);
	SetVec(m_vecDuckView, 0.0f, 0.0f, 30.0f);
	SetVec(m_vecObsHullMin, -10.0f, -10.0f, -10.0f);
	SetVec(m_vecObsHullMax, 10.0f, 10.0f, 10.0f);
	m_field98 = 0;
	m_fieldA0 = 1.0f;
	m_fieldA8 = g_10739d08.sub_101e7d90();
}
// END FUNCTION

// FUNCTION: 0x1011e1b0 size=0x3
#include "CGameMovement.h"
void CGameMovement::vfunc13(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1011e1d0 size=0x1e
#include "CGameMovement.h"

// TARGET: CGameMovement::vfunc0
CGameMovement *CGameMovement::vfunc0(unsigned int flags)
{
	sub_100102f3();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1011e250 size=0x2f
#include "CGameMovement.h"

// TARGET: CGameMovement::vfunc14
int CGameMovement::vfunc14(int type)
{
	switch (type) {
	case 0:
		return 0x14;
	case 1:
		return 0x1a;
	case 2:
		return 0xd;
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1011e2b0 size=0x11
#include "CGameMovement.h"

float *CGameMovement::vfunc2(char flag, int unused)
{
	if (flag)
		return (float *)((char *)this + 0x2c);
	return (float *)((char *)this + 0x14);
}
// END FUNCTION

// FUNCTION: 0x1011e2e0 size=0x11
#include "CGameMovement.h"

float *CGameMovement::vfunc3(char flag, int unused)
{
	if (flag)
		return (float *)((char *)this + 0x38);
	return (float *)((char *)this + 0x20);
}
// END FUNCTION

// FUNCTION: 0x1011e390 size=0x11
#include "CGameMovement.h"

float *CGameMovement::vfunc4(char flag, int unused)
{
	if (flag)
		return (float *)((char *)this + 0x68);
	return (float *)((char *)this + 0x5c);
}
// END FUNCTION

// FUNCTION: 0x1011e3c0 size=0x4f
#include "CGameMovement.h"
#include "globalvars.h"
char CGameMovement::vfunc15(void *pSurface, float volume)
{
	if (gpGlobals->maxClients > 1 && m_field10 == 0) {
		Vector *vel = (Vector *)((char *)m_pPlayer + 0x40);
		if (vel->Length2D() <= 195.0f)
			return 0;
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1011e430 size=0xee
#include "CGameMovement.h"


struct StepVar
{
	virtual void a0();
	virtual bool IsSet();	// slot 1
	char m_pad0004[0x24];
	float m_flValue;	// 0x28
};
extern StepVar *g_109ef094;

struct StepSoundTable
{
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5();
	virtual int GetStepSound(short id);	// slot 6
};

struct SoundEmitter
{
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
	virtual void EmitSound(void *pOrigin, int channel, int sound, float volume, int level, int flags, int pitch);	// slot 5
	virtual void a6(); virtual void a7(); virtual void a8();
	virtual StepSoundTable *GetStepSounds();	// slot 9
};
extern SoundEmitter *g_1071a278;

struct RandomStream
{
	virtual void a0(); virtual void a1();
	virtual int RandomInt(int lo, int hi);	// slot 2
};
extern RandomStream *g_1070b244;

struct MoveData
{
	char m_pad0000[0x1ee4];
	int m_bStepFlag;	// 0x1ee4
};

struct SurfaceData
{
	char m_pad0000[0x2c];
	short m_nStepLeft;	// 0x2c
	short m_nStepRight;	// 0x2e
};

struct MovementSlots
{
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
	virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4();
	virtual bool ShouldPlay(void *pSurface, float volume);	// slot 15
};

void CGameMovement::vfunc16(void *pSurface, float volume, char bForce)
{
	if (gpGlobals->maxClients > 1) {
		if (g_109ef094->IsSet())
			return;
		if (g_109ef094->m_flValue == 0.0f)
			return;
	}
	if (pSurface) {
		StepSoundTable *pTable = g_1071a278->GetStepSounds();
		if (!bForce && !((MovementSlots *)this)->ShouldPlay(pSurface, volume))
			return;
		MoveData *pMove = (MoveData *)m_pMove;
		int bStep = pMove->m_bStepFlag;
		short sound;
		if (bStep)
			sound = ((SurfaceData *)pSurface)->m_nStepLeft;
		else
			sound = ((SurfaceData *)pSurface)->m_nStepRight;
		pMove->m_bStepFlag = bStep == 0;
		if (sound != 0 && *(char *)m_pPlayer != 0) {
			int snd = pTable->GetStepSound(sound);
			SoundEmitter *pEmitter = g_1071a278;
			pEmitter->EmitSound((char *)m_pPlayer + 0x70, 4, snd, volume, 0x4b, 0, g_1070b244->RandomInt(0, 10) + 0x5f);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1011ef00 size=0x7
#include "CGameMovement.h"
namespace lifted {
extern float g_104454c0;
}
float CGameMovement::vfunc23()
{
    return lifted::g_104454c0;
}
// END FUNCTION

// FUNCTION: 0x1011f520 size=0xe6
#include "CGameMovement.h"


struct SMoveTimers
{
	char pad0[0x1ee0];
	float t1ee0;
	char pad1[0x2328 - 0x1ee4];
	float t2328;
	float t232c;
};

void CGameMovement::vfunc24()
{
	float flDelta = gpGlobals->frametime * 1000.0f;
	if (((SMoveTimers *)m_pMove)->t2328 > 0.0f) {
		((SMoveTimers *)m_pMove)->t2328 -= flDelta;
		if (((SMoveTimers *)m_pMove)->t2328 < 0.0f)
			((SMoveTimers *)m_pMove)->t2328 = 0.0f;
	}
	if (((SMoveTimers *)m_pMove)->t1ee0 > 0.0f) {
		((SMoveTimers *)m_pMove)->t1ee0 -= flDelta;
		if (((SMoveTimers *)m_pMove)->t1ee0 < 0.0f)
			((SMoveTimers *)m_pMove)->t1ee0 = 0.0f;
	}
	if (((SMoveTimers *)m_pMove)->t232c > 0.0f) {
		((SMoveTimers *)m_pMove)->t232c -= flDelta;
		if (((SMoveTimers *)m_pMove)->t232c < 0.0f)
			((SMoveTimers *)m_pMove)->t232c = 0.0f;
	}
}
// END FUNCTION

// FUNCTION: 0x1011f650 size=0x70
#include "CGameMovement.h"
struct S109ef04c { virtual void v0(); virtual char vfunc1(); char pad[0x28 - 4]; float m_f28; };
extern S109ef04c *g_109ef04c;
extern float g_104454c4;
void __fastcall sub_101251e0(char *);
void CGameMovement::vfunc1(void *pMove, void *pPlayer)
{
    float saved = gpGlobals->frametime;
    sub_101251e0((char *)this);
    *((char *)this + 0xdc) = 0;
    m_pMove = pMove;
    m_pPlayer = pPlayer;
    float f = g_109ef04c->vfunc1() ? g_104454c4 : g_109ef04c->m_f28;
    *(float *)((char *)m_pPlayer + 0x38) = f;
    vfunc5();
    sub_1011f6e0();
    gpGlobals->frametime = saved;
}
// END FUNCTION

// FUNCTION: 0x1011f720 size=0x2ac
#include "CGameMovement.h"
#include "CGameMovementViews.h"

#define MV ((CMoveFlagsView *)m_pMove)

void CGameMovement::vfunc7()
{
#define CLAMP(v, lo, hi) ((v) > (hi) ? (hi) : ((v) < (lo) ? (lo) : (v)))

	if ( MV->m_vecPunchAngle.LengthSqr() > 0.001 ||
		 MV->m_vecPunchAngleVel.LengthSqr() > 0.001 )
	{
		*(QAngle *)&MV->m_vecPunchAngle += *(QAngle *)&MV->m_vecPunchAngleVel * gpGlobals->frametime * MV->m_fl1488;

		float flDecay = 1.0f - MV->m_fl1488 * gpGlobals->frametime * 9.0f;
		if ( flDecay < 0.0f )
			flDecay = 0.0f;
		MV->m_vecPunchAngleVel *= flDecay;

		float flAngleDecay = MV->m_fl1488 * gpGlobals->frametime * 65.0f;
		if ( flAngleDecay > 2.0f )
			flAngleDecay = 2.0f;
		if ( flAngleDecay < 0.0f )
			flAngleDecay = 0.0f;

		MV->m_vecPunchAngleVel -= MV->m_vecPunchAngle * flAngleDecay;

		MV->m_vecPunchAngle = Vector(
			CLAMP( MV->m_vecPunchAngle.x, -89.0f, 89.0f ),
			CLAMP( MV->m_vecPunchAngle.y, -179.0f, 179.0f ),
			CLAMP( MV->m_vecPunchAngle.z, -89.0f, 89.0f ) );
	}
}
// END FUNCTION

// FUNCTION: 0x10121120 size=0x12b
#include "Vector.h"
#include "ConVar.h"
#include "CGameMovement.h"

extern ConVar g_109ef360;
void sub_10139610(const Vector *angles, Vector *forward, Vector *right, Vector *up);

struct GMMoveView
{
	char pad0[0x2c];
	float m_flForwardMove;
	float m_flSideMove;
	char pad34[4];
	float m_flMaxSpeed;
	char pad3c[4];
	Vector m_vecVelocity;
	char pad4c[0x58 - 0x4c];
	Vector m_vecViewAngles;
};

struct GMPlayerView
{
	char pad0[0x3b0];
	Vector m_vecBaseVelocity;
};

#define MV ((GMMoveView *)m_pPlayer)
#define PL ((GMPlayerView *)m_pMove)

void CGameMovement::vfunc8()
{
	int i;
	Vector wishvel;
	float fmove, smove;
	Vector wishdir;
	float wishspeed;
	Vector forward, right, up;

	sub_10139610(&MV->m_vecViewAngles, &forward, &right, &up);
	fmove = MV->m_flForwardMove;
	smove = MV->m_flSideMove;
	forward.z = 0;
	right.z = 0;
	VectorNormalize(forward);
	VectorNormalize(right);
	for (i = 0; i < 2; i++)
		wishvel[i] = forward[i] * fmove + right[i] * smove;
	wishvel.z = 0;
	wishdir = wishvel;
	wishspeed = VectorNormalize(wishdir);
	if (wishspeed > MV->m_flMaxSpeed)
		wishspeed = MV->m_flMaxSpeed;
	sub_10121000(wishdir, wishspeed, g_109ef360.GetFloat());
	GMMoveView *mv = MV;
	VectorAdd(mv->m_vecVelocity, PL->m_vecBaseVelocity, mv->m_vecVelocity);
	slot19(0, 0);
}
// END FUNCTION

// FUNCTION: 0x101212a0 size=0x29
struct CUnit101212a0 {
    bool sub_101212a0();
};

bool CUnit101212a0::sub_101212a0()
{
    char *pPlayer = *(char **)((char *)this + 8);
    if (*(int *)(pPlayer + 0x2068) != 0) {
        return false;
    }
    if (*(float *)(pPlayer + 0x2314) != 0.0f) {
        return false;
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x101212e0 size=0x98
#include "CGameMovement.h"


#define MOVE_VELOCITY (*(Vector *)((char *)m_pPlayer + 0x40))

// TARGET: CGameMovement::vfunc10
void CGameMovement::vfunc10(Vector &wishdir, float wishspeed, float accel)
{
	if (!vfunc9())
		return;
	float addspeed = wishspeed - MOVE_VELOCITY.Dot(wishdir);
	if (addspeed <= 0)
		return;
	float accelspeed = gpGlobals->frametime * m_fieldA0 * wishspeed * accel;
	if (accelspeed > addspeed)
		accelspeed = addspeed;
	for (int i = 0; i < 3; i++)
		MOVE_VELOCITY[i] += accelspeed * wishdir[i];
}
// END FUNCTION

// FUNCTION: 0x101213b0 size=0x71b
#include "CGameMovement.h"
#include "CGameMovementViews.h"
#include "CGlobalEntityList.h"
#include "CBaseHandle.h"
#include "CGameTrace.h"
#include "ConVar.h"
#include "Ray_t.h"
#include "Vector.h"
#include "QAngle.h"
#include "globalvars.h"

extern CGlobalEntityList *g_10566458;
extern char g_10572420;
void sub_1011e8f0(Ray_t *pRay, unsigned int mask, void *pPassEnt, int group, CGameTrace *pTrace);
void sub_10139610(const QAngle &angles, Vector *forward, Vector *right, Vector *up);

#define PLAYER ((CMovePlayerView *)m_pPlayer)
#define MOVE ((CMoveFlagsView *)m_pMove)


class CCycleCount
{
public:
	CCycleCount() { Init(); }
	void Init() { m_Int64 = 0; }
	void Sample()
	{
		unsigned long *pSample = (unsigned long *)&m_Int64;
		__asm
		{
			mov		ecx, pSample
			rdtsc
			mov		[ecx],     eax
			mov		[ecx+4],   edx
		}
	}
	CCycleCount &operator+=(CCycleCount const &other) { m_Int64 += other.m_Int64; return *this; }
	__int64 m_Int64;
};

class CFastTimer
{
public:
	void Start() { m_Duration.Sample(); }
	void sub_100335e0()	// CFastTimer::End (its out-of-line copy is 0x100335e0)
	{
		CCycleCount cnt;
		cnt.Sample();
		m_Duration.m_Int64 = cnt.m_Int64 - m_Duration.m_Int64;
	}
	const CCycleCount &GetDuration() const { return m_Duration; }
	CCycleCount m_Duration;
};

class CVProfile;
extern CVProfile *g_109f3648;

class __declspec(dllimport) CVProfNode
{
public:
	CVProfNode *GetSubNode(const char *pszName, int detailLevel, const char *pBudgetGroupName);
	void EnterScope();
	bool ExitScope();
	const char *GetName() { return m_pszName; }
	CVProfNode *GetParent() { return m_pParent; }
	int GetBudgetGroupID() { return m_BudgetGroupID; }

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
	void PushGroup(int nGroupID);
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
	CVProfNode *m_pRoot;	// 0x1018
};

inline void CVProfNode::EnterScope()
{
	m_nCurFrameCalls++;
	if (m_nRecursions++ == 0)
	{
		m_Timer.Start();
		g_109f3648->PushGroup(m_BudgetGroupID);
	}
}

inline bool CVProfNode::ExitScope()
{
	if (--m_nRecursions == 0 && m_nCurFrameCalls != 0)
	{
		m_Timer.sub_100335e0();
		m_CurFrameTime += m_Timer.GetDuration();
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

namespace block_101213b0 {
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

struct CGameMovementUnit : CGameMovement
{
	float *sub_1011e350();
	float *sub_1011e310();
	void TracePlayerBBox(const Vector &start, const Vector &end, unsigned int fMask, int collisionGroup, CGameTrace &pm)
	{
		CVProfScope VProf_("CGameMovement::TracePlayerBBox", 0, "Unaccounted", false);
		Ray_t ray;
		ray.sub_1006dec0(start, &end.x, sub_1011e310(), sub_1011e350(), (char)((((CMoveDataView *)m_pMove)->vfunc211() >> 6) & 1), 0);
		sub_1011e8f0(&ray, fMask, g_10566458->sub_100290c0((const unsigned int *)&((CMovePlayerView *)m_pPlayer)->m_hRef), collisionGroup, &pm);
	}
};

float *CGameMovementUnit::sub_1011e350()
{
	CMoveFlagsView *pMove = (CMoveFlagsView *)m_pMove;
	if ((unsigned char)(pMove->m_fFlags >> 5) & 1)
		return &m_vecObsHullMax.x;
	return pMove->m_bDucked ? &m_vecDuckHullMax.x : &m_vecHullMax.x;
}

float *CGameMovementUnit::sub_1011e310()
{
	CMoveFlagsView *pMove = (CMoveFlagsView *)m_pMove;
	if ((unsigned char)(pMove->m_fFlags >> 5) & 1)
		return &m_vecObsHullMin.x;
	return pMove->m_bDucked ? &m_vecDuckHullMin.x : &m_vecHullMin.x;
}
}
using namespace block_101213b0;

__forceinline void VAddX(const Vector &a, const Vector &b, Vector &c) { c.x = a.x + b.x; c.y = a.y + b[1]; c.z = a.z + b[2]; }
// TARGET: CGameMovement::vfunc11
void CGameMovement::vfunc11()
{
	int i;
	Vector wishvel;
	float spd;
	float fmove, smove;
	Vector wishdir;
	float wishspeed;
	Vector dest;
	Vector original, originalvel;
	Vector down, downvel;
	float downdist, updist;
	CGameTrace pm;
	Vector forward, right, up;

	sub_10139610(*(QAngle *)&PLAYER->m_vec58, &forward, &right, &up);

	CBaseHandle oldground;
	oldground = (IHandleEntity *)((CMoveDataView *)m_pMove)->vfunc209();

	fmove = PLAYER->m_flForwardMove;
	smove = PLAYER->m_flSideMove;

	if (g_10572420)
	{
		if (forward[2] != 0)
		{
			forward[2] = 0;
			VectorNormalize(forward);
		}
		if (right[2] != 0)
		{
			right[2] = 0;
			VectorNormalize(right);
		}
	}
	else
	{
		forward[2] = 0;
		right[2] = 0;
		VectorNormalize(forward);
		VectorNormalize(right);
	}

	for (i = 0; i < 2; i++)
		wishvel[i] = forward[i] * fmove + right[i] * smove;

	wishvel[2] = 0;

	VectorCopy(wishvel, wishdir);
	wishspeed = VectorNormalize(wishdir);

	if (wishspeed > PLAYER->m_flMaxSpeed)
	{
		VectorScale(wishvel, PLAYER->m_flMaxSpeed / wishspeed, wishvel);
		wishspeed = PLAYER->m_flMaxSpeed;
	}

	PLAYER->m_vecVelocity[2] = 0;
	if (PLAYER->m_bD0)
	{
		PLAYER->m_vecVelocity = wishvel;
	}
	else
	{
		vfunc10(wishdir, wishspeed, g_109ef28c->vfunc1() ? 0.0f : g_109ef28c->m_fValue);
	}
	PLAYER->m_vecVelocity[2] = 0;

	VAddX(MOVE->m_vec3b0, PLAYER->m_vecVelocity, PLAYER->m_vecVelocity);

	spd = VectorLength(PLAYER->m_vecVelocity);

	if (spd < 1.0f)
	{
		PLAYER->m_vecVelocity.Init();
		return;
	}

	dest[0] = PLAYER->m_vecOrigin[0] + PLAYER->m_vecVelocity[0] * gpGlobals->frametime;
	dest[1] = PLAYER->m_vecOrigin[1] + PLAYER->m_vecVelocity[1] * gpGlobals->frametime;
	dest[2] = PLAYER->m_vecOrigin[2];

	((CGameMovementUnit *)this)->TracePlayerBBox(PLAYER->m_vecOrigin, dest, 0x201400b, 6, pm);

	PLAYER->m_vec80 += wishdir * wishspeed;

	if (pm.m_fraction == 1)
	{
		VectorCopy(*(Vector *)pm.m_endpos, PLAYER->m_vecOrigin);
		return;
	}

	if (g_10566458->sub_100290c0((const unsigned int *)&oldground) == 0 && MOVE->m_n03E0 == 0)
		return;

	if (MOVE->m_flWaterJump)
		return;

	VectorCopy(PLAYER->m_vecOrigin, original);
	VectorCopy(PLAYER->m_vecVelocity, originalvel);

	slot19((int)&dest, (int)&pm);

	VectorCopy(PLAYER->m_vecOrigin, down);
	VectorCopy(PLAYER->m_vecVelocity, downvel);

	VectorCopy(original, PLAYER->m_vecOrigin);
	VectorCopy(originalvel, PLAYER->m_vecVelocity);

	VectorCopy(PLAYER->m_vecOrigin, dest);
	if (MOVE->m_b1F28)
		dest[2] += MOVE->m_fl1F24;

	((CGameMovementUnit *)this)->TracePlayerBBox(PLAYER->m_vecOrigin, dest, 0x201400b, 6, pm);

	if (!pm.m_startsolid && !pm.m_allsolid)
	{
		VectorCopy(*(Vector *)pm.m_endpos, PLAYER->m_vecOrigin);
	}

	slot19(0, 0);

	VectorCopy(PLAYER->m_vecOrigin, dest);
	if (MOVE->m_b1F28)
		dest[2] -= MOVE->m_fl1F24;

	((CGameMovementUnit *)this)->TracePlayerBBox(PLAYER->m_vecOrigin, dest, 0x201400b, 6, pm);

	if (pm.m_planeNormal[2] < 0.7)
		goto usedown;

	if (!pm.m_startsolid && !pm.m_allsolid)
	{
		VectorCopy(*(Vector *)pm.m_endpos, PLAYER->m_vecOrigin);
	}

	VectorCopy(PLAYER->m_vecOrigin, up);

	downdist = (down[0] - original[0]) * (down[0] - original[0])
		+ (down[1] - original[1]) * (down[1] - original[1]);
	updist = (up[0] - original[0]) * (up[0] - original[0])
		+ (up[1] - original[1]) * (up[1] - original[1]);

	if (downdist > updist)
	{
usedown:
		VectorCopy(down, PLAYER->m_vecOrigin);
		VectorCopy(downvel, PLAYER->m_vecVelocity);
	}
	else
		PLAYER->m_vecVelocity[2] = downvel[2];

	float stepDist = PLAYER->m_vecOrigin.z - original.z;
	if (stepDist > 0)
	{
		PLAYER->m_fl007C += stepDist;
	}
}
// END FUNCTION

// FUNCTION: 0x10121ce0 size=0x39f
#include "CGameMovement.h"
#include "CGameMovementViews.h"
#include "CBaseEntity.h"
#include "globalvars.h"

inline void VectorLerpI(const Vector& src1, const Vector& src2, vec_t t, Vector& dest )
{
	dest[0] = src1[0] + (src2[0] - src1[0]) * t;
	dest[1] = src1[1] + (src2[1] - src1[1]) * t;
	dest[2] = src1[2] + (src2[2] - src1[2]) * t;
}
inline void VectorLerpJ(const Vector& src1, const Vector& src2, vec_t t, Vector& dest )
{
	dest.x = (src2.x - src1.x) * t + src1.x;
	dest.y = src1.y + (src2.y - src1.y) * t;
	dest.z = src1.z + (src2.z - src1.z) * t;
}
#define PLAYER ((CMovePlayerView *)m_pPlayer)
#define MOVE ((CMoveFlagsView *)m_pMove)
#define MOVED ((CMoveDataView *)m_pMove)

// TARGET: CGameMovement::vfunc12
void CGameMovement::vfunc12()
{
	if (!sub_101252e0())
		sub_1011fa80();

	if (MOVE->m_flWaterJump != 0.0f)
	{
		sub_1011ffe0();
		slot19(0, 0);
		sub_101252e0();
		return;
	}

	if (MOVE->m_n03E0 >= 2)
	{
		if (MOVE->m_n03E0 == 2)
			sub_1011fb50();
		if (MOVE->m_n03E0 >= 3)
			sub_101256d0(0);
		if (PLAYER->m_vecVelocity.z < 0.0f && MOVE->m_flWaterJump != 0.0f)
			MOVE->m_flWaterJump = 0.0f;
		if (PLAYER->m_fFlags24 & 2)
			slot17();
		else
			PLAYER->m_n0028 &= ~2;
		sub_101200c0();
		VectorSubtract(PLAYER->m_vecVelocity, MOVE->m_vec3b0, PLAYER->m_vecVelocity);
		slot22();
		if (MOVED->vfunc209())
			PLAYER->m_vecVelocity.z = 0.0f;
	}
	else
	{
		if (PLAYER->m_fFlags24 & 2)
			slot17();
		else
			PLAYER->m_n0028 &= ~2;
		if (MOVED->vfunc209())
		{
			PLAYER->m_vecVelocity.z = 0.0f;
			sub_10120ba0();
		}
		sub_10004ebc();
		if (MOVED->vfunc209())
			vfunc11();
		else
			vfunc8();
		slot22();
		VectorSubtract(PLAYER->m_vecVelocity, MOVE->m_vec3b0, PLAYER->m_vecVelocity);
		sub_10004ebc();
		if (!sub_101252e0())
			sub_10120f30();
		if (MOVED->vfunc209())
			PLAYER->m_vecVelocity.z = 0.0f;
		sub_10125db0();
	}

	if (MOVED->vfunc209() == 0 &&
		(((CBaseEntity *)m_pMove)->sub_100b3700() & 2) == 0)
	{
		if (PLAYER->m_n00c0 >= 8)
		{
			float scale = sub_101282b0();
			float t0 = PLAYER->m_fl00BC - gpGlobals->curtime;
			float t = t0 / scale;
			if (t > 0.0f)
			{
				Vector a = *(Vector *)slot4(1, MOVE->m_b1edc);
				Vector b = *(Vector *)slot4(0, MOVE->m_b1edc);
				if (PLAYER->m_n00c0 == 8)
					a = 0.5f * (a + b);
				Vector *pv = (Vector *)&MOVE->m_pad0000[0x184];
				Vector v = *pv;
				VectorLerpI(b, a, t, v);
				MOVE->sub_1009f380(&v);
			}
		}
		else if (!MOVE->m_bDucked)
			MOVE->sub_1009f380((Vector *)slot4(0, MOVE->m_b1edc));
	}

	if ((m_field0c == 0 && MOVE->m_n03E0 != 0) || (m_field0c != 0 && MOVE->m_n03E0 == 0))
		sub_10122590();
}
// END FUNCTION

// FUNCTION: 0x101226b0 size=0x45a
#include "CTraceFilterNoCharacterCollide.h"
#include "CGameMovement.h"
#include "CGameMovementViews.h"
#include "CVProfile.h"
#include "CGlobalEntityList.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "CUnknown1015ef20.h"
#include "Ray_t.h"
#include "globalvars.h"

extern CGlobalEntityList *g_10566458;
extern CUnknown1070b254 *g_1070b254;

struct CJumpSv2c { virtual void vfunc0(); virtual char vfunc1(); char m_pad[0x2c - 4]; int m_n2c; };
struct CJumpSv28 { virtual void vfunc0(); virtual char vfunc1(); char m_pad[0x28 - 4]; float m_fl28; };
extern CJumpSv2c *g_109eef2c;
extern CJumpSv28 *g_109ef004;
struct CUnknown101e7d90 { float sub_101e7d90(); };
extern CUnknown101e7d90 g_10739d08;
struct CJumpMove { char m_pad[0x232c]; float m_fl232c; };

#define PLAYER ((CMovePlayerView *)m_pPlayer)

namespace block_101226b0 {
struct CGameMovementUnit : CGameMovement
{
	float *sub_1011e350();
	float *sub_1011e310();
};

float *CGameMovementUnit::sub_1011e350()
{
	CMoveFlagsView *pMove = (CMoveFlagsView *)m_pMove;
	if ((unsigned char)(pMove->m_fFlags >> 5) & 1)
		return &m_vecObsHullMax.x;
	return pMove->m_bDucked ? &m_vecDuckHullMax.x : &m_vecHullMax.x;
}

float *CGameMovementUnit::sub_1011e310()
{
	CMoveFlagsView *pMove = (CMoveFlagsView *)m_pMove;
	if ((unsigned char)(pMove->m_fFlags >> 5) & 1)
		return &m_vecObsHullMin.x;
	return pMove->m_bDucked ? &m_vecDuckHullMin.x : &m_vecHullMin.x;
}
}
using namespace block_101226b0;

// TARGET: CGameMovement::vfunc17
void CGameMovement::vfunc17()
{
	if (!((CUnknown1015ef20 *)m_pMove)->sub_1015ef20())
		return;
	if (*(unsigned char *)((char *)m_pMove + 0x1ed8) & 8)
		return;
	if (*(int *)((char *)m_pMove + 0x2068) == 0) {
		if (((CMoveFlagsView *)m_pMove)->m_flWaterJump != 0.0f) {
			((CMoveFlagsView *)m_pMove)->m_flWaterJump -= gpGlobals->frametime;
			if (((CMoveFlagsView *)m_pMove)->m_flWaterJump < 0.0f)
				((CMoveFlagsView *)m_pMove)->m_flWaterJump = 0.0f;
			return;
		}
		if (((CMoveFlagsView *)m_pMove)->m_n03E0 >= 2 && !((CMoveDataView *)m_pMove)->vfunc209()) {
			sub_101256d0(0);
			PLAYER->m_n00c0 = 3;
			int t = *(int *)((char *)m_pMove + 0x3e4);
			if (t == 0x20)
				*(float *)((char *)m_pPlayer + 0x48) = m_fieldA8;
			else if (t == 0x10)
				*(float *)((char *)m_pPlayer + 0x48) = m_fieldA8 * 0.8;
			if (((CJumpMove *)m_pMove)->m_fl232c <= 0.0f) {
				((CJumpMove *)m_pMove)->m_fl232c = 1000.0f;
				sub_10122590();
			}
			return;
		}
		float startz = *(float *)((char *)m_pPlayer + 0x48);
		void *ground = ((CMoveDataView *)m_pMove)->vfunc209();
		if (!ground) {
			char *p = (char *)m_pPlayer;
			unsigned int fl = *(unsigned int *)(p + 0x28);
			if (fl & 2) {
				if (gpGlobals->curtime - *(float *)(p + 0xb8) <= *(float *)(p + 0xb4))
					*(float *)(p + 0x48) = m_fieldA8;
			} else {
				*(unsigned int *)(p + 0x28) = fl | 2;
			}
		}
		if (*(unsigned char *)((char *)m_pPlayer + 0x28) & 2)
			return;
		void *pGround = ((CMoveDataView *)m_pMove)->vfunc209();
		sub_101256d0(0);
		slot16(m_pSurface9c, 0.5f, 1);
		float factor = 1.0f;
		if (m_pSurface9c)
			factor = *(float *)((char *)m_pSurface9c + 0x6c);
		float *pz = (float *)((char *)m_pPlayer + 0x48);
		*pz += g_10739d08.sub_101e7d90() * factor;
		if (pGround)
			*(float *)((char *)m_pPlayer + 0x48) += *(float *)((char *)pGround + 0x3dc);
		m_fieldA8 = *(float *)((char *)m_pPlayer + 0x48);
		if (!g_109eef2c->vfunc1() && g_109eef2c->m_n2c) {
			const Vector &origin = PLAYER->m_vecOrigin;
			Ray_t ray;
			{
			Vector start = origin;
			{
				Vector end;
				end = origin;
				end.z += g_109ef004->vfunc1() ? 0.0f : g_109ef004->m_fl28;
				g_109f3648->EnterScope("CGameMovement::TracePlayerBBox", 0, "Unaccounted", false);
				ray.sub_1006dec0(start, &end.x, ((CGameMovementUnit *)this)->sub_1011e310(), ((CGameMovementUnit *)this)->sub_1011e350(), (char)((((CMoveDataView *)m_pMove)->vfunc211() >> 6) & 1), 0);
			}
			{
				CTraceFilterSimple filter(g_10566458->sub_100290c0(&PLAYER->m_hRef), 6);
				CGameTrace tr;
				g_1070b254->vfunc4(&ray, 0x201400b, (CTraceFilterNoCharacterCollide *)&filter, &tr);
				g_109f3648->ExitScopeInlined();
				*(float *)((char *)m_pPlayer + 0x78) = (g_109ef004->vfunc1() ? 0.0f : g_109ef004->m_fl28) * tr.m_fraction * 0.99 + start.z;
			}
			}
		}
		*(float *)((char *)m_pPlayer + 0xb8) = gpGlobals->curtime;
		if (PLAYER->m_vecVelocity.Length2D() > 10.0f)
			PLAYER->m_n00c0 = 1;
		else
			PLAYER->m_n00c0 = 3;
		*(float *)((char *)m_pPlayer + 0x88) += *(float *)((char *)m_pPlayer + 0x48) - startz;
		*(float *)((char *)m_pPlayer + 0x7c) += 0.1f;
	}
	*(unsigned int *)((char *)m_pPlayer + 0x28) |= 2;
}
// END FUNCTION

// FUNCTION: 0x10122c30 size=0x77
#include "CGameMovement.h"

struct CPlayerView10122c30 {
	char m_pad0000[0x24];
	int m_nFlags24;
	int m_nFlags28;
	char m_pad002c[0x40 - 0x2c];
	Vector m_vecVelocity;
};

struct CMoveView10122c30 {
	char m_pad0000[0x3b0];
	Vector m_vecBase;
};

// TARGET: CGameMovement::vfunc18
void CGameMovement::vfunc18()
{
	sub_101252e0();
	CPlayerView10122c30 *pPlayer = (CPlayerView10122c30 *)m_pPlayer;
	if (pPlayer->m_nFlags24 & 2)
		slot17();
	else
		pPlayer->m_nFlags28 &= ~2;
	pPlayer = (CPlayerView10122c30 *)m_pPlayer;
	VectorAdd(pPlayer->m_vecVelocity, ((CMoveView10122c30 *)m_pMove)->m_vecBase, pPlayer->m_vecVelocity);
	slot19(0, 0);
	pPlayer = (CPlayerView10122c30 *)m_pPlayer;
	VectorSubtract(pPlayer->m_vecVelocity, ((CMoveView10122c30 *)m_pMove)->m_vecBase, pPlayer->m_vecVelocity);
}
// END FUNCTION

// FUNCTION: 0x10122cd0 size=0x654
#include "CGameMovement.h"
#include "CGameMovementViews.h"
#include "CVProfile.h"
#include "CGlobalEntityList.h"
#include "CUnknown1070b254.h"
#include "CUnknown1003ff80.h"
#include "CUnknown100353c0.h"
#include "CTraceFilterSimple.h"
#include "Ray_t.h"
#include "ConVar.h"
#include "globalvars.h"

extern CGlobalEntityList *g_10566458;
extern CUnknown1070b254 *g_1070b254;
extern CTouchNotifier *g_1071a278;
extern ConVar *g_109eef74;
extern char g_10572420;
extern Vector g_1070d1b0;
extern float g_104454c4;
extern double g_1044fab0;
extern double g_10449280;
void sub_1011e8f0(Ray_t *pRay, unsigned int mask, void *pPassEnt, int group, CGameTrace *pTrace);
void sub_10139500(const float *start, float scale, const float *dir, float *dest);

#define PLAYER ((CMovePlayerView *)m_pPlayer)

namespace block_10122cd0 {
struct CGameMovementUnit : CGameMovement
{
	float *sub_1011e350();
	float *sub_1011e310();
	void TracePlayerBBox(const Vector &start, const Vector &end, unsigned int fMask, int collisionGroup, CGameTrace &pm)
	{
		g_109f3648->EnterScope("CGameMovement::TracePlayerBBox", 0, "Unaccounted", false);
		Ray_t ray;
		ray.sub_1006dec0(start, &end.x, sub_1011e310(), sub_1011e350(), (char)((((CMoveDataView *)m_pMove)->vfunc211() >> 6) & 1), 0);
		sub_1011e8f0(&ray, fMask, g_10566458->sub_100290c0(&PLAYER->m_hRef), collisionGroup, &pm);
		g_109f3648->ExitScopeCall();
	}
};

float *CGameMovementUnit::sub_1011e350()
{
	CMoveFlagsView *pMove = (CMoveFlagsView *)m_pMove;
	if ((unsigned char)(pMove->m_fFlags >> 5) & 1)
		return &m_vecObsHullMax.x;
	return pMove->m_bDucked ? &m_vecDuckHullMax.x : &m_vecHullMax.x;
}

float *CGameMovementUnit::sub_1011e310()
{
	CMoveFlagsView *pMove = (CMoveFlagsView *)m_pMove;
	if ((unsigned char)(pMove->m_fFlags >> 5) & 1)
		return &m_vecObsHullMin.x;
	return pMove->m_bDucked ? &m_vecDuckHullMin.x : &m_vecHullMin.x;
}

inline float VecLen(const Vector &v)
{
	float z = v.z, y = v.y, x = v.x;
	float r = x * x;
	r += y * y;
	r += z * z;
	return FastSqrt(r);
}
inline float VecDot(const Vector &a, const Vector &b)
{
	float r = a[2] * b[2];
	r += a[0] * b[0];
	r += a[1] * b[1];
	return r;
}
}
using namespace block_10122cd0;

// TARGET: CGameMovement::vfunc19
int CGameMovement::vfunc19(Vector *pFirstDest, CGameTrace *pFirstTrace)
{
	CGameMovementUnit *pThis = (CGameMovementUnit *)this;
	int blocked; blocked = 0;
	float time_left;
	float allFraction; allFraction = 0;
	Vector original_velocity, new_velocity, dir;
	int bumpcount;
	int i, j;
	float d;
	Vector primal_velocity;
	Vector end;
	Vector planes[5];
	CGameTrace pm;
	int numplanes; numplanes = 0;
	VectorCopy(PLAYER->m_vecVelocity, original_velocity);
	VectorCopy(PLAYER->m_vecVelocity, primal_velocity);
	time_left = gpGlobals->frametime;
	new_velocity.Init(0, 0, 0);
	for (bumpcount = 0; bumpcount < 4; bumpcount++) {
		if (VecLen(PLAYER->m_vecVelocity) == g_1044fab0)
			break;
		sub_10139500(&PLAYER->m_vecOrigin.x, time_left, &PLAYER->m_vecVelocity.x, &end.x);
		if (g_10572420) {
			if (!(pFirstDest && end == *pFirstDest)) {
				pThis->TracePlayerBBox(PLAYER->m_vecOrigin, end, 0x201400b, 6, pm);
			} else {
				((CUnknown100353c0 *)&pm)->sub_100353c0((CUnknown100353c0 *)pFirstTrace);
				pm.m_fractionleftsolid = pFirstTrace->m_fractionleftsolid;
				pm.m_surfaceName = pFirstTrace->m_surfaceName;
				*(int *)&pm.m_surfaceProps = *(int *)&pFirstTrace->m_surfaceProps;
				pm.m_hitgroup = pFirstTrace->m_hitgroup;
				pm.m_physicsbone = pFirstTrace->m_physicsbone;
				pm.m_pEnt = pFirstTrace->m_pEnt;
				pm.m_hitbox = pFirstTrace->m_hitbox;
			}
		} else {
				pThis->TracePlayerBBox(PLAYER->m_vecOrigin, end, 0x201400b, 6, pm);
		}
		allFraction += pm.m_fraction;
		if (pm.m_allsolid) {
			VectorCopy(g_1070d1b0, PLAYER->m_vecVelocity);
			return 4;
		} if (pm.m_fraction > g_104454c4) {
			VectorCopy(*(Vector *)pm.m_endpos, PLAYER->m_vecOrigin);
			VectorCopy(PLAYER->m_vecVelocity, original_velocity);
			numplanes = 0;
		}
		if (pm.m_fraction == 1.0f)
			break;
		g_1071a278->vfunc2(&pm, &PLAYER->m_vecVelocity);
		if (pm.m_planeNormal[2] > 0.7)
			blocked |= 1;
		if (pm.m_planeNormal[2] == g_104454c4)
			blocked |= 2;
		time_left -= time_left * pm.m_fraction;
		if (numplanes >= 5) {
			VectorCopy(g_1070d1b0, PLAYER->m_vecVelocity);
			break;
		}
		VectorCopy(*(Vector *)pm.m_planeNormal, planes[numplanes]);
		numplanes++;
		if (!(!(!(numplanes == 1 && ((CMoveDataView *)m_pMove)->g94() == 3 && !((CMoveDataView *)m_pMove)->vfunc209())))) {
			for (i = 0; i < numplanes; i++) {
				sub_10124120(original_velocity, planes[i], PLAYER->m_vecVelocity, 1.0f);
				for (j = 0; j < numplanes; j++)
					if (j != i) {
						if (g_104454c4 > PLAYER->m_vecVelocity.Dot(planes[j]))
							break;
					}
				if (j == numplanes)
					break;
			}
			if (i == numplanes) {
				if (numplanes != 2) {
					VectorCopy(g_1070d1b0, PLAYER->m_vecVelocity);
					break;
				}
				CrossProduct(planes[0], planes[1], dir);
				VectorNormalize(dir);
				d = dir.Dot(PLAYER->m_vecVelocity);
				VectorScale(dir, d, PLAYER->m_vecVelocity);
			}
			d = PLAYER->m_vecVelocity.Dot(primal_velocity);
			if (d <= g_104454c4) {
				VectorCopy(g_1070d1b0, PLAYER->m_vecVelocity);
				break;
			}
		} else {
			if (planes[0].z > 0.7)
				sub_10124120(original_velocity, planes[0], new_velocity, 1.0f);
			else
				sub_10124120(original_velocity, planes[0], new_velocity, g_10449280 + ((1.0f - m_fieldA0) * (g_109eef74->vfunc1() ? g_104454c4 : g_109eef74->m_fValue)));
			VectorCopy(new_velocity, PLAYER->m_vecVelocity);
			VectorCopy(new_velocity, original_velocity);
		}
	}
	if (allFraction == g_104454c4)
		VectorCopy(g_1070d1b0, PLAYER->m_vecVelocity);
	return blocked;
}
// END FUNCTION

// FUNCTION: 0x101234d0 size=0x46
#include "CGameMovement.h"
struct CSurfProp { char pad[0x72]; char m_bFlag; };
struct CSurfSys {
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
	virtual CSurfProp *Get(int i);
};
struct CPhysSys {
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
	virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8();
	virtual CSurfSys *GetSurfaceProps();
};
struct CTraceView { char pad[0x30]; unsigned int m_flags; char pad2[0xc]; short m_surf; };
extern CPhysSys *g_1071a278;

// TARGET: CGameMovement::vfunc21
char CGameMovement::vfunc21(void *pTrace)
{
	CTraceView *t = (CTraceView *)pTrace;
	if (t->m_flags & 0x20000000)
		return 1;
	CSurfSys *p = g_1071a278->GetSurfaceProps();
	if (p) {
		CSurfProp *s = p->Get(t->m_surf);
		if (s && s->m_bFlag)
			return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10123540 size=0x54b
#include "CTraceFilterNoCharacterCollide.h"
#include "CGameMovement.h"
#include "CGameMovementViews.h"
#include "CVProfile.h"
#include "CGlobalEntityList.h"
#include "CUnknown1070b254.h"
#include "Ray_t.h"

extern CGlobalEntityList *g_10566458;
void sub_1011e8f0(Ray_t *pRay, unsigned int mask, void *pPassEnt, int group, CGameTrace *pTrace);
void sub_10139500(const Vector &start, float scale, const Vector &dir, Vector &dest);
struct CFloatGetter { float sub_101e7d30(); float sub_101e7d50(); };
extern CFloatGetter g_10739d08;
struct CPlayerLadderView { void sub_10183330(); };
struct CLadderUnarmedView { char sub_101832b0(); };
extern Vector g_1070d1b0;

#define PLAYER ((CMovePlayerView *)m_pPlayer)
#define MOVE ((CMoveFlagsView *)m_pMove)
#define MOVEV ((CMoveDataView *)m_pMove)

namespace block_10123540 {
struct CGameMovementUnit : CGameMovement
{
	float *sub_1011e350();
	float *sub_1011e310();
	void TracePlayerBBox(const Vector &start, const Vector &end, unsigned int fMask, int collisionGroup, CGameTrace &pm)
	{
		g_109f3648->EnterScope("CGameMovement::TracePlayerBBox", 0, "Unaccounted", false);
		Ray_t ray;
		ray.sub_1006dec0(start, &end.x, sub_1011e310(), sub_1011e350(), (char)((MOVEV->vfunc211() >> 6) & 1), 0);
		sub_1011e8f0(&ray, fMask, g_10566458->sub_100290c0(&PLAYER->m_hRef), collisionGroup, &pm);
		g_109f3648->ExitScopeCall();
	}
};

float *CGameMovementUnit::sub_1011e350()
{
	CMoveFlagsView *pMove = (CMoveFlagsView *)m_pMove;
	if ((unsigned char)(pMove->m_fFlags >> 5) & 1)
		return &m_vecObsHullMax.x;
	return pMove->m_bDucked ? &m_vecDuckHullMax.x : &m_vecHullMax.x;
}

float *CGameMovementUnit::sub_1011e310()
{
	CMoveFlagsView *pMove = (CMoveFlagsView *)m_pMove;
	if ((unsigned char)(pMove->m_fFlags >> 5) & 1)
		return &m_vecObsHullMin.x;
	return pMove->m_bDucked ? &m_vecDuckHullMin.x : &m_vecHullMin.x;
}
}
using namespace block_10123540;

#define PLANE_NORMAL (*(Vector *)pm.m_planeNormal)

// TARGET: CGameMovement::vfunc20
char CGameMovement::vfunc20()
{
	CGameTrace pm;
	bool onFloor;
	Vector floor;
	Vector wishdir;
	Vector end;
	bool bLadder = false;

	if (MOVEV->g94() == 9)
		return 0;

	if (MOVEV->g94() == 10)
	{
		bLadder = true;
		wishdir = -MOVE->m_vecLadder2330;
	}
	else
	{
		if (PLAYER->m_flForwardMove || PLAYER->m_flSideMove)
		{
			for (int i = 0; i < 3; i++)
				wishdir[i] = m_vecForward[i] * PLAYER->m_flForwardMove + m_vecRight[i] * PLAYER->m_flSideMove;
			VectorNormalize(wishdir);
		}
		else
		{
			return 0;
		}
	}

	sub_10139500(PLAYER->m_vecOrigin, 2.0f, wishdir, end);
	((CGameMovementUnit *)this)->TracePlayerBBox(PLAYER->m_vecOrigin, end, 0x201400b, 6, pm);

	if (pm.m_fraction == 1.0f || !vfunc21(&pm))
		return 0;

	MOVEV->vfunc93(10, 0);
	MOVE->m_n0360 = 0;
	if (((CLadderUnarmedView *)m_pMove)->sub_101832b0())
		MOVEV->vfunc457("item_w_unarmed", 0);

	MOVE->m_vecLadder2330 = PLANE_NORMAL;

	VectorCopy(PLAYER->m_vecOrigin, floor);
	floor[2] += ((CGameMovementUnit *)this)->sub_1011e310()[2] - 1;

	if (g_1070b254->vfunc0(&floor.x, 0) == 1)
		onFloor = true;
	else
		onFloor = false;

	MOVE->m_n03EC = 0;

	float forwardSpeed = 0, rightSpeed = 0;
	if (PLAYER->m_fFlags24 & 0x10)
		forwardSpeed = -g_10739d08.sub_101e7d30();
	if (PLAYER->m_fFlags24 & 8)
		forwardSpeed = g_10739d08.sub_101e7d30();
	if (PLAYER->m_fFlags24 & 0x200)
		rightSpeed = -g_10739d08.sub_101e7d50();
	if (PLAYER->m_fFlags24 & 0x400)
		rightSpeed = g_10739d08.sub_101e7d50();

	if (PLAYER->m_fFlags24 & 2)
	{
		MOVEV->vfunc93(3, 0);
		if (bLadder)
			((CPlayerLadderView *)m_pMove)->sub_10183330();
		PLAYER->m_n00c0 = 7;
		PLAYER->m_flB8 = gpGlobals->curtime;
		MOVE->m_n0360 = 0;
		VectorScale(PLANE_NORMAL, 270, PLAYER->m_vecVelocity);
		PLAYER->m_vecVelocity.z = 0;
	}
	else
	{
		if (forwardSpeed != 0 || rightSpeed != 0)
		{
			Vector velocity, perp, cross, lateral, tmp;
			VectorScale(m_vecForward, forwardSpeed, velocity);
			sub_10139500(velocity, rightSpeed, m_vecRight, velocity);

			VectorCopy(g_1070d1b0, tmp);
			tmp[2] = 1;
			CrossProduct(tmp, PLANE_NORMAL, perp);
			VectorNormalize(perp);

			float flNormal = DotProduct(velocity, PLANE_NORMAL);
			VectorScale(PLANE_NORMAL, flNormal, cross);
			VectorSubtract(velocity, cross, lateral);

			CrossProduct(PLANE_NORMAL, perp, tmp);
			sub_10139500(lateral, -flNormal, tmp, PLAYER->m_vecVelocity);

			if (onFloor && flNormal > 0)
				sub_10139500(PLAYER->m_vecVelocity, g_10739d08.sub_101e7d30(), PLANE_NORMAL, PLAYER->m_vecVelocity);
		}
		else
		{
			PLAYER->m_vecVelocity.Init();
		}
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10124200 size=0x8d
#include "CGameMovement.h"
#include <math.h>
void sub_10139610(const QAngle &angles, Vector *forward, Vector *right, Vector *up);

// TARGET: CGameMovement::vfunc6
float CGameMovement::vfunc6(const QAngle &angles, const Vector &vec, float scale, float threshold)
{
	Vector forward, right, up;
	sub_10139610(angles, &forward, &right, &up);
	int sign = -1;
	float d = right.x * vec.x + right.y * vec.y + right.z * vec.z;
	if (!(d < 0.0f))
		sign = 1;
	float s = (float)sign;
	float a = fabs(d);
	if (a < threshold)
		return s * (a / threshold * scale);
	return s * scale;
}
// END FUNCTION

// FUNCTION: 0x101257b0 size=0x442
#include <math.h>
#include "CTraceFilterNoCharacterCollide.h"
#include "CGameMovement.h"
#include "CGameMovementViews.h"
#include "CVProfile.h"
#include "CGlobalEntityList.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "CUnknown10739d08.h"
#include "IPhysicsSurfaceProps.h"
#include "Ray_t.h"

extern CGlobalEntityList *g_10566458;
extern CUnknown10739d08 g_10739d08;
bool __fastcall sub_10129740(void *pTrace);
void sub_100fdb80(void *pMove, unsigned char b);
extern void (CVProfile::*g_109f3660)(const char *, int, const char *, bool);
extern void (CVProfile::*g_109f365c)();

struct CSurfaceView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void vfunc4(int index, int a, int b, float *pOut, int c);
	virtual surfacedata_t_view *vfunc5(int index);
};

struct CSurfaceHolder
{
	virtual void v0(); virtual void v1(); virtual void vfunc2(CGameTrace *pTrace, Vector *pVelocity); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
	virtual CSurfaceView *vfunc9();
};
extern CSurfaceHolder *g_1071a278;

#define PLAYER ((CMovePlayerView *)m_pPlayer)
#define MOVE ((CMoveFlagsView *)m_pMove)

namespace block_101257b0 {
#pragma auto_inline(off)
struct Ray_tViewH { Vector m_Start; Vector m_Delta; Vector m_StartOffset; Vector m_Extents; bool m_IsRay; bool m_IsSwept; char m_b32; char m_b33; float m_f34; };
struct RayHull : Ray_t { void sub_1006dec0(const Vector &start, const float *pEnd, const float *pMins, const float *pMaxs, char a, char b); };
void RayHull::sub_1006dec0(const Vector &start, const float *pEnd, const float *pMins, const float *pMaxs, char a, char b)
{
	const Vector &end = *(const Vector *)pEnd;
	Ray_tViewH *r = (Ray_tViewH *)this;
	const Vector &mins = *(const Vector *)pMins;
	const Vector &maxs = *(const Vector *)pMaxs;
	VectorSubtract(end, start, r->m_Delta);
	r->m_IsSwept = (r->m_Delta.LengthSqr() != 0.0f);
	VectorSubtract(maxs, mins, r->m_Extents);
	r->m_Extents *= 0.5f;
	r->m_IsRay = (r->m_Extents.LengthSqr() < 1e-6);
	VectorAdd(mins, maxs, r->m_StartOffset);
	r->m_StartOffset *= 0.5f;
	VectorAdd(start, r->m_StartOffset, r->m_Start);
	r->m_StartOffset *= -1.0f;
	r->m_b32 = b;
	r->m_b33 = 0;
	r->m_f34 = 0.0f;
	if (a && !r->m_IsRay) {
		r->m_f34 = (float)sqrt((r->m_Extents.x * r->m_Extents.x) + (r->m_Extents.y * r->m_Extents.y));
		if (1e-6 < r->m_f34)
			r->m_b33 = 1;
	}
}
#pragma auto_inline(on)
struct CGameMovementUnit : CGameMovement
{
	float *sub_1011e350();
	float *sub_1011e310();
	void TracePlayerBBox(const Vector &start, const Vector &end, unsigned int fMask, int collisionGroup, CGameTrace &pm)
	{
		(g_109f3648->*g_109f3660)("CGameMovement::TracePlayerBBox", 0, "Unaccounted", false);
		Ray_t ray;
		((RayHull *)&ray)->sub_1006dec0(start, &end.x, sub_1011e310(), sub_1011e350(), (((CMoveDataView *)m_pMove)->vfunc211() >> 6) & 1, 0);
		CTraceFilterSimple filter(g_10566458->sub_100290c0(&((CMovePlayerView *)m_pPlayer)->m_hRef), collisionGroup);
		g_1070b254->vfunc4(&ray, fMask, (CTraceFilterNoCharacterCollide *)&filter, &pm);
		(g_109f3648->*g_109f365c)();
	}
};

float *CGameMovementUnit::sub_1011e350()
{
	CMoveFlagsView *pMove = (CMoveFlagsView *)m_pMove;
	if ((unsigned char)(pMove->m_fFlags >> 5) & 1)
		return &m_vecObsHullMax.x;
	return pMove->m_bDucked ? &m_vecDuckHullMax.x : &m_vecHullMax.x;
}

float *CGameMovementUnit::sub_1011e310()
{
	CMoveFlagsView *pMove = (CMoveFlagsView *)m_pMove;
	if ((unsigned char)(pMove->m_fFlags >> 5) & 1)
		return &m_vecObsHullMin.x;
	return pMove->m_bDucked ? &m_vecDuckHullMin.x : &m_vecHullMin.x;
}
}
using namespace block_101257b0;

// TARGET: CGameMovement::vfunc22
void CGameMovement::vfunc22()
{
	if ((unsigned char)(MOVE->m_fFlags >> 5) & 1)
		return;
	sub_101252e0();
	float fUp = PLAYER->m_vecVelocity.z;
	float fOff;
	if (m_field10 == 1) {
		fUp = 2.0f;
		fOff = -2.0f;
	} else if (PLAYER->m_n00c0 == 0) {
		fUp = 3.0f;
		fOff = -9.0f;
	} else if (fUp > 50.0f && (PLAYER->m_n00c0 == 5 || PLAYER->m_n00c0 == 2 || PLAYER->m_n00c0 == 3 || PLAYER->m_n00c0 == 1)) {
		fUp = fUp * 0.04;
		if (fUp > 12.0f) {
			fOff = -1.0f;
			fUp = 12.0f;
		} else {
			if (fUp < 0.0f)
				fUp = 0.0f;
			fOff = -1.0f;
		}
	} else if (fUp < -50.0f && PLAYER->m_n00c0 == 6) {
		float t = fUp * 0.04;
		if (t > 0.0f) {
			fOff = 0.0f;
		} else {
			if (t < -12.0f)
				t = -12.0f;
			fOff = t;
		}
		fUp = 12.0f + fOff;
	} else {
		fUp = 6.0f;
		fOff = -2.0f;
	}
	const Vector &org = PLAYER->m_vecOrigin;
	Vector bump;
	bump.x = org.x;
	bump.y = org.y;
	bump.z = org.z;
	bump.z = bump[2] + fOff;
	Vector point(org);
	point.z += fUp;
	float flLimit = g_10739d08.sub_101e7d90() * 0.75f;
	if (flLimit < PLAYER->m_vecVelocity.z
		|| (PLAYER->m_vecVelocity.z > 0.0f && ((CMoveDataView *)m_pMove)->g94() == 10)) {
		sub_101256d0(0);
		return;
	}
	CGameTrace tr;
	((CGameMovementUnit *)this)->TracePlayerBBox(point, bump, 0x201400b, 6, tr);
	if (tr.m_startsolid) {
		point = PLAYER->m_vecOrigin;
		((CGameMovementUnit *)this)->TracePlayerBBox(point, bump, 0x201400b, 6, tr);
	}
	if (tr.m_planeNormal[2] < 0.7f)
		sub_101256d0(0);
	else
		sub_101256d0(tr.m_pEnt);
	if (((CMoveDataView *)m_pMove)->vfunc209()) {
		MOVE->m_flWaterJump = 0;
		if (MOVE->m_n03E0 < 2 && !tr.m_startsolid && !tr.m_allsolid && tr.m_fraction != 0.0f)
			PLAYER->m_vecOrigin = *(Vector *)tr.m_endpos;
	}
	unsigned char bMat = g_1071a278->vfunc9()->vfunc5(tr.m_surfaceProps)->m_nMaterial70;
	if (!((CMoveDataView *)m_pMove)->vfunc209())
		bMat = 0;
	if (m_bA5 != bMat)
		sub_100fdb80(m_pMove, bMat);
	m_bA5 = bMat;
	if (!sub_10129740(&tr))
		g_1071a278->vfunc2(&tr, &PLAYER->m_vecVelocity);
}
// END FUNCTION

// FUNCTION: 0x10126f60 size=0x4f
#include "CGameMovement.h"
#include "CBaseEntity.h"
struct S10126f60Move { char pad[0x2c]; float x, y, z; };
void CGameMovement::vfunc25()
{
	if (!m_bDc) {
		if (((CBaseEntity *)m_pMove)->sub_100b3700() & 2) {
			((S10126f60Move *)m_pPlayer)->x *= 0.33333334f;
			((S10126f60Move *)m_pPlayer)->y *= 0.33333334f;
			((S10126f60Move *)m_pPlayer)->z *= 0.33333334f;
			m_bDc = 1;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101274a0 size=0x510
// TARGET: CGameMovement::vfunc5
#include "CGameMovement.h"
#include "CGameMovementViews.h"
#include "CVProfile.h"
#include "CBCCSlotViews.h"
#include "CBaseEntity.h"
#include "CBasePlayer.h"

class CPMView
{
public:
	VIEW_SLOT10(0) VIEW_SLOT10(1) VIEW_SLOT10(2) VIEW_SLOT10(3) VIEW_SLOT10(4) VIEW_SLOT10(5) VIEW_SLOT10(6) VIEW_SLOT10(7) VIEW_SLOT10(8)
	VIEW_SLOT(90) VIEW_SLOT(91) VIEW_SLOT(92)
	virtual void vfunc93(int a, int b);
	virtual int vfunc94();
	VIEW_SLOT(95) VIEW_SLOT(96) VIEW_SLOT(97) VIEW_SLOT(98) VIEW_SLOT(99)
	VIEW_SLOT10(10) VIEW_SLOT10(11) VIEW_SLOT10(12) VIEW_SLOT10(13) VIEW_SLOT10(14)
	VIEW_SLOT(150) VIEW_SLOT(151) VIEW_SLOT(152) VIEW_SLOT(153) VIEW_SLOT(154) VIEW_SLOT(155) VIEW_SLOT(156) VIEW_SLOT(157)
	virtual char vfunc158();
	VIEW_SLOT(159)
	VIEW_SLOT10(16) VIEW_SLOT10(17) VIEW_SLOT10(18) VIEW_SLOT10(19)
	VIEW_SLOT(200) VIEW_SLOT(201) VIEW_SLOT(202) VIEW_SLOT(203) VIEW_SLOT(204) VIEW_SLOT(205) VIEW_SLOT(206) VIEW_SLOT(207) VIEW_SLOT(208)
	virtual void *vfunc209();
};

struct CDevCvarView
{
	virtual void v0();
	virtual char vfunc1();
	char m_pad04[0x28];
	int m_n2c;
};

struct CCycleSample
{
	unsigned __int64 m_Int64;
	void Sample()
	{
		unsigned long *pSample = (unsigned long *)&m_Int64;
		__asm {
			mov ecx, pSample
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
	void End()
	{
		CCycleSample now;
		now.m_Int64 = 0;
		now.Sample();
		m_Int64 = now.m_Int64 - m_Int64;
	}
	void Add(const CCycleSample &rhs)
	{
		m_Int64 += rhs.m_Int64;
	}
};

typedef void (__cdecl *FnDevMsg)(int level, const char *fmt, ...);
extern FnDevMsg g_109f3650;
extern CDevCvarView *g_1070b0f4;
extern const Vector g_1070d1b0;
extern CTouchNotifier *g_1071a278;
extern void sub_10119750(const char *fmt, ...);
extern void sub_10139610(const float *pAngles, float *pForward, float *pRight, float *pUp);

namespace block_101274a0 {
struct CGameMovementUnit : CGameMovement
{
	char sub_1011e290(int nInterval);
};
char CGameMovementUnit::sub_1011e290(int nInterval) { return 1; }

const char *__cdecl sub_101273e0(int nState)
{
	if (nState == 0)
		return "Jump_None";
	if (nState == 2)
		return "Jump_Hop";
	if (nState == 3)
		return "Jump_Hop_Up";
	if (nState == 4)
		return "Jump_Hop_Down";
	if (nState == 1)
		return "Jump_Leap";
	if (nState == 5)
		return "Jump_Maintain";
	if (nState == 6)
		return "Jump_Descent";
	if (nState == 7)
		return "Jump_Falling";
	if (nState == 8)
		return "Jump_Landed";
	if (nState == 9)
		return "Jump_LandedInWater";
	if (nState == 10)
		return "Jump_LandedHard";
	return nState == 11 ? "Jump_LandedExtremelyHard" : "Invalid jump state";
}
}
using namespace block_101274a0;

#define MV ((CPMView *)m_pMove)
#define PL ((CMovePlayerView *)m_pPlayer)
#define PF(off) (*(float *)((char *)m_pPlayer + (off)))
#define UNIT ((CGameMovementUnit *)this)

void CGameMovement::vfunc5()
{
	CVProfile *pProf = g_109f3648;
	if (pProf->m_enabled != 0 || !pProf->m_bAtRoot) {
		if (pProf->m_pCurNode->m_pszName != "CGameMovement::PlayerMove")
			pProf->m_pCurNode = pProf->m_pCurNode->GetSubNode("CGameMovement::PlayerMove", 0, "Unaccounted");
		pProf->m_pCurNode->EnterScope();
		pProf->m_bAtRoot = false;
	}

	sub_1011f140();

	PL->m_vec80 = g_1070d1b0;

	g_1071a278->vfunc1();

	slot24();

	sub_10139610((const float *)&PL->m_vecViewAngles0c, (float *)&m_vecForward, (float *)&m_vecRight, (float *)&m_vecUp);

	if (UNIT->sub_1011e290(1)) {
		if (MV->vfunc94() != 9 && MV->vfunc94() != 0 && MV->vfunc94() != 2 && MV->vfunc158()) {
			if (sub_10124d80()) {
				g_109f3648->ExitScope();
				return;
			}
		}
	}

	slot22();

	m_field0c = ((CMoveFlagsView *)m_pMove)->m_n03E0;
	if (!MV->vfunc209())
		*(float *)((char *)m_pMove + 0x1ee8) = -PL->m_vecVelocity.z;

	m_field10 = 0;
	sub_1011e940();
	if (UNIT->sub_1011e290(0))
		sub_1011e560();
	sub_10126fd0();

	if (*(int *)((char *)m_pMove + 0x2068) == 0 && !(((CBaseEntity *)m_pMove)->sub_100b3700() & 8) && UNIT->sub_1011e290(2) && !vfunc20() && MV->vfunc94() == 10) {
		MV->vfunc93(3, 0);
		*(int *)((char *)m_pMove + 0x360) = 0;
		((CBasePlayer *)m_pMove)->sub_10183330();
	}

	switch (MV->vfunc94()) {
	case 9:
		sub_10122190();
		break;
	case 5:
	case 6:
		sub_10127dd0();
		break;
	case 10:
		vfunc18();
		break;
	case 3:
		vfunc12();
		break;
	case 2:
		vfunc12();
		break;
	case 0:
		break;
	default:
		g_109f3650(1, "Bogus pmove player movetype %i on (%i) 0=cl 1=sv\n", MV->vfunc94(), 1);
		break;
	}

	if (!g_1070b0f4->vfunc1() && g_1070b0f4->m_n2c != 0) {
		CBaseEntity *pGround = (CBaseEntity *)MV->vfunc209();
		const char *pszGround = pGround ? pGround->sub_100ab4f0() : "none";
		sub_10119750("Player Velocity: Horizontal:%-3.3f  Vertical:%-3.3f", (double)PL->m_vecVelocity.Length2D(), (double)PL->m_vecVelocity.z);
		sub_10119750("Player Velocity: X(%-3.3f), Y(%-3.3f) Z(%-3.3f)", (double)PL->m_vecVelocity.x, (double)PL->m_vecVelocity.y, (double)PL->m_vecVelocity.z);
		sub_10119750("Jump skill: Horiz:%-3.3f  Vert:%-3.3f", (double)PF(0xa4), (double)PF(0xa8));
		sub_10119750("Jump skill: Hold:%-3.3f Undo:%-3.3f", (double)PF(0xb4), (double)PF(0xb0));
		sub_10119750("m_VAirMovement: (%d), %s", *(int *)((char *)m_pPlayer + 0xc0), sub_101273e0(*(int *)((char *)m_pPlayer + 0xc0)));
		sub_10119750("Ground Ent: %s, m_fFallVelocity: %-3.3f", pszGround, (double)*(float *)((char *)m_pMove + 0x1ee8));
		sub_10119750("Player Origin: X(%-3.1f), Y(%-3.1f) Z(%-3.1f)", (double)PL->m_vecOrigin.x, (double)PL->m_vecOrigin.y, (double)PL->m_vecOrigin.z);
		if (m_pSurface9c)
			sub_10119750("Surface Friction:%.2f Max Speed Factor: %.2f", (double)m_fieldA0, (double)*(float *)((char *)m_pSurface9c + 0x68));
		else
			sub_10119750("Surface Friction:%.2f", (double)m_fieldA0);
	}

	CVProfile *pProf2 = g_109f3648;
	if (!pProf2->m_bAtRoot || pProf2->m_enabled != 0) {
		CVProfNode *pNode = pProf2->m_pCurNode;
		if (--pNode->m_nRecursions == 0 && pNode->m_nCurFrameCalls != 0) {
			((CCycleSample *)&pNode->m_CurFrameTime)->End();
			((CCycleSample *)&pNode->m_TotalTime)->Add(*(CCycleSample *)&pNode->m_CurFrameTime);
			CVProfile *pPop = g_109f3648;
			--pPop->m_nGroupStackDepth;
			int nNew = pPop->m_GroupIDStack[pPop->m_nGroupStackDepth];
			int nOld = pPop->m_GroupIDStack[pPop->m_nGroupStackDepth + 1];
			if (nNew != nOld && pPop->m_bVTuneGroupsEnabled && nOld == pPop->m_nVTuneGroupID)
				vtune(false);
		}
		if (pNode->m_nRecursions == 0)
			pProf2->m_pCurNode = pProf2->m_pCurNode->m_pParent;
		pProf2->m_bAtRoot = (pProf2->m_pCurNode == pProf2->m_pRoot);
	}
}
// END FUNCTION
