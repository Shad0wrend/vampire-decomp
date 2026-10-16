// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1034f3d0 size=0xd
struct HL2PlayerField2464 { char pad[0x2464]; int m; };
void CHL2_Player::vfunc475(int value)
{
	((HL2PlayerField2464 *)this)->m = value;
}
// END FUNCTION
