// CList_t: list object (layout partly known); only the members matched code needs.
#pragma once

struct CList_tValue	// the five dwords of an entry, passed and copied by value
{
	int m_v[5];
};

class CList_t
{
public:
	bool sub_100ce3c0(int a, int b);	// CList_t lookup: true when the list has the entry (the second argument is the key)
	bool sub_100ce450(void *pEntity, int *pKey);	// the entry whose key matches pKey, remembered at +0x54
	bool sub_100ce570(int a, int b, int *pOut);	// finds the entry through sub_100ce3c0 and copies its five dwords (at +0x20 of the node at +0x54) to pOut
	bool sub_100ce6c0(int a, int b, CList_tValue value);	// finds the entry through sub_100ce3c0 and stores the five dwords of value at +0x20 of the node at +0x54

	char m_pad0000[0x54];
	char *m_pNode54;	// +0x54: the node the entry is copied from (0 when none)
};
