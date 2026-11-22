// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 7 blocks
#include "vampire.h"

// FUNCTION: 0x1005cc00 size=0x1e
#include "CTEBeamRingPoint.h"

// TARGET: CTEBeamRingPoint::vfunc2
CTEBeamRingPoint *CTEBeamRingPoint::vfunc2(unsigned int flags)
{
	sub_10008404();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1005cc30 size=0xb
namespace lifted {
extern char g_1044dcac;
int sub_1000d08f();
}
struct CUnknown1005cc30 { int sub_1005cc30(); };
int CUnknown1005cc30::sub_1005cc30()
{
    *(int *)this = (int)&lifted::g_1044dcac;
    return lifted::sub_1000d08f();
}
// END FUNCTION

// FUNCTION: 0x1005cc50 size=0xdf
#include "CTEBeamRingPoint.h"
#include "CBroadcastRecipientFilter.h"

extern short g_1088ae52;

void CTEBeamRingPoint::vfunc3(const float *pCenter, int unused)
{
	m_vecCenter[0] = pCenter[0];
	*(1 + m_vecCenter) = pCenter[1];
	m_vecCenter[2] = *(pCenter + 2);
	m_flEndRadius = 256.0f;
	m_flStartRadius = 16.0f;
	m_n0c = g_1088ae52;
	m_f1c = 10.0f;
	m_f2c = 10.0f;
	m_n14 = 0;
	m_n18 = 2;
	m_f20 = 20.0f;
	m_n30 = 0xff;
	m_n34 = 0xff;
	m_n38 = 0;
	m_n3c = 0x7f;
	m_n40 = 5;
	CBroadcastRecipientFilter filter;
	vfunc4((int)&filter, 0);
}
// END FUNCTION

// FUNCTION: 0x1005cd70 size=0x39
#include "CTEBeamRingPoint.h"
#include "IVEngineServerFull.h"


void CTEBeamRingPoint::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x1005cdc0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106bff5c;
extern char g_10541628[];
ServerClassReg g_106c0178("CTEBeamRingPoint", &g_106bff5c, g_10541628);
// END FUNCTION

// FUNCTION: 0x1005ce30 size=0x6
#include "CTEBeamRingPoint.h"
namespace lifted {
extern char g_106c0178;
}
ServerClass * CTEBeamRingPoint::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106c0178);
}
// END FUNCTION

// FUNCTION: 0x1005ce50 size=0x3
#include "CTEBeamRingPoint.h"
int CTEBeamRingPoint::vfunc1()
{
    return 0;
}
// END FUNCTION
