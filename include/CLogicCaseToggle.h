// CLogicCaseToggle: logic_case_toggle-like entity (CUnknown101346e0 holds the data). Slots as plain members.
#pragma once

struct datamap_t;

#include "CUnknown101346e0.h"

class CLogicCaseToggle : public CUnknown101346e0
{
public:
	void vfunc103();	// slot 103 (Spawn): clamps the initial value at +0x628 to 1..16 (DevMsg "Invalid initial value" otherwise) and steps it down by one through sub_101346e0(-1)
	const char *sub_100ab4f0();	// the entity's name for messages (called through the stub at 0x1000b5cd)
	void sub_101348a0(inputdata_t *pInput);	// "InputValueDelta": an integer input (0 and a DevMsg "called Input ValueDelta with 0 delta" otherwise) steps the current value (sub_101346e0), then fires the output of the new value (+0x490, 0x18 bytes each) with the input's activator; out of range (the extra output at +0x610) it fires that output with the input's value
public:
	datamap_t * vfunc82();
};
