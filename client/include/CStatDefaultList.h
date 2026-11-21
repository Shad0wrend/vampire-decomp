// CStatDefaultList: lazily grown array of StatDefault pointers (name provisional).
#pragma once
#include "StatDefault.h"
#include "CUnknown1006c810.h"

class CStatDefaultList
{
public:
	int m_allocCount;
	int m_count;
	StatDefault **m_pItems;

	bool sub_101604b0(CVTraitKV *pKV, const CVTraitDependency *pDefaultDependency);	// loads one record per child of the "Table" key
	StatDefault *sub_1014e100();	// grows by one slot and returns the (lazily created) item
	StatDefault *sub_101603c0();
};
