// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10225d20 size=0x6d
#include "CPropPadlock.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1008b3c0();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CPropPadlock *CPropPadlock::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x7f4))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x7dc))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x7c4))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x7ac))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x794))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x748))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x730))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
