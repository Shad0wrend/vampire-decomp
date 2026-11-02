// CUnknown10182dd0: the thiscall entry 0x10182dd0 (stub 0x1000c626) on a character (a CBasePlayer in 0x1016cf30): forwards
// (a, b) to sub_10204100(this, a, b), which walks the table of stat ids at 0x1074e2a8..0x1074e2ec and returns the a-th stat id
// whose bounded base in the character's stat list of type 2 is >= (b == 0 ? 1 : 0), or -1 when there are fewer.
// Call as `((CUnknown10182dd0 *)this)->sub_10182dd0(i, 0)` from a CBasePlayer member.
#pragma once

class CUnknown10182dd0
{
public:
	int sub_10182dd0(int index, int flag);
};
