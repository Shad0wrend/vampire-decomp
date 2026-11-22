// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10217000 size=0x57
#include "CTriggerInventory.h"

void sub_100aa7b0(void *);
void __fastcall sub_1009df20(void *self);

CBaseEntity *CTriggerInventory::vfunc5(unsigned int flags)
{
	((COutputEvent *)((char *)this + 0x59c))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x580))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x568))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x4bc))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x4a4))->sub_100cd2d0();
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION
