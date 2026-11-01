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
	virtual void vfunc1();
	virtual VKeyValuesInterface *vfunc2(const char *pszName);	// slot 2: the sub key of that name (FindKey), 0 when none
	virtual VKeyValuesInterface *vfunc3();	// slot 3: the next key of the same level
	virtual void vfunc4(); virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	virtual int vfunc10(const char *pszKey, int nDefault);	// slot 10: GetInt
	virtual float vfunc11(const char *pszKey, float flDefault);
	virtual char vfunc12(const char *pszKey, int nDefault);
	virtual const char *vfunc13(const char *pszKey, const char *pszDefault);	// slot 13: GetString

	char sub_101f2b00(const char *pszName, int nMax, const char *pszFormat, int **ppValues, int *pnCount);	// stdcall, ret 0x14, this = the IKeyValues part (VKeyValues + 0x30): FindKey(pszName) dynamic_cast to VKeyValues; counts the keys sprintf(pszFormat, i) (\"%s%d\"-style, i = 0..nMax-1) that have a non-empty string, stores the count in *pnCount, allocates int[count] into *ppValues and fills it with GetInt(key, 0); false (and *pnCount = 0) when nothing is found

	int sub_101f28e0(const char *pszName, const char **ppszChoices, int nChoices, int nDefault);	// the index of the choice (case-insensitive) equal to the named sub key's string value, nDefault when none
	float sub_101f2830(const char *pszName, float flDefault);	// the float getter: atof of the string, the int as a float, the float, else 0
	int sub_101f2740(const char *pszName, int nDefault);	// "GetInt" of the IKeyValues part (this - 0x30 is the VKeyValues): the named sub key's value as an int (atoi of the string, ftol of the float), nDefault when there is none
};

struct VKeyValues
{
	int *m_pVbTable;	// 0x00
	char m_pad0004[8 - 4];
	int m_nValue08;	// 0x08: the int value (a float for type 3)
	const char *m_pszValue0c;	// 0x0c: the string value (type 1)
	int m_nType10;	// 0x10: 1 string, 3 float, else int
	char *m_pszName14;	// 0x14: malloc'ed copy of the key's name (sub_101f2f70)
	VKeyValues *m_pNext18;	// 0x18: the next key of the same level
	VKeyValues *m_pChild1c;	// 0x1c: the first sub key
	VKeyValues *m_pParent20;	// 0x20: the key searched next when no sub key has the name

	VKeyValues *sub_101f2d70(const char *pszName);	// finds the sub key of that name (case-insensitive, by the IKeyValues name), then asks +0x20; 0 when none (stub 0x100122c4)
	VKeyValues *sub_100122c4(const char *pszName);	// the stub of sub_101f2d70 (the recursion goes through it)
	VKeyValuesInterface *NameOf() { return (VKeyValuesInterface *)((char *)this + m_pVbTable[2]); }

	void sub_101f2090(const char *pszName);	// the constructor body (stub 0x10013a8e): the name copy at +0x14, the fields +0xc / +0x10 / +0x18 / +0x1c / +0x20 cleared, the global byte 0x1073aa40 cleared
	VKeyValues *sub_101f1f50(const char *pszName, int bMostDerived);	// the constructor (stub 0x100056a0)
	char sub_101f2180(const char *pszName, int pathID);	// opens and parses the file (stub 0x10001cdf)

	VKeyValuesCacheable *Cacheable() { return (VKeyValuesCacheable *)((char *)this + m_pVbTable[1]); }
	void *KeyValues() { return (char *)this + m_pVbTable[2]; }
};

struct VKeyValuesPool	// the allocator object at 0x1073d280
{
	void *sub_1013dc60(int size);	// stub 0x1000bbd6
};
