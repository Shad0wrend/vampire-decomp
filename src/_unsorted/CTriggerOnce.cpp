// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c6ad0 size=0x14
#include "CTriggerOnce.h"

// TARGET: CTriggerOnce::vfunc103
void CTriggerOnce::vfunc103()
{
	sub_101c6860();
	*(int *)((char *)this + 0x500) = 3212836864;
}
// END FUNCTION

// FUNCTION: 0x101cbec0 size=0x57
#include "CCineNPC.h"

void sub_100aa7b0(void *);
void __fastcall sub_1009df20(void *self);

struct Helper
{
	void *sub_101cbec0(unsigned int flags);
};

// TARGET: Helper::sub_101cbec0
void *Helper::sub_101cbec0(unsigned int flags)
{
	((CCineNPCSlot *)((char *)this + 0x598))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x580))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x568))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x4bc))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x4a4))->sub_10015708();
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
