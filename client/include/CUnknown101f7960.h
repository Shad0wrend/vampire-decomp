// CUnknown101f7960: lazily grown array of item pointers (name provisional).
#pragma once

struct S101f7310;

class CUnknown101f7960
{
public:
	int m_allocCount;
	int m_count;
	S101f7310 **m_pItems;

	S101f7310 *sub_10157390();	// grows by one slot and returns the (lazily created) item
};
