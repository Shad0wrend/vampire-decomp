// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005c630 size=0x1e
#include "CTEBeamRing.h"

// TARGET: CTEBeamRing::vfunc2
CTEBaseBeam *CTEBeamRing::vfunc2(unsigned int flags)
{
	sub_10002667();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1005c680 size=0xc6
#include "CTEBeamRing.h"
#include "CBroadcastRecipientFilter.h"
extern short g_1088ae52;

void CTEBeamRing::vfunc3(int a, int b)
{
	m_nStartEnt = 1;
	m_nEndEnt = 0;
	m_nModelIndex = g_1088ae52;
	m_nLife = 0x41200000;
	m_fAmplitude = 10.0f;
	m_nStartFrame = 0;
	m_nFrameRate = 2;
	m_fWidth = 20.0f;
	m_nR = 255;
	m_nG = 255;
	m_nB = 0;
	m_nA = 127;
	m_nSpeed = 5;
	CBroadcastRecipientFilter filter;
	vfunc4((int)&filter, 0);
}
// END FUNCTION

// FUNCTION: 0x1005c790 size=0x39
#include "CTEBeamRing.h"
#include "IVEngineServerFull.h"


void CTEBeamRing::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x1005c850 size=0x6
#include "CTEBeamRing.h"
namespace lifted {
extern char g_106bfec0;
}
ServerClass * CTEBeamRing::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106bfec0);
}
// END FUNCTION

// FUNCTION: 0x1005c870 size=0x3
#include "CTEBeamRing.h"
int CTEBeamRing::vfunc1()
{
    return 0;
}
// END FUNCTION
