// CStatDefaultList: lazily grown array of StatDefault pointers (name provisional).
#pragma once
#include "StatDefault.h"

class CStatDefaultList
{
public:
	int m_allocCount;
	int m_count;
	StatDefault **m_pItems;

	StatDefault *sub_1006cd90();	// grows by one slot and returns the (lazily created) item
};
