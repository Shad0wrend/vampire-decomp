// DisciplineSrc: element of the CUtlVector<DisciplineSrc> the game saves with DEFINE_UTLVECTOR (0x10 bytes;
// the fields are not recovered yet, the save / restore ops only walk the vector).
#pragma once

struct DisciplineSrc
{
	char m_data[0x10];
};
