// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1006b6a0 size=0x6
#include "CTestTraceline.h"
namespace lifted {
extern char g_106c7af0;
}
int CTestTraceline::vfunc80()
{
    return (int)&lifted::g_106c7af0;
}
// END FUNCTION

// FUNCTION: 0x1006b6c0 size=0x3
#include "CTestTraceline.h"
int CTestTraceline::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1006baa0 size=0x6
#include "CTestTraceline.h"
namespace lifted {
extern char g_10545fc8;
}
CTestTraceline::Datamap82 CTestTraceline::vfunc82()
{
    return (CTestTraceline::Datamap82)&lifted::g_10545fc8;
}
// END FUNCTION

// FUNCTION: 0x1006bb30 size=0x3d
#include "vampire.h"
#include "CTestTraceline.h"

void sub_10003f62();

// TARGET: CTestTraceline::vfunc103
void CTestTraceline::vfunc103()
{
    unsigned char bColor = 0xff;
    *((unsigned char *)this + 0x1a3) = bColor;
    *((unsigned char *)this + 0x1a2) = bColor;
    *((unsigned char *)this + 0x1a1) = bColor;
    *((unsigned char *)this + 0x1a0) = bColor;
    *(float *)((char *)this + 0x17c) = gpGlobals->curtime + 0.01;
    sub_100ac4e0((void *)sub_10003f62, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x1006bcd0 size=0x5
#include "CTestTraceline.h"
bool CTestTraceline::vfunc86(int a0, int a1, int a2, int a3, int a4)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1006bcf0 size=0x1e
#include "CTestTraceline.h"

void sub_100aa7b0(void *p);

// TARGET: CTestTraceline::vfunc5
CTestTraceline *CTestTraceline::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
