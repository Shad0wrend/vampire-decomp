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

// FUNCTION: 0x1011f520 size=0xe6
#include "CGameMovement.h"

struct SMoveGlobals
{
	char pad[0x10];
	float frametime;
};
extern SMoveGlobals *g_1070b228;

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
	float flDelta = g_1070b228->frametime * 1000.0f;
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
struct S1070b228 { char pad[0x10]; float m_f10; };
struct S109ef04c { virtual void v0(); virtual char vfunc1(); char pad[0x28 - 4]; float m_f28; };
extern S1070b228 *g_1070b228;
extern S109ef04c *g_109ef04c;
extern float g_104454c4;
void __fastcall sub_101251e0(char *);
void CGameMovement::vfunc1(void *pMove, void *pPlayer)
{
    float saved = g_1070b228->m_f10;
    sub_101251e0((char *)this);
    *((char *)this + 0xdc) = 0;
    m_pMove = pMove;
    m_pPlayer = pPlayer;
    float f = g_109ef04c->vfunc1() ? g_104454c4 : g_109ef04c->m_f28;
    *(float *)((char *)m_pPlayer + 0x38) = f;
    vfunc5();
    sub_1011f6e0();
    g_1070b228->m_f10 = saved;
}
// END FUNCTION

// FUNCTION: 0x101212e0 size=0x98
#include "CGameMovement.h"

struct CGlobalVarsStub
{
	char pad[0x10];
	float m_flFrameTime;
};
extern CGlobalVarsStub *g_1070b228;

#define MOVE_VELOCITY (*(Vector *)((char *)m_pPlayer + 0x40))

// TARGET: CGameMovement::vfunc10
void CGameMovement::vfunc10(Vector &wishdir, float wishspeed, float accel)
{
	if (!vfunc9())
		return;
	float addspeed = wishspeed - MOVE_VELOCITY.Dot(wishdir);
	if (addspeed <= 0)
		return;
	float accelspeed = g_1070b228->m_flFrameTime * m_fieldA0 * wishspeed * accel;
	if (accelspeed > addspeed)
		accelspeed = addspeed;
	for (int i = 0; i < 3; i++)
		MOVE_VELOCITY[i] += accelspeed * wishdir[i];
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
