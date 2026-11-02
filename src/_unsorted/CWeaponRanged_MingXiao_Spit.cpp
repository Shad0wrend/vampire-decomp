// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10237760 size=0x6
#include "CWeaponRanged_MingXiao_Spit.h"
namespace lifted {
extern char g_10751c2c;
}
int CWeaponRanged_MingXiao_Spit::vfunc80()
{
    return (int)&lifted::g_10751c2c;
}
// END FUNCTION

// FUNCTION: 0x10237780 size=0x3
#include "CWeaponRanged_MingXiao_Spit.h"
int CWeaponRanged_MingXiao_Spit::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10237930 size=0x6
#include "CWeaponRanged_MingXiao_Spit.h"
namespace lifted {
extern char g_105bf908;
}
int CWeaponRanged_MingXiao_Spit::vfunc362()
{
    return (int)&lifted::g_105bf908;
}
// END FUNCTION

// FUNCTION: 0x10237950 size=0x6
#include "CWeaponRanged_MingXiao_Spit.h"
int CWeaponRanged_MingXiao_Spit::vfunc363()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x102379e0 size=0x41
#include "engineserver.h"
void __fastcall sub_1001576c(void *pThis);
// TARGET: sub_102379e0
void __fastcall sub_102379e0(void *pThis)
{
	engine->vfunc17("Ming_xiao_vomit_emitter", 0);
	engine->vfunc17("Ming_xiao_vomit_impact_emitter", 0);
	engine->vfunc17("Ming_xiao_vomit_player_emitter", 0);
	sub_1001576c(pThis);
}
// END FUNCTION

// FUNCTION: 0x1023a590 size=0x1e
#include "CWeaponRanged_MingXiao_Spit.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponRanged_MingXiao_Spit::vfunc5
CWeaponRanged_MingXiao_Spit *CWeaponRanged_MingXiao_Spit::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
