// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100bc6d0 size=0x6
// TARGET: sub_100bc6d0
const char *sub_100bc6d0()
{
	return "C_LightGlow";
}
// END FUNCTION

// FUNCTION: 0x100bc900 size=0x2b
#include "C_LightGlow.h"
// TARGET: ??_GC_LightGlow@@UAEPAXI@Z
C_LightGlow *pcd_emit() { return new C_LightGlow; }
// END FUNCTION
