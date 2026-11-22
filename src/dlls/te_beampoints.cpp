// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 7 blocks
#include "vampire.h"

// FUNCTION: 0x1005bf50 size=0x1e
#include "CTEBeamPoints.h"

// TARGET: CTEBeamPoints::vfunc2
CTEBeamPoints *CTEBeamPoints::vfunc2(unsigned int flags)
{
	sub_1000a9fc();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1005bf80 size=0xb
namespace lifted {
extern char g_1044dc64;
int sub_1000d08f();
}
struct CUnknown1005bf80 { int sub_1005bf80(); };
int CUnknown1005bf80::sub_1005bf80()
{
    *(int *)this = (int)&lifted::g_1044dc64;
    return lifted::sub_1000d08f();
}
// END FUNCTION

// FUNCTION: 0x1005bfa0 size=0x149
#include "CTEBeamPoints.h"
#include "CBroadcastRecipientFilter.h"

extern short g_1088ae52;
void sub_10139610(const QAngle &angles, Vector *forward, Vector *right, Vector *up);
void sub_10139500(const Vector &start, float scale, const Vector &direction, Vector &dest);

// TARGET: CTEBeamPoints::vfunc3
void CTEBeamPoints::vfunc3(const Vector &origin, const QAngle &angles)
{
	m_nModelIndex = g_1088ae52;
	m_n14 = 0;
	m_n18 = 10;
	m_f1c = 2.0f;
	m_f20 = 10.0f;
	m_f2c = 100.0f;
	m_n30 = 0;
	m_n34 = 63;
	m_n38 = 127;
	m_n3c = 150;
	m_n40 = 1;
	m_vecStart = origin;
	m_vecStart.z += 30.0f;
	Vector forward, right;
	sub_10139610(angles, &forward, &right, 0);
	forward.z = 0.0f;
	VectorNormalize(forward);
	sub_10139500(m_vecStart, 75.0f, forward, m_vecStart);
	sub_10139500(m_vecStart, 25.0f, right, m_vecEnd);
	sub_10139500(m_vecStart, -25.0f, right, m_vecStart);
	CBroadcastRecipientFilter filter;
	vfunc4((int)&filter, 0);
}
// END FUNCTION

// FUNCTION: 0x1005c150 size=0x39
#include "CTEBeamPoints.h"
#include "IVEngineServerFull.h"


void CTEBeamPoints::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x1005c1a0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106bfacc;
extern char g_10541248[];
ServerClassReg g_106bfaec("CTEBeamPoints", &g_106bfacc, g_10541248);
// END FUNCTION

// FUNCTION: 0x1005c210 size=0x6
#include "CTEBeamPoints.h"
namespace lifted {
extern char g_106bfaec;
}
ServerClass * CTEBeamPoints::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106bfaec);
}
// END FUNCTION

// FUNCTION: 0x1005c230 size=0x3
#include "CTEBeamPoints.h"
int CTEBeamPoints::vfunc1()
{
    return 0;
}
// END FUNCTION
