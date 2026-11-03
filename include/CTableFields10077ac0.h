// CTableFields10077ac0: placeholder view of the object whose table of 0x14 byte records starts at +0x2f0 (the choreography
// curve data); real name not yet known. Only what recovered code needs.
#pragma once

class CTableFields10077ac0
{
public:
	unsigned int sub_10077ac0(int index);	// stub 0x100070c7: the dword at +0x2f0 + index * 0x14
	float sub_10077e80(int a, int b);	// stub 0x10002f3b: the curve sample of record b of table a: -0.5f before the start, 0.0f at -1, 1.0f at the count, 1.5f past it
	float sub_10077f10(float x);	// 0x10077f10: the interpolated value of the curve at x (Hermite through 4 samples)
};

class CUnk10077af0
{
public:
	char *sub_10077af0(int a, int b);	// stub 0x10013886: record b (0x88 bytes) of the table a
};

#include "CUnknown10073b00.h"
