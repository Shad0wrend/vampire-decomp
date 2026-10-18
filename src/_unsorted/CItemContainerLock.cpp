// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10224190 size=0xb
void CItemContainerLock::vfunc275()
{
	m_unk780 = 1;
}
// END FUNCTION

// FUNCTION: 0x10226460 size=0x6d
#include "CItemContainerLock.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1008b3c0();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CItemContainerLock *CItemContainerLock::vfunc5(unsigned int flags)
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

// FUNCTION: 0x102264f0 size=0x18
#include "CItemContainerLock.h"
#include "CBaseVampireSkillEntity.h"

void CItemContainerLock::vfunc103()
{
    ((CBaseVampireSkillEntity *)this)->vfunc103();
    *(unsigned int *)((char *)this + 0x19c) |= 0x40;
}
// END FUNCTION
