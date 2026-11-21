// CUnknown101e98c0: owner of a heap array of pointers to heap items (array at +8, count at +4); each item has a
// sub object at +0x1c that needs sub_101d8250() before the item is freed. Real name not yet known.
#pragma once

#include "CUnknown101d82d0.h"

struct CUnknown101e98c0ItemSub : CUnknown101d82d0	// the clan list at +0x1c of an item
{
	void sub_101451d0();
};

// A node of a data file (keyvalues-like): slot 2 finds a child by name, slot 13 reads a string.
struct CDataNode
{
	virtual void v0();
	virtual void v1();
	virtual CDataNode *v2(const char *pszName);
	virtual void v3();
	virtual void v4();
	virtual void v5();
	virtual void v6();
	virtual void v7();
	virtual void v8();
	virtual void v9();
	virtual void v10();
	virtual void v11();
	virtual void v12();
	virtual const char *v13(const char *pszName, const char *pszDefault);
};

struct CEffectTable
{
	int sub_10157b80(const char *pszName);	// the id of the effect record of that name (stub 0x1000ee67)
};

struct CUnknown101e98c0Item
{
	char m_pad00[4];
	int m_nInternalName;	// 0x04
	char m_pad08[0x18 - 8];
	int m_nEffect;	// 0x18
	CUnknown101e98c0ItemSub m_sub;	// 0x1c
	char m_genders[1];	// 0x24: the disallowed genders (parsed by sub_101e9710)

	bool sub_1014df20(CDataNode *pNode);	// reads the "General" block of a history item: InternalName, CritterScope, Genders_Disallowed, Effect; always true
};

class CUnknown101e98c0
{
public:
	int m_field00;
	int m_count;	// 0x04
	CUnknown101e98c0Item **m_ppItems;	// 0x08

	void sub_1014e090();	// frees every item and the array, then clears the count and the first field
};
