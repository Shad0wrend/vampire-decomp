// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10168630 size=0x24
#include "CMessageChars.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual int f20(int); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual int f33(int); };
}
void CMessageChars::vfunc1()
{
    if ((*(int *)((char *)this + 4)) != 0) {
        int t0 = ((lifted::V *)(*(int *)((char *)this + 4)))->f33(0);
        if ((*(int *)((char *)this + 4)) != 0) {
            ((lifted::V *)(*(int *)((char *)this + 4)))->f20(1);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x101687c0 size=0x8
#include "CMessageChars.h"
namespace lifted {
struct C10168570 { int sub_10168570(); };
}
int CMessageChars::vfunc6()
{
    return ((lifted::C10168570 *)(*(int *)((char *)this + 4)))->sub_10168570();
}
// END FUNCTION

// FUNCTION: 0x101687d0 size=0x42
#include <stdarg.h>
#include "CMessageChars.h"

int CMessageChars::vfunc3(int a1, int a2, int a3, int a4, int a5, int a6, int a7, const char *fmt, int messageID, ...)
{
	va_list argptr;
	va_start(argptr, fmt);
	int ret = vfunc5(0.0f, a1, a2, a3, a4, a5, a6, a7, fmt, messageID, argptr);
	va_end(argptr);
	return ret;
}
// END FUNCTION

// FUNCTION: 0x101688c0 size=0xd
#include "CMessageChars.h"
namespace lifted {
struct C10168260 { int sub_10168260(); };
}
void CMessageChars::vfunc8()
{
    if ((*(int *)((char *)this + 4)) != 0) {
        ((lifted::C10168260 *)(*(int *)((char *)this + 4)))->sub_10168260(); return;
    }
}
// END FUNCTION
