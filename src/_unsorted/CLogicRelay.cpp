// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101362d0 size=0x6
#include "CLogicRelay.h"
namespace lifted {
extern char g_10579058;
}
datamap_t * CLogicRelay::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10579058);
}
// END FUNCTION

// FUNCTION: 0x101363f0 size=0x8
#include "CLogicRelay.h"
// TARGET: CLogicRelay::sub_101363f0
unsigned char CLogicRelay::sub_101363f0()
{
    unsigned char b;
    b = sub_1000f7e5();
    b &= 0xfd;
    return b;
}
// END FUNCTION
