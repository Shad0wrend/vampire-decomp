// CUnknown101e0c30: lazily grown array of item pointers (name provisional).
#pragma once

struct S101e0520;

class CUnknown101e0c30
{
public:
	int m_allocCount;
	int m_count;
	S101e0520 **m_pItems;

	S101e0520 *sub_10149890();	// grows by one slot and returns the (lazily created) item
};
