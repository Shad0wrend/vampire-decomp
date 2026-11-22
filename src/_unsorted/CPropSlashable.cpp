// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10194580 size=0x2b
#include "CPropSlashable.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_10004c3c();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CPropSlashable::vfunc5
CBaseEntity *CPropSlashable::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x734))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_10004c3c();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION
