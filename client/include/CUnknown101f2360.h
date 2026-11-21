// CUnknown101f2360: a node of the text data ("vdata") trees the game parses itself: a list of siblings (+0x18 next) with
// a first child (+0x1c); a leaf keeps its value text (+0xc), its type (+0x10: 1 string, 2 int, 3 float) and the number
// (+8). Real name not yet known.
#pragma once

class CUnknown101f2360
{
public:
	char m_pad0000[8];
	union
	{
		int m_iValue;	// 0x08, type 2
		float m_fValue;	// 0x08, type 3
	};
	char *m_pszValue;	// 0x0c: malloc'ed copy of the value text
	int m_nType;	// 0x10
	char m_pad0014[4];
	CUnknown101f2360 *m_pNext;	// 0x18: the next sibling
	CUnknown101f2360 *m_pChild;	// 0x1c: the first child

	void sub_10153dd0(const char **ppBuf, void *pFile);	// parses "name value" pairs (value text or a "{" block of children) up to the closing "}" or the end of the text
		// the stub of sub_101f2360 (the recursion goes through it)
	CUnknown101f2360 *sub_101544e0(const char *pszName);	// makes a node of that name and appends it to the children
};
