// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 78 blocks
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

// FUNCTION: 0x1011e200 size=0x7
namespace lifted {
extern char g_104628f8;
}
struct CUnknown1011e200 { void sub_1011e200(); };
void CUnknown1011e200::sub_1011e200()
{
    *(int *)this = (int)&lifted::g_104628f8;
}
// END FUNCTION

// FUNCTION: 0x1011e220 size=0x20
#include "IGameMovement.h"

struct DummyMovement : IGameMovement
{
	void vfunc1(void *, void *) {}
	float *vfunc2(char, int) { return 0; }
	float *slot3(char, char) { return 0; }
	float *slot4(int, char) { return 0; }
};

DummyMovement g_dummyMovement;
// TARGET: ??_GIGameMovement@@UAEPAXI@Z
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

// FUNCTION: 0x1011e290 size=0x5
char __stdcall sub_1011e290(int a0)
{
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

// FUNCTION: 0x1011e310 size=0x26
#include "CGameMovement.h"

// TARGET: CGameMovement::sub_1011e310
float *CGameMovement::sub_1011e310()
{
	unsigned int nFlags = *(unsigned int *)((char *)m_pMove + 0x20f0);
	unsigned char bStance = (unsigned char)(nFlags >> 5);
	if (bStance & 1)
		return (float *)((char *)this + 0x44);
	return *(char *)((char *)m_pMove + 0x1edd) ? (float *)((char *)this + 0x2c) : (float *)((char *)this + 0x14);
}
// END FUNCTION

// FUNCTION: 0x1011e350 size=0x26
#include "CGameMovement.h"

// TARGET: CGameMovement::sub_1011e350
float *CGameMovement::sub_1011e350()
{
	unsigned int nFlags = *(unsigned int *)((char *)m_pMove + 0x20f0);
	unsigned char bStance = (unsigned char)(nFlags >> 5);
	if (bStance & 1)
		return (float *)&m_vecObsHullMax;
	return *(char *)((char *)m_pMove + 0x1edd) ? (float *)&m_vecDuckHullMax : (float *)&m_vecHullMax;
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

// FUNCTION: 0x1011e560 size=0x2c5
#include <math.h>
#include "CTraceFilterNoCharacterCollide.h"
#include "CGameMovement.h"
#include "CGameMovementViews.h"
#include "CVProfile.h"
#include "CGlobalEntityList.h"
#include "Ray_t.h"
#include "IPhysicsSurfaceProps.h"

extern CGlobalEntityList *g_10566458;
void sub_1011e8f0(Ray_t *pRay, unsigned int mask, void *pPassEnt, int group, CGameTrace *pTrace);

struct CSurfaceView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void vfunc4(int index, int a, int b, float *pOut, int c);
	virtual surfacedata_t_view *vfunc5(int index);
};

struct CSurfaceHolder
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
	virtual CSurfaceView *vfunc9();
};
extern CSurfaceHolder *g_1071a278;

#define PLAYER ((CMovePlayerView *)m_pPlayer)

