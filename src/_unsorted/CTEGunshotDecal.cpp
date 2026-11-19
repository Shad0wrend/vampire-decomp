// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10064010 size=0x48
#include "CTEGunshotDecal.h"
CTEGunshotDecal::CTEGunshotDecal(const char *name) : CBaseTempEntity(name)
{
    m_vecOrigin.x = 0;
    m_vecOrigin.y = 0;
    m_vecOrigin.z = 0;
    m_f24 = 0;
    m_f2c = 0;
    m_f3c = 0;
    m_f44 = 0;
    m_f40 = 0;
    m_f48 = 0;
    m_f30 = -1;
    m_f34 = 0x43;
    m_f38 = 1;
}
// END FUNCTION

// FUNCTION: 0x10064080 size=0x1e
#include "CTEGunshotDecal.h"

// TARGET: CTEGunshotDecal::vfunc2
CBaseTempEntity *CTEGunshotDecal::vfunc2(unsigned int flags)
{
	sub_1001520d();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100640d0 size=0x1
#include "CTEGunshotDecal.h"
void CTEGunshotDecal::vfunc5()
{
}
// END FUNCTION

// FUNCTION: 0x100640f0 size=0x21a
#include "CTraceFilterNoCharacterCollide.h"
#include "CTEGunshotDecal.h"
#include "Ray_t.h"
#include "CGameTrace.h"
#include "CTraceFilterSimple.h"
#include "CBroadcastRecipientFilter.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738960.h"

void sub_10139610(const QAngle &angles, Vector *pForward, Vector *pRight, Vector *pUp);
void sub_10139500(const Vector *pStart, float flScale, const Vector *pDir, Vector *pDest);
struct V3 { float x, y, z; };
void sub_10146570(V3 *pStart, V3 *pEnd, int a, int b, int c, int d, int e);

struct RayLocal
{
	float m_Start[3];
	float m_Delta[3];
	float m_Extents[3];
	float m_StartOffset[3];
	bool m_IsRay;
	bool m_IsSwept;
	char m_b32;
	char m_b33;
	float m_n34;

	void Init(const Vector &start, const Vector &end)
	{
		m_Delta[0] = end.x - start.x;
		m_Delta[1] = end.y - start.y;
		m_Delta[2] = end.z - start.z;
		m_IsSwept = (m_Delta[0] * m_Delta[0] + m_Delta[1] * m_Delta[1] + m_Delta[2] * m_Delta[2]) != g_104454c4;
		m_StartOffset[0] = m_StartOffset[1] = m_StartOffset[2] = 0.0f;
		m_IsRay = true;
		m_Extents[0] = m_Extents[1] = m_Extents[2] = 0.0f;
		m_Start[0] = start.x;
		m_Start[1] = start.y;
		m_Start[2] = start.z;
		m_b32 = 0;
		m_n34 = 0.0f;
		m_b33 = 0;
	}
};

// TARGET: CTEGunshotDecal::vfunc3
void CTEGunshotDecal::vfunc3(const Vector &vecOrigin, const QAngle &vecAngles)
{
	m_f24 = 0;
	m_f28 = 0;
	m_f2c = 0;

	m_vecOrigin = vecOrigin;
	m_vecOrigin.z += 24.0f;

	RayLocal ray;
	Vector vecForward;
	Vector vecEnd;

	sub_10139610(vecAngles, &vecForward, 0, 0);
	vecForward.z = 0.0f;
	VectorNormalize(vecForward);

	sub_10139500(&m_vecOrigin, 50.0f, &vecForward, &m_vecOrigin);
	sub_10139500(&m_vecOrigin, 1024.0f, &vecForward, &vecEnd);

	ray.Init(m_vecOrigin, vecEnd);

	CTraceFilterSimple traceFilter(0, 0);
	CGameTrace tr;

	g_1070b254->vfunc4((Ray_t *)&ray, 0x400b, (CTraceFilterNoCharacterCollide *)&traceFilter, &tr);

	if (g_10738960.sub_1005f190())
		sub_10146570((V3 *)&tr.m_startpos, (V3 *)&tr.m_endpos, 0xff, 0, 0, 1, -1082130432);

	m_vecOrigin = *(Vector *)&tr.m_endpos;

	CBroadcastRecipientFilter filter;
	vfunc4(filter, 0.0f);
}
// END FUNCTION

// FUNCTION: 0x100643a0 size=0x39
#include "CTEGunshotDecal.h"
#include "IVEngineServerFull.h"


void CTEGunshotDecal::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x10064460 size=0x6
#include "CTEGunshotDecal.h"
namespace lifted {
extern char g_106c4274;
}
ServerClass * CTEGunshotDecal::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106c4274);
}
// END FUNCTION

// FUNCTION: 0x10064480 size=0x3
#include "CTEGunshotDecal.h"
int CTEGunshotDecal::vfunc1()
{
    return 0;
}
// END FUNCTION
