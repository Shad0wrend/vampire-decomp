// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f2f40 size=0x6
#include "CWeaponIArmor.h"
namespace lifted {
extern char g_1067ea10;
}
CWeaponActivityRecord * CWeaponIArmor::vfunc362()
{
    return (CWeaponActivityRecord *)((int)&lifted::g_1067ea10);
}
// END FUNCTION
