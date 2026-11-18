// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102307e0 size=0x28
#include "CTeamManager.h"

struct CGargoyleMemberUnit {
	void sub_10005263();
};

struct CGargoyleBaseUnit {
	void sub_1000cfbd();
};

void __cdecl sub_10430964(void *p);

// TARGET: CTeamManager::vfunc8
CTeamManager *CTeamManager::vfunc8(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x8))->sub_10005263();
	((CGargoyleBaseUnit *)this)->sub_1000cfbd();
	if (flags & 1)
		sub_10430964(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10230820 size=0x8
#include "CTeamManager.h"
namespace lifted {
struct C10010785 { int sub_10010785(); };
}
int CTeamManager::vfunc2()
{
    return ((lifted::C10010785 *)(this + 8))->sub_10010785();
}
// END FUNCTION

// FUNCTION: 0x10230840 size=0x5
#include "CTeamManager.h"
struct CUnknown102308f0 { int sub_102308f0(); };
// TARGET: CTeamManager::vfunc3
// the game's 0x10230840: a tail call (jmp) of CUnknown102308f0::sub_102308f0
int CTeamManager::vfunc3()
{
	return ((CUnknown102308f0 *)this)->CUnknown102308f0::sub_102308f0();
}
// END FUNCTION

// FUNCTION: 0x10230860 size=0x8
#include "CTeamManager.h"
namespace lifted {
struct C10010785 { int sub_10010785(); };
}
int CTeamManager::vfunc5()
{
    return ((lifted::C10010785 *)(this + 8))->sub_10010785();
}
// END FUNCTION
