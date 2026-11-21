// CUnknown101f0ea0: lazily grown array of item pointers (name provisional).
#pragma once

struct S101f0b50;

class CUnknown101f0ea0
{
public:
	int m_allocCount;
	int m_count;
	S101f0b50 **m_pItems;

	S101f0b50 *sub_10152e30();	// grows by one slot and returns the (lazily created) item
};
