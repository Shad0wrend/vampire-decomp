// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c6780 size=0x6
#include "datamap.h"
#include "CTriggerMultiple.h"
namespace lifted {
extern char g_1059da9c;
}
datamap_t * CTriggerMultiple::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059da9c);
}
// END FUNCTION

// FUNCTION: 0x101c6860 size=0x38
// TARGET: CTriggerMultiple::vfunc103
#include "CTriggerMultiple.h"

void sub_10015212();

void CTriggerMultiple::vfunc103()
{
    ((CBaseEntity *)this)->CBaseEntity::vfunc103();
    sub_101c5080();
    if (*(float *)((char *)this + 0x500) == 0.0f) {
        *(float *)((char *)this + 0x500) = 0.2f;
    }
    *(void **)((char *)this + 0x1ec) = (void *)sub_10015212;
}
// END FUNCTION

// FUNCTION: 0x101cbe40 size=0x57
#include "CCineNPC.h"

void sub_100aa7b0(void *);
void __fastcall sub_1009df20(void *self);

struct Helper
{
	void *sub_101cbe40(unsigned int flags);
};

// TARGET: Helper::sub_101cbe40
void *Helper::sub_101cbe40(unsigned int flags)
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
