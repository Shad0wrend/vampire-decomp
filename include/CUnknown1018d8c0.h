// CUnknown1018d8c0: entity with an input that stores an entity handle at +0x464; real name not yet known.
#pragma once

#include "inputdata_t.h"

class CUnknown1018d8c0
{
public:
	void sub_1018d8c0(inputdata_t *inputdata);	// input: stores the activator's handle (or -1) at +0x464, then calls sub_1018d5f0

	char m_pad0000[0x464];
	unsigned int m_hEntity;	// 0x0464
};
