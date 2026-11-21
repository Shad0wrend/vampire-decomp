// CUnknown101f1c70: a simple counted array of ints (count at +0x0, heap block at +0x4); real name not yet known.
#pragma once

class CUnknown101f1c70
{
public:
	int m_count;
	int *m_pData;

	void sub_101538a0(int value);	// removes the first entry equal to value (moving the last one into its place) when the global table accepts it
};
