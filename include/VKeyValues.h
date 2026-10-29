// VKeyValues (RTTI .?AVVKeyValues@@): the key/value file object, a class with two virtual bases (IKeyCacheable at +0x28,
// IKeyValues at +0x30). Only the raw view the cache loader needs: the first dword is the vbtable, whose entry [1] is the
// offset of the IKeyCacheable part and entry [2] the offset of the IKeyValues part.
#pragma once

struct VKeyValuesCacheable	// the IKeyCacheable part: slot 2 is the scalar deleting destructor
{
	virtual void a0();
	virtual void a1();
	virtual void vfunc2(int bDelete);
};

struct VKeyValuesInterface	// the IKeyValues part: slot 0 is the key's name
{
	virtual const char *vfunc0();
};

struct VKeyValues
{
	int *m_pVbTable;	// 0x00
	char m_pad0004[8 - 4];
	int m_nValue08;	// 0x08: the int value (a float for type 3)
	const char *m_pszValue0c;	// 0x0c: the string value (type 1)
	int m_nType10;	// 0x10: 1 string, 3 float, else int
	char m_pad0014[4];
	VKeyValues *m_pNext18;	// 0x18: the next key of the same level
	VKeyValues *m_pChild1c;	// 0x1c: the first sub key
	VKeyValues *m_pParent20;	// 0x20: the key searched next when no sub key has the name

	VKeyValues *sub_101f2d70(const char *pszName);	// finds the sub key of that name (case-insensitive, by the IKeyValues name), then asks +0x20; 0 when none (stub 0x100122c4)
	VKeyValues *sub_100122c4(const char *pszName);	// the stub of sub_101f2d70 (the recursion goes through it)
	VKeyValuesInterface *NameOf() { return (VKeyValuesInterface *)((char *)this + m_pVbTable[2]); }

	VKeyValues *sub_101f1f50(const char *pszName, int bMostDerived);	// the constructor (stub 0x100056a0)
	char sub_101f2180(const char *pszName, int pathID);	// opens and parses the file (stub 0x10001cdf)

	VKeyValuesCacheable *Cacheable() { return (VKeyValuesCacheable *)((char *)this + m_pVbTable[1]); }
	void *KeyValues() { return (char *)this + m_pVbTable[2]; }
};

struct VKeyValuesPool	// the allocator object at 0x1073d280
{
	void *sub_1013dc60(int size);	// stub 0x1000bbd6
};
