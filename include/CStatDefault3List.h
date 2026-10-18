// CStatDefault3List: array of StatDefault3 pointers (name provisional).
#pragma once
#include "StatDefault3.h"

class CStatDefault3List
{
public:
	int m_allocCount;
	int m_count;
	StatDefault3 **m_pItems;

	StatDefault3 *sub_101d5e80(int index);	// "operator[]": the item at index, or a lazily created default item when out of range
};
