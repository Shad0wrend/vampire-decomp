// CUnknown101e9170: object with a base cost at +0x3b4 (name provisional); scales it by a range or a value, depending
// on the character's stat list entry 0x20.
#pragma once

class CVStatList_t;

// The character view this object reads: the list of stat lists at +0x13bc (count) / +0x13c0 (pointer array).
struct CUnknown101e9170Char
{
	char m_pad0000[0x13bc];
	int m_nStatLists;	// 0x13bc
	CVStatList_t **m_ppStatLists;	// 0x13c0
};

class CUnknown101e9170
{
public:
	char m_pad0000[0x3b4];
	int m_nCost;	// 0x3b4

	int sub_101e9170(CUnknown101e9170Char *pChar, int a, int b);	// stat 0x20 of the first non-pending stat list of the character (else the default list) picks: 0 -> cost * b, 1 -> cost * (b - a), 2 -> cost * a, else 1; the result is divided by 100 and at least 1
};
