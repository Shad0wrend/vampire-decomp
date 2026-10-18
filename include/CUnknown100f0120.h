// CUnknown100f0120: entity with an input that stores an entity handle at +0x53c; real name not yet known.
#pragma once

#include "inputdata_t.h"

class CUnknown100f0120
{
public:
	void sub_100f0120(inputdata_t *inputdata);	// input: stores the activator's handle (or -1) at +0x53c, then flags +0x55c

	char m_pad0000[0x53c];
	unsigned int m_hEntity;	// 0x053c
};
