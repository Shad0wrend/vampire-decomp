// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10059e10 size=0x2d
#include "CTEMetalSparks.h"

CTEMetalSparks::CTEMetalSparks(const char *name) : CBaseTempEntityHead(name)
{
	m_pos[0] = 0;
	m_pos[1] = 0;
	m_pos[2] = 0;
	m_dir[0] = 0;
	m_dir[1] = 0;
	m_dir[2] = 0;
}
// END FUNCTION

// FUNCTION: 0x10059e50 size=0x1e
#include "CTEMetalSparks.h"

// TARGET: CTEMetalSparks::vfunc2
CTEMetalSparks *CTEMetalSparks::vfunc2(unsigned int flags)
{
	sub_1000e340();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10059ea0 size=0xf3
#include "CTEMetalSparks.h"
#include "CBroadcastRecipientFilter.h"

void sub_10139610(const QAngle &angles, Vector *forward, Vector *right, Vector *up);
void sub_10139500(const Vector &start, float scale, const Vector &direction, Vector &dest);

void CTEMetalSparks::vfunc3(const Vector &origin, const QAngle &angles)
{
	const int *pOrigin = (const int *)&origin;
	int *pPos = m_pos;
	pPos[0] = pOrigin[0];
	pPos[1] = pOrigin[1];
	pPos[2] = pOrigin[2];
	sub_10139610(angles, (Vector *)m_dir, 0, 0);
	*(float *)&m_pos[2] = *(float *)&m_pos[2] + 24.0f;
	Vector forward;
	sub_10139610(angles, &forward, 0, 0);
	forward.z = 0;
	VectorNormalize(forward);
	sub_10139500(*(Vector *)pPos, 100.0f, forward, *(Vector *)pPos);
	CBroadcastRecipientFilter filter;
	vfunc4(filter, 0);
}
// END FUNCTION

// FUNCTION: 0x10059fe0 size=0x39
#include "CTEMetalSparks.h"
#include "IVEngineServerFull.h"


void CTEMetalSparks::sub_10059fe0(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x1005a0a0 size=0x6
#include "CTEMetalSparks.h"
#include "ServerClass.h"
namespace lifted {
extern char g_106beaa8;
}
ServerClass * CTEMetalSparks::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106beaa8);
}
// END FUNCTION

// FUNCTION: 0x1005a0c0 size=0x3
#include "CTEMetalSparks.h"
int CTEMetalSparks::vfunc1()
{
    return 0;
}
// END FUNCTION
