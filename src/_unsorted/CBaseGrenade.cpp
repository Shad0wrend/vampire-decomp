// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10429f20 size=0xb
void CBaseGrenade::vfunc144(int unused)
{
	vfunc407();
}
// END FUNCTION

// FUNCTION: 0x1042b240 size=0xd
struct GrenadeField19c0 { char pad[0x19c0]; int m; };
void CBaseGrenade::vfunc191(int value)
{
	((GrenadeField19c0 *)this)->m = value;
}
// END FUNCTION

// FUNCTION: 0x1042b260 size=0xd
struct GrenadeField19b8 { char pad[0x19b8]; int m; };
void CBaseGrenade::vfunc412(int value)
{
	((GrenadeField19b8 *)this)->m = value;
}
// END FUNCTION
