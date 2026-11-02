// SaveRestoreBlockHeader_t: element of the CUtlVector<SaveRestoreBlockHeader_t> the game saves with DEFINE_UTLVECTOR
// (0x28 bytes; the fields are not recovered yet, the save / restore ops only walk the vector).
#pragma once

struct SaveRestoreBlockHeader_t
{
	char m_data[0x28];
};
