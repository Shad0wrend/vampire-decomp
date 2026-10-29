// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10065000 size=0x1e
#include "CTEImpact.h"

// TARGET: CTEImpact::vfunc2
CTEImpact *CTEImpact::vfunc2(unsigned int flags)
{
	sub_1000c1a8();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10065090 size=0x39
#include "CTEImpact.h"
#include "IVEngineServerFull.h"


void CTEImpact::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x10065150 size=0x6
#include "CTEImpact.h"
namespace lifted {
extern char g_106c4514;
}
ServerClass * CTEImpact::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106c4514);
}
// END FUNCTION
