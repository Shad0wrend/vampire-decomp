// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101ab160 size=0x36
#include "CScriptedSentence.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseEntity *CScriptedSentence::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x494))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x47c))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
