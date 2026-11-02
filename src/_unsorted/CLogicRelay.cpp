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

// FUNCTION: 0x10136410 size=0x2b
#include "CLogicRelay.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_1000cb8a();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CLogicRelay::vfunc5
CLogicRelay *CLogicRelay::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x454))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION
