// CUnknown100f02b0: entity with an input that stores an entity handle at +0x53c; real name not yet known.
#pragma once

#include "inputdata_t.h"

class CUnknown100f02b0
{
public:
	void sub_100f02b0(inputdata_t *inputdata);	// input: stores the activator's handle (or -1) at +0x53c, then calls sub_100f0320

	char m_pad0000[0x53c];
	unsigned int m_hEntity;	// 0x053c
};
