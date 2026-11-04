// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005b940 size=0x21
#include "CTEBeamLaser.h"

CTEBeamLaser::CTEBeamLaser(const char *name) : CTEBaseBeam(name)
{
	m_n44 = 0;
	m_n48 = 0;
}
// END FUNCTION

// FUNCTION: 0x1005b980 size=0x1e
#include "CTEBeamLaser.h"

// TARGET: CTEBeamLaser::vfunc2
CTEBaseBeam *CTEBeamLaser::vfunc2(unsigned int flags)
{
	sub_100051c8();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1005b9d0 size=0xc9
#include "CTEBeamLaser.h"
#include "CBroadcastRecipientFilter.h"

extern short g_1088ae52;

void CTEBeamLaser::vfunc3(int a, int b)
{
	m_n44 = 1;
	m_n48 = 0;
	m_n0c = g_1088ae52;
	m_n14 = 0;
	m_n18 = 10;
	m_n1c = 0x40000000;
	m_f20 = 10.0f;
	m_f2c = 100.0f;
	m_n30 = 0x7f;
	m_n34 = 0x3f;
	m_n38 = 0;
	m_n3c = 0x96;
	m_n40 = 1;
	CBroadcastRecipientFilter filter;
	vfunc4((int)&filter, 0);
}
// END FUNCTION

// FUNCTION: 0x1005bae0 size=0x39
#include "CTEBeamLaser.h"
#include "IVEngineServerFull.h"


void CTEBeamLaser::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x1005bba0 size=0x6
#include "CTEBeamLaser.h"
namespace lifted {
extern char g_106bfa50;
}
ServerClass * CTEBeamLaser::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106bfa50);
}
// END FUNCTION

// FUNCTION: 0x1005bbc0 size=0x3
#include "CTEBeamLaser.h"
int CTEBeamLaser::vfunc1()
{
    return 0;
}
// END FUNCTION
