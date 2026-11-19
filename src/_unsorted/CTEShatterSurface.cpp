// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10062fd0 size=0x65
#include "CTEShatterSurface.h"

CTEShatterSurface::CTEShatterSurface(const char *name) : CBaseTempEntity(name)
{
    m_f0c[0] = 0;
    m_f0c[1] = 0;
    m_f0c[2] = 0;
    m_f0c[3] = 0;
    m_f0c[4] = 0;
    m_f0c[5] = 0;
    m_f0c[6] = 0;
    m_f0c[7] = 0;
    m_f0c[8] = 0;
    m_f0c[9] = 0;
    m_f0c[10] = 0;
    m_f0c[11] = 0;
    m_f3c = 16.0f;
    m_f40 = 16.0f;
    m_f44 = 3.0f;
    m_rgba[0] = 255;
    m_rgba[1] = 255;
    m_rgba[2] = 255;
    m_rgba[3] = 255;
    m_rgba[4] = 255;
    m_rgba[5] = 255;
}
// END FUNCTION

// FUNCTION: 0x10063060 size=0x1e
#include "CTEShatterSurface.h"

// TARGET: CTEShatterSurface::vfunc2
CBaseTempEntity *CTEShatterSurface::vfunc2(unsigned int flags)
{
	sub_100021d0();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10063090 size=0x21e
// TARGET: CTEShatterSurface::vfunc3
#include "CTraceFilterNoCharacterCollide.h"
#include "CTEShatterSurface.h"
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

struct CShatterFields
{
	char m_pad[0xc];
	Vector m_vecOrigin;
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

void CTEShatterSurface::vfunc3(const Vector &vecOrigin, const QAngle &vecAngles)
{
	CShatterFields *pFields = (CShatterFields *)this;

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
	vfunc4(filter, 0);
}
// END FUNCTION

// FUNCTION: 0x10063340 size=0x39
#include "CTEShatterSurface.h"
#include "IVEngineServerFull.h"


void CTEShatterSurface::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x10063400 size=0x6
#include "CTEShatterSurface.h"
namespace lifted {
extern char g_106c3858;
}
ServerClass * CTEShatterSurface::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106c3858);
}
// END FUNCTION

// FUNCTION: 0x10063420 size=0x3
#include "CTEShatterSurface.h"
int CTEShatterSurface::vfunc1()
{
    return 0;
}
// END FUNCTION
