// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10109c10 size=0x36
#include "CFire.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CFire *CFire::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x4ac))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x494))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
