// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c87c0 size=0x6
#include "datamap.h"
#include "CTriggerPush.h"
namespace lifted {
extern char g_1059de58;
}
datamap_t * CTriggerPush::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059de58);
}
// END FUNCTION

// FUNCTION: 0x101c8910 size=0x4c
#include "CTriggerPush.h"
void __fastcall sub_100cd2d0(void *p);
void __fastcall sub_1009df20(void *p);
void sub_100aa7b0(void *p);
// TARGET: CTriggerPush::vfunc5
void *CTriggerPush::vfunc5(unsigned int flags)
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

// FUNCTION: 0x101c8aa0 size=0x85
#include "CTriggerPush.h"
#include "CEntityVSlots.h"

extern Vector g_1070d9d0;	// vec3_angle

void CTriggerPush::vfunc103()
{
	CBaseEntity::vfunc103();
	CEntityVSlots *pSlots = (CEntityVSlots *)this;
	if (*pSlots->slot221() == g_1070d9d0) {
		Vector vecAngles(0, 360, 0);
		pSlots->slot64(&vecAngles.x);
	}
	sub_101c5080();
	*(int *)((char *)this + 0x59c) = *(int *)((char *)this + 0x164);
}
// END FUNCTION
