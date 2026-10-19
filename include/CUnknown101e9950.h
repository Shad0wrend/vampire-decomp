// CUnknown101e9950: lazily grown array of item pointers (name provisional).
#pragma once

struct S101e9570;

class CUnknown101e9950
{
public:
	int m_allocCount;
	int m_count;
	S101e9570 **m_pItems;

	S101e9570 *sub_101e9950();	// grows by one slot and returns the (lazily created) item
};
