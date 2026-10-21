// CMathCounter (RTTI .?AVCMathCounter@@): math_counter, flattened onto CLogicalEntity (the real bases are not modelled).
#pragma once

#include "CLogicalEntity.h"
#include "inputdata_t.h"

class CMathCounter : public CLogicalEntity
{
public:
	virtual void vfunc103();	// slot 103 "CMathCounter::Spawn": orders the min / max (+0x450 / +0x454) and, unless both are zero, clamps the output value (+0x45c) into that range and stores it back (variant_t::sub_100d0390(1, &value))

	char m_pad0004[0x450 - 4];
	float m_flMin;	// 0x450
	float m_flMax;	// 0x454
	char m_pad0458[4];
	variant_t m_OutValue;	// 0x45c
};
