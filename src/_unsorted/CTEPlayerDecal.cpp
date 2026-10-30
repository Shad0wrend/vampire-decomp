// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10066360 size=0x1e
#include "CTEPlayerDecal.h"

// TARGET: CTEPlayerDecal::vfunc2
CTEPlayerDecal *CTEPlayerDecal::vfunc2(unsigned int flags)
{
	sub_1000a1dc();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10066660 size=0x39
#include "CTEPlayerDecal.h"
#include "IVEngineServerFull.h"


void CTEPlayerDecal::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x10066720 size=0x6
#include "CTEPlayerDecal.h"
namespace lifted {
extern char g_106c4f2c;
}
ServerClass * CTEPlayerDecal::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106c4f2c);
}
// END FUNCTION

// FUNCTION: 0x10066740 size=0x3
#include "CTEPlayerDecal.h"
int CTEPlayerDecal::vfunc1()
{
    return 0;
}
// END FUNCTION
