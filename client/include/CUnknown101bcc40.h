// CUnknown101bcc40: a table of record pointers (pointer array at +0x20, count at +0x2c) that writes the records with a given id to a save; real name not yet known.
#pragma once

class CUnknown101bcc40
{
public:
	char pad0[0x20];
	int **m_items;	// 0x20: each record starts with its id
	char pad24[8];
	int m_count;	// 0x2c

	void sub_101345d0(int id, void *pSave);	// save: block with all records whose id matches (count first)
};
