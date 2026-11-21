// CUnknown101f5050: the sound table (record pointers at +0x18/+0x14, sound group pointers at +0x20/+0x1c); real name not yet known.
#pragma once

#include "CUnknown101f4120.h"
#include "CUnknown101f4c80.h"

class CUnknown101f5050
{
public:
	int m_unk00;
	int m_unk04;
	char m_pad08[8];
	int m_unk10;
	int m_nRecords;	// 0x14
	CUnknown101f4c80 **m_pRecords;	// 0x18
	int m_nGroups;	// 0x1c
	CUnknown101f4120 **m_pGroups;	// 0x20

	void sub_10155c00();
};
