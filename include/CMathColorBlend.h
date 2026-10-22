// CMathColorBlend (math_colorblend): blends a float input from [in min, in max] into a colour between two colour32 values. Only what matched code needs.
#pragma once

#include "CBaseEntity.h"
#include "COutputEvent.h"

struct inputdata_t;

struct CMathColorBlendColor32
{
	unsigned char r, g, b, a;
};

class CMathColorBlend : public CBaseEntity
{
public:
	void sub_10132680(inputdata_t &inputdata);	// the "Value" input: the float of the input clamped to [in min, in max] (an out of range input is ignored when spawn flag 1 is set), mapped linearly per channel to [out min, out max] and fired as a colour32 through the output (+0x460) for the activator

	char m_padBlend[0x450 - 0x3e0];
	float m_flInMin;	// 0x450
	float m_flInMax;	// 0x454
	CMathColorBlendColor32 m_OutMin;	// 0x458
	CMathColorBlendColor32 m_OutMax;	// 0x45c
	COutputEvent m_OutValue;	// 0x460
};
