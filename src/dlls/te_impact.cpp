// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 8 blocks
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

// FUNCTION: 0x10065030 size=0xb
namespace lifted {
extern char g_1044df68;
int sub_100021d0();
}
struct CUnknown10065030 { int sub_10065030(); };
int CUnknown10065030::sub_10065030()
{
    *(int *)this = (int)&lifted::g_1044df68;
    return lifted::sub_100021d0();
}
// END FUNCTION

// FUNCTION: 0x10065050 size=0x1
#include "CTEImpact.h"
void CTEImpact::vfunc5()
{
}
// END FUNCTION

// FUNCTION: 0x10065070 size=0x3
void __stdcall sub_10065070(int a0, int a1)
{
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

// FUNCTION: 0x100650e0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c44f8;
extern char g_10543e40[];
ServerClassReg g_106c4514("CTEImpact", &g_106c44f8, g_10543e40);
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

// FUNCTION: 0x10065170 size=0x3
#include "CTEImpact.h"
int CTEImpact::vfunc1()
{
    return 0;
}
// END FUNCTION
