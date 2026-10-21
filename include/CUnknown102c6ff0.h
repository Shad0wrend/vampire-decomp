// CUnknown102c6ff0: an AI component of a Troika NPC (vptr, owner at +4); real name not yet known.
#pragma once

#include "CAI_Component.h"

class CUnknown102c6ff0 : public CAI_Component
{
public:
	char sub_102c6ff0(int a);	// asks the owner (slot 455) about this component and a; when the owner is still interruptible and the answer is yes, cancels the scripted sequence entity of the owner's handle at +0x5d74 and has the owner run sub_10280d30; returns the answer
};
