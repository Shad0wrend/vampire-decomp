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

CBaseEntity *CPropDoorknobElectronic::vfunc5(unsigned int flags)
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

// FUNCTION: 0x102262f0 size=0x32
#include "CPropDoorknob.h"
#include "CPropDoorknobElectronic.h"
#include "CItemContainerLock.h"

namespace block_102262f0 {
struct CItemContainerLockUnit : CItemContainerLock
{
	bool IsLocked() const { if (m_unk780 >= 3) return true; return false; }
	bool sub_10224100();
};
bool CItemContainerLockUnit::sub_10224100()
{
	return !IsLocked();
}
}

// TARGET: CPropDoorknobElectronic::vfunc103
void CPropDoorknobElectronic::vfunc103()
{
	CPropDoorknob::vfunc103();
	m_b815 = 1;
	if (((block_102262f0::CItemContainerLockUnit *)this)->sub_10224100())
		m_unk670 = 0;
	else
		m_unk670 = 1;
}
// END FUNCTION

// FUNCTION: 0x10226340 size=0xb
#include "CPropDoorknobElectronic.h"

void CPropDoorknobElectronic::vfunc274()
{
	m_unk670 = 1;
}
// END FUNCTION

// FUNCTION: 0x10226360 size=0x10
#include "CPropDoorknobElectronic.h"
#include "CItemContainerLock.h"
void CItemContainerLock::vfunc275()
{
	m_unk780 = 1;
}
// TARGET: CPropDoorknobElectronic::vfunc275
void CPropDoorknobElectronic::vfunc275() { ((CItemContainerLock *)this)->CItemContainerLock::vfunc275(); m_unk670 = 0; }
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
