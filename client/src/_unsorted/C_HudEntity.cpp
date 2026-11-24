// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100bc310 size=0x6
// TARGET: sub_100bc310
const char *sub_100bc310()
{
	return "C_HudEntity";
}
// END FUNCTION

// FUNCTION: 0x100bc400 size=0x47
#include "C_HudEntity.h"
C_HudEntity *pcd_emit_100bc400() { return new C_HudEntity; }
// TARGET: ??_GC_HudEntity@@UAEPAXI@Z
// END FUNCTION
