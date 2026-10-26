// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1015a2c0 size=0x28
#include "CFuncPlatRot.h"
#include "CFuncPlat.h"
// TARGET: CFuncPlatRot::vfunc243
void CFuncPlatRot::vfunc243()
{
    ((CFuncPlat *)this)->CFuncPlat::vfunc243();
    ((CFuncPlat *)this)->sub_1015a3c0(*(Vector *)((char *)this + 0x580), ((CFuncPlat *)this)->m_flMoveDoneTime - ((CFuncPlat *)this)->m_flLocalTime);
}
// END FUNCTION

// FUNCTION: 0x1015a340 size=0x28
#include "CFuncPlatRot.h"
#include "CFuncPlat.h"
// TARGET: CFuncPlatRot::vfunc242
void CFuncPlatRot::vfunc242()
{
    ((CFuncPlat *)this)->CFuncPlat::vfunc242();
    ((CFuncPlat *)this)->sub_1015a3c0(*(Vector *)((char *)this + 0x574), ((CFuncPlat *)this)->m_flMoveDoneTime - ((CFuncPlat *)this)->m_flLocalTime);
}
// END FUNCTION

// FUNCTION: 0x1015a550 size=0x36
#include "CFuncPlatRot.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CFuncPlatRot *CFuncPlatRot::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x4bc))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x4a4))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
