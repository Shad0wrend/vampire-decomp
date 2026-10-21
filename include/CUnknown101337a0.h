// CUnknown101337a0: the "math_value" style logic entity with a float value at +0x45c (name provisional); only its
// divide input handler is known.
#pragma once

#include "inputdata_t.h"

class CUnknown101337a0
{
public:
	char m_pad0000[0x45c];
	float m_flValue;	// 0x45c

	void sub_101337a0(inputdata_t &data);	// input handler: sets the value to the current value divided by the input's float; with a non-float or zero input prints "LEVEL DESIGN ERROR: Divide by zero in math_value" and keeps the value
	void sub_10133950(void *pActivator, float flValue);	// stores the new value and fires the entity's outputs (stub 0x1000206d)
};
