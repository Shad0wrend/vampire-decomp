// CCineAI: the scripted-sequence entity that plays an animation on an NPC (derived from CCineNPC).
#pragma once

#include "CCineNPC.h"

class CCineAI : public CCineNPC
{
public:
	bool vfunc584(void *pNpc, const char *pszSequence, char bFindOnly);	// slot 584 (plain member): marks the byte at +0x5f91; without a sequence name and with bFindOnly cancels through sub_101a8460(pNpc), else looks the sequence up on the NPC (empty name when none), warns "unknown aiscripted sequence" (using sequence 0) when it is not found, restarts the sequence time and the NPC's animation; true
	void vfunc586(void *pNpc);	// slot 586 (plain member): the case value at +0x5f64: 0 calls the NPC's sub_10006a8c, 1 calls its sub_1000c27a(0x2a), else DevMsg "FixScriptNPCSchedule ... no case" and the case-0 path
	void sub_101a8460(void *pNpc);	// stub 0x10012a80
	CCineAI *vfunc5(unsigned int flags);	// deleting destructor
public:
    virtual bool vfunc585();
};
