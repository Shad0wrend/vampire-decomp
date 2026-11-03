// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c9ab0 size=0x8
unsigned char __fastcall sub_100b4320(void *pThis);

// TARGET: sub_101c9ab0
unsigned char __fastcall sub_101c9ab0(void *pThis)
{
	unsigned char bResult = sub_100b4320(pThis);
	bResult &= 0xfd;
	return bResult;
}
// END FUNCTION

// FUNCTION: 0x101c9ad0 size=0x6
#include "datamap.h"
#include "CAI_ChangeHintGroup.h"
namespace lifted {
extern char g_1059e0e4;
}
datamap_t *CAI_ChangeHintGroup::vfunc82()
{
    return (datamap_t *)&lifted::g_1059e0e4;
}
// END FUNCTION

// FUNCTION: 0x101cc110 size=0x1e
#include "CAI_ChangeHintGroup.h"

void sub_100aa7b0(void *p);

// TARGET: CAI_ChangeHintGroup::vfunc5
CAI_ChangeHintGroup *CAI_ChangeHintGroup::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
