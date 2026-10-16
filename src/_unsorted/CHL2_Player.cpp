// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1034f3d0 size=0xd
struct HL2PlayerField2464 { char pad[0x2464]; int m; };
void CHL2_Player::vfunc475(int value)
{
	((HL2PlayerField2464 *)this)->m = value;
}
// END FUNCTION

// FUNCTION: 0x1034f430 size=0xd
struct HL2PlayerFloats { char pad[0x2534]; float a; float b; };
float CHL2_Player::vfunc480()
{
	HL2PlayerFloats *p = (HL2PlayerFloats *)this;
	return p->a - p->b;
}
// END FUNCTION

// FUNCTION: 0x1034f450 size=0xd
struct HL2PlayerFloats { char pad[0x2534]; float a; float b; };
float CHL2_Player::vfunc481()
{
	HL2PlayerFloats *p = (HL2PlayerFloats *)this;
	return p->b - p->a;
}
// END FUNCTION
