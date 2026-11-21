// CUnknown100dc9f0: an axis aligned box (class not known): mins at +4, maxs at +0x10.
#pragma once

#include "Vector.h"

class CUnknown100dc9f0
{
public:
	int m_unk0;
	Vector m_mins;	// 0x04
	Vector m_maxs;	// 0x10

	float *sub_10043580(const float *pPoint, float *pOut);	// "NormalizePoint": pOut = (pPoint - mins) / (maxs - mins) per axis, 0.5 for an axis without extent; returns pOut
};
