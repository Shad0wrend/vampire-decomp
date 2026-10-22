// CUnknown101346e0: logic_case-like entity with 16 output slots at +0x450 and a current index at +0x628;
// real name not yet known.
#pragma once

struct inputdata_t;

class CUnknown101346e0
{
public:
	char pad0[0x450];
	int m_slots[16];
	char pad1[0x628 - 0x490];
	int m_current;

	int sub_101346e0(int steps);
	void sub_10134420(inputdata_t *pInput);	// "CLogicCase::InputPickRandom": fires a random one of the outputs (16 of 0x18 bytes at +0x490) that has listeners, with the input's activator; DevMsg when none has
	void sub_10134780(inputdata_t *pInput);	// "CLogicCase::InputValue": the input as text (the string itself, "" when null, else the variant's string conversion) is compared (case-insensitively) with the 16 case strings at +0x450; the first match becomes the current value (+0x628) and fires its output (+0x490, 0x18 bytes each) with the activator; no match sets the current value to -1 and fires the extra output at +0x610 with the input's value
	const char *sub_100ab4f0();	// the entity's name for messages (called through the stub at 0x1000b5cd)
};
