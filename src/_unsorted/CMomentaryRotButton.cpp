// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100cb4f0 size=0x6d
#include "CMomentaryRotButton.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CMomentaryRotButton *CMomentaryRotButton::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x5bc))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x5a4))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x58c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x574))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x55c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x4bc))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x4a4))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
