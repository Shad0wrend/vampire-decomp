// CUnknown1007ce20: a scene/choreography object holding a vector of event pointers (memory at +0x00, size at +0x0c);
// real name not yet known.
#pragma once

#include "CUnknown10075aa0.h"

class CUnknown1007ce20
{
public:
	CUnknown10075aa0 **m_pMemory;	// 0x00
	int m_allocationCount;	// 0x04
	int m_growSize;	// 0x08
	int m_size;	// 0x0c
	CUnknown10075aa0 **m_pElements;	// 0x10
	char m_pad0014[0x98 - 0x14];
	float m_f98;	// 0x98

	float sub_1007ce20();	// the lowest time over the events (starting from 0.0f); type 5 events count with m_f98 subtracted
};
