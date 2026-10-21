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
	void sub_101d5a30(const char *pszName, int arg);	// loads every "vdata\system\<pszName>*.txt" file (counted first with the file system's find functions): each one through sub_101d57c0, with a message for the ones that fail
	char sub_101d57c0(const char *pszFile, int arg);	// loads one template file (stub 0x10009d2c): the "ClanData" nodes fill the items from the index (*arg) on
	const char *sub_101d5e00(int index);	// the name of the clan at index (stub 0x1000ce46)
};
