// CUnknown100ee750: object with two entity handles at +0x628 and +0x62c (CPropPadlock-like); real name not yet known.
#pragma once

class CUnknown100ee750
{
public:
	char pad0[0x628];
	unsigned int m_hFirst;
	unsigned int m_hSecond;

	void sub_100ee750(void *pEntity);	// clears whichever handle currently refers to pEntity
};
