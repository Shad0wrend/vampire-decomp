// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1020e870 size=0x6
#include "datamap.h"
#include "CFuncElevator.h"
namespace lifted {
extern char g_105aadf0;
}
datamap_t *CFuncElevator::vfunc82()
{
    return (datamap_t *)&lifted::g_105aadf0;
}
// END FUNCTION

// FUNCTION: 0x1020f220 size=0x3b
#include "CFuncElevator.h"
#include "CBasePlayer.h"
#include "CFuncMoveLinear.h"

struct CFuncElevatorUnit1020f220 : CFuncElevator
{
    void sub_1020f220();
};

// TARGET: sub_1020f220
void CFuncElevatorUnit1020f220::sub_1020f220()
{
    float *pOrigin = ((CBasePlayer *)this)->vfunc220();
    *(float *)((char *)this + 0x800) = pOrigin[0];
    *(float *)((char *)this + 0x804) = pOrigin[1];
    *(float *)((char *)this + 0x808) = pOrigin[2];
    *(int *)((char *)this + 0x630) = 0;
    *(char *)((char *)this + 0x80c) = 0;
    ((CFuncMoveLinear *)this)->CFuncMoveLinear::vfunc103();
}
// END FUNCTION

// FUNCTION: 0x1020f270 size=0x3a
// TARGET: CFuncElevator::vfunc130
#include "CFuncElevator.h"
#include "CBaseEntity.h"

void sub_100043cc(CFuncElevator *p, float *v, int flag);

void CFuncElevator::vfunc130(int a)
{
    ((CBaseEntity *)this)->CBaseEntity::vfunc130(a);
    if ((char)a) {
        sub_100043cc(this, m_vecDest800, 0);
        m_nFloor630 = 0;
        m_flag80c = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x1020f6c0 size=0x24
#include "CFuncElevator.h"
#include "CBaseEntity.h"
#include "CFuncMoveLinear.h"

// TARGET: CFuncElevator::vfunc133
void CFuncElevator::vfunc133()
{
    ((CBaseEntity *)this)->sub_100ac4e0(0, 0, 0);
    sub_1020f700(*(int *)((char *)this + 0x634));
    ((CFuncMoveLinear *)this)->sub_10116bf0();
}
// END FUNCTION

// FUNCTION: 0x1020f750 size=0x3
#include "CFuncElevator.h"
void CFuncElevator::vfunc178(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10216e30 size=0xcd
#include "CFuncElevator.h"

void sub_100aa7b0(void *p);

CFuncElevator *CFuncElevator::vfunc5(unsigned int flags)
{
    int i;
    CAI_IPItem *p = m_items740 + 8;
    for (i = 8; i; i--) {
        p--;
        p->sub_100cd2d0();
    }
    p = m_items680 + 8;
    for (i = 8; i; i--) {
        p--;
        p->sub_100cd2d0();
    }
    m_item668.sub_100cd2d0();
    m_item650.sub_100cd2d0();
    m_item638.sub_100cd2d0();
    m_item5f0.sub_100cd2d0();
    m_item5d8.sub_100cd2d0();
    m_item5c0.sub_100cd2d0();
    m_item5a8.sub_100cd2d0();
    m_item590.sub_100cd2d0();
    m_item578.sub_100cd2d0();
    m_item4bc.sub_100cd2d0();
    m_item4a4.sub_100cd2d0();
    sub_1000cb8a();
    if (flags & 1)
        sub_100aa7b0(this);
    return this;
}
// END FUNCTION
