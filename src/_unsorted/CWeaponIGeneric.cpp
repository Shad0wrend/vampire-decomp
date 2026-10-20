// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f43d0 size=0x1e
#include "CWeaponIGeneric.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponIGeneric::vfunc5
CWeaponIGeneric *CWeaponIGeneric::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103f48a0 size=0x70
#include "CWeaponIGeneric.h"
struct IRandom { virtual void v0(); virtual void v1(); virtual int RandomInt(int lo, int hi); };
extern IRandom *g_1070b244;

void CWeaponIGeneric::vfunc321()
{
    if (vfunc309()) {
        int *slot = (int *)((char *)this + 0x854);
        if (*slot == -1) {
            if (g_1070b244->RandomInt(0, 100) < 90) {
                vfunc307(0xb6);
                return;
            }
            vfunc307(0xb7);
            return;
        }
        sub_100138fe();
        vfunc307(*slot);
        *slot = -1;
    }
}
// END FUNCTION
