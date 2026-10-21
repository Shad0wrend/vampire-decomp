// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