namespace block_1011e560 {
struct RayHull : Ray_t
{
	__forceinline void InitHull(const Vector &start, const Vector &end, const Vector &mins, const Vector &maxs, char b32)
	{
		Vector &delta = *(Vector *)m_Delta;
		Vector &extents = *(Vector *)m_StartOffset;
		Vector &offset = *(Vector *)m_Extents;
		Vector &rstart = *(Vector *)m_Start;
		VectorSubtract(end, start, delta);
		m_IsSwept = (delta.LengthSqr() != 0.0f);
		VectorSubtract(maxs, mins, extents);
		extents *= 0.5f;
		m_IsRay = (extents.LengthSqr() < 1e-6);
		offset.x = mins.x + maxs[0];
		offset.y = mins.y + maxs.y;
		offset.z = mins.z + maxs.z;
		offset *= 0.5f;
		VectorAdd(start, offset, rstart);
		offset *= -1.0f;
		m_b32 = b32;
		m_b33 = 0;
		m_n34 = 0;
	}
};

struct CPlayerHandleRef
{
	unsigned int m_Index;
	void *Get() { return (void *)g_10566458->sub_100290c0(&m_Index); }
};

struct CGameMovementUnit : CGameMovement
{
	float *sub_1011e350();
	float *sub_1011e310();
	__forceinline void TracePlayerBBox(const Vector &start, const Vector &end, unsigned int fMask, int collisionGroup, CGameTrace &pm)
	{
		g_109f3648->EnterScope("CGameMovement::TracePlayerBBox", 0, "Unaccounted", false);
		RayHull ray;
		bool bSwept = (((CMoveDataView *)m_pMove)->vfunc211() >> 6) & 1;
		ray.InitHull(start, end, *(Vector *)sub_1011e310(), *(Vector *)sub_1011e350(), 0);
		if (bSwept && !ray.m_IsRay)
		{
			ray.m_n34 = sqrt(ray.m_StartOffset[1] * ray.m_StartOffset[1] + ray.m_StartOffset[0] * ray.m_StartOffset[0]);
			if (ray.m_n34 > 1e-6)
				ray.m_b33 = 1;
		}
		sub_1011e8f0(&ray, fMask, ((CPlayerHandleRef *)&PLAYER->m_hRef)->Get(), collisionGroup, &pm);
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
using namespace block_1011e560;

// TARGET: CGameMovement::sub_1011e560
void CGameMovement::sub_1011e560()
{
	Vector start, end;
	VectorCopy(PLAYER->m_vecOrigin, start);
	VectorCopy(PLAYER->m_vecOrigin, end);
	end[2] -= 64;

	CGameTrace trace;
	((CGameMovementUnit *)this)->TracePlayerBBox(start, end, 0x1400b, 6, trace);

	CSurfaceView *physprops = g_1071a278->vfunc9();
	m_field98 = trace.m_surfaceProps;
	m_pSurface9c = physprops->vfunc5(m_field98);
	physprops->vfunc4(m_field98, 0, 0, &m_fieldA0, 0);
	m_fieldA0 *= 1.25f;
	if (m_fieldA0 > 1.0f)
		m_fieldA0 = 1.0f;
	m_bA4 = ((surfacedata_t_view *)m_pSurface9c)->m_nMaterial70;
}
// END FUNCTION

// FUNCTION: 0x1011e8f0 size=0x39
#include "CGameTrace.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "Ray_t.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"

extern CUnknown1070b254 *g_1070b254;

// TARGET: sub_1011e8f0
void sub_1011e8f0(Ray_t *pRay, unsigned int fMask, void *pPassEnt, int nGroup, CGameTrace *pTrace)
{
    CTraceFilterSimple filter(pPassEnt, nGroup);
    g_1070b254->vfunc4(pRay, fMask, (CTraceFilterNoCharacterCollide *)&filter, pTrace);
}
// END FUNCTION

// FUNCTION: 0x1011e940 size=0x473
#include "CGameMovement.h"
#include "CGameMovementViews.h"
#include "CBaseEntity.h"

struct CStepVar1011e940 {
	virtual void v0();
	virtual char IsSet();
	char m_pad[0x24];
	float m_flValue;	// 0x28
};
struct CSurfaceProps1011e940 {
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual int GetIndex(const char *name);
	virtual void v4();
	virtual void *GetData(int index);
	virtual void v6();
	virtual void v7();
	virtual void v8();
	virtual CSurfaceProps1011e940 *GetProps();
};
struct CMoveStepView1011e940 {
	char m_pad0000[0x3e0];
	int m_n03E0;
	char m_pad03e4[0x2328 - 0x3e4];
	float m_fl2328;
};
extern CStepVar1011e940 *g_109ef094;
extern CStepVar1011e940 *g_1070b2d4;
extern CSurfaceProps1011e940 *g_1071a278;
extern int g_1070b898;
extern float g_104454c4;

#define PLAYER ((CMovePlayerView *)m_pPlayer)
#define STEP ((CMoveStepView1011e940 *)m_pMove)
#define DATA ((CMoveDataView *)m_pMove)
#define ENT ((CBaseEntity *)m_pMove)

void CGameMovement::sub_1011e940()
{
	if (STEP->m_fl2328 > g_104454c4)
		return;
	if (ENT->sub_100b3700() & 0x60)
		return;
	if (DATA->g94() == 9)
		return;
	if (g_109ef094->IsSet())
		return;
	if (g_109ef094->m_flValue == g_104454c4)
		return;

	CSurfaceProps1011e940 *pProps = g_1071a278->GetProps();
	void *pSurface = m_pSurface9c;
	float flSpeed = PLAYER->m_vecVelocity.Length();
	int bLadder = DATA->g94() == 10;
	float flMin, flMax, flBonus;
	float flVolume;

	if (!(ENT->sub_100b3700() & 2) && !bLadder && !STEP->m_n03E0) {
		flMin = 120.0f;
		flMax = 220.0f;
		flBonus = bLadder;
	} else {
		flMin = 60.0f;
		flMax = 80.0f;
		flBonus = 100.0f;
	}
	if (!bLadder) {
		if (!DATA->vfunc209() && !STEP->m_n03E0)
			return;
	}
	if (!(PLAYER->m_vecVelocity.Length2D() > 0.0))
		return;
	if (!(flSpeed >= flMin)) {
		if (STEP->m_fl2328 != g_104454c4)
			return;
	}
	int bShort = flSpeed < flMax;
	if (bLadder) {
		pSurface = pProps->GetData(pProps->GetIndex("ladder"));
		flVolume = 0.35f;
		STEP->m_fl2328 = 350;
	} else if (STEP->m_n03E0 > 1) {
		if (g_1070b898 == 0) {
			g_1070b898++;
			return;
		}
		if (g_1070b898++ == 3)
			g_1070b898 = 0;
		pSurface = pProps->GetData(pProps->GetIndex("wade"));
		flVolume = 1.0f;
		STEP->m_fl2328 = 600;
	} else if (STEP->m_n03E0 == 1) {
		pSurface = pProps->GetData(pProps->GetIndex("water"));
		flVolume = 1.0f;
		STEP->m_fl2328 = bShort ? 400 : 300;
	} else {
		STEP->m_fl2328 = bShort ? 400 : 300;
		if (PLAYER->m_vecVelocity.Length2D() <= 100.0f)
			STEP->m_fl2328 = 800;
		switch ((char)m_bA4) {
		default:
			flVolume = bShort ? 0.2 : 0.5;
			break;
		case 'M':
			flVolume = bShort ? 0.2 : 0.5;
			break;
		case 'D':
			flVolume = bShort ? 0.25 : 0.55;
			break;
		case 'V':
			flVolume = bShort ? 0.4 : 0.7;
			break;
		case 'G':
			flVolume = bShort ? 0.2 : 0.5;
			break;
		case 'T':
			flVolume = bShort ? 0.2 : 0.5;
			break;
		case 'S':
			flVolume = bShort ? 0.2 : 0.5;
			break;
		}
	}
	STEP->m_fl2328 += flBonus;
	if (ENT->sub_100b3700() & 2)
		flVolume = flVolume * 0.35;
	float flScale = g_1070b2d4->IsSet() ? g_104454c4 : g_1070b2d4->m_flValue;
	flVolume = flScale * flVolume;
	if (flVolume > 1.0)
		flVolume = 1.0f;
	if (!bLadder && !STEP->m_n03E0 && DATA->vfunc209()) {
		if (!(PLAYER->m_fFlags24 & 0x79a) && PLAYER->m_vecVelocity.Length2D() <= flMin)
			return;
		slot16(pSurface, flVolume, 0);
	} else {
		slot16(pSurface, flVolume, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x1011eee0 size=0xf
// TARGET: sub_1011eee0
struct CUnknown1011eee0Inner
{
    char pad[0x210];
    int m_i210;
};

struct CUnknown1011eee0
{
    char pad[8];
    CUnknown1011eee0Inner *m_p8;

    char sub_1011eee0();
};

char CUnknown1011eee0::sub_1011eee0()
{
    return m_p8->m_i210 <= 0;
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

// FUNCTION: 0x1011ef20 size=0x1a1
#include "CGameMovement.h"
#include "CGameMovementViews.h"
#include <math.h>

void sub_10139500( Vector &start, float flScale, const Vector &dir, Vector &dest );

#define MV ((CMovePlayerView *)m_pPlayer)

float CGameMovement::sub_1011ef20()
{
	if ( m_pPlayer )
	{
		if ( MV->m_flRadius != 0.0f )
		{
			Vector vDelta;
			VectorSubtract( MV->m_vecOrigin, MV->m_vecCenter, vDelta );
			float flDistSqr = vDelta.LengthSqr();

			if ( !( flDistSqr <= ( MV->m_flRadius - MV->m_flWidth ) * ( MV->m_flRadius - MV->m_flWidth ) )
			  && !( flDistSqr >= MV->m_flRadius * MV->m_flRadius ) )
			{
				float flMove = MV->m_flForwardMove;
				Vector vecWish;
				vecWish.x = flMove * m_vecForward.x;
				vecWish.y = flMove * m_vecForward.y;
				vecWish.z = flMove * m_vecForward.z;
				sub_10139500( vecWish, MV->m_flSideMove, m_vecRight, vecWish );
				sub_10139500( vecWish, MV->m_flUpMove, m_vecUp, vecWish );

				Vector vecCenter;
				vecCenter.x = MV->m_vecOrigin.x - MV->m_vecCenter.x;
				vecCenter.y = MV->m_vecOrigin.y - MV->m_vecCenter.y;
				vecCenter.z = MV->m_vecOrigin.z - MV->m_vecCenter.z;
				VectorNormalize( vecCenter );
				VectorNormalize( vecWish );

				if ( !( DotProduct( vecWish, vecCenter ) < 0.0f ) )
				{
					float flDist = (float)sqrt( flDistSqr );
					return ( ( flDist - ( MV->m_flRadius - MV->m_flWidth ) ) / MV->m_flWidth )
					     * ( MV->m_flSpeedFactor - 1.0f ) + 1.0f;
				}
			}
		}
	}
	return 1.0f;
}
// END FUNCTION

// FUNCTION: 0x1011f140 size=0x30b
#include <math.h>
#include "CGameMovement.h"
#include "CGameMovementViews.h"
#include "CUnknown1011eee0.h"
#include "CBaseEntity.h"

struct CMoveTuneView
{
	virtual void vfunc0();
	virtual bool vfunc1();
	char m_pad04[0x28 - 4];
	float m_fl28;
};
extern CMoveTuneView *g_109eee54;
extern CMoveTuneView *g_109ef31c;
extern char g_10572420;

#define PLAYER ((CMovePlayerView *)m_pPlayer)
#define MOVER ((CMoveDataView *)m_pMove)
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

void CGameMovement::sub_1011f140()
{
	Vector vecSaved;
	Vector vecOffset;
	if (MOVER->g94() != 2 && MOVER->g94() != 9) {
		float flSpeed = PLAYER->m_flForwardMove * PLAYER->m_flForwardMove + PLAYER->m_flSideMove * PLAYER->m_flSideMove + PLAYER->m_flUpMove * PLAYER->m_flUpMove;
		float flClient = PLAYER->m_flClientMaxSpeed;
		if (flClient != 0.0)
			PLAYER->m_flMaxSpeed = MIN(flClient, PLAYER->m_flMaxSpeed);
		float flFactor = 1.0f;
		if (m_pSurface9c)
			flFactor = *(float *)((char *)m_pSurface9c + 0x68);
		float flConstraint = sub_1011ef20();
		if (flConstraint < flFactor)
			flFactor = flConstraint;
		PLAYER->m_flMaxSpeed = flFactor * PLAYER->m_flMaxSpeed;
		float flScale;
		if (g_10572420) {
			if (flSpeed == 0.0 || !(flSpeed > PLAYER->m_flMaxSpeed * PLAYER->m_flMaxSpeed))
				goto done;
			flScale = PLAYER->m_flMaxSpeed / sqrt(flSpeed);
		} else {
			flSpeed = (float)sqrt(flSpeed);
			if (flSpeed == 0.0 || !(flSpeed > PLAYER->m_flMaxSpeed))
				goto done;
			flScale = PLAYER->m_flMaxSpeed / flSpeed;
		}
		PLAYER->m_flForwardMove = flScale * PLAYER->m_flForwardMove;
		PLAYER->m_flSideMove = flScale * PLAYER->m_flSideMove;
		PLAYER->m_flUpMove = flScale * PLAYER->m_flUpMove;
	}
done:
	if (!m_bDc && (PLAYER->m_fFlags24 & 0x20000) && !(PLAYER->m_fFlags24 & 4)) {
		float flPunch = vfunc23();
		PLAYER->m_flForwardMove = flPunch * PLAYER->m_flForwardMove;
		PLAYER->m_flSideMove = flPunch * PLAYER->m_flSideMove;
		PLAYER->m_flUpMove = flPunch * PLAYER->m_flUpMove;
		m_bDc = 1;
	}
	if ((((CBaseEntity *)m_pMove)->sub_100b3700() & 0x20) || (((CBaseEntity *)m_pMove)->sub_100b3700() & 8) || ((CUnknown1011eee0 *)this)->sub_1011eee0()) {
		PLAYER->m_flForwardMove = 0.0f;
		PLAYER->m_flSideMove = 0.0f;
		PLAYER->m_flUpMove = 0.0f;
	}
	slot7();
	if (!((CUnknown1011eee0 *)this)->sub_1011eee0()) {
		vecSaved = PLAYER->m_vec58;
		if (MOVER->g94() == 2 || MOVER->g94() == 9) {
			PLAYER->m_vec58.z = 0.0f;
		} else {
			float flA;
			if (g_109eee54->vfunc1())
				flA = 0.0f;
			else
				flA = g_109eee54->m_fl28;
			float flB;
			if (g_109ef31c->vfunc1())
				flB = 0.0f;
			else
				flB = g_109ef31c->m_fl28;
			CMovePlayerView *pPlayer = PLAYER;
			pPlayer->m_vec58.z = vfunc6(*(QAngle *)&vecSaved, pPlayer->m_vecVelocity, flB, flA);
		}
		PLAYER->m_vec58.x = vecSaved.x;
		PLAYER->m_vec58.y = vecSaved.y;
	} else {
		PLAYER->m_vec58 = PLAYER->m_vec64;
	}
	if (((CUnknown1011eee0 *)this)->sub_1011eee0()) {
		vecOffset.x = 0.0f;
		vecOffset.y = 0.0f;
		vecOffset.z = 14.0f;
		((CMoveFlagsView *)m_pMove)->sub_1009f380(&vecOffset);
	}
	if (PLAYER->m_vec58.y > 180.0f)
		PLAYER->m_vec58.y = PLAYER->m_vec58.y - 360.0f;
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

// FUNCTION: 0x1011f6e0 size=0x2e
// TARGET: sub_1011f6e0

struct CUnknown1011f6e0Peer
{
    char m_pad0000[0x24];
    int m_n24;
    int m_n28;
    char m_pad002c[0xc8 - 0x2c];
    int m_nC8;
    int m_nCC;
};

struct CUnknown1011f6e0Src
{
    char m_pad0000[0x3e0];
    int m_n3e0;
    int m_n3e4;
};

struct CUnknown1011f6e0
{
    int m_pad0000;
    CUnknown1011f6e0Peer *m_pPeer;
    CUnknown1011f6e0Src *m_pSrc;
    void sub_1011f6e0();
};

void CUnknown1011f6e0::sub_1011f6e0()
{
    m_pPeer->m_n28 = m_pPeer->m_n24;
    m_pPeer->m_nC8 = m_pSrc->m_n3e0;
    m_pPeer->m_nCC = m_pSrc->m_n3e4;
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

// FUNCTION: 0x1011fa80 size=0x9a
#include "CGameMovement.h"

struct MoveData {
	char m_pad[0x3ec];
	float m_flScale;
};

struct PlayerData {
	char m_pad[0x48];
	float m_flValue48;
	char m_pad4c[8];
	float m_flValue54;
};

struct GravityObj {
	virtual void v0();
	virtual bool IsZero();
	char m_pad[0x24];
	float m_flValue;
};


extern GravityObj *g_109ef2d4;

void CGameMovement::sub_1011fa80()
{
	float flScale;
	if (((MoveData *)m_pMove)->m_flScale != 0.0f)
		flScale = ((MoveData *)m_pMove)->m_flScale;
	else
		flScale = 1.0f;
	float *pVal = &((PlayerData *)m_pPlayer)->m_flValue48;
	float flGrav = g_109ef2d4->IsZero() ? 0.0f : g_109ef2d4->m_flValue;
	float flStep = flGrav * flScale;
	*pVal = *pVal - flStep * gpGlobals->frametime * 0.5;
	((PlayerData *)m_pPlayer)->m_flValue48 = ((PlayerData *)m_pPlayer)->m_flValue54 * gpGlobals->frametime + ((PlayerData *)m_pPlayer)->m_flValue48;
	((PlayerData *)m_pPlayer)->m_flValue54 = 0.0f;
	sub_10004ebc();
}
// END FUNCTION

// FUNCTION: 0x1011fb50 size=0x397
#include "CBaseEntity.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "CGameMovement.h"
#include "CGameMovementViews.h"
#include "CGlobalEntityList.h"
#include "CEHandleGet.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738964.h"
#include "VectorHelpers.h"
#include "Ray_t.h"

extern CGlobalEntityList *g_10566458;
extern CUnknown1070b254 *g_1070b254;
extern Vector g_1070d1b0;
void sub_10146570(Vector *pStart, Vector *pEnd, int r, int g, int b, int c, float d);

struct CGMSlot3View { virtual void s0(); virtual void s1(); virtual void s2(); virtual float *slot3(char a, char b); };

#define PLAYER ((CMovePlayerView *)m_pPlayer)
#define MOVE ((CMoveFlagsView *)m_pMove)

inline Vector AddV(const Vector &a, const Vector &b) { Vector r; r.x = a.x + b.x; r.y = a[1] + b.y; r.z = a[2] + b.z; return r; }
namespace block_1011fb50 {
struct CGameMovementUnit : CGameMovement
{
	const Vector &sub_1011e350();
	const Vector &sub_1011e310();
};

const Vector &CGameMovementUnit::sub_1011e350()
{
	CMoveFlagsView *pMove = (CMoveFlagsView *)m_pMove;
	if ((unsigned char)(pMove->m_fFlags >> 5) & 1)
		return m_vecObsHullMax;
	return pMove->m_bDucked ? m_vecDuckHullMax : m_vecHullMax;
}

const Vector &CGameMovementUnit::sub_1011e310()
{
	CMoveFlagsView *pMove = (CMoveFlagsView *)m_pMove;
	if ((unsigned char)(pMove->m_fFlags >> 5) & 1)
		return m_vecObsHullMin;
	return pMove->m_bDucked ? m_vecDuckHullMin : m_vecHullMin;
}
}
using namespace block_1011fb50;

// TARGET: CGameMovement::sub_1011fb50
void CGameMovement::sub_1011fb50()
{
	Vector fwd;
	Vector flatvel;
	Vector flatfwd;
	Vector vecStart;
	Vector vecEnd;
	Ray_t ray;
	CGameTrace tr;
	float curspeed;
	CBaseEntity *pEnt;

	sub_10139550(PLAYER->m_vecViewAngles0c, &fwd);
	if (MOVE->m_flWaterJump != g_104454c4)
		return;
	if (PLAYER->m_vecVelocity.z < -180.0f)
		return;
	flatvel.x = PLAYER->m_vecVelocity.x;
	flatvel.y = PLAYER->m_vecVelocity.y;
	flatvel.z = 0.0f;
	curspeed = VectorNormalize(flatvel);
	flatfwd.x = fwd.x;
	flatfwd.y = fwd.y;
	flatfwd.z = 0.0f;
	VectorNormalize(flatfwd);
	if (curspeed != 0.0 && flatfwd.x * flatvel.x + (flatfwd.y * flatvel.y + flatfwd.z * flatvel.z) < 0.0)
		return;

	const Vector &mn = ((CGameMovementUnit *)this)->sub_1011e310();
	const Vector &mx = ((CGameMovementUnit *)this)->sub_1011e350();
	vecStart = PLAYER->m_vecOrigin + AddV(mn, mx) * 0.5f;
	vecStart.z += 8.0f;
	sub_10139500(&vecStart, 24.0f, &flatfwd, &vecEnd);
	pEnt = (CBaseEntity *)EHandle_Get(PLAYER->m_hRef);
	ray.sub_1004f7a0(&vecStart.x, &vecEnd.x);
	{
		CTraceFilterSimple filter(pEnt, 0);
		g_1070b254->vfunc4(&ray, 0x1400b, (CTraceFilterNoCharacterCollide *)&filter, &tr);
		if (!g_10738964->vfunc1() && g_10738964->m_n2c)
			sub_10146570((Vector *)tr.m_startpos, (Vector *)tr.m_endpos, 0xff, 0, 0, 1, -1.0f);
	}
	if (tr.m_fraction < 1.0) {
		vecStart.z = (((CGMSlot3View *)this)->slot3(((CMoveFlagsView *)m_pMove)->m_bDucked, ((CMoveFlagsView *)m_pMove)->m_b1edc)[2] - 8.0f) + vecStart.z;
		sub_10139500(&vecStart, 24.0f, &flatfwd, &vecEnd);
		sub_10139500(&g_1070d1b0, -50.0f, (Vector *)tr.m_planeNormal, (Vector *)((char *)m_pMove + 0x2318));
		pEnt = (CBaseEntity *)EHandle_Get(PLAYER->m_hRef);
		ray.sub_1004f7a0(&vecStart.x, &vecEnd.x);
		CTraceFilterSimple filter(pEnt, 0);
		g_1070b254->vfunc4(&ray, 0x1400b, (CTraceFilterNoCharacterCollide *)&filter, &tr);
		if (!g_10738964->vfunc1() && g_10738964->m_n2c)
			sub_10146570((Vector *)tr.m_startpos, (Vector *)tr.m_endpos, 0xff, 0, 0, 1, -1.0f);
		if (tr.m_fraction == 1.0) {
			PLAYER->m_vecVelocity.z = 260.0f;
			PLAYER->m_n0028 |= 2;
			((CBaseEntity *)m_pMove)->sub_100b3580(4);
			MOVE->m_flWaterJump = 2000.0f;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1011ffe0 size=0xa9
#include "CBaseEntity.h"
#include "CGameMovement.h"


struct CMoveW
{
	char m_pad0[0x3e0];
	int m_nWaterLevel;
	char m_pad3e4[0x2314 - 0x3e4];
	float m_flWaterJumpTime;
	float m_vecWaterJumpVel[2];
};
struct CPlayerW
{
	char m_pad0[0x40];
	float m_vecVelocity[2];
};

// TARGET: CGameMovement::sub_1011ffe0
void CGameMovement::sub_1011ffe0()
{
    if (((CMoveW *)m_pMove)->m_flWaterJumpTime > 10000.0f)
        ((CMoveW *)m_pMove)->m_flWaterJumpTime = 10000.0f;
    if (!((CMoveW *)m_pMove)->m_flWaterJumpTime)
        return;
    ((CMoveW *)m_pMove)->m_flWaterJumpTime -= gpGlobals->frametime * 1000.0f;
    if (((CMoveW *)m_pMove)->m_flWaterJumpTime <= 0 || !((CMoveW *)m_pMove)->m_nWaterLevel) {
        ((CMoveW *)m_pMove)->m_flWaterJumpTime = 0;
        ((CBaseEntity *)m_pMove)->sub_100b3640(4);
    }
    ((CPlayerW *)m_pPlayer)->m_vecVelocity[0] = ((CMoveW *)m_pMove)->m_vecWaterJumpVel[0];
    ((CPlayerW *)m_pPlayer)->m_vecVelocity[1] = ((CMoveW *)m_pMove)->m_vecWaterJumpVel[1];
}
// END FUNCTION

// FUNCTION: 0x101200c0 size=0x8a4
#include "CTraceFilterNoCharacterCollide.h"
#include "CGameMovement.h"
#include "CGameMovementViews.h"
#include "CVProfile.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "Ray_t.h"
#include "ConVar.h"
#include "globalvars.h"
#include <math.h>

extern Vector g_1070d1b0;	// vec3_origin
extern ConVar g_109eefb8;	// sv_friction
extern ConVar g_109ef288;	// sv_accelerate
void sub_10139610(const QAngle &angles, Vector *forward, Vector *right, Vector *up);
void sub_10139500(const Vector &start, float scale, const Vector &dir, Vector &dest);

#define PLAYER ((CMovePlayerView *)m_pPlayer)
#define MOVE ((CMoveFlagsView *)m_pMove)

struct CCycleCountX
{
	unsigned __int64 m_Int64;
	CCycleCountX() { m_Int64 = 0; }
	void Sample()
	{
		unsigned long *pSample = (unsigned long *)&m_Int64;
		__asm
		{
			mov ecx, pSample
			rdtsc
			mov [ecx], eax
			mov [ecx+4], edx
		}
	}
	void End()
	{
		CCycleCountX cnt;
		cnt.Sample();
		m_Int64 = cnt.m_Int64 - m_Int64;
	}
};

struct CGameMovementHullView
{
	virtual void s0();
	virtual void s1();
	virtual const Vector &GetPlayerMins(char bDucked, char b);
	virtual const Vector &GetPlayerMaxs(char bDucked, char b);
};

// ConVar::GetFloat with the game's shared 0.0f
inline float CvarFloat(ConVar &cv) { return cv.m_pParent->vfunc1() ? g_104454c4 : cv.m_pParent->m_fValue; }

struct CMoveViewOffsetView
{
	char m_pad0000[0x184];
	Vector m_vecViewOffset;
	const Vector &GetViewOffset() const { return m_vecViewOffset; }
};

// Troika's Ray_t::Init(start, end, mins, maxs) as this unit inlines it
struct RayX : Ray_t
{
	void InitX(const Vector &start, const Vector &end, const Vector &mins, const Vector &maxs)
	{
		m_Delta[0] = end.x - start.x;
		m_Delta[1] = end.y - start.y;
		m_Delta[2] = end.z - start.z;
		m_IsSwept = (m_Delta[0] * m_Delta[0] + m_Delta[1] * m_Delta[1] + m_Delta[2] * m_Delta[2]) != g_104454c4;
		Vector &extents = *(Vector *)m_StartOffset;
		Vector &offset = *(Vector *)m_Extents;
		VectorSubtract(maxs, mins, extents);
		VectorScale(extents, 0.5f, extents);
		m_IsRay = (extents.LengthSqr() < 1e-6);
		offset.x = maxs[0] + mins.x;
		offset.y = mins.y + maxs.y;
		offset.z = maxs.z + mins.z;
		VectorScale(offset, 0.5f, offset);
		VectorAdd(start, offset, *(Vector *)m_Start);
		VectorScale(offset, -1.0f, offset);
		m_b32 = 0;
		m_b33 = 0;
		m_n34 = 0;
	}
};

__forceinline void VProfEnter(const char *pszName, int detail, const char *pszGroup)
{
	CVProfile *p = g_109f3648;
	if (p->m_enabled != 0 || !p->m_bAtRoot) {
		if (pszName != p->m_pCurNode->m_pszName)
			p->m_pCurNode = p->m_pCurNode->GetSubNode(pszName, detail, pszGroup);
		CVProfNode *node = p->m_pCurNode;
		node->m_nCurFrameCalls++;
		if (node->m_nRecursions++ == 0) {
			((CCycleCountX *)&node->m_CurFrameTime)->Sample();
			g_109f3648->PushGroup(node->m_nBudgetGroupID);
		}
		p->m_bAtRoot = false;
	}
}

__forceinline void VProfPopGroup(CVProfile *p)
{
	p->m_nGroupStackDepth--;
	if (p->m_GroupIDStack[p->m_nGroupStackDepth] != p->m_GroupIDStack[p->m_nGroupStackDepth + 1] && p->m_bVTuneGroupsEnabled && p->m_GroupIDStack[p->m_nGroupStackDepth + 1] == p->m_nVTuneGroupID)
		vtune(false);
}

__forceinline bool VProfNodeExit(CVProfNode *node)
{
	if (--node->m_nRecursions == 0 && node->m_nCurFrameCalls != 0) {
		CCycleCountX *pTimer = (CCycleCountX *)&node->m_CurFrameTime;
		pTimer->End();
		node->m_TotalTime += pTimer->m_Int64;
		VProfPopGroup(g_109f3648);
	}
	return node->m_nRecursions == 0;
}

__forceinline void VProfExit()
{
	CVProfile *p = g_109f3648;
	if (!p->m_bAtRoot || p->m_enabled != 0) {
		if (VProfNodeExit(p->m_pCurNode))
			p->m_pCurNode = p->m_pCurNode->m_pParent;
		p->m_bAtRoot = (p->m_pCurNode == p->m_pRoot);
	}
}

namespace block_101200c0 {
struct CGameMovementUnit : CGameMovement
{
	float *sub_1011e350();
	float *sub_1011e310();
	__forceinline void TraceStep(const Vector &dest, unsigned int fMask, int collisionGroup, CGameTrace &pm)
	{
		RayX ray;
		{
			Vector start = dest;
			if (((CMoveFlagsView *)m_pMove)->m_b1F28)
				start.z = dest.z + ((CMoveFlagsView *)m_pMove)->m_fl1F24 + 1.0f;
			VProfEnter("CGameMovement::TracePlayerBBox", 0, "Unaccounted");
			bool bSwept = (((CMoveDataView *)m_pMove)->vfunc211() >> 6) & 1;
			const Vector &maxs = *(Vector *)sub_1011e350();
			const Vector &mins = *(Vector *)sub_1011e310();
			ray.InitX(start, dest, mins, maxs);
			if (bSwept && !ray.m_IsRay) {
				ray.m_n34 = sqrt(ray.m_StartOffset[1] * ray.m_StartOffset[1] + ray.m_StartOffset[0] * ray.m_StartOffset[0]);
				if (ray.m_n34 > 1e-6)
					ray.m_b33 = 1;
			}
		}
		{
			CTraceFilterSimple filter(((CBaseHandle *)&((CMovePlayerView *)m_pPlayer)->m_hRef)->Get(), collisionGroup);
			g_1070b254->vfunc4(&ray, fMask, (CTraceFilterNoCharacterCollide *)&filter, &pm);
		}
		VProfExit();
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
using namespace block_101200c0;

// TARGET: CGameMovement::sub_101200c0
void CGameMovement::sub_101200c0()
{
	int i;
	CGameMovementHullView *hull = (CGameMovementHullView *)this;
	Vector wishvel; wishvel = g_1070d1b0;
	float speed, newspeed, addspeed, accelspeed;
	float wishspeed;
	Vector wishdir;
	Vector dest;
	Vector temp;
	CGameTrace pm;
	Vector forward, right, up;

	sub_10139610(PLAYER->m_vecViewAngles0c, &forward, &right, &up);

	for (i = 0; i < 3; i++)
		wishvel[i] = forward[i] * PLAYER->m_flForwardMove + ((const Vector &)right)[i] * PLAYER->m_flSideMove;

	bool bInWater; bInWater = false;
	bool bAtSurface = false;
	Vector point;
	point[0] = (hull->GetPlayerMins(MOVE->m_bDucked, MOVE->m_b1edc)[0] + hull->GetPlayerMaxs(MOVE->m_bDucked, MOVE->m_b1edc)[0]) * 0.5 + PLAYER->m_vecOrigin[0];
	point[1] = (hull->GetPlayerMins(MOVE->m_bDucked, MOVE->m_b1edc)[1] + hull->GetPlayerMaxs(MOVE->m_bDucked, MOVE->m_b1edc)[1]) * 0.5 + PLAYER->m_vecOrigin[1];
	point[2] = PLAYER->m_vecOrigin[2] + ((CMoveViewOffsetView *)m_pMove)->GetViewOffset()[2];
	point[2] -= (point[2] - ((hull->GetPlayerMins(MOVE->m_bDucked, MOVE->m_b1edc)[2] + hull->GetPlayerMaxs(MOVE->m_bDucked, MOVE->m_b1edc)[2]) * 0.75 + PLAYER->m_vecOrigin[2])) * 0.5;

	if (g_1070b254->vfunc0(&point.x, 0) & 0x4030) {
		point[2] += 3.0f;
		bInWater = true;
		if (!(g_1070b254->vfunc0(&point.x, 0) & 0x4030))
			bAtSurface = bInWater;
	} else if (wishvel.z > g_104454c4 && !(2 & PLAYER->m_fFlags24)) {
		wishvel.z = 0;
	}

	if (PLAYER->m_fFlags24 & 2) {
		wishvel.z = wishvel.z + PLAYER->m_flClientMaxSpeed;
	} else if (PLAYER->m_flForwardMove == g_104454c4 && PLAYER->m_flSideMove == g_104454c4 && PLAYER->m_flUpMove == g_104454c4) {
		if (!bAtSurface) {
			if (bInWater)
				wishvel.z = wishvel.z + 40.0f;
			else
				wishvel.z = -40.0f;
		}
	} else {
		wishvel.z += PLAYER->m_flUpMove;
	}

	VectorCopy(wishvel, wishdir);
	wishspeed = VectorNormalize(wishdir);
	if (wishspeed > PLAYER->m_flMaxSpeed) {
		double s = PLAYER->m_flMaxSpeed / wishspeed;
		wishvel.x *= s;
		wishvel.y *= s;
		wishvel.z *= s;
		wishspeed = PLAYER->m_flMaxSpeed;
	}
	wishspeed *= 0.8;

	VectorCopy(PLAYER->m_vecVelocity, temp);
	speed = VectorNormalize(temp);
	if (speed != g_104454c4) {
		newspeed = speed - gpGlobals->frametime * m_fieldA0 * CvarFloat(g_109eefb8) * speed;
		if (newspeed < 0.1f)
			newspeed = g_104454c4;
		VectorScale(PLAYER->m_vecVelocity, newspeed / speed, PLAYER->m_vecVelocity);
	} else {
		newspeed = g_104454c4;
	}

	if (wishspeed >= 0.1f) {
		addspeed = wishspeed - newspeed;
		if (addspeed > g_104454c4) {
			VectorNormalize(wishvel);
			accelspeed = gpGlobals->frametime * m_fieldA0 * CvarFloat(g_109ef288) * wishspeed;
			if (accelspeed > addspeed)
				accelspeed = addspeed;
			for (i = 0; i < 3; i++) {
				float deltaSpeed = accelspeed * wishvel[i];
				PLAYER->m_vecVelocity[i] = PLAYER->m_vecVelocity[i] + deltaSpeed;
				PLAYER->m_vec80[i] += deltaSpeed;
			}
		}
	}

	VectorAdd(PLAYER->m_vecVelocity, MOVE->m_vec3b0, PLAYER->m_vecVelocity);

	sub_10139500(PLAYER->m_vecOrigin, gpGlobals->frametime, PLAYER->m_vecVelocity, dest);

	((CGameMovementUnit *)this)->TraceStep(dest, 0x201400b, 6, pm);

	if (!pm.m_startsolid && !pm.m_allsolid) {
		PLAYER->m_fl007C += (pm.m_endpos[2] - PLAYER->m_vecOrigin.z);
		PLAYER->m_vecOrigin = *(Vector *)pm.m_endpos;
	} else {
		slot19(0, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x10120ba0 size=0x2c1
#include "CTraceFilterNoCharacterCollide.h"
#include "CGameMovement.h"
#include "CGameMovementViews.h"
#include "CVProfile.h"
#include "CGlobalEntityList.h"
#include "CUnknown1070b254.h"
#include "CUnknown1003ff80.h"
#include "CTraceFilterSimple.h"
#include "Ray_t.h"
#include "ConVar.h"
#include "globalvars.h"

extern CGlobalEntityList *g_10566458;
void sub_1011e8f0(Ray_t *pRay, unsigned int mask, void *pPassEnt, int group, CGameTrace *pTrace);
extern char g_10572420;
extern ConVar g_109eefb8;	// sv_friction
extern ConVar g_109ef168;	// sv_stopspeed

struct CUnknown1004f860
{
	void *sub_1004f860();
};

struct CRayLocal : Ray_t
{
	CRayLocal() { ((CUnknown1004f860 *)this)->sub_1004f860(); }
};
struct CTraceLocal : CGameTrace
{
	CTraceLocal() { ((CUnknown1003ff80 *)this)->sub_1003ff80(); }
};

struct ConVarL : ConVar { float GetF() { if (m_pParent->vfunc1()) return 0.0f; return m_pParent->m_fValue; } };
#define SS (*(ConVarL *)&g_109ef168)
#define PLAYER ((CMovePlayerView *)m_pPlayer)

namespace block_10120ba0 {
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
using namespace block_10120ba0;

// TARGET: CGameMovement::sub_10120ba0
void CGameMovement::sub_10120ba0()
{
	CGameMovementUnit *pThis = (CGameMovementUnit *)this;
	if (((CMoveFlagsView *)m_pMove)->m_flWaterJump != 0.0f)
		return;
	float speed = PLAYER->m_vecVelocity.Length();
	if (speed < 0.1f)
		return;
	float drop = 0.0f;
	if (((CMoveDataView *)m_pMove)->vfunc209()) {
		CTraceLocal tr;
		float inv = 1.0f / speed;
		Vector start, end;
		start.x = end.x = inv * PLAYER->m_vecVelocity.x * 16.0f + PLAYER->m_vecOrigin.x;
		start.y = end.y = inv * PLAYER->m_vecVelocity.y * 16.0f + PLAYER->m_vecOrigin.y;
		start.z = PLAYER->m_vecOrigin.z + (pThis->sub_1011e310()[2] + 1.0f);
		end.z = start.z - 49.0f;
		if (!g_10572420) {
			g_109f3648->EnterScope("CGameMovement::TracePlayerBBox", 0, "Unaccounted", false);
			CRayLocal ray;
			ray.sub_1006dec0(start, &end.x, pThis->sub_1011e310(), pThis->sub_1011e350(), (char)((((CMoveDataView *)m_pMove)->vfunc211() >> 6) & 1), 0);
			sub_1011e8f0(&ray, 0x201400b, g_10566458->sub_100290c0(&PLAYER->m_hRef), 6, &tr);
			g_109f3648->ExitScopeCall();
		}
		float friction = (*(ConVarL *)&g_109eefb8).GetF();
		friction *= m_fieldA0;
		float control = (speed < SS.GetF()) ? SS.GetF() : speed;
		drop += friction * (control * gpGlobals->frametime);
	}
	float newspeed = speed - drop;
	if (newspeed < 0.0f)
		newspeed = 0.0f;
	newspeed = newspeed / speed;
	PLAYER->m_vecVelocity = PLAYER->m_vecVelocity * newspeed;
	PLAYER->m_vec80 -= PLAYER->m_vecVelocity * (1.0f - newspeed);
}
// END FUNCTION

// FUNCTION: 0x10120f30 size=0x91
#include "CGameMovement.h"
struct SIface { virtual void v0(); virtual char vfunc1(); };
struct SGlobalB { void *vt; char pad[0x24]; float value; };
extern SGlobalB *g_109ef2d4;

void CGameMovement::sub_10120f30()
{
    char *move = (char *)m_pMove;
    if (*(float *)(move + 0x2314) != 0.0f)
        return;
    float scale;
    if (*(float *)(move + 0x3ec) != 0.0f)
        scale = *(float *)(move + 0x3ec);
    else
        scale = 1.0f;
    float *pz = (float *)((char *)m_pPlayer + 0x48);
    float v;
    if (((SIface *)g_109ef2d4)->vfunc1())
        v = 0.0f;
    else
        v = g_109ef2d4->value;
    *pz = *pz - v * gpGlobals->frametime * scale * 0.5;
    sub_10004ebc();
}
// END FUNCTION

// FUNCTION: 0x10121000 size=0xe0
#include "CGameMovement.h"


struct S121000Player
{
    char m_pad0000[0x2068];
    int m_nDead;
    char m_pad206c[0x2314 - 0x206c];
    float m_flWaterJumpTime;
};

struct S121000Move
{
    char m_pad0000[0x40];
    Vector m_vecVelocity;
    char m_pad004c[0x80 - 0x4c];
    Vector m_outWishVel;
};

#define MV ((S121000Move *)m_pPlayer)

// TARGET: CGameMovement::sub_10121000
void CGameMovement::sub_10121000(Vector &wishdir, float wishspeed, float accel)
{
    float wishspd = wishspeed;
    S121000Player *player = (S121000Player *)m_pMove;
    if (player->m_nDead == 0 && player->m_flWaterJumpTime == 0) {
        if (wishspd > 30)
            wishspd = 30;
        float currentspeed = MV->m_vecVelocity.Dot(wishdir);
        float addspeed = wishspd - currentspeed;
        if (addspeed <= 0)
            return;
        float accelspeed = gpGlobals->frametime * m_fieldA0 * wishspeed * accel;
        if (accelspeed > addspeed)
            accelspeed = addspeed;
        for (int i = 0; i < 3; i++) {
            MV->m_vecVelocity[i] += accelspeed * wishdir[i];
            MV->m_outWishVel[i] += accelspeed * wishdir[i];
        }
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

// FUNCTION: 0x10121ca0 size=0x24
#include "globalvars.h"

// TARGET: sub_10121ca0
int __fastcall sub_10121ca0(char *self)
{
    if (*(float *)(*(char **)(self + 4) + 0xbc) > gpGlobals->curtime)
        return 1;
    return 0;
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

// FUNCTION: 0x10122170 size=0x1
void sub_10122170()
{
}
// END FUNCTION

// FUNCTION: 0x10122190 size=0x325
#include "CGameMovement.h"
#include "CGameMovementViews.h"
#include "globalvars.h"

struct CMoveConVar
{
	virtual void v0();
	virtual char vIsClamped();
	char pad[0x28 - 4];
	float m_flValue;
};
extern CMoveConVar *g_109eee9c;
extern CMoveConVar *g_109ef3ac;
extern CMoveConVar *g_109eefbc;
extern float g_104454c4;
inline float CVF(CMoveConVar *const &g) { return g->vIsClamped() ? g_104454c4 : g->m_flValue; }
#define PLAYER ((CMovePlayerView *)m_pPlayer)
void sub_10139610(const QAngle *pAngles, Vector *pForward, Vector *pRight, Vector *pUp);
void sub_10139500(const Vector *pStart, float flScale, const Vector *pDir, Vector *pDest);

// TARGET: CGameMovement::sub_10122190
void CGameMovement::sub_10122190()
{
	int i;
	Vector wishvel;
	Vector forward, right, up;
	Vector wishdir;
	float wishspeed;
	float spd;

	sub_10139610(&PLAYER->m_vecViewAngles0c, &forward, &right, &up);

	float fmove = PLAYER->m_flForwardMove;
	float smove = PLAYER->m_flSideMove;

	VectorNormalize(forward);
	VectorNormalize(right);

	i = 0;
	while (3 > i) {
		wishvel[i] = smove * right[i] + fmove * forward[i];
		++i;
	}
	wishvel[2] += PLAYER->m_flUpMove;

	VectorCopy(wishvel, wishdir);
	wishspeed = VectorNormalize(wishdir);

	if (wishspeed > CVF(g_109eee9c)) {
		VectorScale(wishvel, CVF(g_109eee9c) / wishspeed, wishvel);
		if (g_109eee9c->vIsClamped())
			wishspeed = 0;
		else
			wishspeed = g_109eee9c->m_flValue;
	}

	if (CVF(g_109ef3ac) > 0.0) {
		float accel;
		if (g_109ef3ac->vIsClamped())
			accel = 0;
		else
			accel = g_109ef3ac->m_flValue;
		vfunc10(wishdir, wishspeed, accel);

		spd = VectorLength(PLAYER->m_vecVelocity);
		if (spd < 1.0f) {
			PLAYER->m_vecVelocity.Init();
			return;
		}
		float friction = CVF(g_109eefbc) * m_fieldA0;
		float control = (spd < CVF(g_109eee9c) * 0.25) ? 0.25 * CVF(g_109eee9c) : spd;
		float drop = control * gpGlobals->frametime * friction;
		float newspeed = spd - drop;
		if (newspeed < g_104454c4)
			newspeed = g_104454c4;
		newspeed /= spd;
		VectorScale(PLAYER->m_vecVelocity, newspeed, PLAYER->m_vecVelocity);
	} else {
		VectorCopy(wishvel, PLAYER->m_vecVelocity);
	}

	sub_10139500(&PLAYER->m_vecOrigin, gpGlobals->frametime, &PLAYER->m_vecVelocity, &PLAYER->m_vecOrigin);

	if (CVF(g_109ef3ac) < 0.0)
		PLAYER->m_vecVelocity.Init();
}
// END FUNCTION

// FUNCTION: 0x10122590 size=0xd8
#include "CGameMovement.h"
struct SVarA { virtual void v0(); virtual bool v1(); char pad[0x24]; float f28; };
struct SRandom { virtual void v0(); virtual void v1(); virtual int RandomInt(int lo, int hi); };
struct SSound { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(const void *pos, int ch, const char *snd, float vol, int level, int flags, int pitch); };
extern SVarA *g_1070b2d4;
extern SRandom *g_1070b244;
extern SSound *g_1071a278;

void CGameMovement::sub_10122590()
{
    float vol = g_1070b2d4->v1() ? 0.0f : g_1070b2d4->f28;
    if (vol > 1.0)
        vol = 1.0f;
    int pitch = g_1070b244->RandomInt(95, 105);
    switch (g_1070b244->RandomInt(0, 3)) {
    case 0: g_1071a278->v5((char *)m_pPlayer + 0x70, 6, "surfaces/wade/stepleft1.wav", vol, 75, 0, pitch); break;
    case 1: g_1071a278->v5((char *)m_pPlayer + 0x70, 6, "surfaces/wade/stepleft2.wav", vol, 75, 0, pitch); break;
    case 2: g_1071a278->v5((char *)m_pPlayer + 0x70, 6, "surfaces/wade/stepright1.wav", vol, 75, 0, pitch); break;
    case 3: g_1071a278->v5((char *)m_pPlayer + 0x70, 6, "surfaces/wade/stepright2.wav", vol, 75, 0, pitch); break;
    }
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

// FUNCTION: 0x10123bf0 size=0x59
extern char g_1070b5e4[];
__declspec(dllimport) char *Q_strncpy(char *dest, const char *src, int maxLen);
char *sub_10123bf0(int axis)
{
	switch (axis) {
	case 0:
		Q_strncpy(g_1070b5e4, "X", 32);
		break;
	case 1:
		Q_strncpy(g_1070b5e4, "Y", 32);
		break;
	default:
		Q_strncpy(g_1070b5e4, "Z", 32);
		break;
	}
	return g_1070b5e4;
}
// END FUNCTION

// FUNCTION: 0x10123c70 size=0x150
#include "CGameMovement.h"

extern "C" __declspec(dllimport) void DevMsg(int level, const char *pszFormat, ...);

struct SConVarView {
	virtual void v0();
	virtual char v1();
	char pad[0x24];
	float m_fValue;	// 0x28
};
extern SConVarView *g_109eeee4;
extern unsigned int g_1046a420;
const char *sub_10123bf0(int axis);

struct SMovePlayerView
{
	char m_pad0000[0x40];
	float m_vecVelocity[3];	// 0x40
	char m_pad004c[0x70 - 0x4c];
	float m_vecOrigin[3];	// 0x70
};

#define MAXVEL (g_109eeee4->v1() ? 0.0f : g_109eeee4->m_fValue)
#define IS_NAN(x) (((*(unsigned int *)&(x)) & g_1046a420) == g_1046a420)
#define PLAYER ((SMovePlayerView *)m_pPlayer)

struct CGameMovementUnit : CGameMovement
{
	void sub_10123c70();	// "CGameMovement::CheckVelocity"
};

void CGameMovementUnit::sub_10123c70()
{
	for (int i = 0; i < 3; i++) {
		if (IS_NAN(PLAYER->m_vecVelocity[i])) {
			DevMsg(1, "PM  Got a NaN velocity %s\n", sub_10123bf0(i));
			PLAYER->m_vecVelocity[i] = 0;
		}
		if (IS_NAN(PLAYER->m_vecOrigin[i])) {
			DevMsg(1, "PM  Got a NaN origin on %s\n", sub_10123bf0(i));
			PLAYER->m_vecOrigin[i] = 0;
		}
		if (PLAYER->m_vecVelocity[i] > MAXVEL) {
			DevMsg(1, "PM  Got a velocity too high on %s\n", sub_10123bf0(i));
			PLAYER->m_vecVelocity[i] = MAXVEL;
		} else if (PLAYER->m_vecVelocity[i] < -MAXVEL) {
			DevMsg(1, "PM  Got a velocity too low on %s\n", sub_10123bf0(i));
			PLAYER->m_vecVelocity[i] = -MAXVEL;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10123e20 size=0xdc
#include "CGameMovement.h"

struct MoveData {
	char m_pad0000[0x3b0];
	Vector m_vecBase;
	char m_pad3bc[0x3ec - 0x3bc];
	float m_flScale;
	char m_pad3f0[0x2314 - 0x3f0];
	float m_flWaterJump;
};

struct PlayerData {
	char m_pad[0x48];
	float m_flValue48;
};

struct GravityObj {
	virtual void v0();
	virtual bool IsZero();
	char m_pad[0x24];
	float m_flValue;
};


extern GravityObj *g_109ef2d4;

void CGameMovement::sub_10123e20()
{
	if (((MoveData *)m_pMove)->m_flWaterJump == 0.0f) {
		float flScale;
		if (((MoveData *)m_pMove)->m_flScale != 0.0f)
			flScale = ((MoveData *)m_pMove)->m_flScale;
		else
			flScale = 1.0f;
		float *pVal = &((PlayerData *)m_pPlayer)->m_flValue48;
		float flGrav = g_109ef2d4->IsZero() ? 0.0f : g_109ef2d4->m_flValue;
		*pVal = *pVal - flGrav * gpGlobals->frametime * flScale;
		((PlayerData *)m_pPlayer)->m_flValue48 = ((MoveData *)m_pMove)->m_vecBase.z * gpGlobals->frametime + ((PlayerData *)m_pPlayer)->m_flValue48;
		Vector v = ((MoveData *)m_pMove)->m_vecBase;
		v.z = 0.0f;
		((MoveData *)m_pMove)->m_vecBase = v;
		sub_10004ebc();
	}
}
// END FUNCTION

// FUNCTION: 0x10123f40 size=0x177
#include "CTraceFilterNoCharacterCollide.h"
#include "CGameMovement.h"
#include "CGameMovementViews.h"
#include "CVProfile.h"
#include "CGlobalEntityList.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "Ray_t.h"

extern CGlobalEntityList *g_10566458;
extern CUnknown1070b254 *g_1070b254;
extern CTouchNotifier *g_1071a278;

struct VProfScope_F
{
	VProfScope_F(const char *pszName, int detail, const char *pszGroup, bool bAssert)
	{
		g_109f3648->EnterScope(pszName, detail, pszGroup, bAssert);
	}
	~VProfScope_F() { g_109f3648->ExitScope(); }
};

namespace block_10123f40 {
struct CGameMovementUnit : CGameMovement
{
	float *sub_1011e350();
	float *sub_1011e310();
	void TPBBegin(Ray_t &ray, const Vector &start, const Vector &end)
	{
		g_109f3648->EnterScope("CGameMovement::TracePlayerBBox", 0, "Unaccounted", false);
		ray.sub_1006dec0(start, &end.x, sub_1011e310(), sub_1011e350(), (char)((((CMoveDataView *)m_pMove)->vfunc211() >> 6) & 1), 0);
	}
	void TPBEnd(Ray_t &ray, unsigned int fMask, int collisionGroup, CGameTrace &pm)
	{
		CTraceFilterSimple filter(g_10566458->sub_100290c0(&((CMovePlayerView *)m_pPlayer)->m_hRef), collisionGroup);
		g_1070b254->vfunc4(&ray, fMask, (CTraceFilterNoCharacterCollide *)&filter, &pm);
		g_109f3648->ExitScope();
	}
	void TPB2(const Vector &start, const Vector &push, unsigned int fMask, int collisionGroup, CGameTrace &pm)
	{
		Ray_t ray;
		{ Vector end; VectorAdd(start, push, end); g_109f3648->EnterScope("CGameMovement::TracePlayerBBox", 0, "Unaccounted", false); ray.sub_1006dec0(start, &end.x, sub_1011e310(), sub_1011e350(), (char)((((CMoveDataView *)m_pMove)->vfunc211() >> 6) & 1), 0); }
		{ CTraceFilterSimple filter(g_10566458->sub_100290c0(&((CMovePlayerView *)m_pPlayer)->m_hRef), collisionGroup);
		g_1070b254->vfunc4(&ray, fMask, (CTraceFilterNoCharacterCollide *)&filter, &pm); }
		g_109f3648->ExitScope();
	}
	void TracePlayerBBox(const Vector &start, const Vector &end, unsigned int fMask, int collisionGroup, CGameTrace &pm)
	{
		VProfScope_F scope("CGameMovement::TracePlayerBBox", 0, "Unaccounted", false);
		Ray_t ray;
		ray.sub_1006dec0(start, &end.x, sub_1011e310(), sub_1011e350(), (char)((((CMoveDataView *)m_pMove)->vfunc211() >> 6) & 1), 0);
		CTraceFilterSimple filter(g_10566458->sub_100290c0(&((CMovePlayerView *)m_pPlayer)->m_hRef), collisionGroup);
		g_1070b254->vfunc4(&ray, fMask, (CTraceFilterNoCharacterCollide *)&filter, &pm);
	}
};

float *CGameMovementUnit::sub_1011e350()
{
	CMoveFlagsView *pMove = (CMoveFlagsView *)m_pMove;
	unsigned int nFlags = pMove->m_fFlags;
	unsigned char bStance = (unsigned char)(nFlags >> 5);
	if (bStance & 1)
		return &m_vecObsHullMax.x;
	return pMove->m_bDucked ? &m_vecDuckHullMax.x : &m_vecHullMax.x;
}

float *CGameMovementUnit::sub_1011e310()
{
	CMoveFlagsView *pMove = (CMoveFlagsView *)m_pMove;
	unsigned int nFlags = pMove->m_fFlags;
	unsigned char bStance = (unsigned char)(nFlags >> 5);
	if (bStance & 1)
		return &m_vecObsHullMin.x;
	return pMove->m_bDucked ? &m_vecDuckHullMin.x : &m_vecHullMin.x;
}
}
using namespace block_10123f40;

#define PLAYER ((CMovePlayerView *)m_pPlayer)

// TARGET: CGameMovement::sub_10123f40
CGameTrace CGameMovement::sub_10123f40(const Vector &vecOffset)
{
	CGameTrace trace;
	Ray_t ray;
	{
		Vector end;
		VectorAdd(PLAYER->m_vecOrigin, vecOffset, end);
		((CGameMovementUnit *)this)->TPBBegin(ray, PLAYER->m_vecOrigin, end);
	}
	((CGameMovementUnit *)this)->TPBEnd(ray, 0x201400b, 6, trace);
	PLAYER->m_vecOrigin = *(Vector *)trace.m_endpos;
	if (trace.m_fraction < 1.0 && !trace.m_allsolid)
		g_1071a278->vfunc2(&trace, &PLAYER->m_vecVelocity);
	return trace;
}
// END FUNCTION

// FUNCTION: 0x10124120 size=0xa5
#include "CGameMovement.h"

// TARGET: CGameMovement::sub_10124120
int CGameMovement::sub_10124120(Vector &in, Vector &normal, Vector &out, float overbounce)
{
    float backoff;
    float change;
    float angle;
    int i, blocked;

    angle = normal[2];
    blocked = 0x00;
    if (angle > 0)
        blocked |= 0x01;
    if (!angle)
        blocked |= 0x02;
    backoff = DotProduct(in, normal) * overbounce;
    for (i = 0; i < 3; i++) {
        change = normal[i] * backoff;
        out[i] = in[i] - change;
        if (out[i] > -0.1 && out[i] < 0.1)
            out[i] = 0;
    }
    return blocked;
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

// FUNCTION: 0x101242c0 size=0x5
// an empty inline constructor: the game's construct is a bare `ret`, no code names the global
struct CEmpty101242c0
{
	CEmpty101242c0() {}
};
CEmpty101242c0 g_empty_101242c0;
// END FUNCTION

// FUNCTION: 0x10124300 size=0x223
#include "vampire_all.h"
#include "Vector.h"

extern int g_10572424;
extern Vector g_1070b318[54];

void sub_10124300()
{
	if (!g_10572424)
		return;

	memset(g_1070b318, 0, sizeof(g_1070b318));
	g_10572424 = 0;

	int n = 0;
	float x, y, z;
	for (z = -0.125f; z <= 0.125; z += 0.125)
	{
		g_1070b318[n][0] = 0;
		g_1070b318[n][1] = 0;
		g_1070b318[n][2] = z;
		n++;
	}
	for (y = -0.125f; y <= 0.125; y += 0.125)
	{
		g_1070b318[n][0] = 0;
		g_1070b318[n][1] = y;
		g_1070b318[n][2] = 0;
		n++;
	}
	for (x = -0.125f; x <= 0.125; x += 0.125)
	{
		g_1070b318[n][0] = x;
		g_1070b318[n][1] = 0;
		g_1070b318[n][2] = 0;
		n++;
	}
	for (x = -0.125f; x <= 0.125; x += 0.25)
		for (y = -0.125f; y <= 0.125; y += 0.25)
			for (z = -0.125f; z <= 0.125; z += 0.25)
			{
				g_1070b318[n][0] = x;
				g_1070b318[n][1] = y;
				g_1070b318[n][2] = z;
				n++;
			}

	float a[3] = {0.0f, 1.0f, 6.0f};
	int k;
	for (k = 0; k < 3; k++)
	{
		z = a[k];
		g_1070b318[n][0] = 0;
		g_1070b318[n][1] = 0;
		g_1070b318[n][2] = z;
		n++;
	}
	for (y = -2.0f; y <= 2.0f; y += 2.0)
	{
		g_1070b318[n][0] = 0;
		g_1070b318[n][1] = y;
		g_1070b318[n][2] = 0;
		n++;
	}
	for (x = -2.0f; x <= 2.0f; x += 2.0f)
	{
		g_1070b318[n][0] = x;
		g_1070b318[n][1] = 0;
		g_1070b318[n][2] = 0;
		n++;
	}
	for (k = 0; k < 3; k++)
	{
		z = a[k];
		for (x = -2.0f; x <= 2.0f; x += 2.0f)
			for (y = -2.0f; y <= 2.0f; y += 2.0)
			{
				g_1070b318[n][0] = x;
				g_1070b318[n][1] = y;
				g_1070b318[n][2] = z;
				n++;
			}
	}
}
// END FUNCTION

// FUNCTION: 0x101245c0 size=0x4c
#include "Vector.h"
extern int g_1070b608[][2];
extern Vector g_1070b318[];

int sub_101245c0(int nIndex, int server, Vector &offset)
{
	int idx;
	idx = g_1070b608[nIndex][server]++;
	VectorCopy(g_1070b318[idx % 54], offset);
	return (idx % 54);
}
// END FUNCTION

// FUNCTION: 0x10124630 size=0x450
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CTraceFilterNoCharacterCollide.h"
#include <math.h>
#include <string.h>
#include "CGameMovement.h"
#include "CGameMovementViews.h"
#include "CTraceFilterSimpleTwoEnt.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738960.h"
#include "Ray_t.h"
#include "ScopeTrace.h"

extern CUnknown1070b254 *g_1070b254;
void sub_10146570(const float *pStart, const float *pEnd, int r, int g, int b, int noDepth, float flDuration);

inline Vector SumY1(const Vector &a, const Vector &b) { Vector r; r.x = a.x + b.x; r.y = a[1] + b.y; r.z = a.z + b.z; return r; }
inline Vector SumY2(const Vector &a, const Vector &b) { Vector r; r.x = a.x + b.x; r.y = a[1] + b[1]; r.z = a.z + b.z; return r; }
inline Vector SumY3(const Vector &a, const Vector &b) { Vector r; r.x = a[0] + b.x; r.y = a[1] + b.y; r.z = a[2] + b.z; return r; }
inline Vector SumY4(const Vector &a, const Vector &b) { Vector r; VectorAdd(a, b, r); return r; }
struct I3POD { int a, b, c; };
struct CStuckColl
{
	virtual void s0();
	virtual Vector *vfunc1();
	virtual Vector *vfunc2();
};

#define EVV(n) virtual void e##n();
#define EVV10(p) EVV(p##0) EVV(p##1) EVV(p##2) EVV(p##3) EVV(p##4) EVV(p##5) EVV(p##6) EVV(p##7) EVV(p##8) EVV(p##9)
struct CStuckEnt
{
	EVV10(0) EVV10(1) EVV10(2) EVV10(3) EVV10(4) EVV10(5) EVV10(6) EVV10(7) EVV10(8) EVV10(9)
	EVV10(10) EVV10(11) EVV10(12) EVV10(13) EVV10(14) EVV10(15) EVV10(16) EVV10(17) EVV10(18) EVV10(19)
	EVV10(20) EVV(210) EVV(211) EVV(212) EVV(213) EVV(214) EVV(215) EVV(216)
	virtual Vector *vfunc217();
	char m_pad0004[0x270 - 4];
	CStuckColl m_coll;
};

namespace block_10124630 {
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
using namespace block_10124630;

inline void TraceHullInl(const float *pStart, const float *pEnd, const float *pMins, const float *pMaxs, CTraceFilterSimpleTwoEnt *pFilter, CGameTrace *pTrace)
{
	ScopeTrace st("UTIL_TraceHull", g_106b8540);
	Ray_t ray;
	ray.sub_1006dec0(*(const Vector *)pStart, pEnd, pMins, pMaxs, 1, 0);
	g_1070b254->vfunc4(&ray, 0x201400b, (CTraceFilterNoCharacterCollide *)pFilter, pTrace);
	if (g_10738960.sub_1005f190())
		sub_10146570(pTrace->m_startpos, pTrace->m_endpos, 0xff, 0xff, 0, 1, -1.0f);
}

// TARGET: CGameMovement::sub_10124630
void CGameMovement::sub_10124630(void *pEnt)
{
	CStuckEnt *pB = (CStuckEnt *)pEnt;
	Vector posA, posB;
	Vector *mins = ((CStuckEnt *)m_pMove)->m_coll.vfunc1();
	Vector *maxs = ((CStuckEnt *)m_pMove)->m_coll.vfunc2();
	float dx = maxs->x - mins->x;
	float dy = maxs->y - mins->y;
	float rA = (float)sqrt(dx * dx + dy * dy) * 0.5f;
	const Vector &midA = SumY3(*maxs, *mins) * 0.5f;
	Vector *c = ((CStuckEnt *)m_pMove)->vfunc217();
	posA.x = midA.x + c->x;
	posA.y = midA.y + c->y;

	mins = pB->m_coll.vfunc1();
	maxs = pB->m_coll.vfunc2();
	dx = maxs->x - mins->x;
	dy = maxs->y - mins->y;
	float rB = (float)sqrt(dx * dx + dy * dy) * 0.5f;
	const Vector &midB = (*maxs + *mins) * 0.5f;
	c = pB->vfunc217();
	posB.x = midB.x + c->x;
	posB.y = midB.y + c->y;

	CTraceFilterSimpleTwoEnt filter(m_pMove, pEnt, 0);
	CGameTrace tr;
	CGameMovementUnit *pThis = (CGameMovementUnit *)this;

	dx = posA.x - posB.x;
	dy = posA.y - posB.y;
	float yaw = 0.0f;
	if (dx * dx + dy * dy > 1e-12f)
		yaw = (float)atan2(dx, dy);

	bool bFirst = true;
	for (int pass = 0; pass < 2; pass++) {
		float fRadius = rB + rA + 1.0f;
		for (; fRadius < 150.0f; fRadius += 32.0f) {
			for (float fz = 0.0f; fz < 100.0f; fz += 25.0f) {
				Vector pos;
				float fa = 0.0f;
				float ang = yaw;
				for (; fa < 6.283185307179586; ang += 0.7853981633974483, fa += 0.7853981633974483) {
					pos.x = cos(ang);
					pos.y = sin(ang);
					pos.x *= fRadius;
					pos.y *= fRadius;
					pos.x += posA.x;
					pos.y += posA.y;
					pos.z = fz + ((CMovePlayerView *)m_pPlayer)->m_vecOrigin.z;
					if (bFirst)
						TraceHullInl(&((CMovePlayerView *)m_pPlayer)->m_vecOrigin.x, &pos.x, pThis->sub_1011e310(), pThis->sub_1011e350(), &filter, &tr);
					else
						TraceHullInl(&pos.x, &pos.x, pThis->sub_1011e310(), pThis->sub_1011e350(), &filter, &tr);
					if (tr.m_fraction < 1.0f || tr.m_allsolid || tr.m_startsolid)
						continue;
					I3POD t = *(I3POD *)&pos; *(I3POD *)&((CMovePlayerView *)m_pPlayer)->m_vecOrigin = t;
					return;
				}
			}
		}
		bFirst = false;
	}
}
// END FUNCTION

// FUNCTION: 0x10124ba0 size=0x14f
#include "CTraceFilterNoCharacterCollide.h"
#include "CGameMovement.h"
#include "CGlobalEntityList.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "Ray_t.h"

extern CUnknown1070b254 *g_1070b254;
void sub_10146570(const float *pStart, const float *pEnd, int r, int g, int b, int noDepth, float flDuration);

struct CMoveFlagsView
{
	char m_pad0000[0x1edd];
	char m_bDucked;	// 0x1edd
	char m_pad1ede[0x20f0 - 0x1ede];
	unsigned int m_fFlags;	// 0x20f0: bit 5 = observer
};

struct CMoveInfoView
{
	char m_pad0000[0x368];
	int m_n368;	// 0x368
};

struct CMovePlayerOrigin
{
	char m_pad0000[0x70];
	Vector m_vecOrigin;	// 0x70
};

struct CDebugCvar	// a convar object: slot 1 answers the bool, the int value is at +0x2c
{
	virtual void vfunc0();
	virtual char vfunc1();
	char m_pad0004[0x2c - 4];
	int m_nValue;
};
extern CDebugCvar *g_10738964;
extern CDebugCvar *g_1070b754;

#define EVV(n) virtual void e##n();
#define EVV10(p) EVV(p##0) EVV(p##1) EVV(p##2) EVV(p##3) EVV(p##4) EVV(p##5) EVV(p##6) EVV(p##7) EVV(p##8) EVV(p##9)
struct CStuckEntView	// the entity the trace started inside: slot 211 answers its flags
{
	EVV10(0) EVV10(1) EVV10(2) EVV10(3) EVV10(4) EVV10(5) EVV10(6) EVV10(7) EVV10(8) EVV10(9)
	EVV10(10) EVV10(11) EVV10(12) EVV10(13) EVV10(14) EVV10(15) EVV10(16) EVV10(17) EVV10(18) EVV10(19)
	EVV10(20) EVV(210)
	virtual unsigned int vfunc211();
	char m_pad0004[0x2e0 - 4];
	int m_nEdict;	// 0x2e0
};

namespace block_10124ba0 {
struct CGameMovementUnit : CGameMovement
{
	float *sub_1011e350();
	float *sub_1011e310();
};

float *CGameMovementUnit::sub_1011e350()
{
	CMoveFlagsView *pMove = (CMoveFlagsView *)m_pMove;
	if ((unsigned char)(pMove->m_fFlags >> 5) & 1)	// the game tests the shifted byte
		return &m_vecObsHullMax.x;
	return pMove->m_bDucked ? &m_vecDuckHullMax.x : &m_vecHullMax.x;
}

float *CGameMovementUnit::sub_1011e310()
{
	CMoveFlagsView *pMove = (CMoveFlagsView *)m_pMove;
	if ((unsigned char)(pMove->m_fFlags >> 5) & 1)	// the game tests the shifted byte
		return &m_vecObsHullMin.x;
	return pMove->m_bDucked ? &m_vecDuckHullMin.x : &m_vecHullMin.x;
}
}
using namespace block_10124ba0;

// TARGET: CGameMovement::sub_10124ba0
void CGameMovement::sub_10124ba0()
{
	Ray_t ray;
	CGameTrace tr;
	CMoveInfoView *pMove = (CMoveInfoView *)m_pMove;
	CMovePlayerOrigin *pPlayer = (CMovePlayerOrigin *)m_pPlayer;
	int nGroup = pMove->m_n368;
	ray.sub_1006dec0(pPlayer->m_vecOrigin, &pPlayer->m_vecOrigin.x, ((CGameMovementUnit *)this)->sub_1011e310(), ((CGameMovementUnit *)this)->sub_1011e350(), 1, 0);
	CTraceFilterSimple filter(pMove, nGroup);
	g_1070b254->vfunc4(&ray, 0x201400b, (CTraceFilterNoCharacterCollide *)&filter, &tr);
	if (!g_10738964->vfunc1() && g_10738964->m_nValue)
		sub_10146570(tr.m_startpos, tr.m_endpos, 255, 255, 0, 1, -1.0f);
	if (tr.m_startsolid && tr.m_pEnt)
	{
		if (!g_1070b754->vfunc1() && g_1070b754->m_nValue)
		{
			int nEdict = ((CStuckEntView *)tr.m_pEnt)->m_nEdict;
			if (engine->vfunc35(nEdict))
			{
				sub_10124630(tr.m_pEnt);
				return;
			}
		}
		else
		{
			int nEdict = ((CStuckEntView *)tr.m_pEnt)->m_nEdict;
			if (engine->vfunc35(nEdict))
			{
				if (((CStuckEntView *)tr.m_pEnt)->vfunc211() & 0x40)
					sub_10124630(tr.m_pEnt);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10124d50 size=0x17
extern int g_1070b608[];

// TARGET: sub_10124d50
void sub_10124d50(int a, int b)
{
	g_1070b608[a * 2 + b] = 0;
}
// END FUNCTION

// FUNCTION: 0x10124d80 size=0x33e
#include "CBaseEntity.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "CGameMovement.h"
#include "CGameMovementViews.h"
#include "CGlobalEntityList.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738960.h"
#include "Ray_t.h"
#include "engineserver.h"
#include <math.h>

extern CGlobalEntityList *g_10566458;
extern CUnknown1070b254 *g_1070b254;
extern CTouchNotifier *g_1071a278;
extern float g_1070b798[][2];
void sub_1011e8f0(Ray_t *pRay, unsigned int mask, void *pPassEnt, int group, CGameTrace *pTrace);
void sub_10124300();
void sub_10124d50(int nIndex, int nServer);
int sub_101245c0(int nIndex, int nServer, Vector *pOut);

extern CFoo1005f190 g_1070b750;

struct CConVarInner
{
	virtual void v0();
	virtual char vfunc1();
	char m_pad[0x28];
	int m_nValue;
};
struct CConVarEntry
{
	char m_pad[4];
	CConVarInner *m_pVar;
};
struct CCvarSys
{
	virtual void v0();
	virtual void v1();
	virtual CConVarEntry *vfunc2(const char *pszName);
};
extern CCvarSys *g_1070b234;

class EntityHandle_t
{
public:
	EntityHandle_t() { m_Index = 0xffffffff; }
	EntityHandle_t(const EntityHandle_t &other) { m_Index = other.m_Index; }
	EntityHandle_t(unsigned long value) { m_Index = value; }
	bool operator==(const EntityHandle_t &other) const { return m_Index == other.m_Index; }
	unsigned long m_Index;
};
#define INVALID_ENTITY_HANDLE 0xffffffff

struct IMoveHelperView
{
	virtual const char *GetName(EntityHandle_t handle);
	virtual bool IsWorldEntity(const EntityHandle_t &handle);
};
IMoveHelperView *sub_10125190();

struct VecPOD { float x, y, z; };

#define PLAYER ((CMovePlayerView *)m_pPlayer)

namespace block_10124d80 {
#pragma auto_inline(off)
struct Ray_tView {
	Vector m_Start;
	Vector m_Delta;
	Vector m_StartOffset;
	Vector m_Extents;
	bool m_IsRay;
	bool m_IsSwept;
	char m_b32;
	char m_b33;
	float m_f34;
};
struct RayHull : Ray_t { void sub_1006dec0(const Vector &start, const float *pEnd, const float *pMins, const float *pMaxs, char a, char b); };
void RayHull::sub_1006dec0(const Vector &start, const float *pEnd, const float *pMins, const float *pMaxs, char a, char b)
{
	const Vector &end = *(const Vector *)pEnd;
	Ray_tView *r = (Ray_tView *)this;
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
struct CMovePlayerEnt
{
	int edict() { return ((CBaseEntity *)this)->m_pEdict2e0; }
	int entindex() { return engine->vfunc35(edict()); }
};

struct CGameMovementUnit : CGameMovement
{
	CMovePlayerEnt *player() { return (CMovePlayerEnt *)m_pMove; }
	bool IsServer() { return true; }
	float *sub_1011e350();
	float *sub_1011e310();
	EntityHandle_t TestPlayerPosition(const Vector &pos, int collisionGroup, CGameTrace &pm)
	{
		Ray_t ray;
		((RayHull *)&ray)->sub_1006dec0(pos, &pos.x, sub_1011e310(), sub_1011e350(), (char)((((CMoveDataView *)m_pMove)->vfunc211() >> 6) & 1), 0);
		sub_1011e8f0(&ray, 0x201400b, g_10566458->sub_100290c0(&PLAYER->m_hRef), collisionGroup, &pm);
		if ((pm.m_contents & 0x201400b) && pm.m_pEnt)
			return *(EntityHandle_t *)pm.m_pEnt->vfunc1();
		else
			return INVALID_ENTITY_HANDLE;
	}
	EntityHandle_t TestPlayerPosition2(const Vector &pos, int collisionGroup, CGameTrace &pm)
	{
		Ray_t ray;
		((RayHull *)&ray)->sub_1006dec0(pos, &pos.x, sub_1011e310(), sub_1011e350(), (char)((((CMoveDataView *)m_pMove)->vfunc211() >> 6) & 1), 0);
		CTraceFilterSimple filter(g_10566458->sub_100290c0(&PLAYER->m_hRef), collisionGroup);
		g_1070b254->vfunc4(&ray, 0x201400b, (CTraceFilterNoCharacterCollide *)&filter, &pm);
		if ((pm.m_contents & 0x201400b) && pm.m_pEnt)
			return *(EntityHandle_t *)pm.m_pEnt->vfunc1();
		else
			return INVALID_ENTITY_HANDLE;
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
using namespace block_10124d80;

inline void SetOrigin(CMovePlayerView *mv, VecPOD v) { *(VecPOD *)&mv->m_vecOrigin = v; }

// TARGET: CGameMovement::sub_10124d80
int CGameMovement::sub_10124d80()
{
	Vector base;
	Vector test;
	EntityHandle_t hitent;
	float fTime;
	int i;
	CGameTrace traceresult;
	CGameMovementUnit *pThis = (CGameMovementUnit *)this;

	sub_10124300();

	hitent = pThis->TestPlayerPosition(PLAYER->m_vecOrigin, 6, traceresult);
	if (hitent == INVALID_ENTITY_HANDLE) {
		sub_10124d50(pThis->player()->entindex(), 1);
		sub_10124ba0();
		return 0;
	}
	if (g_1070b750.sub_1005f190()) {
		sub_10124ba0();
		return 0;
	}
	CConVarEntry *pDev = g_1070b234->vfunc2("developer");
	if (pDev && !pDev->m_pVar->vfunc1() && pDev->m_pVar->m_nValue)
		g_1071a278->vfunc4(1, "%s stuck on object %i/%s", "server", hitent, sub_10125190()->GetName(hitent));

	VectorCopy(PLAYER->m_vecOrigin, base);

	if (!pThis->IsServer())
	{
		if (sub_10125190()->IsWorldEntity(hitent))
		{
			sub_10124d50(pThis->player()->entindex(), 0);
		}
	}

	int idx = pThis->IsServer() ? 0 : 1;

	fTime = engine->vfunc87();
	if (!(g_1070b798[pThis->player()->entindex()][idx] >= fTime - 0.05)) {
		g_1070b798[pThis->player()->entindex()][idx] = fTime;

		g_1071a278->vfunc2(&traceresult, &PLAYER->m_vecVelocity);

		{
			Vector offset;
			i = sub_101245c0(pThis->player()->entindex(), 1, &offset);

			VectorAdd(base, offset, test);
		}

		if (pThis->TestPlayerPosition2(test, 6, traceresult) == INVALID_ENTITY_HANDLE) {
			sub_10124d50(pThis->player()->entindex(), 1);
			VectorCopy(test, PLAYER->m_vecOrigin);
			return 0;
		}
		if (i >= 0x35)
			sub_10124ba0();
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10125190 size=0x6
namespace lifted {
extern int g_1071a278;
}
int sub_10125190()
{
    return lifted::g_1071a278;
}
// END FUNCTION

// FUNCTION: 0x101251b0 size=0x12
struct CHolderInner3e0 {
    char pad_0000[0x3e0];
    int m_n3e0;
};

struct CHolderOuter8 {
    char pad_0000[8];
    CHolderInner3e0 *m_pInner;
    bool sub_101251b0();
};

// TARGET: sub_101251b0
bool CHolderOuter8::sub_101251b0()
{
    return m_pInner->m_n3e0 > 1;
}
// END FUNCTION

// FUNCTION: 0x101251e0 size=0xb
void __fastcall sub_101251e0(char *self)
{
	*(int *)(self + 0xac) = -9999;
}
// END FUNCTION

// FUNCTION: 0x10125200 size=0xae
#include "CGameMovement.h"

struct IEngineTraceY { virtual int GetPointContents(const Vector &vecPosition, void *ppEntity); };
extern IEngineTraceY *g_1070b254;
extern char g_10572420;

static inline float DistToSqrY(const Vector &a, const Vector &b)
{
    Vector d;
    VectorSubtract(a, b, d);
    return d.x * d.x + (d.y * d.y + d.z * d.z);
}

// TARGET: CGameMovement::sub_10125200
int CGameMovement::sub_10125200(const Vector &point)
{
    if (g_10572420) {
        if (m_nCachedContents == -9999 || DistToSqrY(point, m_vecCachedPoint) > 1.0f) {
            m_nCachedContents = g_1070b254->GetPointContents(point, 0);
            m_vecCachedPoint = point;
        }
        return m_nCachedContents;
    }
    return g_1070b254->GetPointContents(point, 0);
}
// END FUNCTION

// FUNCTION: 0x101252e0 size=0x314
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CGameMovement.h"
#include "CUnknown1070b254.h"
#include "ScopeTrace.h"
#pragma inline_depth(1)

namespace block_101252e0 {
struct CGameMovementUnit : CGameMovement
{
	float *sub_1011e310();
	float *sub_1011e350();
	const Vector &GetPlayerMins() { return *(const Vector *)sub_1011e310(); }
	const Vector &GetPlayerMaxs() { return *(const Vector *)sub_1011e350(); }
};
float *CGameMovementUnit::sub_1011e350()
{
	unsigned int nFlags = *(unsigned int *)((char *)m_pMove + 0x20f0);
	unsigned char bStance = (unsigned char)(nFlags >> 5);
	if (bStance & 1)
		return (float *)&m_vecObsHullMax;
	return *(char *)((char *)m_pMove + 0x1edd) ? (float *)&m_vecDuckHullMax : (float *)&m_vecHullMax;
}
float *CGameMovementUnit::sub_1011e310()
{
	unsigned int nFlags = *(unsigned int *)((char *)m_pMove + 0x20f0);
	unsigned char bStance = (unsigned char)(nFlags >> 5);
	if (bStance & 1)
		return (float *)&m_vecObsHullMin;
	return *(char *)((char *)m_pMove + 0x1edd) ? (float *)&m_vecDuckHullMin : (float *)&m_vecHullMin;
}
}
using namespace block_101252e0;

struct CMovePlayerOrigin { char pad[0x70]; Vector m_vecOrigin; };
struct CMoveWaterView
{
	char pad[0x184];
	Vector m_vecViewOffset;
	char pad2[0x26c - 0x190];
	const char *m_name26c;
	char pad3[0x3b0 - 0x270];
	Vector m_vecVel3b0;
	char pad4[0x3e0 - 0x3bc];
	int m_nWaterLevel;
	int m_nWaterType;
	const Vector &GetViewOffset() const { return m_vecViewOffset; }
};
struct WaterScope
{
	WaterScope(CMoveWaterView *p)
	{
		((ScopeTrace *)this)->ScopeTrace::ScopeTrace("CBaseEntity::SetWaterLevel", p ? (p->m_name26c ? p->m_name26c : g_106b8540) : g_105387dc, g_106b8540);
	}
	~WaterScope() { (*g_109f3680)--; }
};
void sub_10139500(const float *pStart, float flScale, const float *pDir, float *pDest);

// TARGET: CGameMovement::sub_101252e0
bool CGameMovement::sub_101252e0()
{
	CGameMovementUnit *self = (CGameMovementUnit *)this;
	Vector point;
	point[0] = ((CMovePlayerOrigin *)m_pPlayer)->m_vecOrigin[0] + (self->GetPlayerMins()[0] + self->GetPlayerMaxs()[0]) * 0.5;
	point[1] = ((CMovePlayerOrigin *)m_pPlayer)->m_vecOrigin[1] + (self->GetPlayerMins()[1] + self->GetPlayerMaxs()[1]) * 0.5;
	point[2] = ((CMovePlayerOrigin *)m_pPlayer)->m_vecOrigin[2] + self->GetPlayerMins()[2] + 1;
	{
		CMoveWaterView *p = (CMoveWaterView *)m_pMove;
		WaterScope t(p);
		p->m_nWaterLevel = 0;
	}
	((CMoveWaterView *)m_pMove)->m_nWaterType = 0;
	int contents = sub_10125200(point);
	if (contents & 0x4030) {
		((CMoveWaterView *)m_pMove)->m_nWaterType = contents;
		{
			CMoveWaterView *p = (CMoveWaterView *)m_pMove;
			WaterScope t(p);
			p->m_nWaterLevel = 1;
		}
		point[2] = ((CMovePlayerOrigin *)m_pPlayer)->m_vecOrigin[2] + (self->GetPlayerMins()[2] + self->GetPlayerMaxs()[2]) * 0.5;
		contents = g_1070b254->vfunc0(&point.x, 0);
		if (contents & 0x4030) {
			{
				CMoveWaterView *p = (CMoveWaterView *)m_pMove;
				WaterScope t(p);
				p->m_nWaterLevel = 2;
			}
			point[2] = ((CMovePlayerOrigin *)m_pPlayer)->m_vecOrigin[2] + ((CMoveWaterView *)m_pMove)->GetViewOffset()[2];
			contents = g_1070b254->vfunc0(&point.x, 0);
			if (contents & 0x4030) {
				CMoveWaterView *p = (CMoveWaterView *)m_pMove;
				ScopeTrace t("CBaseEntity::SetWaterLevel", p ? (p->m_name26c ? p->m_name26c : g_106b8540) : g_105387dc, g_106b8540);
				p->m_nWaterLevel = 3;
			}
		}
		if (contents & 0x7c0000) {
			Vector dir;
			dir.x = dir.y = dir.z = 0.0f;
			if (contents & 0x40000)
				dir.x = 1.0f;
			if (contents & 0x80000)
				dir.y = 1.0f;
			if (contents & 0x100000)
				dir.x -= 1.0f;
			if (contents & 0x200000)
				dir.y -= 1.0f;
			if (contents & 0x400000)
				dir.z = 1.0f;
			Vector out;
			CMoveWaterView *pM = (CMoveWaterView *)m_pMove;
			sub_10139500(&pM->m_vecVel3b0.x, pM->m_nWaterLevel * 50.0, &dir.x, &out.x);
			((CMoveWaterView *)m_pMove)->m_vecVel3b0 = out;
		}
	}
	return ((CMoveWaterView *)m_pMove)->m_nWaterLevel > 1;
}
// END FUNCTION

// FUNCTION: 0x101256d0 size=0xad
#include "CGameMovement.h"

struct GroundEnt
{
	char m_pad0000[0x268];
	int m_iEFlags;
	char m_pad026c[0x3bc - 0x26c];
	Vector m_vecAbsVelocity;

	bool IsEFlagSet(int nEFlagMask) const { return (m_iEFlags & nEFlagMask) != 0; }
	void sub_100b1d10();
	const Vector &GetAbsVelocity()
	{
		if (IsEFlagSet(0x1000))
			sub_100b1d10();
		return m_vecAbsVelocity;
	}
};

#define MV(n) virtual void mv##n();
#define MV10(p) MV(p##0) MV(p##1) MV(p##2) MV(p##3) MV(p##4) MV(p##5) MV(p##6) MV(p##7) MV(p##8) MV(p##9)

struct MoveObj
{
	MV10(0) MV10(1) MV10(2) MV10(3) MV10(4) MV10(5) MV10(6) MV10(7) MV10(8) MV10(9)
	MV10(10) MV10(11) MV10(12) MV10(13) MV10(14) MV10(15) MV10(16) MV10(17) MV10(18) MV10(19)
	MV(200) MV(201) MV(202) MV(203) MV(204) MV(205) MV(206) MV(207)
	virtual void SetGroundEntity(GroundEnt *pEnt);
	virtual GroundEnt *GetGroundEntity();
};

struct MoveData
{
	char m_pad[0x40];
	Vector m_vecVelocity;
};

void CGameMovement::sub_101256d0(void *pNewGround)
{
	GroundEnt *newGround = (GroundEnt *)pNewGround;
	GroundEnt *oldGround = ((MoveObj *)m_pMove)->GetGroundEntity();
	if (!oldGround && newGround)
	{
		((MoveData *)m_pPlayer)->m_vecVelocity -= newGround->GetAbsVelocity();
	}
	else if (oldGround && !newGround)
	{
		((MoveData *)m_pPlayer)->m_vecVelocity += oldGround->GetAbsVelocity();
	}
	((MoveObj *)m_pMove)->SetGroundEntity(newGround);
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

// FUNCTION: 0x10125d20 size=0xa
#include "ConVar.h"
ConVar g_1070b708("fall_threshold", "200", 8192);
// END FUNCTION

// FUNCTION: 0x10125db0 size=0x495
#include <math.h>
#include "CGameMovement.h"
#include "CGameMovementViews.h"
#include "ConVar.h"
#include "CUnknown1011eee0.h"
#include "CUnknown10739d08.h"
#include "CBasePlayer.h"
#include "CBaseEntity.h"

extern ConVar *g_109ef004;
extern ConVar *g_1070b70c;
extern CUnknown10739d08 g_10739d08;
extern float g_104454c4;
extern double g_10449280;
extern double g_1044fab0;
extern double g_10462958;

struct CNotifierView
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3();
	virtual void vfunc4(); virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7();
	virtual void vfunc8(); virtual void vfunc9(); virtual void vfunc10(); virtual void vfunc11();
	virtual void vfunc12();
};
extern CNotifierView *g_1071a278;

int __fastcall sub_10121ca0(char *self);

#define PMV ((CMovePlayerView *)m_pPlayer)
#define PENT ((CBasePlayer *)m_pMove)
struct PF1EE8 { char pad[0x1ee8]; float f; };
#define F1EE8 ((PF1EE8 *)m_pMove)->f
#define PMV_A8 (*(float *)((char *)m_pPlayer + 0xa8))
#define PMV_B4 (*(float *)((char *)m_pPlayer + 0xb4))
struct CUnknown10739d08V : CUnknown10739d08
{
	float sub_101e7db0();
	float sub_101e7e40();
};
#define G39 ((CUnknown10739d08V &)g_10739d08)

// TARGET: CGameMovement::sub_10125db0  (duck-state per-frame worker)
void CGameMovement::sub_10125db0()
{
	float flA = g_109ef2d4->vfunc1() ? 0.0f : g_109ef2d4->m_fValue;
	float flB = g_109ef004->vfunc1() ? 0.0f : g_109ef004->m_fValue;

	double flT = g_10739d08.sub_101e7d90() * PMV_B4 * PMV_A8 * g_10462958;
	float flSpeed = g_10739d08.sub_101e7d90() * PMV_A8 + flT;
	float flThreshold = flSpeed + sqrt(2.0f * flA * flB);

	if (flThreshold < (g_1070b70c->vfunc1() ? g_104454c4 : g_1070b70c->m_fValue))
		flThreshold = g_1070b70c->vfunc1() ? 0.0f : g_1070b70c->m_fValue;

	float fDuck = 0.0f;

	if (F1EE8 == g_1044fab0)
	{
		if (PENT->vfunc209() && !(unsigned char)sub_10121ca0((char *)this))
			PMV->m_n00c0 = 0;
	}

	if (PENT->vfunc209() != 0 && !((CUnknown1011eee0 *)this)->sub_1011eee0())
	{
		if (F1EE8 >= flThreshold)
		{
			if (PENT->MoveType3e0() > 0)
			{
				PMV->m_n00c0 = 9;
				fDuck = (F1EE8 / G39.sub_101e7db0() > g_10449280)
					? g_10449280
					: ((F1EE8 / G39.sub_101e7db0() < g_104454c4)
						? g_104454c4
						: F1EE8 / G39.sub_101e7db0());
			}
			else
			{
				if (PENT->vfunc209()->sub_100b3350())
					F1EE8 = F1EE8 - 173.0f;

				if (F1EE8 > G39.sub_101e7db0())
				{
					if (F1EE8 > G39.sub_101e7e40())
					{
						PMV->m_n00c0 = 8;
						PMV->m_fl00BC = gpGlobals->curtime + sub_101282b0();
					}
					else
					{
						PMV->m_n00c0 = 8;
						PMV->m_fl00BC = gpGlobals->curtime + sub_101282b0();
					}
					g_1071a278->vfunc7();
					fDuck = 1.0f;
				}
				else
				{
					if (!(PMV->m_fFlags24 & 0x79a))
						PMV->m_n00c0 = 8;
					PMV->m_fl00BC = gpGlobals->curtime + sub_101282b0();
					if (F1EE8 > 0.5f * G39.sub_101e7db0())
						fDuck = 0.85f;
					else if (F1EE8 < 200.0f)
						fDuck = 0.65f;
					else
						fDuck = 0.5f;
				}
			}
		}
		else
		{
			if (F1EE8 > g_104454c4)
			{
				PMV->m_n00c0 = (PMV->m_n00c0 < 5) ? 0 : 8;
				PMV->m_fl00BC = 0;
				fDuck = 0.25f;
			}
		}
	}
	else
	{
		if (PENT->vfunc209() == 0 && !((CUnknown1011eee0 *)this)->sub_1011eee0())
		{
			if (PMV->m_n00c0 == 3)
			{
				if (PMV->m_vecVelocity.z < g_104454c4)
					PMV->m_n00c0 = 4;
			}
			else if ((PMV->m_n00c0 == 4 || PMV->m_n00c0 == 1) && PENT->m_b65c)
				PMV->m_n00c0 = 7;
		}
	}

	if (fDuck > g_1044fab0)
	{
		PENT->m_flStepSoundTime = 0;
		sub_1011e940();
		slot16(m_pSurface9c, fDuck, 1);
		if (F1EE8 >= flThreshold)
		{
			if (PENT->vfunc209())
			{
				if (PMV->m_n00c0 == 0xb)
					g_1071a278->vfunc12();
				PENT->m_vec1EFC.z = F1EE8 * 0.013;
				if (PENT->m_vec1EFC.x > 8.0f)
					PENT->m_vec1EFC.x = 8.0f;
			}
		}
	}
	if (PENT->vfunc209())
		F1EE8 = 0.0f;
}
// END FUNCTION

// FUNCTION: 0x10126380 size=0x21
// TARGET: sub_10126380
float __stdcall sub_10126380(float a, float b)
{
    float x = a * b;
    float y = x * x * x;
    return 3.0f * x * x - (y + y);
}
// END FUNCTION

// FUNCTION: 0x101263c0 size=0x19f
#include "CBaseEntity.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "CGameMovement.h"
#include "CGameMovementViews.h"
#include "CGlobalEntityList.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "Ray_t.h"

extern CGlobalEntityList *g_10566458;
extern CUnknown1070b254 *g_1070b254;
void sub_1011e8f0(Ray_t *pRay, unsigned int mask, void *pPassEnt, int group, CGameTrace *pTrace);

#define PLAYER ((CMovePlayerView *)m_pPlayer)

namespace block_101263c0 {
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
using namespace block_101263c0;

// TARGET: CGameMovement::sub_101263c0
void CGameMovement::sub_101263c0(char bMoveUp)
{
	CGameTrace tr;
	Ray_t ray;
	int nDir = ((int)bMoveUp != 0);
	CGameMovementUnit *pThis = (CGameMovementUnit *)this;
	Vector *pOrg = &PLAYER->m_vecOrigin;
	ray.sub_1006dec0(*pOrg, &pOrg->x, pThis->sub_1011e310(), pThis->sub_1011e350(), (char)((((CMoveDataView *)m_pMove)->vfunc211() >> 6) & 1), 0);
	sub_1011e8f0(&ray, 0x201400b, g_10566458->sub_100290c0(&PLAYER->m_hRef), 6, &tr);
	CBaseHandle hitent;
	if ((tr.m_contents & 0x201400b) && tr.m_pEnt)
		hitent = *(CBaseHandle *)tr.m_pEnt->vfunc1();
	else
		hitent = CBaseHandle();
	if (hitent == CBaseHandle())
		return;
	{
		pOrg = &PLAYER->m_vecOrigin;
		Vector vecSave; vecSave = *pOrg;
		{ int i; i = 0; while (0x24 > i) { PLAYER->m_vecOrigin.z += (float)nDir;
			pOrg = &PLAYER->m_vecOrigin;
			ray.sub_1006dec0(*pOrg, &pOrg->x, pThis->sub_1011e310(), pThis->sub_1011e350(), (char)((((CMoveDataView *)m_pMove)->vfunc211() >> 6) & 1), 0);
			CTraceFilterSimple filter(g_10566458->sub_100290c0(&PLAYER->m_hRef), 6);
			g_1070b254->vfunc4(&ray, 0x201400b, (CTraceFilterNoCharacterCollide *)&filter, &tr);
			if (!(tr.m_contents & 0x201400b) || !tr.m_pEnt || *tr.m_pEnt->vfunc1() == -1)
				return; else { i += 1; } } }
		PLAYER->m_vecOrigin = vecSave;
	}
}
// END FUNCTION

// FUNCTION: 0x101265d0 size=0x338
#define inline __forceinline
#include "Vector.h"
#undef inline
#include "CTraceFilterNoCharacterCollide.h"
#include "CGameMovement.h"
#include "CGameMovementViews.h"
#include "CVProfile.h"
#include "CGlobalEntityList.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "Ray_t.h"
#include <math.h>

extern CGlobalEntityList *g_10566458;
extern CUnknown1070b254 *g_1070b254;

#define PLAYER ((CMovePlayerView *)m_pPlayer)

namespace block_101265d0 {
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
using namespace block_101265d0;
struct Ray_tView {
	Vector m_Start;
	Vector m_Delta;
	Vector m_StartOffset;
	Vector m_Extents;
	bool m_IsRay;
	bool m_IsSwept;
	char m_b32;
	char m_b33;
	float m_f34;
	__forceinline void Init(const Vector &start, const Vector &end, const Vector &mins, const Vector &maxs, char a, char b)
	{
		VectorSubtract(end, start, m_Delta);
		m_IsSwept = (m_Delta.LengthSqr() != 0.0f);
		VectorSubtract(maxs, mins, m_Extents);
		m_Extents *= 0.5f;
		m_IsRay = (m_Extents.LengthSqr() < 1e-6);
		VectorAdd(mins, maxs, m_StartOffset);
		m_StartOffset *= 0.5f;
		VectorAdd(start, m_StartOffset, m_Start);
		m_StartOffset *= -1.0f;
		m_b32 = b;
		m_b33 = 0;
		m_f34 = 0.0f;
		if (a && !m_IsRay) {
			float l = (m_Extents.x * m_Extents.x) + (m_Extents.y * m_Extents.y); m_f34 = (float)sqrt(l);
			if (1e-6 < m_f34)
				m_b33 = 1;
		}
	}
};

struct CGMView : CGameMovement
{
	__forceinline void TracePlayerBBox(const Vector &start, const Vector &end, unsigned int fMask, int collisionGroup, CGameTrace &pm)
	{
		g_109f3648->EnterScope("CGameMovement::TracePlayerBBox", 0, "Unaccounted", false);
		Ray_tView ray;
		ray.Init(start, end, *(Vector *)((CGameMovementUnit *)this)->sub_1011e310(), *(Vector *)((CGameMovementUnit *)this)->sub_1011e350(), (char)((((CMoveDataView *)m_pMove)->vfunc211() >> 6) & 1), 0);
		CTraceFilterSimple filter(g_10566458->sub_100290c0(&((CMovePlayerView *)m_pPlayer)->m_hRef), collisionGroup);
		g_1070b254->vfunc4((Ray_t *)&ray, fMask, (CTraceFilterNoCharacterCollide *)&filter, &pm);
		g_109f3648->ExitScope();
	}
};


bool CGameMovement::sub_101265d0()
{
	int i;
	CGameTrace trace;
	Vector newOrigin;
	VectorCopy(PLAYER->m_vecOrigin, newOrigin);
	if (((CMoveDataView *)m_pMove)->vfunc209())
	{
		for (i = 0; i < 3; i++)
		{
			newOrigin[i] += (m_vecDuckHullMin[i] - m_vecHullMin[i]);
		}
	}
	else
	{
		Vector hullSizeNormal = m_vecHullMax - m_vecHullMin;
		Vector hullSizeCrouch = m_vecDuckHullMax - m_vecDuckHullMin;
		Vector viewDelta = -0.5f * (hullSizeNormal - hullSizeCrouch);
		VectorAdd(newOrigin, viewDelta, newOrigin);
	}
	char saveducked = ((CMoveFlagsView *)m_pMove)->m_bDucked;
	((CMoveFlagsView *)m_pMove)->m_bDucked = false;
	((CGMView *)this)->TracePlayerBBox(newOrigin, newOrigin, 0x201400b, 6, trace);
	((CMoveFlagsView *)m_pMove)->m_bDucked = saveducked;
	if (!trace.m_startsolid)
	{
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x101269e0 size=0x23b
#include "CBaseEntity.h"
#include "CGameMovement.h"
#include "CGameMovementViews.h"
#include "CGlobalEntityList.h"
#include "Ray_t.h"
#include "CVProfile.h"

extern CGlobalEntityList *g_10566458;
void sub_1011e8f0(Ray_t *pRay, unsigned int mask, void *pPassEnt, int group, CGameTrace *pTrace);

#define PLAYER ((CMovePlayerView *)m_pPlayer)

namespace block_101269e0 {
struct CGameMovementUnit : CGameMovement
{
	float *sub_1011e350();
	float *sub_1011e310();
	void TracePlayerBBox(const Vector &start, const Vector &end, unsigned int fMask, int collisionGroup, CGameTrace &pm)
	{
		g_109f3648->EnterScope("CGameMovement::TracePlayerBBox", 0, "Unaccounted", false);
		Ray_t ray;
		ray.sub_1006dec0(start, (float *)&end.x, sub_1011e310(), sub_1011e350(), (char)((((CMoveDataView *)m_pMove)->vfunc211() >> 6) & 1), 0);
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
using namespace block_101269e0;

struct CGameMovementSlots_101269e0
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual float *slot4(int which, bool flag);
};

// TARGET: CGameMovement::sub_101269e0
void CGameMovement::sub_101269e0()
{
	int i;
	CGameTrace trace;
	Vector newOrigin;

	newOrigin = PLAYER->m_vecOrigin;
	if (((CMoveDataView *)m_pMove)->vfunc209()) {
		for (i = 0; i < 3; i++)
			newOrigin[i] += m_vecDuckHullMin[i] - m_vecHullMin[i];
	} else {
		Vector hullSizeNormal = m_vecHullMax - m_vecHullMin;
		Vector hullSizeCrouch = m_vecDuckHullMax - m_vecDuckHullMin;
		Vector viewDelta = -0.5f * (hullSizeNormal - hullSizeCrouch);
		((CGameMovementUnit *)this)->TracePlayerBBox(newOrigin + viewDelta, newOrigin + viewDelta, 0x201400b, 6, trace);
		if (!trace.m_startsolid)
			newOrigin.x += viewDelta.x, newOrigin.y += viewDelta.y, newOrigin.z += viewDelta.z;
	}
	((CMoveFlagsView *)m_pMove)->m_bDucked = 0;
	((CBaseEntity *)m_pMove)->sub_100b3640(2);
	((CMoveFlagsView *)m_pMove)->m_b1ede = 0;
	((CMoveFlagsView *)m_pMove)->sub_1009f380((Vector *)((CGameMovementSlots_101269e0 *)this)->slot4(0, *(bool *)&((CMoveFlagsView *)m_pMove)->m_b1edc));
	((CMoveFlagsView *)m_pMove)->m_fl1EE0 = 0;
	PLAYER->m_vecOrigin = newOrigin;
	slot22();
}
// END FUNCTION

// FUNCTION: 0x10126cb0 size=0x11c
#include "CGameMovement.h"
#include "CGameMovementViews.h"
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"

// TARGET: CGameMovement::sub_10126cb0
void CGameMovement::sub_10126cb0()
{
	Vector vecStand = m_vecHullMax - m_vecHullMin;
	Vector vecDuck = m_vecDuckHullMax - m_vecDuckHullMin;
	Vector t0 = vecStand - vecDuck; Vector vecDelta = (t0) * 0.5f;

	((CMoveFlagsView *)m_pMove)->m_bDucked = 1;
	((CAI_BaseNPC *)m_pMove)->sub_1009f380((const Vector *)slot4(1, ((CMoveFlagsView *)m_pMove)->m_b1edc));
	((CBaseEntity *)m_pMove)->sub_100b3580(2);
	((CMoveFlagsView *)m_pMove)->m_b1ede = 0;

	if (((CMoveDataView *)m_pMove)->vfunc209() != 0)
	{
		for (int i = 0; 3 > i; i++)
		{
			CMovePlayerView *pMv = (CMovePlayerView *)m_pPlayer;
			pMv->m_vecOrigin[i] -= m_vecDuckHullMin[i] - m_vecHullMin[i];
		}
	}
	else
	{
		CMovePlayerView *pMv = (CMovePlayerView *)m_pPlayer;
		pMv->m_vecOrigin.x += vecDelta.x;
		pMv->m_vecOrigin.y += vecDelta.y;
		pMv->m_vecOrigin.z += vecDelta.z;
	}

	sub_101263c0(1);
	slot22();
}
// END FUNCTION

// FUNCTION: 0x10126e20 size=0xf4
#include "CGameMovement.h"

struct MoveV {
	char m_pad0000[0x184];
	Vector m_vecViewOffset;
	char m_pad0190[0x1edc - 0x190];
	char m_bFlag;

	void sub_1009f380(const Vector *pOffset);
};

struct SlotView {
	virtual void s0();
	virtual void s1();
	virtual float *Slot2(char flag, char b);
	virtual void s3();
	virtual float *Slot4(char flag, char b);
};

void CGameMovement::sub_10126e20(float flDuckFraction)
{
	Vector vDuckMins = *(Vector *)((SlotView *)this)->Slot2(1, ((MoveV *)m_pMove)->m_bFlag);
	Vector vStandMins = *(Vector *)((SlotView *)this)->Slot2(0, ((MoveV *)m_pMove)->m_bFlag);
	Vector vDuckView = *(Vector *)((SlotView *)this)->Slot4(1, ((MoveV *)m_pMove)->m_bFlag);
	Vector vStandView = *(Vector *)((SlotView *)this)->Slot4(0, ((MoveV *)m_pMove)->m_bFlag);
	float flMore = vDuckMins.z - vStandMins.z;
	Vector vecOffset = ((MoveV *)m_pMove)->m_vecViewOffset;
	vecOffset.z = ((1.0f - flDuckFraction) * vStandView.z) + ((vDuckView.z - flMore) * flDuckFraction);
	((MoveV *)m_pMove)->sub_1009f380(&vecOffset);
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

// FUNCTION: 0x10126fd0 size=0x33b
#include "CGameMovement.h"
#include "CGameMovementViews.h"
#include "CBaseEntity.h"
#include "CUnknown1015ef20.h"
#include "CUnknown1011eee0.h"

extern float g_104454c4;

static inline float SimpleSpline(float value)
{
	float valueSquared = value * value;
	return (3 * valueSquared - 2 * valueSquared * value);
}

#define GM_MAX(a, b) (((a) > (b)) ? (a) : (b))

#define MV ((CMovePlayerView *)m_pPlayer)
#define PL ((CMoveFlagsView *)m_pMove)
#define PLV ((CMoveDataView *)m_pMove)
#define PLE ((CBaseEntity *)m_pMove)

// TARGET: CGameMovement::sub_10126fd0
void CGameMovement::sub_10126fd0()
{
	int buttonsPressed = (MV->m_n0028 ^ MV->m_fFlags24) & MV->m_fFlags24;
	bool bDuck;
	bool bUnduck;

	int type = PL->m_n03E0;
	if ((type == 3 || (type > 0 && !PLV->vfunc209() && !MV->m_n00c0)) && sub_101265d0())
		goto dead;

	if (MV->m_fFlags24 & 4)
		MV->m_n0028 = MV->m_n0028 | 4;
	else
		MV->m_n0028 = MV->m_n0028 & ~4;
	if (MV->m_fFlags24 & 4)
		MV->m_n0028 |= 4;
	else
		MV->m_n0028 &= ~4;

	bDuck = false;
	bUnduck = false;
	if (((CUnknown1015ef20 *)m_pMove)->sub_1015ef20() && (buttonsPressed & 4) && !PL->m_b1ede) {
		if (!(PLE->sub_100b3700() & 2))
			bDuck = true;
		else if (sub_101265d0())
			bUnduck = true;
	}

	if (((CUnknown1011eee0 *)this)->sub_1011eee0()) {
dead:
		if (PLE->sub_100b3700() & 2)
			sub_101269e0();
		return;
	}

	if (bDuck || bUnduck || PL->m_b1ede || (PLE->sub_100b3700() & 2)) {
		if (!bUnduck && (bDuck || ((PLE->sub_100b3700() & 2) && !PL->m_b1ede) || (!(PLE->sub_100b3700() & 2) && PL->m_b1ede))) {
			bool bInDuck = (PLE->sub_100b3700() & 2) ? true : false;
			if (bDuck && !(PLE->sub_100b3700() & 2)) {
				PL->m_fl1EE0 = 1000.0f;
				PL->m_b1ede = 1;
			}
			float duckseconds = GM_MAX(g_104454c4, 1000.0f - PL->m_fl1EE0) * 0.001f;
			if (PL->m_b1ede) {
				if (duckseconds > 0.4f || !PLV->vfunc209() || bInDuck) {
					sub_10126cb0();
				} else {
					sub_10126e20(SimpleSpline(duckseconds * 2.5f));
				}
			}
		} else {
			if (PL->m_b1F28 || !PLV->vfunc209()) {
				if (bUnduck) {
					PL->m_fl1EE0 = 1000.0f;
					PL->m_b1ede = 1;
				}
				float duckseconds = GM_MAX(g_104454c4, 1000.0f - PL->m_fl1EE0) * 0.001f;
				if (sub_101265d0()) {
					if (PL->m_b1ede || PL->m_bDucked) {
						if (duckseconds > 0.2 || !PLV->vfunc209()) {
							sub_101269e0();
						} else {
							sub_10126e20(SimpleSpline(1.0 - duckseconds * 5.0));
						}
					}
				} else {
					PL->m_fl1EE0 = 1000.0f;
				}
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101273e0 size=0x8c
const char *sub_101273e0(int state)
{
	if (state == 0)
		return "Jump_None";
	if (state == 2)
		return "Jump_Hop";
	if (state == 3)
		return "Jump_Hop_Up";
	if (state == 4)
		return "Jump_Hop_Down";
	if (state == 1)
		return "Jump_Leap";
	if (state == 5)
		return "Jump_Maintain";
	if (state == 6)
		return "Jump_Descent";
	if (state == 7)
		return "Jump_Falling";
	if (state == 8)
		return "Jump_Landed";
	if (state == 9)
		return "Jump_LandedInWater";
	if (state == 10)
		return "Jump_LandedHard";
	return state == 11 ? "Jump_LandedExtremelyHard" : "Invalid jump state";
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
