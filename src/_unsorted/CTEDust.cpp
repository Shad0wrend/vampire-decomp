// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10113fe0 size=0x38
#include "CTEDust.h"

// TARGET: CTEDust::CTEDust
CTEDust::CTEDust(const char *name) : CTEParticleSystem(name)
{
	m_fl0018 = 1.0f;
	m_fl001c = 1.0f;
	m_vec0020.Init(0.0f, 0.0f, 0.0f);
}
// END FUNCTION

// FUNCTION: 0x10114030 size=0x3
#include "CTEDust.h"
void CTEDust::vfunc3(const Vector &a0, const QAngle &a1)
{
}
// END FUNCTION

// FUNCTION: 0x10114050 size=0x1e
#include "CTEDust.h"

// TARGET: CTEDust::vfunc2
CBaseTempEntity *CTEDust::vfunc2(unsigned int flags)
{
	sub_100058d5();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101140a0 size=0x39
#include "CTEDust.h"
#include "IVEngineServerFull.h"


void CTEDust::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x10114160 size=0x6
#include "CTEDust.h"
namespace lifted {
extern char g_1070a4f4;
}
ServerClass * CTEDust::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_1070a4f4);
}
// END FUNCTION

// FUNCTION: 0x10114180 size=0x3
#include "CTEDust.h"
int CTEDust::vfunc1()
{
    return 0;
}
// END FUNCTION
