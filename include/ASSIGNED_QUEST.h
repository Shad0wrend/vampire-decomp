// ASSIGNED_QUEST: element of the CUtlVector<ASSIGNED_QUEST> the game saves with DEFINE_UTLVECTOR (0x40 bytes;
// the fields are not recovered yet, the save / restore ops only walk the vector).
#pragma once

struct ASSIGNED_QUEST
{
	char m_data[0x40];
};
