// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10226200 size=0x30
#include "CPropDoorknobElectronic.h"

CPropDoorknobElectronic::CPropDoorknobElectronic()
{
	m_n818 = 0x35;
	m_n81c = 0x36;
	m_n820 = 5;
}
// END FUNCTION

// FUNCTION: 0x10226240 size=0x8
#include "CPropDoorknobElectronic.h"
// TARGET: CPropDoorknobElectronic::sub_10226240
unsigned char CPropDoorknobElectronic::sub_10226240()
{
	unsigned char value = sub_100056aa();
	value &= 0xfd;
	return value;
}
// END FUNCTION

// FUNCTION: 0x10226260 size=0x6d
#include "CPropDoorknobElectronic.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1008b3c0();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CPropDoorknobElectronic *CPropDoorknobElectronic::vfunc5(unsigned int flags)
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

// FUNCTION: 0x10226340 size=0xb
#include "CPropDoorknobElectronic.h"

void CPropDoorknobElectronic::vfunc274()
{
	m_unk670 = 1;
}
// END FUNCTION

// FUNCTION: 0x10226380 size=0x14
#include "CPropDoorknobElectronic.h"

// TARGET: CPropDoorknobElectronic::vfunc276
void CPropDoorknobElectronic::vfunc276()
{
	sub_102241b0();
	*(int *)((char *)this + 0x670) = 1;
}
// END FUNCTION
