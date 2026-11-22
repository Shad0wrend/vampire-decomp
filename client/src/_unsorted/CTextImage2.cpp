// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10172230 size=0x12
#include "CTextImage2.h"
namespace lifted {
struct V { virtual int f0(); };
}
int CTextImage2::vfunc0()
{
    ((lifted::V *)(*(int *)((char *)this + 0x1c)))->f0();
    return ((lifted::V *)(*(int *)((char *)this + 0x20)))->f0();
}
// END FUNCTION

// FUNCTION: 0x101722c0 size=0x8
#include "CTextImage2.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual int f3(); };
}
void CTextImage2::vfunc3()
{
    ((lifted::V *)(*(int *)((char *)this + 0x1c)))->f3();
}
// END FUNCTION
