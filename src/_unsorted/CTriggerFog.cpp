// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101ca450 size=0x6
extern char g_1059e2fc[];

// TARGET: sub_101ca450
void *sub_101ca450()
{
	return g_1059e2fc;
}
// END FUNCTION

// FUNCTION: 0x101ca4e0 size=0x14
#include "CTriggerFog.h"

void sub_101ca510();

void CTriggerFog::vfunc103()
{
	sub_101c6860();
	*(void **)((char *)this + 0x1ec) = (void *)&sub_101ca510;
}
// END FUNCTION

// FUNCTION: 0x101cc1c0 size=0x57
#include "CCineNPC.h"

void sub_100aa7b0(void *);
void __fastcall sub_1009df20(void *self);

struct Helper
{
	void *sub_101cc1c0(unsigned int flags);
};

// TARGET: Helper::sub_101cc1c0
void *Helper::sub_101cc1c0(unsigned int flags)
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
