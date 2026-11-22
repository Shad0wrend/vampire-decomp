// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 6 blocks
#include "vampire.h"

// FUNCTION: 0x1005a710 size=0x45
#include "CTEBaseBeam.h"
// TARGET: CTEBaseBeam::CTEBaseBeam
CTEBaseBeam::CTEBaseBeam(const char *name) : CBaseTempEntity(name)
{
	m_n0c = 0;
	m_n10 = 0;
	m_n14 = 0;
	m_n18 = 0;
	m_n1c = 0;
	m_n20 = 0;
	m_n24 = 0;
	m_n28 = 0;
	m_n2c = 0;
	m_n3c = 0;
	m_n38 = 0;
	m_n34 = 0;
	m_n30 = 0;
	m_n40 = 0;
}
// END FUNCTION

// FUNCTION: 0x1005a780 size=0x1e
#include "CTEBaseBeam.h"

// TARGET: CTEBaseBeam::vfunc2
CBaseTempEntity *CTEBaseBeam::vfunc2(unsigned int flags)
{
	sub_1000d08f();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1005a7b0 size=0xb
namespace lifted {
extern char g_1044dbd4;
int sub_100021d0();
}
struct CUnknown1005a7b0 { int sub_1005a7b0(); };
int CUnknown1005a7b0::sub_1005a7b0()
{
    *(int *)this = (int)&lifted::g_1044dbd4;
    return lifted::sub_100021d0();
}
// END FUNCTION

// FUNCTION: 0x1005a7d0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106bed08;
extern char g_106bf214[];
ServerClassReg g_106becec("CTEBaseBeam", &g_106bed08, g_106bf214);
// END FUNCTION

// FUNCTION: 0x1005a840 size=0x6
#include "CTEBaseBeam.h"
namespace lifted {
extern char g_106becec;
}
ServerClass * CTEBaseBeam::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106becec);
}
// END FUNCTION

// FUNCTION: 0x1005a860 size=0x3
#include "CTEBaseBeam.h"
int CTEBaseBeam::vfunc1()
{
    return 0;
}
// END FUNCTION
