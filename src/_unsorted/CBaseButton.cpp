// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100c8760 size=0x62
#include "CBaseButton.h"

struct CUtlVector24 { void sub_10015708(); };
void sub_100aa7b0(void *p);

CBaseButton *CBaseButton::vfunc5(unsigned int flags)
{
	((CUtlVector24 *)((char *)this + 0x5a8))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x590))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x578))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x560))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x4bc))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x4a4))->sub_10015708();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100c87f0 size=0x8
#include "CBaseButton.h"

void CBaseButton::vfunc104()
{
	vfunc71();
}
// END FUNCTION

// FUNCTION: 0x100c8990 size=0x16
#include "CBaseButton.h"

bool CBaseButton::sub_100c8990(int a)
{
	return vfunc35(a) != 0;
}
// END FUNCTION
