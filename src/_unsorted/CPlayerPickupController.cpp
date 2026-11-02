// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1040ce30 size=0x5
#include "CPlayerPickupController.h"
bool CPlayerPickupController::vfunc157(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1040ce70 size=0x3
#include "CPlayerPickupController.h"
void CPlayerPickupController::vfunc229(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1040ce90 size=0x6
#include "CPlayerPickupController.h"
namespace lifted {
extern char g_106839a0;
}
datamap_t * CPlayerPickupController::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_106839a0);
}
// END FUNCTION

// FUNCTION: 0x10411b50 size=0x2b
#include "CPlayerPickupController.h"

struct CGargoyleMemberUnit {
	void sub_10011a77();
};

struct CGargoyleBaseUnit {
	void sub_1000cb8a();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CPlayerPickupController::vfunc5
CPlayerPickupController *CPlayerPickupController::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x450))->sub_10011a77();
	((CGargoyleBaseUnit *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION
