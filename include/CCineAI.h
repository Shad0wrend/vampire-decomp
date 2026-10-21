// CCineAI: the scripted-sequence entity that plays an animation on an NPC (derived from CCineNPC).
#pragma once

#include "CCineNPC.h"

class CCineAI : public CCineNPC
{
public:
	bool vfunc584(void *pNpc, const char *pszSequence, char bFindOnly);	// slot 584 (plain member): marks the byte at +0x5f91; without a sequence name and with bFindOnly cancels through sub_101a8460(pNpc), else looks the sequence up on the NPC (empty name when none), warns "unknown aiscripted sequence" (using sequence 0) when it is not found, restarts the sequence time and the NPC's animation; true
	void sub_101a8460(void *pNpc);	// stub 0x10012a80
};
