// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10134a20 size=0x6
#include "CLogicCompare.h"
namespace lifted {
extern char g_10577048;
}
datamap_t *CLogicCompare::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10577048);
}
// END FUNCTION

// FUNCTION: 0x101360b0 size=0x4c
#include "CLogicCompare.h"
void __fastcall sub_100cd2d0(void *p);
void __fastcall sub_1009df20(void *p);
void sub_100aa7b0(void *p);
// TARGET: CLogicCompare::vfunc5
void *CLogicCompare::vfunc5(unsigned int flags)
{
	sub_100cd2d0((char *)this + 0x4a0);
	sub_100cd2d0((char *)this + 0x488);
	sub_100cd2d0((char *)this + 0x470);
	sub_100cd2d0((char *)this + 0x458);
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
