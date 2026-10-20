// CUnknown102e83e0: an AI component of an NPC (outer NPC at +4); real name not yet known.
#pragma once

#include "CAI_BaseNPC.h"

class CUnknown102e83e0
{
public:
	virtual void vfunc0();
	CAI_BaseNPC *m_pOuter;	// 0x04

	bool sub_102e83e0();	// scope-less helper: ensures the NPC's byte at +0x5ca4 is set (slot 481(slot 167())), then true when the NPC has any of the conditions 0x4f, 0x58, 0x60, 0x55, 0x48, 0x40
};
