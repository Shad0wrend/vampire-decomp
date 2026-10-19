// CUnknown101e01e0: lazily grown array of item pointers (name provisional).
#pragma once

struct S101df260;

class CUnknown101e01e0
{
public:
	int m_allocCount;
	int m_count;
	S101df260 **m_pItems;

	S101df260 *sub_101e01e0();	// grows by one slot and returns the (lazily created) item
};
