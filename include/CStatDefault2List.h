// CStatDefault2List: array of StatDefault2 pointers (name provisional).
#pragma once
#include "StatDefault2.h"

class CStatDefault2List
{
public:
	int m_allocCount;
	int m_count;
	StatDefault2 **m_pItems;

	StatDefault2 *sub_101d5e80(int index);	// "operator[]": the item at index, or a lazily created default item when out of range
};
