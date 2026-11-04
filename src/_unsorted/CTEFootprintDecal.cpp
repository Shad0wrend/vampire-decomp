// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10062b30 size=0x6
#include "CTEFootprintDecal.h"
namespace lifted {
extern char g_106c2ffc;
}
ServerClass * CTEFootprintDecal::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106c2ffc);
}
// END FUNCTION

// FUNCTION: 0x10062b50 size=0x3
#include "CTEFootprintDecal.h"
int CTEFootprintDecal::vfunc1()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10062e90 size=0x1e
#include "CTEFootprintDecal.h"

// TARGET: CTEFootprintDecal::vfunc2
CBaseTempEntity *CTEFootprintDecal::vfunc2(unsigned int flags)
{
	sub_100059d4();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10062ee0 size=0x39
#include "CTEFootprintDecal.h"
#include "IVEngineServerFull.h"


void CTEFootprintDecal::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION
