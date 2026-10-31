// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100738c0 size=0x7
#include "CUnknown10076da0.h"
float CUnknown10076da0TimingTag::GetPercentage() const
{
    return *(float *)((char *)this + 0x80);
}
// END FUNCTION

// FUNCTION: 0x10073990 size=0x29
#include "CUnknown10076da0.h"
CUnknown10076da0TimingTag::CUnknown10076da0TimingTag(int pOwner, const char *name, float percentage, bool locked)
{
	((CUnknown10076da0Entry *)this)->sub_10073810((CUnknown10076da0 *)pOwner, (int)name, *(int *)&percentage);
	m_bLocked = locked;
}
// END FUNCTION
