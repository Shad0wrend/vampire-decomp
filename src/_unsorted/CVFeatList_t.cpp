// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101e8960 size=0x11
#include "CVFeatList_t.h"
float CVFeatList_t::vfunc0(int index)
{
	return (float)*(int *)((char *)this + 0x160 + index * 0x18);
}
// END FUNCTION

// FUNCTION: 0x101e8990 size=0x11
#include "CVFeatList_t.h"
float CVFeatList_t::vfunc1(int index)
{
	return (float)*(int *)((char *)this + 0x164 + index * 0x18);
}
// END FUNCTION

// FUNCTION: 0x101e89c0 size=0xe
#include "CVFeatList_t.h"
// TARGET: CVFeatList_t::vfunc2
float CVFeatList_t::vfunc2(int index)
{
	return m_records[index].m_value;
}
// END FUNCTION

// FUNCTION: 0x101e89e0 size=0x11
#include "CVFeatList_t.h"
float CVFeatList_t::vfunc3(int index)
{
	return (float)*(int *)((char *)this + 0x16c + index * 0x18);
}
// END FUNCTION
