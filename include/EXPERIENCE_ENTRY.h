// EXPERIENCE_ENTRY: element of the CUtlVector<EXPERIENCE_ENTRY> the game saves with DEFINE_UTLVECTOR (0x34 bytes;
// the fields are not recovered yet, the save / restore ops only walk the vector).
#pragma once

struct EXPERIENCE_ENTRY
{
	char m_data[0x34];
};
