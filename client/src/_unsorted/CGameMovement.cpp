// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e6d60 size=0xa4
#include "CGameMovement.h"
#include "CUnknown10739d08.h"

extern CUnknown10739d08 g_105e8120;

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
	m_fieldA8 = g_105e8120.sub_1014cfb0();
}
// END FUNCTION

// FUNCTION: 0x100e6e10 size=0x3
#include "CGameMovement.h"
void CGameMovement::vfunc13(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100e6e20 size=0x1e
#include "CGameMovement.h"
namespace lifted {
int sub_100e6e40();
int sub_101d1296(int);
}
CGameMovement * CGameMovement::vfunc0(unsigned int a0)
{
    int t0 = lifted::sub_100e6e40();
    if ((*(char *)&a0 & 1) != 0) {
        lifted::sub_101d1296((int)this);
    }
    return this;
}
// END FUNCTION

// FUNCTION: 0x100e6e70 size=0x2f
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

// FUNCTION: 0x100e6eb0 size=0x11
#include "CGameMovement.h"
float * CGameMovement::vfunc2(char a0, int a1)
{
    if (a0 != 0) {
        return (float *)((char *)this + 0x2c);
    }
    return (float *)((char *)this + 0x14);
}
// END FUNCTION

// FUNCTION: 0x100e6ed0 size=0x11
#include "CGameMovement.h"
float * CGameMovement::vfunc3(char a0, int a1)
{
    if (a0 != 0) {
        return (float *)((char *)this + 0x38);
    }
    return (float *)((char *)this + 0x20);
}
// END FUNCTION

// FUNCTION: 0x100e6f50 size=0x11
#include "CGameMovement.h"
float * CGameMovement::vfunc4(char a0, int a1)
{
    if (a0 != 0) {
        return (float *)((char *)this + 0x68);
    }
    return (float *)((char *)this + 0x5c);
}
// END FUNCTION

// FUNCTION: 0x100e7860 size=0x7
#include "CGameMovement.h"
namespace lifted {
extern float g_101e34ec;
}
float CGameMovement::vfunc23()
{
    return lifted::g_101e34ec;
}
// END FUNCTION

// FUNCTION: 0x100e7ec0 size=0x2ac
#include "CGameMovement.h"

struct CGlobals_100e7ec0
{
	char pad_0[0x10];
	float frametime;
};

struct CMovePlayer_100e7ec0
{
	char pad_0[0x1078];
	float m_fl1078;             // 0x1078
	char pad_107c[0x69c];
	Vector m_vecPunchAngle;     // 0x1718
	Vector m_vecPunchAngleVel;  // 0x1724
};

extern CGlobals_100e7ec0 *g_102b8494;

#define MV ((CMovePlayer_100e7ec0 *)m_pMove)
#define CLAMP(v, lo, hi) ((v) > (hi) ? (hi) : ((v) < (lo) ? (lo) : (v)))

void CGameMovement::vfunc7()
{
	if (MV->m_vecPunchAngle.LengthSqr() > 0.001 ||
		MV->m_vecPunchAngleVel.LengthSqr() > 0.001)
	{
		*(QAngle *)&MV->m_vecPunchAngle += *(QAngle *)&MV->m_vecPunchAngleVel * g_102b8494->frametime * MV->m_fl1078;

		float flDecay = 1.0f - MV->m_fl1078 * g_102b8494->frametime * 9.0f;
		if (flDecay < 0.0f)
			flDecay = 0.0f;
		MV->m_vecPunchAngleVel *= flDecay;

		float flAngleDecay = MV->m_fl1078 * g_102b8494->frametime * 65.0f;
		if (flAngleDecay > 2.0f)
			flAngleDecay = 2.0f;
		if (flAngleDecay < 0.0f)
			flAngleDecay = 0.0f;

		MV->m_vecPunchAngleVel -= MV->m_vecPunchAngle * flAngleDecay;

		MV->m_vecPunchAngle = Vector(
			CLAMP(MV->m_vecPunchAngle.x, -89.0f, 89.0f),
			CLAMP(MV->m_vecPunchAngle.y, -179.0f, 179.0f),
			CLAMP(MV->m_vecPunchAngle.z, -89.0f, 89.0f));
	}
}
// END FUNCTION

// FUNCTION: 0x100e9640 size=0x29
#include "CGameMovement.h"
struct V100e9640 { char pad[0x1884]; int m_a; char pad2[0x199c - 0x1888]; float m_f; };
char CGameMovement::vfunc9()
{
	V100e9640 *p = (V100e9640 *)m_pMove;
	if (p->m_a)
		return 0;
	if (p->m_f != 0.0f)
		return 0;
	return 1;
}
// END FUNCTION

// FUNCTION: 0x100eb1f0 size=0x46
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
extern CPhysSys *g_104df784;

// TARGET: CGameMovement::vfunc21
char CGameMovement::vfunc21(void *pTrace)
{
	CTraceView *t = (CTraceView *)pTrace;
	if (t->m_flags & 0x20000000)
		return 1;
	CSurfSys *p = g_104df784->GetSurfaceProps();
	if (p) {
		CSurfProp *s = p->Get(t->m_surf);
		if (s && s->m_bFlag)
			return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100ebc00 size=0x8d
#include "CGameMovement.h"
#include <math.h>
void sub_101090a0(const QAngle &angles, Vector *forward, Vector *right, Vector *up);

// TARGET: CGameMovement::vfunc6
float CGameMovement::vfunc6(const QAngle &angles, const Vector &vec, float scale, float threshold)
{
	Vector forward, right, up;
	sub_101090a0(angles, &forward, &right, &up);
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
