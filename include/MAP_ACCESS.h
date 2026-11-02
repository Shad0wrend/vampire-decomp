// MAP_ACCESS: element of the CUtlVector<MAP_ACCESS> the game saves with DEFINE_UTLVECTOR (0x48 bytes;
// the fields are not recovered yet, the save / restore ops only walk the vector).
#pragma once

struct MAP_ACCESS
{
	char m_data[0x48];
};
