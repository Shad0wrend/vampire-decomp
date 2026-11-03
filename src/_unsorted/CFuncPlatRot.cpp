// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1015a0b0 size=0x6
#include "datamap.h"
#include "CFuncPlatRot.h"
namespace lifted {
extern char g_10580658;
}
datamap_t *CFuncPlatRot::vfunc82()
{
    return (datamap_t *)&lifted::g_10580658;
}
// END FUNCTION

// FUNCTION: 0x1015a2a0 size=0x10
#include "CFuncPlatRot.h"
#include "CFuncPlat.h"

void CFuncPlatRot::vfunc103()
{
	((CFuncPlat *)this)->CFuncPlat::vfunc103();
	sub_1015a140();
}
// END FUNCTION

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

// FUNCTION: 0x1015a300 size=0x27
#include "CFuncPlatRot.h"
#include "CFuncPlat.h"

extern Vector g_1070d9d0;

// TARGET: CFuncPlatRot::vfunc245
void CFuncPlatRot::vfunc245()
{
    ((CFuncPlat *)this)->CFuncPlat::vfunc245();
    ((CFuncPlat *)this)->sub_100b2f50(g_1070d9d0);
    ((CFuncPlat *)this)->vfunc64(&m_vecStart);
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

// FUNCTION: 0x1015a380 size=0x27
#include "CFuncPlatRot.h"
#include "CFuncPlat.h"
#include "CBaseEntity.h"

extern Vector g_1070d9d0;

// TARGET: CFuncPlatRot::vfunc244
void CFuncPlatRot::vfunc244()
{
	((CFuncPlat *)this)->CFuncPlat::vfunc244();
	((CFuncPlat *)this)->sub_100b2f50(g_1070d9d0);
	((CBaseEntity *)this)->vfunc64((float *)&m_vecFinalAngle);
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
