// CCineAI: the scripted-sequence entity that plays an animation on an NPC (derived from CCineNPC).
#pragma once

#include "CCineNPC.h"

class CCineAI : public CCineNPC
{
public:
	void vfunc583();	// slot 583 override (0x101a9080, this in ecx, no args): the real "start sequence on the target NPC" body. Resolves the handle at +0x5ce4 to its entity and AI object at +0x94 (CAI_BaseNPC); with the NPC's byte +0x1b4c clear prints the long DevMsg warning block ("scripted sequence(%s) is targeting an entity(%s)..."); runs CUnknown100b5190::sub_100b5190 and, when it holds, CCineNPC::sub_101a77a0; unless the byte at +0x5f90 is set calls CAI_BaseNPC::sub_1026d130; links the NPC (NPC+0x5de8 = this, NPC+0x5d74 = this entity's handle), CAI_BaseNPC::sub_10279cc0(this), then saves the NPC's slots 94/95/92/211 (+0x178/+0x17c/+0x170/+0x34c) and +0x19c into +0x5f78..+0x5f8c; copies +0x19c flags onto the NPC; switch on m_fMoveTo (+0x5f60): 0/5 -> sub_1027f270(1), +0x5d70=1; 1 -> 4; 2 -> 5; 3 -> 6; 4 -> aims the NPC's motor (+0x5d44: sub_102e0b40 / sub_102e0a80) at this entity's slot 220 with the +180.0f yaw correction, sub_100b2f50, slot 64, sub_1027f270(1), +0x5d70=1, sub_100b3640(1); else DevWarning "aiscript:  invalid Move To Position value!". Then DevMsg "\"%s\" found and used", stamps scripted.cpp:0x554 at +0x1b3c/+0x1b40, state +0x5cc4=4 and, when the old state +0x5cc0 was 4, CAI_BaseNPC::sub_10280de0(0x2e). The target NPC is a CAI_BaseNPC (motor +0x5d44, target +0x5de8); include CAI_BaseNPC.h.
	bool vfunc584(void *pNpc, const char *pszSequence, char bFindOnly);	// slot 584 (plain member): marks the byte at +0x5f91; without a sequence name and with bFindOnly cancels through sub_101a8460(pNpc), else looks the sequence up on the NPC (empty name when none), warns "unknown aiscripted sequence" (using sequence 0) when it is not found, restarts the sequence time and the NPC's animation; true
	void vfunc586(void *pNpc);	// slot 586 (plain member): the case value at +0x5f64: 0 calls the NPC's sub_10006a8c, 1 calls its sub_1000c27a(0x2a), else DevMsg "FixScriptNPCSchedule ... no case" and the case-0 path
	void sub_101a8460(void *pNpc);	// stub 0x10012a80
	CCineAI *vfunc5(unsigned int flags);	// deleting destructor
public:
    virtual bool vfunc585();
};
