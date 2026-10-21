// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1035dc30 size=0x91
#include "CNPC_VAndreiBlood.h"
#include "ScopeTrace.h"

void __fastcall sub_100097af(CAI_BaseNPCTroika *pNPC);	// CAI_BaseNPCTroika::vfunc113 (stub of 0x1028e310), called directly

// TARGET: CNPC_VAndreiBlood::vfunc113
void CNPC_VAndreiBlood::vfunc113()
{
	ScopeTrace trace("CNPC_VAndreiBlood::Activate", g_106b8540);
	char *p = (char *)this;
	sub_100097af(this);
	*(int *)(p + 0x5cc0) = 2;
	*(int *)(p + 0x5cc4) = 2;
	*(const char **)(p + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAndreiBlood.cpp";
	*(int *)(p + 0x1b34) = 0x1cc;
	sub_102ae750(0x6b, 0);
}
// END FUNCTION
