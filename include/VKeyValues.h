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

struct VKeyValues
{
	int *m_pVbTable;	// 0x00

	VKeyValues *sub_101f1f50(const char *pszName, int bMostDerived);	// the constructor (stub 0x100056a0)
	char sub_101f2180(const char *pszName, int pathID);	// opens and parses the file (stub 0x10001cdf)

	VKeyValuesCacheable *Cacheable() { return (VKeyValuesCacheable *)((char *)this + m_pVbTable[1]); }
	void *KeyValues() { return (char *)this + m_pVbTable[2]; }
};

struct VKeyValuesPool	// the allocator object at 0x1073d280
{
	void *sub_1013dc60(int size);	// stub 0x1000bbd6
};
