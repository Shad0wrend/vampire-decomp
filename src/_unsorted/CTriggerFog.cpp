// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101ca450 size=0x6
extern char g_1059e2fc[];

// TARGET: sub_101ca450
void *sub_101ca450()
{
	return g_1059e2fc;
}
// END FUNCTION

// FUNCTION: 0x101ca4e0 size=0x14
#include "CTriggerFog.h"

void sub_101ca510();

void CTriggerFog::vfunc103()
{
	sub_101c6860();
	*(void **)((char *)this + 0x1ec) = (void *)&sub_101ca510;
}
// END FUNCTION
