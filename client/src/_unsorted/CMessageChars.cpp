// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

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
