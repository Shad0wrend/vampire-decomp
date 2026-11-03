// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c9150 size=0x6
#include "datamap.h"
#include "CTriggerTeleport.h"
namespace lifted {
extern char g_1059dfa4;
}
datamap_t * CTriggerTeleport::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059dfa4);
}
// END FUNCTION

// FUNCTION: 0x101c9230 size=0x4c
#include "CTriggerTeleport.h"
void __fastcall sub_100cd2d0(void *p);
void __fastcall sub_1009df20(void *p);
void sub_100aa7b0(void *p);
// TARGET: CTriggerTeleport::vfunc5
void *CTriggerTeleport::vfunc5(unsigned int flags)
{
	sub_100cd2d0((char *)this + 0x580);
	sub_100cd2d0((char *)this + 0x568);
	sub_100cd2d0((char *)this + 0x4bc);
	sub_100cd2d0((char *)this + 0x4a4);
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
