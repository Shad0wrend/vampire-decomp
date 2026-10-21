// CUnknown1018f960: an entity with a variant output at +0x748 (its value is the entity's health at +0x210); real name not yet known.
#pragma once

#include "CBaseEntity.h"
#include "inputdata_t.h"

class CUnknown1018f960 : public CBaseEntity
{
public:
	char m_pad03e0[0x748 - sizeof(CBaseEntity)];
	char m_out0748[0x18];	// a variant output: the variant value first, then the event (COutputEvent at the same address)

	void sub_1018f960(inputdata_t &data);	// input handler: sets the health (+0x210) to the input's integer (0 for other types), fires the output with it and, when it is not positive, runs slot 266 with the activator
	void sub_1018f7f0(inputdata_t &data);	// input handler: takes the input's integer (0 for other types) off the health (+0x210), fires the output with it and, when it is not positive, runs slot 266 with the activator
};
