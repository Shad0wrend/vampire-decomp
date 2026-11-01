// CUnknown101ed6c0: a data table loaded from a vdata text file (real name not yet known): an array of
// CUnknown101ed170 records at +0x18 (count at +0x14); the records are StatDefault2 objects (0x2c bytes, see
// StatDefault2.h: cast the elements). Same layout as CUnknown101ec7c0 (the other "...EquipTables" loader): a
// growable pointer array that the load function fills from a key/value file.
#pragma once

class CUnknown101ed6c0
{
public:
	int m_nGrow;	// 0x00: how many slots the array grows by
	int m_n04;	// 0x04: the id handed to the next record
	int m_n08;	// 0x08: the "InternalName" value of the table node
	int m_n0c;	// 0x0c: the value read from the "MPEquipTables" node
	int m_n10;	// 0x10: allocated slots
	int m_nRecords;	// 0x14
	class CUnknown101ed170 **m_pRecords;	// 0x18

	bool sub_101ed800(void *pFile);	// stub 0x10014984: the argument is an IKeyValues * (cast it); loads the "MPEquipTables" node, one StatDefault2 record (0x2c bytes, new id m_n04++) per "MPEquip" child, each filled by StatDefault2::sub_101ed210; same body as CUnknown101ec7c0::sub_101ec900 (matched, find_similar has its source)
	bool sub_101ed6c0();	// frees the records and loads "vdata_system/items.txt" again; true even when the file is missing
};
