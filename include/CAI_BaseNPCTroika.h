// CAI_BaseNPCTroika: NPC base of the Troika-made NPCs (derived from CAI_BaseNPC at +0x0).
#pragma once

#include "CAI_BaseNPC.h"

class CAI_BaseNPCTroika : public CAI_BaseNPC
{
public:
	virtual void vfunc416(char value);

	void vfunc497();

	char sub_102a9ec0(int index);
	const char *sub_102c3690(int task);
	const char *sub_102c36b0(int schedule);
};
