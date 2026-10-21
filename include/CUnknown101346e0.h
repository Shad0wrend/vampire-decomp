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
	const char *sub_100ab4f0();	// the entity's name for messages (called through the stub at 0x1000b5cd)
};
