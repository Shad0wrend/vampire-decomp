// CStatList56: lazily grown array of StatItem56 pointers (name provisional).
#pragma once
#include "StatItem56.h"

class CStatList56
{
public:
	int m_allocCount;
	int m_count;
	StatItem56 **m_pItems;

	StatItem56 *sub_101d6c20();	// grows by one slot and returns the (lazily created) item
};
