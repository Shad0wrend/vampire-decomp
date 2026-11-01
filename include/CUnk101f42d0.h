// CUnk101f42d0: the head of a sound list (what CVSoundList is built on); sub_101f42d0 looks a sound directory up
// (-1 gives none) and forwards to the lookup at 0x101f3b00 on the part at +0x10.
#pragma once

#include "CUnknown101f4c80.h"

class CUnk101f42d0
{
public:
	char m_pad0000[8];
	CUnknown101f4c80Table *m_pTable;	// 0x08: the sound name table (records by id)
	int *m_pModes;	// 0x0c: per id, 1 = one sample per entity, else several numbered ones

	int sub_101f42d0(int a, int b, int c);
};
