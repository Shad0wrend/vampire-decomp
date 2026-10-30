// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100603c0 size=0x1e
#include "CTEDecal.h"

// TARGET: CTEDecal::vfunc2
CTEDecal *CTEDecal::vfunc2(unsigned int flags)
{
	sub_100038eb();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100606c0 size=0x39
#include "CTEDecal.h"
#include "IVEngineServerFull.h"


void CTEDecal::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x10060780 size=0x6
#include "CTEDecal.h"
namespace lifted {
extern char g_106c1c58;
}
ServerClass * CTEDecal::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106c1c58);
}
// END FUNCTION

// FUNCTION: 0x100607a0 size=0x3
#include "CTEDecal.h"
int CTEDecal::vfunc1()
{
    return 0;
}
// END FUNCTION
