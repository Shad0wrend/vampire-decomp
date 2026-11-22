// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 7 blocks
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

// FUNCTION: 0x10065ea0 size=0xb
namespace lifted {
extern char g_1044dfd4;
int sub_100021d0();
}
struct CUnknown10065ea0 { int sub_10065ea0(); };
int CUnknown10065ea0::sub_10065ea0()
{
    *(int *)this = (int)&lifted::g_1044dfd4;
    return lifted::sub_100021d0();
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

// FUNCTION: 0x10065f30 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c4c0c;
extern char g_10544458[];
ServerClassReg g_106c4c54("CTEMuzzleFlash", &g_106c4c0c, g_10544458);
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
