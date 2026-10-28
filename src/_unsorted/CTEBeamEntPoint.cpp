// Matched functions only. Written by pcdecomp; change it through pcdecomp.
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

// FUNCTION: 0x1005ae30 size=0x39
#include "CTEBeamEntPoint.h"
#include "IVEngineServerFull.h"


void CTEBeamEntPoint::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
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
