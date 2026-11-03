// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10066360 size=0x1e
#include "CTEPlayerDecal.h"

// TARGET: CTEPlayerDecal::vfunc2
CTEPlayerDecal *CTEPlayerDecal::vfunc2(unsigned int flags)
{
	sub_1000a1dc();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100663b0 size=0x21e
// TARGET: CTEPlayerDecal::vfunc3
#include "CTraceFilterNoCharacterCollide.h"
#include "CTEPlayerDecal.h"
#include "Vector.h"
#include "QAngle.h"
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

struct CDecalFields
{
	char m_pad[0xc];
	int m_n0c;
	Vector m_vecOrigin;
	int m_n1c;
	int m_n20;
};

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

void CTEPlayerDecal::vfunc3(const Vector &vecOrigin, const QAngle &vecAngles)
{
	CDecalFields *pFields = (CDecalFields *)this;
	pFields->m_n0c = 1;
	pFields->m_n1c = 0;
	pFields->m_n20 = 0;

	pFields->m_vecOrigin = vecOrigin;
	pFields->m_vecOrigin.z += 24.0f;

	RayLocal ray;
	Vector vecForward;
	Vector vecEnd;

	sub_10139610(vecAngles, &vecForward, 0, 0);
	vecForward.z = 0.0f;
	VectorNormalize(vecForward);

	sub_10139500(&pFields->m_vecOrigin, 50.0f, &vecForward, &pFields->m_vecOrigin);
	sub_10139500(&pFields->m_vecOrigin, 1024.0f, &vecForward, &vecEnd);

	ray.Init(pFields->m_vecOrigin, vecEnd);

	CTraceFilterSimple traceFilter(0, 0);
	CGameTrace tr;

	g_1070b254->vfunc4((Ray_t *)&ray, 0x400b, (CTraceFilterNoCharacterCollide *)&traceFilter, &tr);

	if (g_10738960.sub_1005f190())
		sub_10146570((V3 *)&tr.m_startpos, (V3 *)&tr.m_endpos, 0xff, 0, 0, 1, -1082130432);

	pFields->m_vecOrigin = *(Vector *)&tr.m_endpos;

	CBroadcastRecipientFilter filter;
	vfunc4(filter, 0.0f);
}
// END FUNCTION

// FUNCTION: 0x10066660 size=0x39
#include "CTEPlayerDecal.h"
#include "IVEngineServerFull.h"


void CTEPlayerDecal::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x10066720 size=0x6
#include "CTEPlayerDecal.h"
namespace lifted {
extern char g_106c4f2c;
}
ServerClass * CTEPlayerDecal::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106c4f2c);
}
// END FUNCTION

// FUNCTION: 0x10066740 size=0x3
#include "CTEPlayerDecal.h"
int CTEPlayerDecal::vfunc1()
{
    return 0;
}
// END FUNCTION
