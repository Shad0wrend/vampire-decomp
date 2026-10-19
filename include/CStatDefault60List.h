// CStatDefault60List: lazily grown array of StatDefault60 pointers (name provisional).
#pragma once
#include "StatDefault60.h"

class CStatDefault60List
{
public:
	int m_allocCount;
	int m_count;
	StatDefault60 **m_pItems;

	StatDefault60 *sub_101db6b0();	// grows by one slot and returns the (lazily created) item
};
