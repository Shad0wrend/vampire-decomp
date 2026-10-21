// CKeyValuesX: a node of the key/value trees the game loads from its data files (the same objects as CUnknown10248a50);
// only what decompiled code needs.
#pragma once

class CKeyValuesX
{
public:
	const char *sub_10248cd0(const char *pszKey, const char *pszDefault);	// "GetString" (called through the stub 0x1000ed95)
	CKeyValuesX *sub_1001569a(const char *pszName, int bCreate);	// stub 0x1001569a: finds the sub key of that name
	CKeyValuesX *sub_10004c8c();	// stub 0x10004c8c: the first sub key
	CKeyValuesX *sub_1000fa65();	// stub 0x1000fa65: the next key of the same level
};
