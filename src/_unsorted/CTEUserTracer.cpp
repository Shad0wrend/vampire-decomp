// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1006aa60 size=0x1e
#include "CTEUserTracer.h"

// TARGET: CTEUserTracer::vfunc2
CBaseTempEntity *CTEUserTracer::vfunc2(unsigned int flags)
{
	sub_1000b2b7();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1006aab0 size=0x3
#include "CTEUserTracer.h"
void CTEUserTracer::vfunc3(const Vector &a0, const QAngle &a1)
{
}
// END FUNCTION

// FUNCTION: 0x1006aad0 size=0x39
#include "CTEUserTracer.h"
#include "IVEngineServerFull.h"


void CTEUserTracer::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x1006ab90 size=0x6
#include "CTEUserTracer.h"
namespace lifted {
extern char g_106c720c;
}
ServerClass * CTEUserTracer::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106c720c);
}
// END FUNCTION

// FUNCTION: 0x1006abb0 size=0x3
#include "CTEUserTracer.h"
int CTEUserTracer::vfunc1()
{
    return 0;
}
// END FUNCTION
