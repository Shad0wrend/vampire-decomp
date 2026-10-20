// CLogicCaseToggle: logic_case_toggle-like entity (CUnknown101346e0 holds the data). Slots as plain members.
#pragma once

#include "CUnknown101346e0.h"

class CLogicCaseToggle : public CUnknown101346e0
{
public:
	void vfunc103();	// slot 103 (Spawn): clamps the initial value at +0x628 to 1..16 (DevMsg "Invalid initial value" otherwise) and steps it down by one through sub_101346e0(-1)
	const char *sub_100ab4f0();	// the entity's name for messages (called through the stub at 0x1000b5cd)
};
