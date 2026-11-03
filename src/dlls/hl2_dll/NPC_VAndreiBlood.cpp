// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1035dc30 size=0x91
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
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

// FUNCTION: 0x1035dd00 size=0x9c
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VAndreiBlood.h"
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"

void CNPC_VAndreiBlood::sub_1035dd00(inputdata_t *pInput)
{
    ScopeTrace st("CNPC_VAndreiBlood::InputTriggerCombat", g_106b8540);
    *((char *)this + 0x66cc) = 1;
    ((CBaseCombatCharacter *)this)->sub_10332aa0(1, 1, 10);
    vfunc461();
    *(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAndreiBlood.cpp";
    *(int *)((char *)this + 0x1b34) = 0x1da;
    sub_102ae750(0x15c, 0);
}
// END FUNCTION
