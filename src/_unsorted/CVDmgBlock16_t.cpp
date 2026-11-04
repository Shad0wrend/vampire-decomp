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

// FUNCTION: 0x102053a0 size=0x14
#include "CVDmg_t.h"

namespace block_102053a0 {
struct CVDmgUnit : CVDmgBlock16_t {
	void sub_102042a0(int a, int b);
};
#pragma auto_inline(off)
void CVDmgUnit::sub_102042a0(int a, int b)
{
	m_a = a;
	m_b = b;
	m_d = 1;
}
}
using namespace block_102053a0;

CVDmgBlock16_t::CVDmgBlock16_t(int a, int b)
{
	((CVDmgUnit *)this)->sub_102042a0(a, b);
}
// END FUNCTION
