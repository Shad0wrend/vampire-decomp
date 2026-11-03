// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10205380 size=0x8
#include "CVDmg_t.h"
struct CUnknown10204270 { void sub_10204270(); };
void CUnknown10204270::sub_10204270()
{
    *(int *)this = -1;
    *(int *)((char *)this + 4) = -1;
    *(int *)((char *)this + 0xc) = 1;
}
// TARGET: CVDmgBlock16_t::CVDmgBlock16_t
CVDmgBlock16_t::CVDmgBlock16_t() { ((CUnknown10204270 *)this)->sub_10204270(); }
// END FUNCTION
