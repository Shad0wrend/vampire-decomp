// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1020c250 size=0x38
// TARGET: CSecCamera::vfunc113
#include "CBreakableProp.h"
#include "CSecCamera.h"

extern char *g_1070b228;
void sub_10004c19();

void CSecCamera::vfunc113()
{
    ((CBreakableProp *)this)->vfunc113();
    m_flNextThink = *(float *)(g_1070b228 + 0xc) + 0.1;
    m_flNextStateTime7a0 = 0;
    ((CBreakableProp *)this)->sub_10007fe5((void *)sub_10004c19, 0, 0);
}
// END FUNCTION
