// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10065e70 size=0x1e
#include "CTEMuzzleFlash.h"

// TARGET: CTEMuzzleFlash::vfunc2
CBaseTempEntity *CTEMuzzleFlash::vfunc2(unsigned int flags)
{
	sub_1000df12();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10065ec0 size=0x3
#include "CTEMuzzleFlash.h"
void CTEMuzzleFlash::vfunc3(const Vector &a0, const QAngle &a1)
{
}
// END FUNCTION

// FUNCTION: 0x10065ee0 size=0x39
#include "CTEMuzzleFlash.h"
#include "IVEngineServerFull.h"


void CTEMuzzleFlash::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x10065fa0 size=0x6
#include "CTEMuzzleFlash.h"
namespace lifted {
extern char g_106c4c54;
}
ServerClass * CTEMuzzleFlash::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106c4c54);
}
// END FUNCTION

// FUNCTION: 0x10065fc0 size=0x3
#include "CTEMuzzleFlash.h"
int CTEMuzzleFlash::vfunc1()
{
    return 0;
}
// END FUNCTION
