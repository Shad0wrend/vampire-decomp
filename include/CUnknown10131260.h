// CUnknown10131260: an entity class with a keyed variant list at +0x488 and a "recompare queued" flag at +0x48c
// (the "ForceRecompare" input); real name not yet known.
#pragma once

#include "CBaseEntity.h"
#include "CUnknown100cdba0.h"
#include "inputdata_t.h"

class CUnknown10131260 : public CBaseEntity
{
public:
	char m_pad03e0[0x488 - sizeof(CBaseEntity)];
	CUnknown100cdba0 m_list488;
	int m_nRecompareQueued;	// 0x048c

	void sub_10131260(inputdata_t &data);	// stores the integer-converted value in the list under the output id and queues one "ForceRecompare" event
};
