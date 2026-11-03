// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10050110 size=0x6
#include "datamap.h"
#include "CPhysConvert.h"
namespace lifted {
extern char g_1053d31c;
}
datamap_t * CPhysConvert::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1053d31c);
}
// END FUNCTION

// FUNCTION: 0x10050240 size=0x2b
#include "CPhysConvert.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_1000cb8a();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CPhysConvert::vfunc5
CPhysConvert *CPhysConvert::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x450))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION
