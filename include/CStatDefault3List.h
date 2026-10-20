// CStatDefault3List: array of StatDefault3 pointers (name provisional).
#pragma once
#include "StatDefault3.h"

class CBaseCombatCharacter;

class CStatDefault3List
{
public:
	int m_allocCount;
	int m_count;
	StatDefault3 **m_pItems;

	StatDefault3 *sub_101d5e80(int index);	// "operator[]": the item at index, or a lazily created default item when out of range
	StatDefault3 *sub_101d5530();	// grows by one slot and returns the (lazily created) item
	StatDefault3 *sub_101d5f10(CBaseCombatCharacter *pChar);	// the item of the character (stub 0x100040b1): operator[] of the index sub_10337860 finds, default item when out of range
};
