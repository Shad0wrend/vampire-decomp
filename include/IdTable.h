// IdTable.h: the id table at 0x109ef590 (a key, a count and 256 id records) with the constructor its global is
// built by; the sources that read it define their own copies.
#pragma once
#ifdef PCD_INITIALIZERS
#include <string.h>

struct IdRecord
{
	unsigned int id;
	int n;
};

struct IdTable
{
	IdTable() { key = -1; count = 0; memset(rec, 0, sizeof(rec)); }
	int key;
	int count;
	IdRecord rec[256];
};
#endif
