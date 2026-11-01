// CUnknown101ec7c0: a data table loaded from a vdata text file (real name not yet known): an array of
// CUnknown101ec4f0 records at +0x18 (count at +0x14). Same layout as ItemLoader (0x101ecf10) and the other
// "...EquipTables" loaders: a growable pointer array that the load function fills from a key/value file.
#pragma once

class CUnknown101ec7c0
{
public:
	int m_nGrow;	// 0x00: how many slots the array grows by
	int m_n04;	// 0x04: the id handed to the next record
	int m_n08;	// 0x08: the "InternalName" value of the table node
	int m_n0c;	// 0x0c: the value read from the "StartingEquipTables" node
	int m_n10;	// 0x10: allocated slots
	int m_nRecords;	// 0x14
	class CUnknown101ec4f0 **m_pRecords;	// 0x18

	bool sub_101ec900(void *pFile);	// the argument is an IKeyValues * (cast it; the matched caller passes its file object): loads the "StartingEquipTables" node, one CUnknown101ec4f0 record (0x18 bytes, new id m_n04++) per "StartingEquip" child, each filled by CUnknown101ec6f0::sub_101ec550 (stub 0x1000d706); the append is the old inline array growth (operator new + copy + zero fill), not utlvector.h; find_similar(0x101ec900) has the matched twin's source (ItemLoader::sub_101ecf10)
	bool sub_101ec7c0();	// frees the records and loads the data file again
};
