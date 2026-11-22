// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 7 blocks
#include "vampire.h"

// FUNCTION: 0x1005ac60 size=0x1e
#include "CTEBeamEntPoint.h"

// TARGET: CTEBeamEntPoint::vfunc2
CTEBeamEntPoint *CTEBeamEntPoint::vfunc2(unsigned int flags)
{
	sub_1000d8d7();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1005ac90 size=0xb
namespace lifted {
extern char g_1044dbf8;
int sub_1000d08f();
}
struct CUnknown1005ac90 { int sub_1005ac90(); };
int CUnknown1005ac90::sub_1005ac90()
{
    *(int *)this = (int)&lifted::g_1044dbf8;
    return lifted::sub_1000d08f();
}
// END FUNCTION

// FUNCTION: 0x1005acb0 size=0x12d
#include "CTEBeamEntPoint.h"
#include "CBroadcastRecipientFilter.h"

extern short g_1088ae52;
void sub_10139610(const QAngle &angles, Vector *forward, Vector *right, Vector *up);
void sub_10139500(const Vector &start, float scale, const Vector &direction, Vector &dest);

// TARGET: CTEBeamEntPoint::vfunc3
void CTEBeamEntPoint::vfunc3(const Vector &origin, const QAngle &angles)
{
	m_n44 = 1;
	m_nModelIndex = g_1088ae52;
	m_n14 = 0;
	m_n18 = 10;
	m_f1c = 2.0f;
	m_f20 = 1.0f;
	m_f2c = 1.0f;
	m_n30 = 0;
	m_n34 = 63;
	m_n38 = 127;
	m_n3c = 150;
	m_n40 = 1;

	m_vecEnd = origin;

	Vector forward, right;

	m_vecEnd += Vector(0, 0, 24);

	sub_10139610(angles, &forward, &right, 0);
	forward.z = 0.0f;
	VectorNormalize(forward);

	sub_10139500(m_vecEnd, 50.0f, forward, m_vecEnd);

	CBroadcastRecipientFilter filter;
	vfunc4((int)&filter, 0);
}
// END FUNCTION

// FUNCTION: 0x1005ae30 size=0x39
#include "CTEBeamEntPoint.h"
#include "IVEngineServerFull.h"


void CTEBeamEntPoint::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x1005ae80 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106bf330;
extern char g_10540c28[];
ServerClassReg g_106bf34c("CTEBeamEntPoint", &g_106bf330, g_10540c28);
// END FUNCTION

// FUNCTION: 0x1005aef0 size=0x6
#include "CTEBeamEntPoint.h"
namespace lifted {
extern char g_106bf34c;
}
ServerClass * CTEBeamEntPoint::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106bf34c);
}
// END FUNCTION

// FUNCTION: 0x1005af10 size=0x3
#include "CTEBeamEntPoint.h"
int CTEBeamEntPoint::vfunc1()
{
    return 0;
}
// END FUNCTION
