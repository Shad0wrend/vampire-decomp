// CGenericNPC: declared by pcdecomp transplant for 0x1034aab0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

#include "animevent_t.h"

class CGenericNPC
{
public:
	CGenericNPC *vfunc5(unsigned int flags);
	void sub_1000c9cd();
	void vfunc103();	// slot 103 "Spawn": Precache, the model from slot 9, the hull (player / holo models use the fixed 16 x 16 x 72 box), SOLID_BBOX / flags, health 8 and the first AI setup
	void vfunc104();	// slot 104 (Precache): the three weapon fire sounds of the table at 0x106244c0, then the model named by slot 9
	void vfunc259(animevent_t *pEvent);	// slot 259 "HandleAnimEvent": event 1 emits the muzzle sound/effect of sub_1034a310, everything else goes to CAI_BaseNPC::vfunc259
	void sub_1034a310();	// emits the AR2-fire sound/effect at the NPC's attachments (this in ecx, no arguments)
public:
	int vfunc138();
	int vfunc473();
	float vfunc516();
};
