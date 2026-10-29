// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1006af80 size=0x1e
#include "CTEWorldDecal.h"

// TARGET: CTEWorldDecal::vfunc2
CTEWorldDecal *CTEWorldDecal::vfunc2(unsigned int flags)
{
	sub_1000e9df();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1006b280 size=0x39
#include "CTEWorldDecal.h"
#include "IVEngineServerFull.h"


void CTEWorldDecal::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x1006b340 size=0x6
#include "CTEWorldDecal.h"
namespace lifted {
extern char g_106c7500;
}
ServerClass * CTEWorldDecal::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106c7500);
}
// END FUNCTION
