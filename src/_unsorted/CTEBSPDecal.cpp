// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005ee90 size=0x1e
#include "CTEBSPDecal.h"

// TARGET: CTEBSPDecal::vfunc2
CTEBSPDecal *CTEBSPDecal::vfunc2(unsigned int flags)
{
	sub_100035df();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1005eee0 size=0x217
#include "CBroadcastRecipientFilter.h"
#include "CGameTrace.h"
#include "CTEBSPDecal.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738960.h"
#include "QAngle.h"
#include "Ray_t.h"
#include "Vector.h"
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

// TARGET: CTEBSPDecal::vfunc3
void CTEBSPDecal::vfunc3(const Vector &vecOrigin, const QAngle &vecAngles)
{
	m_n18 = 0;
	m_n1c = 0;

	m_vecPos = vecOrigin;
	m_vecPos.z += 24.0f;

	RayLocal ray;
	Vector vecForward;
	Vector vecEnd;

	sub_10139610(vecAngles, &vecForward, 0, 0);
	vecForward.z = 0.0f;
	VectorNormalize(vecForward);

	sub_10139500(&m_vecPos, 50.0f, &vecForward, &m_vecPos);
	sub_10139500(&m_vecPos, 1024.0f, &vecForward, &vecEnd);

	ray.Init(m_vecPos, vecEnd);

	CTraceFilterSimple traceFilter(0, 0);
	CGameTrace tr;

	g_1070b254->vfunc4((Ray_t *)&ray, 0x400b, (CTraceFilterNoCharacterCollide *)&traceFilter, &tr);

	if (g_10738960.sub_1005f190())
		sub_10146570((V3 *)&tr.m_startpos, (V3 *)&tr.m_endpos, 0xff, 0, 0, 1, -1082130432);

	m_vecPos = *(Vector *)&tr.m_endpos;

	CBroadcastRecipientFilter filter;
	vfunc4v(&filter, 0);
}
// END FUNCTION

// FUNCTION: 0x1005f1c0 size=0x39
#include "CTEBSPDecal.h"
#include "IVEngineServerFull.h"


void CTEBSPDecal::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x1005f280 size=0x6
#include "CTEBSPDecal.h"
namespace lifted {
extern char g_106c128c;
}
ServerClass * CTEBSPDecal::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106c128c);
}
// END FUNCTION

// FUNCTION: 0x1005f2a0 size=0x3
#include "CTEBSPDecal.h"
int CTEBSPDecal::vfunc1()
{
    return 0;
}
// END FUNCTION
